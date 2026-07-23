/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x180079A68
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800219E8 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x18002DC10 (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009D4F0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009D7D0 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(_UNICODE_STRING *a1, volatile signed __int32 **a2, _DWORD *a3)
{
  ULONG v4; // eax
  int LoadedDllByMapping; // ebx
  HANDLE SectionHandle; // [rsp+50h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-11h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+67h] BYREF
  ULONG_PTR ViewSize; // [rsp+E8h] [rbp+7Fh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  v4 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v4 = 2112;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LoadedDllByMapping = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = NtCreateSection(&SectionHandle, 4u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      BaseAddress = 0LL;
      ViewSize = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(
                             SectionHandle,
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             &ViewSize,
                             ViewShare,
                             0,
                             2u);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders, a2, a3);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      }
      NtClose(SectionHandle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
