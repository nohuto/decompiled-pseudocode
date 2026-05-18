/*
 * XREFs of sub_1800FB7A0 @ 0x1800FB7A0
 * Callers:
 *     sub_1800FBFB4 @ 0x1800FBFB4 (sub_1800FBFB4.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180011480 @ 0x180011480 (sub_180011480.c)
 *     sub_1800FC5E0 @ 0x1800FC5E0 (sub_1800FC5E0.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

__int64 __fastcall sub_1800FB7A0(const void **a1, _BYTE *a2, _WORD *a3)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rsi
  _BYTE *v13; // r8
  _BYTE *v14; // rdx
  char *v15; // rcx
  size_t v16; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 1;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 1;
  if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 1;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_180011480((__int64)a1, v11);
  *((_WORD *)v12 + v6) = *a3;
  v13 = a1[1];
  v14 = *a1;
  v15 = (char *)v12;
  if ( a2 == v13 )
  {
    v16 = v13 - v14;
  }
  else
  {
    memmove(v12, v14, a2 - (_BYTE *)*a1);
    v15 = (char *)v12 + 2 * v6 + 2;
    v16 = (_BYTE *)a1[1] - a2;
    v14 = a2;
  }
  memmove(v15, v14, v16);
  sub_1800FC5E0(a1, v12, v8, v11, v11, v12, a1, -2LL);
  return (__int64)*a1 + 2 * v6;
}
