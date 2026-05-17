/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x1801019FC
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18004B140 (RtlStringCbLengthW.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18004C5C0 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004C824 (RtlpMuiRegGetLanguageSpec.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1800A0540 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800FFDBC (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegValidateConfigNode @ 0x18010183C (RtlpMuiRegValidateConfigNode.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v5; // r12
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r9
  int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rsi
  __int16 v13; // r15
  int LanguageSpec; // eax
  __int64 v15; // r9
  __int16 v16; // r13
  __int16 v17; // r13
  __int64 v18; // rax
  WCHAR *v19; // rsi
  int v20; // r15d
  int v21; // r15d
  unsigned __int16 v22; // r12
  __int16 v23; // ax
  __int64 v24; // rcx
  int v25; // eax
  __int64 LanguageConfigList; // rax
  int v27; // eax
  __int64 v28; // rax
  char v30; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 6) = a1;
  v5 = a3;
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v10 = -1073741811;
    goto LABEL_35;
  }
  v7 = *a2;
  *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  do
  {
    v8 = ZwEnumerateValueKey();
    v4 = 0;
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2147483622 )
        goto LABEL_35;
LABEL_30:
      ++*(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      continue;
    }
    if ( *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
    {
      v11 = *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      if ( v11 + 24 <= 0x200 )
      {
        v12 = (unsigned __int64)v11 >> 1;
        v13 = *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12);
        *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12) = 0;
        LanguageSpec = RtlpMuiRegGetLanguageSpec(
                         v5,
                         (WCHAR *)v3 + 58,
                         (char *)((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL),
                         v9,
                         (__int16 *)v3 + 4);
        v4 = 0;
        v10 = LanguageSpec;
        if ( LanguageSpec >= 0 )
        {
          v16 = *v3;
          *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
          *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12) = v13;
          *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0;
          v17 = v16 << 14;
          *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                         + 8);
          v18 = *(unsigned int *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
          *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v17;
          v19 = (WCHAR *)&v3[v18 + 96];
          if ( !v19 )
            goto LABEL_28;
          v20 = *(_DWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
          if ( v20 )
          {
            v21 = 2 * v20;
            v22 = 0;
            do
            {
              if ( *v19 == (_WORD)v4 || v21 <= 0 || v22 >= 3u )
                break;
              if ( (int)RtlpMuiRegGetLanguageSpec(
                          *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                          v19,
                          (char *)v3 + 1,
                          v15,
                          (__int16 *)v3 + 6) >= 0 )
              {
                v23 = *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 1) & 3) << (2 * v22)) | v17 & ~(3 << (2 * v22));
                *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v22) = v23;
                v17 = *(_WORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
              }
              v10 = RtlStringCbLengthW(v19, v21, (_QWORD *)v3 + 5);
              if ( v10 < 0 )
                goto LABEL_20;
              v24 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
              v21 += -2 - v24;
              ++v22;
              v19 = (WCHAR *)((char *)v19 + v24 + 2);
            }
            while ( v19 );
            v10 = v4;
LABEL_20:
            v5 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          }
          else
          {
LABEL_28:
            v10 = -1073741811;
          }
          if ( v10 >= 0 )
          {
            v25 = RtlpMuiRegValidateConfigNode(v5, (unsigned __int16 *)v3 + 28);
            v4 = 0;
            v10 = v25;
            if ( v25 >= 0 )
            {
              if ( !v7 )
              {
                LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(-1);
                *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
                if ( !LanguageConfigList )
                {
                  v10 = -1073741801;
                  goto LABEL_37;
                }
                *a2 = LanguageConfigList;
              }
              v27 = RtlpMuiRegConfigListAddLanguage((__int64 *)v3 + 2, (__int16 *)v3 + 28);
              v7 = *(_QWORD *)(((unsigned __int64)&v30 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v4 = 0;
              v10 = v27;
              if ( v27 >= 0 )
                *a2 = v7;
            }
          }
        }
        goto LABEL_30;
      }
    }
  }
  while ( v10 != -2147483622 );
  v10 = v4;
LABEL_35:
  if ( !v7 && v10 != -1073741811 )
  {
LABEL_37:
    v28 = RtlpMuiRegCreateLanguageConfigList(1);
    LOWORD(v4) = 0;
    *a2 = v28;
    v7 = v28;
    if ( !v28 )
      v10 = -1073741801;
  }
  if ( v10 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v4;
  return (unsigned int)v10;
}
