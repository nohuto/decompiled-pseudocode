/*
 * XREFs of ?PositionFlyoutCore@CBaseTrayFlyoutExperienceManager@@IEAAJXZ @ 0x180099B90
 * Callers:
 *     ?HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800981F0 (-HandleInputHostVisibilityChanged@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISP.c)
 *     ?OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099840 (-OnViewPropertiesChanging@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@.c)
 *     ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z @ 0x180099B20 (-PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180049014 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z @ 0x1800977F0 (-CalculateFlyoutPosition@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::PositionFlyoutCore(CBaseTrayFlyoutExperienceManager *this)
{
  HMONITOR v2; // rax
  int v3; // edi
  __int64 v4; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  struct tagRECT v8; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((int *)this + 106) <= 0 || *((int *)this + 107) <= 0 )
    return 0LL;
  *(_QWORD *)&v8.left = 0LL;
  *(_QWORD *)&v8.right = 0LL;
  v2 = MonitorFromRect((LPCRECT)((char *)this + 376), 1u);
  v3 = (*(__int64 (__fastcall **)(CBaseTrayFlyoutExperienceManager *, HMONITOR, struct tagRECT *, char *))(*(_QWORD *)this + 88LL))(
         this,
         v2,
         &v8,
         (char *)this + 352);
  if ( v3 < 0 )
  {
    v4 = 664LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = CBaseTrayFlyoutExperienceManager::CalculateFlyoutPosition(
         (SIZE *)this,
         &v8,
         (struct tagRECT *)((char *)this + 408));
  if ( v3 < 0 )
  {
    v4 = 667LL;
    goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 12) )
    return 0LL;
  v6 = CSingleViewShellExperience::SetPosition(
         (CBaseTrayFlyoutExperienceManager *)((char *)this + 72),
         (const struct tagRECT *)((char *)this + 408));
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A0,
    (__int64)"internal\\shell\\private\\inc\\basetrayflyoutexperience.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
