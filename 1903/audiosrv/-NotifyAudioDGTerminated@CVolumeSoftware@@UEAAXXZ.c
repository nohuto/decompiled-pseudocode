/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x1800C6BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800444C8 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

void __fastcall CVolumeSoftware::NotifyAudioDGTerminated(CVolumeSoftware *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Au,
      (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this);
  }
  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 256);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 248));
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
