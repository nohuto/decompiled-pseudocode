/*
 * XREFs of ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002D0F8
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::Unlock(LPCRITICAL_SECTION *this)
{
  LeaveCriticalSection(*this);
  *((_BYTE *)this + 8) = 0;
}
