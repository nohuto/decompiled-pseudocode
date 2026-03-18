/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C01311C0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C0015D14 (SetWindowCompositionFreezeSWR.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001B64C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     xxxNotifyMonitorChanged @ 0x1C006935C (xxxNotifyMonitorChanged.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F494 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     NtUserLayoutCompleted @ 0x1C01017B0 (NtUserLayoutCompleted.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C010A194 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0116DE0 (HandleDisplayChangeForInactiveDesktops.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C011BA0C (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EB8C4 (-RequestModernAppClose@@YAHXZ.c)
 *     _lambda_7b89ab000df0a6c72fa8d71ac8b3e245_::operator() @ 0x1C023CC2C (_lambda_7b89ab000df0a6c72fa8d71ac8b3e245_--operator().c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a1 )
  {
    v3 = a2;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
    {
      if ( *(_QWORD *)(a1 + 288) )
      {
        if ( a2 != 35 )
        {
          v5 = _HMObjectFromHandle(a3);
          v6 = *(_QWORD *)(v5 + 40);
          if ( (_DWORD)v3 == 18 )
          {
            *(_BYTE *)(v6 + 234) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v6 + 234) |= 2u;
            if ( (((_DWORD)v3 - 19) & 0xFFFFFFFB) == 0 && (!gpqForeground || *(_QWORD *)(gpqForeground + 128LL) != v5) )
              return;
            if ( (_DWORD)v3 == 19 )
              CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v5);
          }
        }
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL);
        if ( v7 )
          PostMessage(v7, *(unsigned int *)(gpsi + 928LL), v3);
      }
    }
  }
}
