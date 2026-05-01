/*
 * XREFs of ?Show@ShellFeedsDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4FeedsButtonInteraction@ShellFeeds@TwinUI@@@Z @ 0x18009FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18009C744 (-GetActivateArgs@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x18009FC60 (-ShowInternal@ShellFeedsDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpt.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103@@@wil@@SA_NXZ @ 0x18009FDD0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsDesktopExperienceView::Show(__int64 a1, HSTRING a2, int a3)
{
  ShellFeedsDesktopExperienceView *v5; // rsi
  int ActivateArgs; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+50h] [rbp+8h] BYREF

  string = 0LL;
  v5 = (ShellFeedsDesktopExperienceView *)(a1 - 24);
  WindowsDeleteString(0LL);
  string = 0LL;
  ActivateArgs = ShellFeedsDesktopExperienceView::GetActivateArgs(v5, a2, &string);
  v8 = ActivateArgs;
  if ( ActivateArgs >= 0 )
  {
    v10 = 2;
    if ( a3 != 1 )
      v10 = 0;
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_FeedsFocusSteal_35515103>::__private_IsEnabled(v7)
      && !a3 )
    {
      v10 = 2;
    }
    ActivateArgs = ShellFeedsDesktopExperienceView::ShowInternal(v5, string, v10);
    v8 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      v8 = 0;
      goto LABEL_12;
    }
    v9 = 492LL;
  }
  else
  {
    v9 = 481LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)ActivateArgs);
LABEL_12:
  WindowsDeleteString(string);
  return v8;
}
