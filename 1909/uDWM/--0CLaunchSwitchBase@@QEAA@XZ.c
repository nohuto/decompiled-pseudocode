/*
 * XREFs of ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800A6F48
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18002ECF4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800A6F00 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 */

CLaunchSwitchBase *__fastcall CLaunchSwitchBase::CLaunchSwitchBase(CLaunchSwitchBase *this)
{
  CLaunchSwitchBase *v1; // rcx

  CGroupingStoryboard::CGroupingStoryboard(this, 0);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CLaunchSwitchBase::`vftable'{for `CBaseObject'};
  *((_QWORD *)v1 + 19) = 0LL;
  *((_QWORD *)v1 + 20) = 0LL;
  return v1;
}
