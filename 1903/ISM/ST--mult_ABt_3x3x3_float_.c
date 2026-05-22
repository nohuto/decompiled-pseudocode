/*
 * XREFs of ST::mult_ABt_3x3x3_float_ @ 0x18016A224
 * Callers:
 *     ??$SE3_mult_a_binv@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18016A030 (--$SE3_mult_a_binv@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 * Callees:
 *     ST::mult_Ax_3x3_float_ @ 0x18016A308 (ST--mult_Ax_3x3_float_.c)
 */

__int64 __fastcall ST::mult_ABt_3x3x3_float_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx

  v3 = ST::mult_Ax_3x3_float_(a1, a3, a2);
  v6 = ST::mult_Ax_3x3_float_(v4 + 12, v5, v3 + 12);
  return ST::mult_Ax_3x3_float_(v7 + 24, v8, v6 + 24);
}
