/*
 * XREFs of ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800108A0
 * Callers:
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180010054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x1801884A4 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801895B8 (-NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _lambda_ef04dc1486530dbd31772d167796db7a_::operator() @ 0x1800108F8 (_lambda_ef04dc1486530dbd31772d167796db7a_--operator().c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1800153F0 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::GetSpeechTextInputHeight(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        HMONITOR a3)
{
  int v4; // eax
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  HMONITOR *v7; // [rsp+28h] [rbp-20h]
  unsigned int *v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
  HMONITOR v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v10 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (int)a2, a3);
  *(_QWORD *)v6 = this;
  v7 = &v11;
  v8 = &v10;
  v4 = lambda_ef04dc1486530dbd31772d167796db7a_::operator()(v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v6[0]);
  return v10;
}
