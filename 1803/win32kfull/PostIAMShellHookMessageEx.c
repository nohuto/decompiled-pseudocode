/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C006D9B0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     xxxNotifyMonitorChanged @ 0x1C00304E4 (xxxNotifyMonitorChanged.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00569F0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxUpdateTray @ 0x1C005AAD0 (xxxUpdateTray.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0073C6C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     NtUserLayoutCompleted @ 0x1C00FF110 (NtUserLayoutCompleted.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0105154 (SetWindowCompositionFreezeSWR.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C010E850 (HandleDisplayChangeForInactiveDesktops.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0135CF4 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01B3BC0 (-RequestModernAppClose@@YAHXZ.c)
 *     _lambda_336d399dbea870f4b634e48a18f0c036_::operator() @ 0x1C01FC248 (_lambda_336d399dbea870f4b634e48a18f0c036_--operator().c)
 * Callees:
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  struct tagWND *CompositeAppFrameWindowOrSelf; // r8
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 )
  {
    v3 = a3;
    v4 = a2;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 288) )
      {
        if ( a2 != 35 )
        {
          CompositeAppFrameWindowOrSelf = *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)a3);
          v7 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 5);
          if ( a2 == 18 )
          {
            *(_BYTE *)(v7 + 234) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v7 + 234) |= 2u;
            if ( ((a2 - 19) & 0xFFFFFFFB) == 0
              && (!gpqForeground || *(struct tagWND **)(gpqForeground + 120LL) != CompositeAppFrameWindowOrSelf) )
            {
              return;
            }
            if ( a2 == 19 )
              CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(CompositeAppFrameWindowOrSelf);
          }
          if ( CompositeAppFrameWindowOrSelf )
            v3 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
          else
            v3 = 0LL;
        }
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL);
        if ( v8 )
          PostMessage(v8, *(unsigned int *)(gpsi + 928LL), v4, v3);
      }
    }
  }
}
