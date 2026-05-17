/*
 * XREFs of LdrpGetParentLangId @ 0x1800830C4
 * Callers:
 *     LdrResFallbackLangList @ 0x180039A78 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180041310 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  PCWSTR v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  const WCHAR *v6; // rsi
  int ParentLocaleName; // eax
  int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-39h] BYREF
  PCWSTR v11; // [rsp+28h] [rbp-31h]
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-21h]
  int v14; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v16[32]; // [rsp+68h] [rbp+Fh] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  SourceString = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = a1;
  *a2 = 0;
  SourceString = (PCWSTR)v16;
  WORD1(v12) = 30;
  v5 = RtlLcidToLocaleName(a1, (__int64)&v12, 2, 0);
  if ( v5 >= 0 )
    goto LABEL_3;
  if ( v5 == -1073741789 )
  {
    SourceString = 0LL;
    WORD1(v12) = 0;
    v5 = RtlLcidToLocaleName(v4, (__int64)&v12, 2, 1);
  }
  if ( v5 >= 0 )
  {
LABEL_3:
    v6 = SourceString;
    v11 = (PCWSTR)v15;
    WORD1(v10) = 30;
    ParentLocaleName = RtlGetParentLocaleName(SourceString, (__int64)&v10, 6u, 0);
    v8 = ParentLocaleName;
    if ( ParentLocaleName < 0 )
    {
      if ( ParentLocaleName == -1073741789 )
      {
        v11 = 0LL;
        WORD1(v10) = 0;
        v8 = RtlGetParentLocaleName(v6, (__int64)&v10, 6u, 1);
      }
      if ( v8 < 0 )
        goto LABEL_5;
    }
    if ( (_WORD)v10 )
    {
      v2 = v11;
      v8 = RtlLocaleNameToLcid(v11, &v14, 3);
      if ( v8 >= 0 )
        *a2 = v14;
    }
    else
    {
LABEL_5:
      v2 = v11;
    }
  }
  else
  {
    v6 = SourceString;
    v8 = -1073741811;
  }
  if ( v2 != (PCWSTR)v15 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
    v6 = SourceString;
  }
  if ( v6 != (const WCHAR *)v16 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)SourceString);
  return (unsigned int)v8;
}
