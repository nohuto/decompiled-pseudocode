/*
 * XREFs of ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180016770
 * Callers:
 *     _lambda_ef04dc1486530dbd31772d167796db7a_::operator() @ 0x1800108F8 (_lambda_ef04dc1486530dbd31772d167796db7a_--operator().c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180022DAC (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180079AF0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180016800 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::IsTraySearchBoxVisible(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        bool *a3)
{
  int EdgeUIManager; // eax
  unsigned int v5; // ebx
  struct IEdgeUiManager *v6; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+18h] BYREF
  struct IEdgeUiManager *v11; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v11 = 0LL;
  EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(this, a2, &v11);
  v5 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v8 = 2304LL;
  }
  else
  {
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, int *))(*(_QWORD *)v11 + 96LL))(v11, &v10);
    v5 = EdgeUIManager;
    if ( EdgeUIManager >= 0 )
    {
      *a3 = v10 != 0;
      v5 = 0;
      goto LABEL_4;
    }
    v8 = 2307LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)EdgeUIManager,
    -2);
LABEL_4:
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct IEdgeUiManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
