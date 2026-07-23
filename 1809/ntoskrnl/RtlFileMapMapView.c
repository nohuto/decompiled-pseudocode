/*
 * XREFs of RtlFileMapMapView @ 0x140178D58
 * Callers:
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 *     AslFileMappingEnsure @ 0x140721A20 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x1408EAC48 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksumAttributes @ 0x1408ED7A0 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1401B87F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401B8830 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmSecureVirtualMemory @ 0x1405F6DF0 (MmSecureVirtualMemory.c)
 */

__int64 __fastcall RtlFileMapMapView(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  HANDLE v5; // rcx
  HANDLE FileHandle; // [rsp+38h] [rbp-49h]
  HANDLE SectionHandle; // [rsp+58h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-1h] BYREF
  __int64 FileInformation; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+B8h] [rbp+37h]
  __int64 v15; // [rsp+C0h] [rbp+3Fh]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileInformation = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
    return (unsigned int)-1073741554;
  v4 = ZwQueryInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    FileHandle = *(HANDLE *)a1;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateSection(
           &SectionHandle,
           0xF0005u,
           &ObjectAttributes,
           0LL,
           2u,
           a2 != 0 ? 285212672 : 0x8000000,
           FileHandle);
    if ( v4 >= 0 )
    {
      v4 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0x500000u,
             2u);
      if ( v4 >= 0 )
      {
        v5 = MmSecureVirtualMemory(BaseAddress, ViewSize, 2u);
        if ( v5 )
        {
          v4 = 0;
          *(_QWORD *)(a1 + 8) = SectionHandle;
          *(_QWORD *)(a1 + 24) = BaseAddress;
          *(_QWORD *)(a1 + 32) = ViewSize;
          *(_QWORD *)(a1 + 16) = v14;
          *(_WORD *)(a1 + 49) = 257;
          *(_BYTE *)(a1 + 51) = a2;
          *(_QWORD *)(a1 + 40) = v5;
          return (unsigned int)v4;
        }
        v4 = -1073741823;
      }
    }
  }
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v4;
}
