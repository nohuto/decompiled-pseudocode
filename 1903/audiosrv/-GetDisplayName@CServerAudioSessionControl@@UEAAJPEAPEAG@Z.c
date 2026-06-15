/*
 * XREFs of ?GetDisplayName@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x1800D2760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetDisplayName(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 200LL))(
           *((_QWORD *)this + 9),
           a2);
}
