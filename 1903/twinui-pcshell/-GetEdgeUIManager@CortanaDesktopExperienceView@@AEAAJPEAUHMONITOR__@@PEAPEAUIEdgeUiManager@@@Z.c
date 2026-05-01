/*
 * XREFs of ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180040CE8
 * Callers:
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180040C58 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x180043000 (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     _lambda_594ba3a34ff36d3ae4d42b851fc723e5_::operator() @ 0x1800937B0 (_lambda_594ba3a34ff36d3ae4d42b851fc723e5_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::GetEdgeUIManager(
        CortanaDesktopExperienceView *this,
        HMONITOR a2,
        struct IEdgeUiManager **a3)
{
  int v3; // esi
  LPVOID *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  HRESULT Instance; // eax
  __int64 v11; // rdx
  int ppv; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = (int)a3;
  *a3 = 0LL;
  v5 = (LPVOID *)((char *)this + 120);
  if ( *((_QWORD *)this + 15)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((char *)this + 120),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     v5),
        v6 = Instance,
        Instance >= 0) )
  {
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x680,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x693,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v6,
      ppv);
    return v6;
  }
  v14 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    v11 = 1685LL;
  }
  else
  {
    ppv = v3;
    v7 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *))(*(_QWORD *)v14 + 72LL))(
           v14,
           a2,
           &SID_EdgeUi,
           &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v11 = 1686LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v7,
    ppv);
LABEL_7:
  v8 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
