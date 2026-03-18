/*
 * XREFs of NtGdiGradientFill @ 0x1C0124930
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     GreGradientFill @ 0x1C0124B4C (GreGradientFill.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  __int64 v6; // rbx
  int v7; // r12d
  unsigned int v8; // r12d
  size_t v9; // rcx
  char *v10; // rax
  char *v11; // r15
  ULONG64 v12; // rcx
  unsigned int v13; // r14d
  ULONG v15; // ecx
  char *v16; // [rsp+30h] [rbp-48h]

  if ( (a6 & 0xFFFFFF00) != 0
    || !a2
    || !a4
    || !a3
    || !a5
    || a3 >= 0x80000000
    || a5 >= 0x80000000
    || (unsigned __int8)a6 > 2u
    || a3 > 0x271000 )
  {
    goto LABEL_29;
  }
  v6 = 16 * a3;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= (unsigned int)(40960000 - v6) >> 3 )
    {
      v7 = 8;
      goto LABEL_13;
    }
LABEL_29:
    v15 = 87;
    goto LABEL_30;
  }
  if ( a5 > (unsigned int)(40960000 - v6) / 0xCuLL )
    goto LABEL_29;
  v7 = 12;
LABEL_13:
  v8 = a5 * v7;
  v9 = v8 + (unsigned int)v6;
  if ( (unsigned int)v9 >= 0x2710000 )
  {
    v15 = 8;
LABEL_30:
    EngSetLastError(v15);
    return 0LL;
  }
  v10 = (char *)PALLOCMEM2(v9, 1886221383LL, 0);
  v11 = v10;
  if ( v10 )
  {
    v16 = &v10[v6];
    if ( (_DWORD)v6 && ((unsigned __int64)&a2[v6] > MmUserProbeAddress || &a2[v6] < a2) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v10, a2, (unsigned int)v6);
    if ( v8 )
    {
      v12 = (ULONG64)a4 + v8;
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v16, a4, v8);
    v13 = GreGradientFill(a1, a5, a6);
    Win32FreePool(v11);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v13;
}
