/*
 * XREFs of sub_180122B70 @ 0x180122B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123628 @ 0x180123628 (sub_180123628.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180122B70(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v4 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v4 )
    std::_Throw_C_error(v4);
  sub_180123628(a1 + 240, &v6);
  v5 = Mtx_unlock(v3);
  if ( v5 )
    std::_Throw_C_error(v5);
}
