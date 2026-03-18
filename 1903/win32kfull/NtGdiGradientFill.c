/*
 * XREFs of NtGdiGradientFill @ 0x1C0079CF0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtGdiGradientFill(HDC a1, char *a2, unsigned int a3, const void *a4, unsigned int a5, int a6)
{
  unsigned __int64 v7; // rbx
  int v8; // r12d
  unsigned int v9; // r12d
  size_t v10; // rcx
  struct _TRIVERTEX *v11; // rax
  struct _TRIVERTEX *v12; // r15
  ULONG64 v13; // rcx
  unsigned int v14; // r14d
  ULONG v16; // ecx
  struct _TRIVERTEX *v17; // [rsp+30h] [rbp-48h]

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
  v7 = 16 * a3;
  if ( (unsigned __int8)a6 != 2 )
  {
    if ( a5 <= (unsigned int)(40960000 - v7) >> 3 )
    {
      v8 = 8;
      goto LABEL_13;
    }
LABEL_29:
    v16 = 87;
    goto LABEL_30;
  }
  if ( a5 > (unsigned int)(40960000 - v7) / 0xCuLL )
    goto LABEL_29;
  v8 = 12;
LABEL_13:
  v9 = a5 * v8;
  v10 = v9 + (unsigned int)v7;
  if ( (unsigned int)v10 >= 0x2710000 )
  {
    v16 = 8;
LABEL_30:
    EngSetLastError(v16);
    return 0LL;
  }
  v11 = (struct _TRIVERTEX *)PALLOCMEM2(v10, 1886221383LL, 0);
  v12 = v11;
  if ( v11 )
  {
    v17 = &v11[v7 / 0x10];
    if ( (_DWORD)v7 && ((unsigned __int64)&a2[v7] > MmUserProbeAddress || &a2[v7] < a2) )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v11, a2, (unsigned int)v7);
    if ( v9 )
    {
      v13 = (ULONG64)a4 + v9;
      if ( v13 > MmUserProbeAddress || v13 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v17, a4, v9);
    v14 = GreGradientFill(a1, v12, a3, (char *)v17, a5, a6);
    Win32FreePool(v12);
  }
  else
  {
    EngSetLastError(8u);
    return 0;
  }
  return v14;
}
