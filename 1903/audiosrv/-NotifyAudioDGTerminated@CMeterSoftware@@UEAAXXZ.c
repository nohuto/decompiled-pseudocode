/*
 * XREFs of ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x180044460
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800444C8 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

void __fastcall CMeterSoftware::NotifyAudioDGTerminated(CMeterSoftware *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_a149032b93413976049dd9474e14fad1_Traceguids, this);
  }
  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 40);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::WeakRef::~WeakRef((CMeterSoftware *)((char *)this + 32));
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
