/*
 * XREFs of ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180012E70
 * Callers:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800137D8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002B680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ @ 0x18002C370 (-Invoke@CProcessCategoryDowngradedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180010910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::RemoveAudioPlaybackRestriction(CApplication *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 141) == 5 )
  {
    *((_DWORD *)this + 141) = 0;
    *((_DWORD *)this + 142) = 0;
    *((_DWORD *)this + 143) = 0;
    *((_DWORD *)this + 144) = 0;
    *((_DWORD *)this + 145) = 0;
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 147) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
