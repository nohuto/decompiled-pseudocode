/*
 * XREFs of RtlpPopulateLanguageConfigList @ 0x14073EE88
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x14073EBD4 (RtlpLoadLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     RtlpMuiRegValidateConfigNode @ 0x14032D034 (RtlpMuiRegValidateConfigNode.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x14073F014 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegConfigListAddLanguage @ 0x140907B80 (RtlpMuiRegConfigListAddLanguage.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x140908318 (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpPopulateLanguageConfigList(void *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  NTSTATUS v4; // r11d
  __int64 v5; // r12
  __int64 v7; // rdi
  ULONG v8; // eax
  NTSTATUS v9; // eax
  int v10; // r9d
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rsi
  __int16 v16; // r15
  int LanguageSpec; // eax
  int v18; // r9d
  __int16 v19; // r13
  __int16 v20; // r13
  __int64 v21; // rax
  const wchar_t *v22; // rsi
  int v23; // r15d
  int v24; // r15d
  unsigned __int16 v25; // r12
  __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // eax
  __int64 LanguageConfigList; // rax
  int v30; // eax
  char v31; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 6) = a1;
  v5 = a3;
  v7 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v7 = *a2;
    v8 = 0;
    *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    while ( 1 )
    {
      v9 = ZwEnumerateValueKey(a1, v8, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
      v4 = 0;
      v11 = v9;
      if ( v9 < 0 )
        break;
      if ( *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v14 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        if ( v14 + 24 <= 0x200 )
        {
          v15 = (unsigned __int64)v14 >> 1;
          v16 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15);
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = 0;
          LanguageSpec = RtlpMuiRegGetLanguageSpec(
                           v5,
                           (int)v3 + 116,
                           (unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL,
                           v10,
                           (__int64)(v3 + 8));
          v4 = 0;
          v11 = LanguageSpec;
          if ( LanguageSpec >= 0 )
          {
            v19 = *v3;
            *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v15) = v16;
            *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0;
            v20 = v19 << 14;
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 8);
            v21 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v20;
            v22 = (const wchar_t *)&v3[v21 + 96];
            if ( !v22 )
              goto LABEL_39;
            v23 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
            if ( v23 )
            {
              v24 = 2 * v23;
              v25 = 0;
              do
              {
                if ( *v22 == (_WORD)v4 || v24 <= 0 || v25 >= 3u )
                  break;
                if ( (int)RtlpMuiRegGetLanguageSpec(
                            *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                            (_DWORD)v22,
                            (int)v3 + 1,
                            v18,
                            (__int64)(v3 + 12)) >= 0 )
                {
                  v26 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                  *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 1) & 3) << (2 * v25)) | v20 & ~(3 << (2 * v25));
                  *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v25) = v26;
                  v20 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
                }
                v11 = RtlStringCbLengthW(v22, v24, (size_t *)v3 + 5);
                if ( v11 < 0 )
                  goto LABEL_31;
                v27 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
                v24 += -2 - v27;
                ++v25;
                v22 = (const wchar_t *)((char *)v22 + v27 + 2);
              }
              while ( v22 );
              v11 = v4;
LABEL_31:
              v5 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            }
            else
            {
LABEL_39:
              v11 = -1073741811;
            }
            if ( v11 >= 0 )
            {
              v28 = RtlpMuiRegValidateConfigNode(v5, (unsigned __int16 *)v3 + 28);
              v4 = 0;
              v11 = v28;
              if ( v28 >= 0 )
              {
                if ( !v7 )
                {
                  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(0xFFFFFFFFLL);
                  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
                  if ( !LanguageConfigList )
                  {
                    v11 = -1073741801;
                    goto LABEL_12;
                  }
                  *a2 = LanguageConfigList;
                }
                v30 = RtlpMuiRegConfigListAddLanguage(v3 + 16, v3 + 56);
                v7 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                v4 = 0;
                v11 = v30;
                if ( v30 >= 0 )
                  *a2 = v7;
              }
            }
          }
          goto LABEL_7;
        }
      }
      v8 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_8:
      if ( v11 == -2147483622 )
      {
        v11 = v4;
        goto LABEL_10;
      }
      a1 = *(void **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    }
    if ( v9 != -2147483622 )
      goto LABEL_10;
LABEL_7:
    v8 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) + 1;
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v8;
    goto LABEL_8;
  }
  v11 = -1073741811;
LABEL_10:
  if ( !v7 && v11 != -1073741811 )
  {
LABEL_12:
    v12 = RtlpMuiRegCreateLanguageConfigList(1LL);
    LOWORD(v4) = 0;
    *a2 = v12;
    v7 = v12;
    if ( !v12 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v4;
  return (unsigned int)v11;
}
