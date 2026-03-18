/*
 * XREFs of PostEventMessageEx @ 0x1C0025670
 * Callers:
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006E44 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserSendEventMessage @ 0x1C00084F0 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0009F40 (xxxSwitchToThisWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00107FC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0014300 (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C008BF7C (SetWindowExtendedBoundsMargin.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C0116068 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C01181D8 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C012D1F0 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0131420 (NtUserDisableThreadIme.c)
 *     EditionPostEventMessage @ 0x1C0137160 (EditionPostEventMessage.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0138450 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserShowWindowAsync @ 0x1C0139F60 (NtUserShowWindowAsync.c)
 *     NtUserRegisterBSDRWindow @ 0x1C013EDD0 (NtUserRegisterBSDRWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D31F4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     QueueShutdownData @ 0x1C01D6D80 (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01F9CD0 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01FC1D0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     EditionPostAccessibility @ 0x1C02027E0 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C0202840 (EditionPostRitSound.c)
 *     xxxMinimizeHungWindow @ 0x1C023C86C (xxxMinimizeHungWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023DAE4 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C023EB04 (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025814 (--0-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0025888 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 *     StoreQMessage @ 0x1C00A4BB0 (StoreQMessage.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C01096A0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C012E4E0 (ProcessSuspendedEventMessage.c)
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
