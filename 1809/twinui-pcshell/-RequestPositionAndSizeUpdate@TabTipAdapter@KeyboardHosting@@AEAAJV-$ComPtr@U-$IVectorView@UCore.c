/*
 * XREFs of ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180094024
 * Callers:
 *     ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x180053EF0 (-OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboa.c)
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802C35D4 (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x1802C38BC (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z.c)
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x1802C6B84 (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180094280 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(
        KeyboardHosting::TabTipAdapter *a1,
        __int64 *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(a1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1338LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a1 + 3) + 440LL))(*((_QWORD **)a1 + 3), *a2);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v6;
}
