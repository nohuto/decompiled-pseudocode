/*
 * XREFs of sub_1800B4D40 @ 0x1800B4D40
 * Callers:
 *     sub_180019AC8 @ 0x180019AC8 (sub_180019AC8.c)
 * Callees:
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800B4D40(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  int v6; // eax

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v5 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v5 )
    std::_Throw_C_error(v5);
  *(_DWORD *)(a1 + 32) = a2;
  v6 = Mtx_unlock(v4);
  if ( v6 )
    std::_Throw_C_error(v6);
}
