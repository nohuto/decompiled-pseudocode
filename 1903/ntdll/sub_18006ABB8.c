/*
 * XREFs of sub_18006ABB8 @ 0x18006ABB8
 * Callers:
 *     sub_18006A9F8 @ 0x18006A9F8 (sub_18006A9F8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_180016D34 @ 0x180016D34 (sub_180016D34.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18007B398 @ 0x18007B398 (sub_18007B398.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 *     sub_1800F6BDC @ 0x1800F6BDC (sub_1800F6BDC.c)
 */

__int64 __fastcall sub_18006ABB8(
        wchar_t *String2,
        char a2,
        bool *a3,
        _UNICODE_STRING *a4,
        __int64 a5,
        unsigned __int16 a6)
{
  bool v6; // bl
  bool v11; // zf
  int v12; // eax
  int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r15d
  int v19; // r12d
  int v20; // r9d
  const WCHAR *v21; // rdx
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rbp
  int v25; // eax
  int v26; // edx
  __int64 v27; // rax
  int v28; // ecx
  __int16 v29; // r8
  int v30; // eax
  int v31; // [rsp+20h] [rbp-38h]
  _QWORD v32[6]; // [rsp+28h] [rbp-30h] BYREF
  int v33; // [rsp+60h] [rbp+8h]

  v6 = 0;
  v32[0] = 0LL;
  if ( String2 )
  {
    if ( !a3 )
      return 3221225713LL;
    if ( !a4 )
      return 3221225714LL;
    v11 = qword_180166368 == 0;
    *a3 = 0;
    if ( v11 && !(unsigned __int8)sub_18007B398() )
      return 3221225473LL;
    v12 = sub_180016D34(DefaultLocaleId);
    if ( v12 < 0 )
      return 3221225473LL;
    _mm_lfence();
    v13 = *(unsigned __int16 *)(qword_180166368 + 48)
        * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 16) + 8LL * v12 + 4);
    v14 = *(_QWORD *)(qword_180166368 + 8);
    v33 = *(unsigned __int16 *)(v13 + v14 + 110);
    v31 = *(unsigned __int16 *)(v13 + v14 + 112);
    v15 = sub_180016E30((__int64)String2);
    if ( v15 >= 0 )
    {
      _mm_lfence();
      v16 = *(_QWORD *)(qword_180166368 + 8);
      v17 = *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 24) + 8LL * v15 + 2)
          * *(unsigned __int16 *)(qword_180166368 + 48);
      v18 = *(unsigned __int16 *)(v17 + v16 + 110);
      v19 = *(unsigned __int16 *)(v17 + v16 + 112);
      if ( (unsigned int)(v18 - 1250) <= 7 )
      {
        v20 = 149;
        if ( _bittest(&v20, v18 - 1250) )
        {
          v21 = String2;
LABEL_10:
          *a3 = v6;
          RtlInitUnicodeString(a4, v21);
          return 0LL;
        }
      }
      v23 = (const wchar_t *)(*(_QWORD *)(qword_180166368 + 32) + 2LL + 2LL * *(unsigned int *)(v17 + v16 + 276));
      if ( a2 && !wcsicmp(v23, String2) )
      {
        v24 = String2;
LABEL_42:
        v21 = v24;
        goto LABEL_10;
      }
      v24 = L"en-US";
      if ( !wcsicmp(v23, L"en") || !wcsicmp(v23, L"en-US") )
        goto LABEL_39;
      if ( wcsicmp(v23, String2) )
      {
        v25 = sub_180016E30((__int64)v23);
        if ( v25 < 0 )
          goto LABEL_38;
        _mm_lfence();
        v26 = *(unsigned __int16 *)(qword_180166368 + 48)
            * *(unsigned __int16 *)(*(_QWORD *)(qword_180166368 + 24) + 8LL * v25 + 2);
        v27 = *(_QWORD *)(qword_180166368 + 8);
        v18 = *(unsigned __int16 *)(v26 + v27 + 110);
        v19 = *(unsigned __int16 *)(v26 + v27 + 112);
      }
      v28 = sub_1800F6BDC(a5, v23, v32);
      if ( !a6 || v28 || a6 == v18 || a6 == v19 )
      {
        if ( v18 == v33 || v18 == v31 || v19 == v33 || v19 == v31 )
          goto LABEL_39;
        if ( v28 )
        {
          if ( v28 != -1 )
          {
            v29 = 0;
            if ( v28 > 0 )
            {
              while ( 1 )
              {
                if ( *(__int16 *)(v32[0] + 2LL * v29) > 0 )
                {
                  v30 = *(__int16 *)(v32[0] + 2LL * v29);
                  if ( v30 == v33 || v30 == v31 )
                    goto LABEL_39;
                }
                if ( ++v29 >= v28 )
                  goto LABEL_38;
              }
            }
            goto LABEL_38;
          }
LABEL_39:
          if ( wcsicmp(v23, L"en") )
            v24 = v23;
          v6 = wcsicmp(v24, String2) != 0;
          goto LABEL_42;
        }
      }
LABEL_38:
      v23 = L"en-US";
      goto LABEL_39;
    }
  }
  return 3221225711LL;
}
