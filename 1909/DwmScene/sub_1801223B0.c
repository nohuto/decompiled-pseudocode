/*
 * XREFs of sub_1801223B0 @ 0x1801223B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180121AFC @ 0x180121AFC (sub_180121AFC.c)
 *     sub_180122208 @ 0x180122208 (sub_180122208.c)
 *     sub_180123370 @ 0x180123370 (sub_180123370.c)
 *     sub_1801245DC @ 0x1801245DC (sub_1801245DC.c)
 *     sub_180124634 @ 0x180124634 (sub_180124634.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1801223B0(__int64 a1)
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
  sub_180123370(v4);
  v5 = sub_1801245DC(v9);
  sub_180121AFC(v4, (__int64)v8, byte_18025F1E0);
  sub_180122208(v8[0] + 64LL, v5);
  sub_180124634(v9);
  v6 = sub_1801245DC(v9);
  sub_180121AFC(v4, (__int64)v8, byte_18025F200);
  sub_180122208(v8[0] + 64LL, v6);
  sub_180124634(v9);
  v7 = Mtx_unlock(v2);
  if ( v7 )
    std::_Throw_C_error(v7);
}
