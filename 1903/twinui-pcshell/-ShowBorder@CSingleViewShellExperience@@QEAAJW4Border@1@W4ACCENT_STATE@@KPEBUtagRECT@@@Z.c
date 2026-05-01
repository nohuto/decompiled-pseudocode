/*
 * XREFs of ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x18004E1D8
 * Callers:
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18004D340 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@@Z @ 0x18004E190 (-ShowBorder@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@.c)
 *     ?ShowBorderWithRect@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Experience@Shell@Internal@Windows@@W4ShellExperienceViewBorderAccentState@5678@UColor@UI@8@URect@Foundation@8@@Z @ 0x18004EEA0 (-ShowBorderWithRect@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ShellExperienceViewBorderEdge@Exp.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18004FBD0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091B70 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z @ 0x180092858 (-SetBorderAccent@CBaseTrayFlyoutExperienceManager@@IEAAJH@Z.c)
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017AA70 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x1801838B0 (-PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180188330 (-OnViewUncloaking@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x1801919DC (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180192CF0 (-OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180193070 (-OnViewUncloaking@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D290 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18019D6E0 (-OnViewUncloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::ShowBorder(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 80) + 88LL))(*(_QWORD *)(a1 + 80), a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5,
      a5);
  return v6;
}
