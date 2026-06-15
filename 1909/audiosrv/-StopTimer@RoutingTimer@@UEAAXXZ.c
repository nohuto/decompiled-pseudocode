/*
 * XREFs of ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x1801290E0
 * Callers:
 *     ??_GPhoneCallEndTimer@@UEAAPEAXI@Z @ 0x1801275A0 (--_GPhoneCallEndTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

void __fastcall RoutingTimer::StopTimer(struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this[3]);
  v2 = this[4];
  if ( v2 )
  {
    DeleteTimerQueueTimer(0LL, v2, 0LL);
    this[4] = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
