/*
 * XREFs of RtlpConsoleFallbackNameFromLocaleName @ 0x18003AB74
 * Callers:
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003B7E8 (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlpNlsGetLcidIndex @ 0x1800408E0 (RtlpNlsGetLcidIndex.c)
 *     RtlpNlsGetNameIndex @ 0x1800413C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180080B24 (RtlpLoadNlsData.c)
 *     _wcsicmp @ 0x1800918F0 (_wcsicmp.c)
 *     RtlpGetAlternateCodePage @ 0x1800F906C (RtlpGetAlternateCodePage.c)
 */

__int64 __fastcall RtlpConsoleFallbackNameFromLocaleName(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v6; // bl
  bool v11; // zf
  int LcidIndex; // eax
  int v13; // edx
  __int64 v14; // rax
  int NameIndex; // eax
  int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // r13d
  int v20; // r15d
  const WCHAR *v21; // rdx
  __int64 v23; // rax
  const wchar_t *v24; // rdi
  const wchar_t *v25; // rsi
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  int AlternateCodePage; // ecx
  __int16 v30; // r8
  int v31; // eax
  int v32; // [rsp+20h] [rbp-38h]
  _QWORD v33[6]; // [rsp+28h] [rbp-30h] BYREF
  int v34; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v33[0] = 0LL;
  if ( String2 )
  {
    if ( !a3 )
      return 3221225713LL;
    if ( !a4 )
      return 3221225714LL;
    v11 = pTblPtrs == 0;
    *a3 = 0;
    if ( v11 && !(unsigned __int8)RtlpLoadNlsData() )
      return 3221225473LL;
    LcidIndex = RtlpNlsGetLcidIndex(gSystemLocale);
    if ( LcidIndex < 0 )
      return 3221225473LL;
    _mm_lfence();
    v13 = *(unsigned __int16 *)(pTblPtrs + 56) * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 4);
    v14 = *(_QWORD *)(pTblPtrs + 16);
    v34 = *(unsigned __int16 *)(v13 + v14 + 110);
    v32 = *(unsigned __int16 *)(v13 + v14 + 112);
    NameIndex = RtlpNlsGetNameIndex(String2);
    if ( NameIndex >= 0 )
    {
      _mm_lfence();
      v16 = 149;
      v17 = *(_QWORD *)(pTblPtrs + 16);
      v18 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
          * *(unsigned __int16 *)(pTblPtrs + 56);
      v19 = *(unsigned __int16 *)(v18 + v17 + 112);
      v20 = *(unsigned __int16 *)(v18 + v17 + 110);
      if ( (unsigned int)(v19 - 1250) <= 7 && _bittest(&v16, v19 - 1250)
        || (unsigned int)(v20 - 1250) <= 7 && _bittest(&v16, v20 - 1250) )
      {
        v21 = String2;
LABEL_12:
        *a3 = v6;
        RtlInitUnicodeString(a4, v21);
        return 0LL;
      }
      v23 = *(_QWORD *)(pTblPtrs + 40) + 2LL;
      v24 = (const wchar_t *)(v23 + 2LL * *(unsigned int *)(v18 + v17 + 276));
      if ( a2 && !wcsicmp((const wchar_t *)(v23 + 2LL * *(unsigned int *)(v18 + v17 + 276)), String2) )
      {
        v25 = String2;
LABEL_44:
        v21 = v25;
        goto LABEL_12;
      }
      v25 = L"en-US";
      if ( !wcsicmp(v24, L"en") || !wcsicmp(v24, L"en-US") )
        goto LABEL_41;
      if ( wcsicmp(v24, String2) )
      {
        v26 = RtlpNlsGetNameIndex(v24);
        if ( v26 < 0 )
          goto LABEL_40;
        _mm_lfence();
        v27 = *(unsigned __int16 *)(pTblPtrs + 56) * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * v26 + 2);
        v28 = *(_QWORD *)(pTblPtrs + 16);
        v20 = *(unsigned __int16 *)(v27 + v28 + 110);
        v19 = *(unsigned __int16 *)(v27 + v28 + 112);
      }
      AlternateCodePage = RtlpGetAlternateCodePage(a5, v24, v33);
      if ( !a6 || AlternateCodePage || a6 == v20 || a6 == v19 )
      {
        if ( v20 == v34 || v20 == v32 || v19 == v34 || v19 == v32 )
          goto LABEL_41;
        if ( AlternateCodePage )
        {
          if ( AlternateCodePage != -1 )
          {
            v30 = 0;
            if ( AlternateCodePage > 0 )
            {
              while ( 1 )
              {
                if ( *(__int16 *)(v33[0] + 2LL * v30) > 0 )
                {
                  v31 = *(__int16 *)(v33[0] + 2LL * v30);
                  if ( v31 == v34 || v31 == v32 )
                    goto LABEL_41;
                }
                if ( ++v30 >= AlternateCodePage )
                  goto LABEL_40;
              }
            }
            goto LABEL_40;
          }
LABEL_41:
          if ( wcsicmp(v24, L"en") )
            v25 = v24;
          v6 = wcsicmp(v25, String2) != 0;
          goto LABEL_44;
        }
      }
LABEL_40:
      v24 = L"en-US";
      goto LABEL_41;
    }
  }
  return 3221225711LL;
}
