/*
 * XREFs of sub_1800B4194 @ 0x1800B4194
 * Callers:
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 * Callees:
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B4194(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = Mtx_unlock(v2);
  if ( v5 )
    std::_Throw_C_error(v5);
  return v4;
}
