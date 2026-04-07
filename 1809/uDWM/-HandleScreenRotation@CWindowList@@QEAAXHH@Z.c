/*
 * XREFs of ?HandleScreenRotation@CWindowList@@QEAAXHH@Z @ 0x18008B2EC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029128 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800A19B8 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 */

void __fastcall CWindowList::HandleScreenRotation(CWindowList *this, int a2, int a3)
{
  CScreenRotation *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = (CScreenRotation *)*((_QWORD *)this + 62);
  if ( v6 && *((_QWORD *)v6 + 3) )
    CScreenRotation::UpdateAngle(v6, a2, a3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
}
