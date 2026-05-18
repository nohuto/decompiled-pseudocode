/*
 * XREFs of sub_1800B4400 @ 0x1800B4400
 * Callers:
 *     sub_1800190D0 @ 0x1800190D0 (sub_1800190D0.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 * Callees:
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 *     _Mtx_lock @ 0x18012751A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127520 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127526 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _Cnd_signal @ 0x180127654 (_Cnd_signal.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800B4400(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  struct _Mtx_internal_imp_t *v6; // [rsp+40h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 433) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v6 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v3 = Mtx_lock((_Mtx_t)(a1 + 128));
    if ( v3 )
      std::_Throw_C_error(v3);
    if ( *(_DWORD *)(a1 + 36) )
    {
      *(_BYTE *)(a1 + 120) = 1;
      v4 = Cnd_signal((_Cnd_t)(a1 + 208));
      if ( v4 )
        std::_Throw_C_error(v4);
      v2 = v6;
    }
    else
    {
      sub_1800B4494(a1);
    }
    v5 = Mtx_unlock(v2);
    if ( v5 )
      std::_Throw_C_error(v5);
  }
}
