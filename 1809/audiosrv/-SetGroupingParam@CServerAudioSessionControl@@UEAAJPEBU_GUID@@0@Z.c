/*
 * XREFs of ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x180016250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::SetGroupingParam(
        CServerAudioSessionControl *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, const struct _GUID *))(**((_QWORD **)this + 9) + 216LL))(
           *((_QWORD *)this + 9),
           a2,
           a3);
}
