/*
 * XREFs of ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18005A194
 * Callers:
 *     ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x180059990 (-OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboa.c)
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180340984 (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180340C84 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x180344860 (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18005A204 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(
        KeyboardHosting::TabTipAdapter *a1,
        _QWORD *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = -2;
  v4 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(a1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x61C,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4,
      -2);
  v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)a1 + 3) + 456LL))(*((_QWORD **)a1 + 3), *a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61D,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5,
      v8);
  else
    v6 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v6;
}
