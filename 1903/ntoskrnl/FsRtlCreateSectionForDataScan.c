/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x1400E1DB0
 * Callers:
 *     <none>
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140009CBC (CcZeroEndOfLastPage.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405D5544 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1405D5620 (FsRtlReleaseFile.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     MmGetFileObjectForSection @ 0x14068A83C (MmGetFileObjectForSection.c)
 *     MmCreateSectionEx @ 0x14068AD18 (MmCreateSectionEx.c)
 */

NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  PVOID *v12; // r13
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v14; // ebx
  int inserted; // edi
  ULONG LowPart; // ebx
  int v17; // r13d
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v20; // rbx
  PVOID v21; // rbx
  NTSTATUS result; // eax
  int v23; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v24[4]; // [rsp+54h] [rbp-1Ch] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-8h] BYREF

  v12 = SectionObject;
  FileSize.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = FsRtlAcquireToCreateMappedSection(FileObject, SectionPageProtection, &v23, v24);
  if ( v14 < 0 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    result = v14;
    KeGetCurrentThread()[1].TrapFrame = 0LL;
  }
  else
  {
    inserted = FsRtlGetFileSize(FileObject, &FileSize);
    if ( inserted >= 0 )
    {
      LowPart = FileSize.LowPart;
      if ( FileSize.QuadPart )
      {
        v17 = v23;
        while ( 1 )
        {
          Section = MmCreateSectionEx(
                      (int)&Object,
                      (int)ObjectAttributes,
                      LowPart,
                      SectionPageProtection,
                      AllocationAttributes,
                      0LL,
                      (__int64)FileObject,
                      v17,
                      0LL,
                      0);
          inserted = Section;
          if ( Section != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
        }
        if ( Section >= 0 )
        {
          FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
          v20 = FileObjectForSection;
          if ( FileObjectForSection )
          {
            CcZeroEndOfLastPage(FileObjectForSection);
            ObfDereferenceObjectWithTag(v20, 0x746C6644u);
          }
        }
        v12 = SectionObject;
      }
      else
      {
        inserted = -1073741807;
      }
    }
    FsRtlReleaseFile(FileObject);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    KeGetCurrentThread()[1].TrapFrame = 0LL;
    if ( inserted >= 0 )
    {
      v21 = Object;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      inserted = ObInsertObject(v21, 0LL, DesiredAccess, 0, 0LL, &Handle);
      if ( inserted < 0 )
      {
        ObfDereferenceObjectWithTag(v21, 0x746C6644u);
      }
      else
      {
        *SectionHandle = Handle;
        *v12 = v21;
        if ( SectionFileSize )
          *SectionFileSize = FileSize;
      }
    }
    return inserted;
  }
  return result;
}
