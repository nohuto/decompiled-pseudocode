/*
 * XREFs of sub_1800B4EB8 @ 0x1800B4EB8
 * Callers:
 *     sub_18007DDDC @ 0x18007DDDC (sub_18007DDDC.c)
 * Callees:
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_wait @ 0x180127648 (_Cnd_wait.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800B4EB8(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  struct _Mtx_internal_imp_t *v4; // [rsp+20h] [rbp-28h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v2 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v2 )
LABEL_2:
    std::_Throw_C_error(v2);
  while ( *(_BYTE *)(a1 + 424) )
  {
    v2 = Cnd_wait((_Cnd_t)(a1 + 280), v4);
    if ( v2 )
      goto LABEL_2;
  }
  v3 = Mtx_unlock(v4);
  if ( v3 )
    std::_Throw_C_error(v3);
}
