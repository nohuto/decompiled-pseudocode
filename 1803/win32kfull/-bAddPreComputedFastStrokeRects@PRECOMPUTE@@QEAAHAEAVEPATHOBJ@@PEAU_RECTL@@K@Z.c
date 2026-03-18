/*
 * XREFs of ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C029F11C
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C029FB0C (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastStrokeRects(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct _RECTL *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbp
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  char *v10; // rax
  char *v11; // rsi
  const void *v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v4 = *((_DWORD *)a2 + 15);
  v6 = a4;
  if ( v4 + a4 <= v4 )
  {
    if ( v4 )
    {
      *((_DWORD *)a2 + 15) = 0;
      v15 = *((_QWORD *)a2 + 8);
      goto LABEL_15;
    }
    return 0LL;
  }
  v8 = -1;
  if ( v4 + a4 >= v4 )
    v8 = v4 + a4;
  v9 = 16LL * v8;
  if ( v9 > 0xFFFFFFFF || (v10 = (char *)PALLOCMEM2((unsigned int)v9, 1734632775LL, 0), (v11 = v10) == 0LL) )
  {
    if ( *((_DWORD *)a2 + 15) )
    {
      *((_DWORD *)a2 + 15) = 0;
      v15 = *((_QWORD *)a2 + 8);
LABEL_15:
      Win32FreePool(v15);
      *((_QWORD *)a2 + 8) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v12 = (const void *)*((_QWORD *)a2 + 8);
  if ( v12 )
    memmove(v10, v12, 16LL * *((unsigned int *)a2 + 15));
  memmove(&v11[16 * *((unsigned int *)a2 + 15)], a3, 16 * v6);
  v13 = *((_QWORD *)a2 + 8);
  if ( v13 )
    Win32FreePool(v13);
  *((_DWORD *)a2 + 15) += v6;
  result = 1LL;
  *((_QWORD *)a2 + 8) = v11;
  return result;
}
