/*
 * XREFs of ?OnAnimationComplete@CAccentTransition@@UEAAJI@Z @ 0x1800AE130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x1800AE40C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CAccentTransition::OnAnimationComplete(CAccentTransition *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)this + 9) == a2 )
    CAccentTransition::StopAnimation(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
  return 0LL;
}
