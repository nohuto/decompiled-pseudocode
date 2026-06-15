/*
 * XREFs of ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002DB0
 * Callers:
 *     AudioSessionDestroy @ 0x180002D00 (AudioSessionDestroy.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180044BF0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     AUDIOSESSION_rundown @ 0x1800C4A50 (AUDIOSESSION_rundown.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::RemoveClientReference(CServerAudioSessionControl *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 104LL))(this);
  (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this + 16LL))(this);
  return v2;
}
