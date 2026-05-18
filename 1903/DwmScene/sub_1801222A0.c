/*
 * XREFs of sub_1801222A0 @ 0x1801222A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801219EC @ 0x1801219EC (sub_1801219EC.c)
 *     sub_1801220F8 @ 0x1801220F8 (sub_1801220F8.c)
 *     sub_180123260 @ 0x180123260 (sub_180123260.c)
 *     sub_1801244CC @ 0x1801244CC (sub_1801244CC.c)
 *     sub_180124524 @ 0x180124524 (sub_180124524.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1801222A0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 **v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  int v7; // eax
  _QWORD v8[4]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[128]; // [rsp+40h] [rbp-88h] BYREF

  v8[2] = -2LL;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v3 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = (__int64 **)(a1 + 144);
  sub_180123260(v4);
  v5 = sub_1801244CC(v9);
  sub_1801219EC(v4, (__int64)v8, byte_18025E1E0);
  sub_1801220F8(v8[0] + 64LL, v5);
  sub_180124524(v9);
  v6 = sub_1801244CC(v9);
  sub_1801219EC(v4, (__int64)v8, byte_18025E200);
  sub_1801220F8(v8[0] + 64LL, v6);
  sub_180124524(v9);
  v7 = Mtx_unlock(v2);
  if ( v7 )
    std::_Throw_C_error(v7);
}
