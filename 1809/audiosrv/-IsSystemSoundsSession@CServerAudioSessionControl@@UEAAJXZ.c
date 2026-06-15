/*
 * XREFs of ?IsSystemSoundsSession@CServerAudioSessionControl@@UEAAJXZ @ 0x1800C4170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CServerAudioSessionControl::IsSystemSoundsSession(CServerAudioSessionControl *this)
{
  return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 128LL))(*((_QWORD *)this + 9)) == 0;
}
