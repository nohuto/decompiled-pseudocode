/*
 * XREFs of sub_180074264 @ 0x180074264
 * Callers:
 *     sub_1800727F8 @ 0x1800727F8 (sub_1800727F8.c)
 *     sub_1800B34F8 @ 0x1800B34F8 (sub_1800B34F8.c)
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Mtx_init @ 0x18012750E (_Mtx_init.c)
 *     _Cnd_init @ 0x180127520 (_Cnd_init.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180074264(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  struct _Mtx_internal_imp_t *v6; // [rsp+40h] [rbp-18h]

  v2 = Cnd_init((_Cnd_t *)(a1 + 8));
  if ( v2 )
    std::_Throw_C_error(v2);
  v3 = Mtx_init((_Mtx_t *)(a1 + 16), 1);
  if ( v3 )
    std::_Throw_C_error(v3);
  v6 = *(struct _Mtx_internal_imp_t **)(a1 + 16);
  *(_BYTE *)(a1 + 24) = 0;
  v4 = Mtx_lock(v6);
  if ( v4 )
    std::_Throw_C_error(v4);
  return a1;
}
