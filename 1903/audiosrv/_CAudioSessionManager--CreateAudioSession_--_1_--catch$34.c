/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$34 @ 0x180070040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_34(__int64 a1, __int64 a2)
{
  int *v3; // rbx
  int v4; // eax

  v3 = *(int **)(a2 + 1264);
  v4 = *v3;
  *(_DWORD *)(a2 + 528) = *v3;
  if ( v4 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 136) = *v3;
  return &loc_1800919A6;
}
