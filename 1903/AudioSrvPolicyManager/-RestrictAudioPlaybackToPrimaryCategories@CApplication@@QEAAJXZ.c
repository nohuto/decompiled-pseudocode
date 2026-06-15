/*
 * XREFs of ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000FBEC
 * Callers:
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180010414 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001D1D4 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028710 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::RestrictAudioPlaybackToPrimaryCategories(CApplication *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 141) != 5 )
  {
    *((_DWORD *)this + 143) = 0;
    *((_DWORD *)this + 141) = 5;
    *((_DWORD *)this + 142) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
