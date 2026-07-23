/*
 * XREFs of sub_1800FF0C8 @ 0x1800FF0C8
 * Callers:
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 * Callees:
 *     sub_180009360 @ 0x180009360 (sub_180009360.c)
 *     sub_1800095D4 @ 0x1800095D4 (sub_1800095D4.c)
 *     sub_18000C2B4 @ 0x18000C2B4 (sub_18000C2B4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x18009C940 (ZwEnumerateValueKey.c)
 *     sub_1800FD5C0 @ 0x1800FD5C0 (sub_1800FD5C0.c)
 *     sub_1800FEF08 @ 0x1800FEF08 (sub_1800FEF08.c)
 */

__int64 __fastcall sub_1800FF0C8(void *a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  int v4; // r11d
  __int64 v5; // r12
  __int64 v7; // rdi
  ULONG v8; // eax
  NTSTATUS v9; // eax
  __int64 v10; // r9
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  __int16 v14; // r15
  int v15; // eax
  __int64 v16; // r9
  __int16 v17; // ax
  __int16 v18; // r13
  __int16 v19; // r13
  __int64 v20; // rax
  WCHAR *v21; // rsi
  int v22; // r15d
  int v23; // r15d
  unsigned __int16 v24; // r12
  __int16 v25; // ax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  char v32; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  *((_QWORD *)v3 + 6) = a1;
  v5 = a3;
  v7 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v11 = -1073741811;
    goto LABEL_36;
  }
  v7 = *a2;
  v8 = 0;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  while ( 1 )
  {
    v9 = ZwEnumerateValueKey(a1, v8, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
    v4 = 0;
    v11 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -2147483622 )
        goto LABEL_36;
LABEL_30:
      v8 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) + 1;
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v8;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
    {
      v12 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      if ( v12 + 24 <= 0x200 )
      {
        v13 = (unsigned __int64)v12 >> 1;
        v14 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13);
        *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13) = 0;
        v15 = sub_1800095D4(
                v5,
                (const WCHAR *)v3 + 58,
                (char *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL),
                v10,
                (_WORD *)v3 + 4);
        v4 = 0;
        v11 = v15;
        if ( v15 >= 0 )
        {
          v17 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v18 = *v3;
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v13) = v14;
          v19 = v18 << 14;
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v17;
          v20 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
          *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v19;
          v21 = (WCHAR *)&v3[v20 + 96];
          if ( !v21 )
            goto LABEL_28;
          v22 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
          if ( v22 )
          {
            v23 = 2 * v22;
            v24 = 0;
            do
            {
              if ( *v21 == (_WORD)v4 || v23 <= 0 || v24 >= 3u )
                break;
              if ( (int)sub_1800095D4(
                          *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                          v21,
                          (char *)v3 + 1,
                          v16,
                          (_WORD *)v3 + 6) >= 0 )
              {
                v25 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 1) & 3) << (2 * v24)) | v19 & ~(3 << (2 * v24));
                *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v24) = v25;
                v19 = *(_WORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
              }
              v11 = sub_18000C2B4(v21, v23, (_QWORD *)v3 + 5);
              if ( v11 < 0 )
                goto LABEL_20;
              v26 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
              v23 += -2 - v26;
              ++v24;
              v21 = (WCHAR *)((char *)v21 + v26 + 2);
            }
            while ( v21 );
            v11 = v4;
LABEL_20:
            v5 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          }
          else
          {
LABEL_28:
            v11 = -1073741811;
          }
          if ( v11 >= 0 )
          {
            v27 = sub_1800FEF08(v5, (unsigned __int16 *)v3 + 28);
            v4 = 0;
            v11 = v27;
            if ( v27 >= 0 )
            {
              if ( !v7 )
              {
                v28 = sub_180009360(-1);
                *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v28;
                if ( !v28 )
                {
                  v11 = -1073741801;
                  goto LABEL_38;
                }
                *a2 = v28;
              }
              v29 = sub_1800FD5C0((__int64 *)v3 + 2, (__int16 *)v3 + 28);
              v7 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v4 = 0;
              v11 = v29;
              if ( v29 >= 0 )
                *a2 = v7;
            }
          }
        }
        goto LABEL_30;
      }
    }
    v8 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_32:
    if ( v11 == -2147483622 )
      break;
    a1 = *(void **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  }
  v11 = v4;
LABEL_36:
  if ( !v7 && v11 != -1073741811 )
  {
LABEL_38:
    v30 = sub_180009360(1);
    LOWORD(v4) = 0;
    *a2 = v30;
    v7 = v30;
    if ( !v30 )
      v11 = -1073741801;
  }
  if ( v11 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v4;
  return (unsigned int)v11;
}
