/*
 * XREFs of sub_1800E209C @ 0x1800E209C
 * Callers:
 *     sub_1800E2478 @ 0x1800E2478 (sub_1800E2478.c)
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800E21D0 @ 0x1800E21D0 (sub_1800E21D0.c)
 *     sub_1800E2A70 @ 0x1800E2A70 (sub_1800E2A70.c)
 *     sub_1800E2BEC @ 0x1800E2BEC (sub_1800E2BEC.c)
 *     sub_18010B7E8 @ 0x18010B7E8 (sub_18010B7E8.c)
 */

unsigned __int64 __fastcall sub_1800E209C(__int64 *a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v16; // [rsp+88h] [rbp+10h]

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 7;
  if ( v5 == 0x1FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v6 = v5 + 1;
  v7 = (a1[2] - *a1) >> 7;
  v8 = v7 >> 1;
  if ( v7 <= 0x1FFFFFFFFFFFFFFLL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 )
      v9 = v6;
  }
  else
  {
    v9 = v6;
  }
  v10 = sub_1800E2BEC(a1, v9);
  v11 = v4 & 0xFFFFFFFFFFFFFF80uLL;
  try
  {
    sub_18010B7E8();
    v16 = v11 + v10;
    v12 = a1[1];
    v13 = *a1;
    if ( a2 == v12 )
    {
      sub_1800E21D0(v13, v12, v10, a1);
    }
    else
    {
      sub_1800E21D0(v13, a2, v10, a1);
      v16 = v10;
      sub_1800E21D0(a2, a1[1], v11 + v10 + 128, a1);
    }
  }
  catch ( ... )
  {
    sub_1800E2B28(a1, v16, v11 + v10 + 128);
    sub_1800E2C5C(a1, v10, v9);
    throw;
  }
  sub_1800E2A70(a1, v10, v6, v9);
  return v11 + *a1;
}
