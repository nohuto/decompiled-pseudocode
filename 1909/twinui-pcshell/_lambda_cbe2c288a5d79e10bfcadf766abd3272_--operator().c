/*
 * XREFs of _lambda_cbe2c288a5d79e10bfcadf766abd3272_::operator() @ 0x1800A0C60
 * Callers:
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x18004B0E8 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180043F88 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x180044018 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cbe2c288a5d79e10bfcadf766abd3272_::operator()(__int64 a1)
{
  int IsTraySearchBoxVisible; // eax
  unsigned int v3; // ebx
  CortanaDesktopExperienceView *v5; // rbx
  int EdgeUIManager; // eax
  __int64 v7; // rdx
  bool v8; // [rsp+20h] [rbp-38h] BYREF
  struct IEdgeUiManager *v9[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v10[4]; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+3Ch] [rbp-1Ch]
  int v12; // [rsp+44h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9[1] = (struct IEdgeUiManager *)-2LL;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                             *(CortanaDesktopExperienceView **)a1,
                             **(HMONITOR **)(a1 + 8),
                             &v8);
  v3 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA25,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
    return v3;
  }
  if ( v8 )
  {
    v9[0] = 0LL;
    v5 = *(CortanaDesktopExperienceView **)a1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
    EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(v5, **(HMONITOR **)(a1 + 8), v9);
    v3 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 2603LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)EdgeUIManager);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
      return v3;
    }
    EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, _BYTE *))(*(_QWORD *)v9[0] + 112LL))(v9[0], v10);
    v3 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v7 = 2604LL;
      goto LABEL_9;
    }
    **(_DWORD **)(a1 + 16) = v12 - v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v9);
  }
  return 0LL;
}
