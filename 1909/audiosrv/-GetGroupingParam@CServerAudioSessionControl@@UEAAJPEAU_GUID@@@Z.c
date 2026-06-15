/*
 * XREFs of ?GetGroupingParam@CServerAudioSessionControl@@UEAAJPEAU_GUID@@@Z @ 0x180049490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetGroupingParam(CServerAudioSessionControl *this, struct _GUID *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _GUID *))(**((_QWORD **)this + 9) + 208LL))(
           *((_QWORD *)this + 9),
           a2);
}
