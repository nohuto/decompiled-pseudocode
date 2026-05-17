/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x180076D40
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x180022ADC (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x180076F60 (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x1800A0940 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  ULONG v4; // eax
  int LoadedDllByMapping; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-11h] BYREF
  __int64 v10; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v13; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+E8h] [rbp+7Fh] BYREF

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
    LoadedDllByMapping = NtCreateSection(&Handle, 4LL, 0LL, 0LL, 2, 0x8000000, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      v13 = 0LL;
      v14 = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(Handle, -1LL, &v13);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, v13, v14, &v10);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(v13, v10, a2, a3, 0LL, 0LL, &v14, 1, 0, 2);
        NtUnmapViewOfSection(-1LL);
      }
      NtClose(Handle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
