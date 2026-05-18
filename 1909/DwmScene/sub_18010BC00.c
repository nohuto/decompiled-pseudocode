/*
 * XREFs of sub_18010BC00 @ 0x18010BC00
 * Callers:
 *     sub_1800E2478 @ 0x1800E2478 (sub_1800E2478.c)
 *     sub_1800E286C @ 0x1800E286C (sub_1800E286C.c)
 * Callees:
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010BC00(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v3 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = Mtx_unlock(v2);
  if ( v5 )
    std::_Throw_C_error(v5);
  return v4;
}
