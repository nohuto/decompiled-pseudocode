/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1C0015240
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0010D60 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0011920 (HandleDisplayChangeForInactiveDesktops.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C001AF24 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00CDDC4 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     NtUserLayoutCompleted @ 0x1C0125030 (NtUserLayoutCompleted.c)
 *     SetWindowCompositionFreezeSWR @ 0x1C012DCC4 (SetWindowCompositionFreezeSWR.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C014122C (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01EBA44 (-RequestModernAppClose@@YAHXZ.c)
 *     _lambda_7b89ab000df0a6c72fa8d71ac8b3e245_::operator() @ 0x1C023D24C (_lambda_7b89ab000df0a6c72fa8d71ac8b3e245_--operator().c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4B4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

void __fastcall PostIAMShellHookMessageEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // rbx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rcx
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
          CompositeAppFrameWindowOrSelf = (struct tagWND *)_HMObjectFromHandle(a3);
          v7 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 5);
          if ( (_DWORD)v4 == 18 )
          {
            *(_BYTE *)(v7 + 234) &= ~2u;
          }
          else
          {
            *(_BYTE *)(v7 + 234) |= 2u;
            if ( (((_DWORD)v4 - 19) & 0xFFFFFFFB) == 0
              && (!gpqForeground || *(struct tagWND **)(gpqForeground + 128LL) != CompositeAppFrameWindowOrSelf) )
            {
              return;
            }
            if ( (_DWORD)v4 == 19 )
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
