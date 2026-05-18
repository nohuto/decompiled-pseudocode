/*
 * XREFs of sub_1800BC6B0 @ 0x1800BC6B0
 * Callers:
 *     sub_1800C33C0 @ 0x1800C33C0 (sub_1800C33C0.c)
 *     sub_18010B7E8 @ 0x18010B7E8 (sub_18010B7E8.c)
 *     sub_18010C5E8 @ 0x18010C5E8 (sub_18010C5E8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 */

void __fastcall sub_1800BC6B0(_QWORD *a1, char *a2, char *a3)
{
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  signed __int64 v9; // rsi
  __int64 v10; // rax

  v6 = (a3 - a2) >> 4;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    v7 = sub_18000F60C((__int64)a1, (a3 - a2) >> 4);
    *a1 = v7;
    a1[1] = v7;
    a1[2] = *a1 + 16 * v6;
    v8 = v7;
    if ( a2 != a3 )
    {
      v9 = a2 - (char *)v7;
      do
      {
        *v8 = 0LL;
        v8[1] = 0LL;
        v10 = *(_QWORD *)((char *)v8 + v9 + 8);
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        *v8 = *(_QWORD *)((char *)v8 + v9);
        v8[1] = *(_QWORD *)((char *)v8 + v9 + 8);
        v8 += 2;
      }
      while ( (char *)v8 + v9 != a3 );
    }
    a1[1] = v8;
  }
}
