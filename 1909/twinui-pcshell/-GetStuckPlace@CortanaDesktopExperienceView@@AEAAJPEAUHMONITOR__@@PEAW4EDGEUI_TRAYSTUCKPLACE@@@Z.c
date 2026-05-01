/*
 * XREFs of ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180045580
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180041BC8 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z @ 0x180081534 (-IsCortiniSupported@CortanaDesktopExperienceView@@AEAA_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180044018 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::GetStuckPlace(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        enum EDGEUI_TRAYSTUCKPLACE *a3)
{
  int EdgeUIManager; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IEdgeUiManager *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(this, a2, &v11);
  v7 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v9 = 2024LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)EdgeUIManager,
      -2);
    goto LABEL_4;
  }
  EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, enum EDGEUI_TRAYSTUCKPLACE *))(*(_QWORD *)v11 + 80LL))(
                    v11,
                    a3);
  v7 = EdgeUIManager;
  if ( EdgeUIManager < 0 )
  {
    v9 = 2025LL;
    goto LABEL_7;
  }
  v7 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7;
}
