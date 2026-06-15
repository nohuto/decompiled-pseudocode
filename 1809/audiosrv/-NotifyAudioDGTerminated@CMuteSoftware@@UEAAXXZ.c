/*
 * XREFs of ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1800B5F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::NotifyAudioDGTerminated(CMuteSoftware *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids,
      this);
  }
  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 48));
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
