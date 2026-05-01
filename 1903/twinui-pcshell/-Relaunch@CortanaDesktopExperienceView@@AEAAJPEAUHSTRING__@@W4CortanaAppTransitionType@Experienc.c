/*
 * XREFs of ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180054588
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800542AC (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1801CF9E0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1800418C8 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@wil@@SA_NXZ @ 0x180093A90 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_2002d_24519009@@@wil@@SA_NX.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::Relaunch(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(
         (CortanaDesktopExperienceView *)a1,
         L"NotifyRelaunch",
         a3,
         a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_2002d_24519009>::__private_IsEnabled()
      && !*(_BYTE *)(a1 + 252) )
    {
      v7 = *(__int64 **)(a1 + 96);
      v8 = *v7;
      v9 = *(_OWORD *)(a1 + 196);
      (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 136))(v7, &v9);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x829,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
}
