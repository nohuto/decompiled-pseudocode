/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x14076A51C
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x14076AC94 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1401C0EB0 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegValidateConfigNode @ 0x14034E138 (RtlpMuiRegValidateConfigNode.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x14076A6AC (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x140944994 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140945150 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(void *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  ULONG v4; // eax
  NTSTATUS v5; // r11d
  __int64 v6; // r12
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  int v10; // r9d
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  __int16 v16; // r15
  int LanguageSpec; // eax
  int v18; // r9d
  __int16 v19; // ax
  __int16 v20; // r13
  __int16 v21; // r13
  __int64 v22; // rax
  const wchar_t *v23; // rsi
  int v24; // r15d
  int v25; // r15d
  unsigned __int16 v26; // r12
  __int16 v27; // ax
  __int64 v28; // rcx
  int v29; // eax
  __int64 LanguageConfigList; // rax
  int v31; // eax
  char v32; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL);
  v4 = 0;
  *((_QWORD *)v3 + 3) = a3;
  LOWORD(v5) = 0;
  *((_QWORD *)v3 + 6) = a1;
  *((_QWORD *)v3 + 7) = 0LL;
  v6 = a3;
  *((_DWORD *)v3 + 16) = 0;
  v8 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v8 = *a2;
    *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(a1, v4, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
      v5 = 0;
      v11 = v9;
      if ( v9 < 0 )
        break;
      if ( *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v14 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        if ( v14 + 24 <= 0x200 )
        {
          v15 = (unsigned __int64)v14 >> 1;
          v16 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15);
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = 0;
          LanguageSpec = RtlpMuiRegGetLanguageSpec(
                           v6,
                           (int)v3 + 116,
                           (unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL,
                           v10,
                           (__int64)(v3 + 8));
          v5 = 0;
          v11 = LanguageSpec;
          if ( LanguageSpec >= 0 )
          {
            v19 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            v20 = *v3;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = v16;
            v21 = v20 << 14;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v19;
            v22 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
            *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v21;
            v23 = (const wchar_t *)&v3[v22 + 96];
            if ( !v23 )
              goto LABEL_39;
            v24 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
            if ( v24 )
            {
              v25 = 2 * v24;
              v26 = 0;
              do
              {
                if ( *v23 == (_WORD)v5 || v25 <= 0 || v26 >= 3u )
                  break;
                if ( (int)RtlpMuiRegGetLanguageSpec(
                            *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                            (_DWORD)v23,
                            (int)v3 + 1,
                            v18,
                            (__int64)(v3 + 12)) >= 0 )
                {
                  v27 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                  *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 1) & 3) << (2 * v26)) | v21 & ~(3 << (2 * v26));
                  *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v26) = v27;
                  v21 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
                }
                v11 = RtlStringCbLengthW(v23, v25, (size_t *)v3 + 5);
                if ( v11 < 0 )
                  goto LABEL_31;
                v28 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
                v25 += -2 - v28;
                ++v26;
                v23 = (const wchar_t *)((char *)v23 + v28 + 2);
              }
              while ( v23 );
              v11 = v5;
LABEL_31:
              v6 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            }
            else
            {
LABEL_39:
              v11 = -1073741811;
            }
            if ( v11 >= 0 )
            {
              v29 = RtlpMuiRegValidateConfigNode(v6, (unsigned __int16 *)v3 + 28);
              v5 = 0;
              v11 = v29;
              if ( v29 >= 0 )
              {
                if ( !v8 )
                {
                  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(0xFFFFFFFFLL);
                  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
                  if ( !LanguageConfigList )
                  {
                    v11 = -1073741801;
                    goto LABEL_12;
                  }
                  *a2 = LanguageConfigList;
                }
                v31 = RtlpMuiRegConfigListAddLanguage(v3 + 16, v3 + 56);
                v8 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                v5 = 0;
                v11 = v31;
                if ( v31 >= 0 )
                  *a2 = v8;
              }
            }
          }
          goto LABEL_7;
        }
      }
      v4 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_8:
      if ( v11 == -2147483622 )
      {
        v11 = v5;
        goto LABEL_10;
      }
      a1 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    }
    if ( v9 != -2147483622 )
      goto LABEL_10;
LABEL_7:
    v4 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) + 1;
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v4;
    goto LABEL_8;
  }
  v11 = -1073741811;
LABEL_10:
  if ( !v8 && v11 != -1073741811 )
  {
LABEL_12:
    v12 = RtlpMuiRegCreateLanguageConfigList(1LL);
    LOWORD(v5) = 0;
    *a2 = v12;
    v8 = v12;
    if ( !v12 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v8 )
    *(_WORD *)(v8 + 4) = v5;
  return (unsigned int)v11;
}
