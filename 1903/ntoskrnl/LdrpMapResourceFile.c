/*
 * XREFs of LdrpMapResourceFile @ 0x14017F83C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14011D79C (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x1406AD0D0 (MmMapViewInSystemSpace.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, UNICODE_STRING *a2, HANDLE *a3, _QWORD *a4, ULONG_PTR *a5)
{
  PVOID v9; // rdi
  PIMAGE_NT_HEADERS v10; // rax
  unsigned __int16 MajorSubsystemVersion; // r12
  NTSTATUS v12; // ebx
  PVOID v14; // rsi
  NTSTATUS v15; // eax
  PIMAGE_NT_HEADERS v16; // rax
  int v17; // ecx
  ULONG_PTR *v18; // rcx
  LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp-41h] BYREF
  HANDLE SectionHandle; // [rsp+70h] [rbp-39h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp-31h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+5Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  v9 = 0LL;
  IoStatusBlock.Information = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  MaximumSize.QuadPart = 0LL;
  ViewSize = 0LL;
  if ( a1 && a2 && a4 )
  {
    v10 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( v10 )
    {
      MajorSubsystemVersion = v10->OptionalHeader.MajorSubsystemVersion;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwCreateFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( v12 >= 0 )
      {
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        MaximumSize.QuadPart = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwCreateSection(
                &SectionHandle,
                0xF0005u,
                &ObjectAttributes,
                &MaximumSize,
                MajorSubsystemVersion < 6u ? 8 : 2,
                0x8000000u,
                FileHandle);
        if ( v12 >= 0 )
        {
          v12 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
          ZwClose(SectionHandle);
          v14 = Object;
          if ( v12 >= 0 )
          {
            v15 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
            v9 = MappedBase;
            v12 = v15;
            if ( v15 >= 0 )
            {
              v16 = RtlImageNtHeader(MappedBase);
              v17 = v12;
              if ( !v16 )
                v17 = -1073741701;
              v12 = v17;
            }
          }
          if ( v14 )
            ObfDereferenceObjectWithTag(v14, 0x746C6644u);
          if ( v12 < 0 )
          {
            if ( v9 )
              MmUnmapViewInSystemSpace(v9);
          }
          else
          {
            v18 = a5;
            *a4 = v9;
            if ( v18 )
              *v18 = ViewSize;
            if ( a3 )
            {
              *a3 = FileHandle;
              return (unsigned int)v12;
            }
          }
        }
      }
    }
    else
    {
      v12 = -1073741701;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
