/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x140092480
 * Callers:
 *     <none>
 * Callees:
 *     CcZeroEndOfLastPage @ 0x14001C250 (CcZeroEndOfLastPage.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1405DF85C (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1405DF940 (FsRtlReleaseFile.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x14061C2B0 (MmGetFileObjectForSection.c)
 *     MmCreateSectionEx @ 0x14061C34C (MmCreateSectionEx.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
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
  HANDLE Handle; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER FileSize; // [rsp+68h] [rbp-8h] BYREF

  v12 = SectionObject;
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
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
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
    KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
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
