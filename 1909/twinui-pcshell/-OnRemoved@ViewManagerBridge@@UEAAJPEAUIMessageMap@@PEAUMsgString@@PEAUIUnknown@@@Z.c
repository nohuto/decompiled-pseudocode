/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x1802A7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x1802A88DC (-RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z.c)
 */

__int64 __fastcall ViewManagerBridge::OnRemoved(
        ViewManagerBridge *this,
        struct IMessageMap *a2,
        struct MsgString *a3,
        struct IUnknown *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = ViewManagerBridge::RaiseViewPropertyChanged((ViewManagerBridge *)((char *)this - 24), a2, a3);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x461,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
