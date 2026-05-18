/*
 * XREFs of sub_1801246C8 @ 0x1801246C8
 * Callers:
 *     sub_1801225A0 @ 0x1801225A0 (sub_1801225A0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_1800AAC3C @ 0x1800AAC3C (sub_1800AAC3C.c)
 *     sub_180124854 @ 0x180124854 (sub_180124854.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1801246C8(__int64 a1, _QWORD *a2)
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
    sub_180124854(a2);
  }
  v5 = *(_QWORD ***)(a1 + 72);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = (_QWORD *)a2[1];
    if ( (_QWORD *)a2[2] == v7 )
    {
      sub_1800AAC3C(a2, a2[1], (__int64)(i + 2));
    }
    else
    {
      v7[2] = 0LL;
      v7[3] = 0LL;
      sub_18001115C(v7, (__int64)(i + 2));
      a2[1] += 32LL;
    }
  }
  return a2;
}
