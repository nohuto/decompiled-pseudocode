/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$20 @ 0x18006CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_20(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 384);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 96) = *v3;
  return &loc_18002AF00;
}
