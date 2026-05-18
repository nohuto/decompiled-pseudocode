/*
 * XREFs of sub_180016A80 @ 0x180016A80
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     sub_180107F40 @ 0x180107F40 (sub_180107F40.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001B918 @ 0x18001B918 (sub_18001B918.c)
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 __fastcall sub_180016A80(const void **a1, _BYTE *a2, _QWORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  char *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_18001BB48(a1, v11);
  *(_QWORD *)&v12[8 * v6] = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = v12;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove(v12, v14, a2 - (_BYTE *)*a1);
    v15 = &v12[8 * v6 + 8];
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove(v15, v14, v16);
  sub_18001B918(a1, v12, v8, v11, v11, v12, a1, -2LL);
  return (__int64)*a1 + 8 * v6;
}
