/*
 * XREFs of NtGdiGradientFill @ 0x1C009C260
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     GreGradientFill @ 0x1C009C47C (GreGradientFill.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  __int64 v6; // r12
  unsigned int v7; // eax
  int v8; // r15d
  unsigned int v9; // r15d
  size_t v10; // rcx
  char *v11; // rax
  char *v12; // rsi
  ULONG64 v13; // rcx
  unsigned int v14; // r14d
  ULONG v16; // ecx
  char *v17; // [rsp+30h] [rbp-48h]

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
  v7 = 40960000 - v6;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= v7 >> 3 )
    {
      v8 = 8;
      goto LABEL_13;
    }
LABEL_29:
    v16 = 87;
    goto LABEL_30;
  }
  if ( a5 > v7 / 0xCuLL )
    goto LABEL_29;
  v8 = 12;
LABEL_13:
  v9 = a5 * v8;
  v10 = v9 + (unsigned int)v6;
  if ( (unsigned int)v10 >= 0x2710000 )
  {
    v16 = 8;
LABEL_30:
    EngSetLastError(v16);
    return 0LL;
  }
  v11 = (char *)PALLOCMEM2(v10, 1886221383LL, 0);
  v12 = v11;
  if ( v11 )
  {
    v17 = &v11[v6];
    if ( (_DWORD)v6 && ((unsigned __int64)&a2[v6] > MmUserProbeAddress || &a2[v6] < a2) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v11, a2, (unsigned int)v6);
    if ( v9 )
    {
      v13 = (ULONG64)a4 + v9;
      if ( v13 > MmUserProbeAddress || v13 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v17, a4, v9);
    v14 = GreGradientFill(a1, a5, a6);
    Win32FreePool(v12);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v14;
}
