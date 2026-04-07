/*
 * XREFs of ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x18000AB8C
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18000AB50 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A70AC (--1CAnimationScheduler@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18003A9DC (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 */

void __fastcall CWindowPropertyTracker::StopTrackingAllWindows(CWindowPropertyTracker *this)
{
  int v2; // eax
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( !v2 )
      break;
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v2 - 1);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
