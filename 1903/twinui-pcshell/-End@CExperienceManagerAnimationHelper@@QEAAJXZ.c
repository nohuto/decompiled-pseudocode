/*
 * XREFs of ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18004E258
 * Callers:
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18004D340 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18004E230 (-OnViewUncloaked@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180050CC0 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180050D80 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180050E40 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180051000 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091B70 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091DA0 (-OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017A8B0 (-OnViewHidden@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017A990 (-OnViewShown@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180188170 (-OnViewHidden@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180188250 (-OnViewShown@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180192CF0 (-OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaked@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180193030 (-OnViewUncloaked@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D290 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaked@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D690 (-OnViewUncloaked@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_47c4ee998602912f584be58de1a81d16_::operator() @ 0x1801A7648 (_lambda_47c4ee998602912f584be58de1a81d16_--operator().c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1801AAA2C (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180312360 (-OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::End(CExperienceManagerAnimationHelper *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)this )
    return 0LL;
  *(_BYTE *)this = 0;
  v1 = DwmpEndTransitionRequest(*((unsigned int *)this + 1));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v1,
    v4);
  return v2;
}
