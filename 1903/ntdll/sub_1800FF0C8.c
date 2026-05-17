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

__int64 __fastcall sub_1800FF0C8(__int64 a1, __int64 *a2, __int64 a3)
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
  int v14; // eax
  __int64 v15; // r9
  __int16 v16; // ax
  __int16 v17; // r13
  __int16 v18; // r13
  __int64 v19; // rax
  WCHAR *v20; // rsi
  int v21; // r15d
  int v22; // r15d
  unsigned __int16 v23; // r12
  __int16 v24; // ax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  char v31; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL);
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
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
  *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
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
      ++*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      continue;
    }
    if ( *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
    {
      v11 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      if ( v11 + 24 <= 0x200 )
      {
        v12 = (unsigned __int64)v11 >> 1;
        v13 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12);
        *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12) = 0;
        v14 = sub_1800095D4(
                v5,
                (const WCHAR *)v3 + 58,
                (char *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL),
                v9,
                (_WORD *)v3 + 4);
        v4 = 0;
        v10 = v14;
        if ( v14 >= 0 )
        {
          v16 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v17 = *v3;
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v12) = v13;
          v18 = v17 << 14;
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v16;
          v19 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
          *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
          *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v18;
          v20 = (WCHAR *)&v3[v19 + 96];
          if ( !v20 )
            goto LABEL_28;
          v21 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
          if ( v21 )
          {
            v22 = 2 * v21;
            v23 = 0;
            do
            {
              if ( *v20 == (_WORD)v4 || v22 <= 0 || v23 >= 3u )
                break;
              if ( (int)sub_1800095D4(
                          *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                          v20,
                          (char *)v3 + 1,
                          v15,
                          (_WORD *)v3 + 6) >= 0 )
              {
                v24 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
                *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 1) & 3) << (2 * v23)) | v18 & ~(3 << (2 * v23));
                *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v23) = v24;
                v18 = *(_WORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
              }
              v10 = sub_18000C2B4(v20, v22, (_QWORD *)v3 + 5);
              if ( v10 < 0 )
                goto LABEL_20;
              v25 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
              v22 += -2 - v25;
              ++v23;
              v20 = (WCHAR *)((char *)v20 + v25 + 2);
            }
            while ( v20 );
            v10 = v4;
LABEL_20:
            v5 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          }
          else
          {
LABEL_28:
            v10 = -1073741811;
          }
          if ( v10 >= 0 )
          {
            v26 = sub_1800FEF08(v5, (unsigned __int16 *)v3 + 28);
            v4 = 0;
            v10 = v26;
            if ( v26 >= 0 )
            {
              if ( !v7 )
              {
                v27 = sub_180009360(-1);
                *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v27;
                if ( !v27 )
                {
                  v10 = -1073741801;
                  goto LABEL_37;
                }
                *a2 = v27;
              }
              v28 = sub_1800FD5C0((__int64 *)v3 + 2, (__int16 *)v3 + 28);
              v7 = *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              v4 = 0;
              v10 = v28;
              if ( v28 >= 0 )
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
    v29 = sub_180009360(1);
    LOWORD(v4) = 0;
    *a2 = v29;
    v7 = v29;
    if ( !v29 )
      v10 = -1073741801;
  }
  if ( v10 < 0 && v7 )
    *(_WORD *)(v7 + 4) = v4;
  return (unsigned int)v10;
}
