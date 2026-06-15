/*
 * XREFs of ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180044760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetState(CServerAudioSessionControl *this, enum _AudioSessionState *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum _AudioSessionState *))(**((_QWORD **)this + 9) + 144LL))(
           *((_QWORD *)this + 9),
           a2);
}
