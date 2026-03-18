/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C00DC890
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00386A8 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00B098C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C00B9FFC (SetWindowCompositionFreezeSWR.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C00DE1D0 (HandleDisplayChangeForInactiveDesktops.c)
 *     NtUserLayoutCompleted @ 0x1C011D170 (NtUserLayoutCompleted.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C012553C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C01360D0 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01D641C (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     _lambda_336d399dbea870f4b634e48a18f0c036_::operator() @ 0x1C0224CC8 (_lambda_336d399dbea870f4b634e48a18f0c036_--operator().c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
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
