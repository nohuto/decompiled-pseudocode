/*
 * XREFs of sub_1801245B8 @ 0x1801245B8
 * Callers:
 *     sub_180122490 @ 0x180122490 (sub_180122490.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_1800AAB2C @ 0x1800AAB2C (sub_1800AAB2C.c)
 *     sub_180124744 @ 0x180124744 (sub_180124744.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801245B8(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  _QWORD **v5; // rdi
  _QWORD *i; // rbx
  _QWORD *v7; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_180124744(a2);
  }
  v5 = *(_QWORD ***)(a1 + 72);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = (_QWORD *)a2[1];
    if ( (_QWORD *)a2[2] == v7 )
    {
      sub_1800AAB2C(a2, a2[1], (__int64)(i + 2));
    }
    else
    {
      v7[2] = 0LL;
      v7[3] = 0LL;
      sub_18001110C(v7, (__int64)(i + 2));
      a2[1] += 32LL;
    }
  }
  return a2;
}
