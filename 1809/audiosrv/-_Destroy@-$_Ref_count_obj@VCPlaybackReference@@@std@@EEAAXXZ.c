/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x1800120E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18002ED90 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj<CPlaybackReference>::_Destroy(__int64 a1)
{
  __int64 v1; // rdi
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  int v4; // eax

  v1 = a1 + 16;
  v2 = *(struct _Mtx_internal_imp_t **)(a1 + 128);
  v3 = _Mtx_lock(v2);
  if ( v3 )
    std::_Throw_C_error(v3);
  CPlaybackNotifier::UpdateAudioPlaybackStatus(v2, 1LL, v1);
  v4 = _Mtx_unlock(v2);
  if ( v4 )
    std::_Throw_C_error(v4);
}
