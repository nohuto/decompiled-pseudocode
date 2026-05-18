/*
 * XREFs of sub_180124EA0 @ 0x180124EA0
 * Callers:
 *     <none>
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180124EA0(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  char v4; // di
  int v5; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = *(_BYTE *)(a1 + 112);
  v5 = Mtx_unlock(v2);
  if ( v5 )
    std::_Throw_C_error(v5);
  return v4;
}
