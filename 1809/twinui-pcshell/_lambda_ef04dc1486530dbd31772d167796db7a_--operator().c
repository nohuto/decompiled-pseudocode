/*
 * XREFs of _lambda_ef04dc1486530dbd31772d167796db7a_::operator() @ 0x1800108F8
 * Callers:
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800108A0 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180016770 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180016800 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ef04dc1486530dbd31772d167796db7a_::operator()(__int64 a1)
{
  int IsTraySearchBoxVisible; // eax
  unsigned int v3; // ebx
  int EdgeUIManager; // eax
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  struct IEdgeUiManager *v8[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[4]; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+3Ch] [rbp-1Ch]
  int v11; // [rsp+44h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8[1] = (struct IEdgeUiManager *)-2LL;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                             *(CortanaDesktopExperienceView **)a1,
                             **(HMONITOR **)(a1 + 8),
                             (bool *)&v7);
  v3 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible,
      v7);
  }
  else
  {
    if ( !(_BYTE)v7 )
      return 0LL;
    v8[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(
                      *(CortanaDesktopExperienceView **)a1,
                      **(HMONITOR **)(a1 + 8),
                      v8);
    v3 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v6 = 2285LL;
    }
    else
    {
      EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, _BYTE *))(*(_QWORD *)v8[0] + 112LL))(
                        v8[0],
                        v9);
      v3 = EdgeUIManager;
      if ( EdgeUIManager >= 0 )
      {
        **(_DWORD **)(a1 + 16) = v11 - v10;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
        return 0LL;
      }
      v6 = 2286LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)EdgeUIManager,
      v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  }
  return v3;
}
