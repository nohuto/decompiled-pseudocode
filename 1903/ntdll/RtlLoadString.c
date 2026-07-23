/*
 * XREFs of RtlLoadString @ 0x180054EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlLoadString(
        PVOID DllHandle,
        ULONG StringId,
        PCWSTR StringLanguage,
        ULONG Flags,
        PCWSTR *ReturnString,
        PUSHORT ReturnStringLen,
        PWSTR ReturnLanguageName,
        PULONG ReturnLanguageLen)
{
  unsigned int v8; // r10d
  unsigned __int16 v9; // r12
  bool v11; // di
  NTSTATUS v12; // edx
  unsigned __int16 v13; // cx
  int v14; // ebx
  USHORT v15; // r8
  DWORD lcid[2]; // [rsp+40h] [rbp-78h] BYREF
  PVOID ResourceBuffer; // [rsp+48h] [rbp-70h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+50h] [rbp-68h] BYREF
  PCWSTR *v20; // [rsp+58h] [rbp-60h]
  _QWORD v21[4]; // [rsp+60h] [rbp-58h] BYREF

  v8 = (unsigned int)StringLanguage;
  v9 = StringId;
  v20 = ReturnString;
  ResourceBuffer = 0LL;
  v11 = (Flags & 1) == 0;
  if ( DllHandle && ReturnString && (Flags & 0xFFFFFFFE) == 0 )
  {
    if ( (Flags & 1) != 0 && (ReturnLanguageName || ReturnLanguageLen) )
      return -1073741637;
    if ( (unsigned int)StringLanguage <= 0xFFFF )
      goto LABEL_8;
    if ( *StringLanguage )
    {
      if ( RtlLocaleNameToLcid(StringLanguage, lcid, 3u) < 0 )
        return -1073741811;
      v8 = LOWORD(lcid[0]);
      lcid[0] = LOWORD(lcid[0]);
    }
    else
    {
      v8 = 0;
      lcid[0] = 0;
    }
LABEL_8:
    v21[0] = 6LL;
    v21[1] = (v9 >> 4) + 1;
    v21[2] = v8;
    v21[3] = v9;
    *(_QWORD *)lcid = 0LL;
    if ( v11 )
    {
      v12 = LdrResSearchResource(
              (PCWSTR)DllHandle,
              (__int64)&ResourceBuffer,
              (__int64)lcid,
              (__int64)ReturnLanguageName,
              (__int64)ReturnLanguageLen);
      if ( v12 >= 0 && *(_QWORD *)lcid > 0xFFFFuLL )
        v12 = -1073741701;
    }
    else
    {
      v12 = sub_180018D8C(DllHandle, (__int64)v21, 4u, 1u, (__int64)&ResourceDataEntry);
      if ( v12 < 0 )
        return v12;
      v12 = LdrAccessResource_0(DllHandle, ResourceDataEntry, &ResourceBuffer, 0LL);
    }
    if ( v12 >= 0 && ResourceBuffer )
    {
      v13 = 0;
      v14 = v9 & 0xF;
      *(_QWORD *)lcid >>= 1;
      do
      {
        v15 = *((_WORD *)ResourceBuffer + v13);
        v13 += v15 + 1;
        if ( v11 && (unsigned __int64)v13 > *(_QWORD *)lcid )
          return -1073741701;
        --v14;
      }
      while ( v14 >= 0 );
      if ( v13 && v15 )
        v13 -= v15;
      *v20 = (PCWSTR)((char *)ResourceBuffer + 2 * v13);
      if ( ReturnStringLen )
        *ReturnStringLen = v15;
    }
    return v12;
  }
  return -1073741811;
}
