/*
 * XREFs of sub_1800738A4 @ 0x1800738A4
 * Callers:
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_1800C32B0 @ 0x1800C32B0 (sub_1800C32B0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 */

_QWORD *__fastcall sub_1800738A4(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(a2[1] - *a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v5 = sub_18000F5BC((__int64)a1, (__int64)(a2[1] - *a2) >> 4);
    *a1 = v5;
    a1[1] = v5;
    a1[2] = *a1 + 16 * v4;
    v6 = v5;
    v7 = (_QWORD *)a2[1];
    if ( (_QWORD *)*a2 != v7 )
    {
      v8 = *a2 - (_QWORD)v5;
      do
      {
        *v6 = 0LL;
        v6[1] = 0LL;
        v9 = *(_QWORD *)((char *)v6 + v8 + 8);
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        *v6 = *(_QWORD *)((char *)v6 + v8);
        v6[1] = *(_QWORD *)((char *)v6 + v8 + 8);
        v6 += 2;
      }
      while ( (_QWORD *)((char *)v6 + v8) != v7 );
    }
    a1[1] = v6;
  }
  return a1;
}
