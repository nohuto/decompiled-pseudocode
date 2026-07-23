/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x1409080F8
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x14032D034 (RtlpMuiRegValidateConfigNode.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409079B8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140907CD8 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073FCF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x1407400F0 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, signed __int16 a3, signed __int16 *a4)
{
  unsigned int v4; // ebx
  char v8; // r8
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 1;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 24);
  if ( a2 == 3 )
  {
    v10 = 0;
    if ( *(_WORD *)(v9 + 6) )
    {
      v11 = *(_QWORD *)(v9 + 16);
      while ( 1 )
      {
        v12 = 28LL * v10;
        if ( (*(_WORD *)(v12 + v11) & 0x1020) == 0x20 && *(_WORD *)(v12 + v11 + 6) == a3 && a4 )
          break;
        if ( ++v10 >= *(unsigned __int16 *)(v9 + 6) )
          goto LABEL_10;
      }
      *a4 = v10;
      return v4;
    }
LABEL_10:
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 && a3 >= 0 && a3 < (int)*(unsigned __int16 *)(v13 + 6) )
      v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2LL * a3));
    else
      v14 = 0LL;
    if ( !v14 )
      return (unsigned int)-1073741772;
    RtlInitUnicodeString(&DestinationString, v14);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return (unsigned int)-1073741772;
    a3 = Lcid;
    a2 = 1;
    v8 = 0;
  }
  if ( a2 == 1 )
    return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, a3, v8, a4);
  if ( a2 != 2 )
    return (unsigned int)-1073741772;
  if ( a3 <= 0 || a3 >= (int)*(unsigned __int16 *)(v9 + 6) )
    return (unsigned int)-1073741811;
  if ( a4 )
    *a4 = a3;
  return v4;
}
