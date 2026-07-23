/*
 * XREFs of sub_1800795E8 @ 0x1800795E8
 * Callers:
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18002DC10 @ 0x18002DC10 (sub_18002DC10.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 */

__int64 __fastcall sub_1800795E8(_UNICODE_STRING *a1, volatile signed __int32 **a2, _DWORD *a3)
{
  ULONG v4; // eax
  int v6; // ebx
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
  if ( !byte_180165380 )
    v4 = 2112;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v4;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( v6 >= 0 )
  {
    v6 = ZwCreateSection(&SectionHandle, 4u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v6 >= 0 )
    {
      BaseAddress = 0LL;
      ViewSize = 0LL;
      v6 = ZwMapViewOfSection(
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
      if ( v6 >= 0 )
      {
        v6 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
        if ( v6 >= 0 )
          v6 = sub_18002DC10(BaseAddress, OutHeaders, a2, a3);
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      }
      ZwClose(SectionHandle);
    }
    ZwClose(FileHandle);
  }
  return (unsigned int)v6;
}
