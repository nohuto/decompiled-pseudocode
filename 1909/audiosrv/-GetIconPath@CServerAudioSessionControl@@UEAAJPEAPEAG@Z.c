/*
 * XREFs of ?GetIconPath@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x1800D23B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetIconPath(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 272LL))(
           *((_QWORD *)this + 9),
           a2);
}
