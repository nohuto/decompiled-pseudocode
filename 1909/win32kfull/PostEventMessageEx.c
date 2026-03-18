/*
 * XREFs of PostEventMessageEx @ 0x1C002BAE0
 * Callers:
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006E44 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserSendEventMessage @ 0x1C00084F0 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0009F30 (xxxSwitchToThisWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C000B38C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C0010D54 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001D320 (EditionHandleAndPostKeyEvent.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C004E6B8 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F2198 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00F2394 (SetWindowExtendedBoundsMargin.c)
 *     NtUserDisableThreadIme @ 0x1C010BF20 (NtUserDisableThreadIme.c)
 *     EditionPostEventMessage @ 0x1C01111E0 (EditionPostEventMessage.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0112450 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserShowWindowAsync @ 0x1C0113F60 (NtUserShowWindowAsync.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0119040 (NtUserRegisterBSDRWindow.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0132E60 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0137220 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D3064 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     QueueShutdownData @ 0x1C01D6C00 (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F2740 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01F9A20 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FBF20 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     EditionPostAccessibility @ 0x1C0202530 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C0202590 (EditionPostRitSound.c)
 *     xxxMinimizeHungWindow @ 0x1C023C24C (xxxMinimizeHungWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023D4C4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E200 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C023E4E4 (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BC84 (--0-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C002BCF8 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PtiKbdFromQ @ 0x1C002BD30 (PtiKbdFromQ.c)
 *     StoreQMessage @ 0x1C0045990 (StoreQMessage.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E3C40 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C0109770 (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  struct tagQMSG *v13; // r14
  int v14; // ecx
  tagDomLock *v16[2]; // [rsp+70h] [rbp-38h] BYREF

  CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(v16);
  v12 = 0;
  if ( !a1
    || (*((_DWORD *)a1 + 120) & 1) == 0
    && ((vAdjustDelegatePriority(a1), (*((_DWORD *)a1 + 306) & 0x20) == 0)
     || (unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7)) )
  {
    v13 = AllocQEntryEx((struct tagMLIST *)(a2 + 24), 0LL, 0);
    if ( v13 )
    {
      if ( a4 )
        v14 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
      else
        v14 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a2) + 416) + 280LL);
      StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v14, 0LL, 0LL);
      *((_QWORD *)v13 + 13) = a1;
      if ( a3 == 20 )
        CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a7, 3LL, v13);
      if ( !a1 )
      {
        SetWakeBit(*(_QWORD *)(a2 + 96), 8256LL);
        a1 = *(struct tagTHREADINFO **)(a2 + 104);
      }
      SetWakeBit(a1, 8256LL);
      v12 = 1;
    }
  }
  tagObjLock::UnLockExclusive(v16[1]);
  tagDomLock::UnLockShared(v16[0]);
  return v12;
}
