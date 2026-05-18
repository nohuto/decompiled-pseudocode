/*
 * XREFs of sub_180065E2C @ 0x180065E2C
 * Callers:
 *     sub_180068A50 @ 0x180068A50 (sub_180068A50.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18006664C @ 0x18006664C (sub_18006664C.c)
 *     sub_180066750 @ 0x180066750 (sub_180066750.c)
 *     sub_1800694C0 @ 0x1800694C0 (sub_1800694C0.c)
 *     sub_1800699C0 @ 0x1800699C0 (sub_1800699C0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_180065E2C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, unsigned __int64); // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v19; // [rsp+38h] [rbp-80h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  __int64 v23; // [rsp+60h] [rbp-58h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 6;
  v9 = v8 >> 1;
  if ( v8 <= 0x3FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = sub_1800699C0(a1, v10);
  try
  {
    v12 = v11;
    v23 = v11;
    v13 = v5 & 0xFFFFFFFFFFFFFFC0uLL;
    v14 = v13 + v11;
    v22 = v13 + v11 + 64;
    *(_QWORD *)(v13 + v11 + 56) = 0LL;
    v15 = *(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(a3 + 56);
    if ( v15 )
      *(_QWORD *)(v14 + 56) = (**v15)(v15, v14);
    v19 = v14;
    v16 = a1[1];
    v17 = *a1;
    if ( a2 == v16 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64, __int64 *, _BYTE))sub_18006664C)(v17, v16, v12, a1, 0);
    }
    else
    {
      sub_180066750(v17, a2, v12, a1);
      v19 = v12;
      sub_180066750(a2, a1[1], v14 + 64, a1);
    }
  }
  catch ( ... )
  {
    sub_180069604(a1, v19, v22);
    sub_180069C7C(a1, v23, v10);
    throw;
  }
  sub_1800694C0(a1, v12, v7, v10);
  return v13 + *a1;
}
