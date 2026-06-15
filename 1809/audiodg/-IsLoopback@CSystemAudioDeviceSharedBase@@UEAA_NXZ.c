/*
 * XREFs of ?IsLoopback@CSystemAudioDeviceSharedBase@@UEAA_NXZ @ 0x140037D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSystemAudioDeviceSharedBase::IsLoopback(CSystemAudioDeviceSharedBase *this)
{
  return *((_DWORD *)this + 12) == 2;
}
