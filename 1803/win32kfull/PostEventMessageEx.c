/*
 * XREFs of PostEventMessageEx @ 0x1C001C3FC
 * Callers:
 *     NtUserSendEventMessage @ 0x1C0006620 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0006F60 (xxxSwitchToThisWindow.c)
 *     zzzDecomposeDesktop @ 0x1C000A278 (zzzDecomposeDesktop.c)
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0036278 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     xxxApplyGlobalInputSettings @ 0x1C005EF88 (xxxApplyGlobalInputSettings.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0062BC0 (_GetWindowTrackInfoAsync.c)
 *     xxxSetWindowPlacement @ 0x1C0065970 (xxxSetWindowPlacement.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C00708E8 (SetWindowExtendedBoundsMargin.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00F2518 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F4738 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0105F90 (NtUserDisableThreadIme.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0106460 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     EditionPostEventMessage @ 0x1C0109C50 (EditionPostEventMessage.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C010A4D0 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserShowWindowAsync @ 0x1C010EB60 (NtUserShowWindowAsync.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0110BB0 (NtUserRegisterBSDRWindow.c)
 *     CloneWindowPosAndArrangementAsync @ 0x1C019EAFC (CloneWindowPosAndArrangementAsync.c)
 *     QueueShutdownData @ 0x1C01A2190 (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01C20F0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     BeginSetWindowArrangement @ 0x1C01C55E8 (BeginSetWindowArrangement.c)
 *     EditionPostAccessibility @ 0x1C01C85C0 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C01C8620 (EditionPostRitSound.c)
 *     xxxSetWindowShowState @ 0x1C01FA8B4 (xxxSetWindowShowState.c)
 *     xxxMinimizeHungWindow @ 0x1C01FBAB4 (xxxMinimizeHungWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C01FCC08 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@@@Z @ 0x1C01FE388 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@.c)
 * Callees:
 *     ??0?$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C001C5A8 (--0-$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C001C604 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     StoreQMessage @ 0x1C0041B80 (StoreQMessage.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E5604 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C0102C18 (ProcessSuspendedEventMessage.c)
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
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  tagObjLock *v18[2]; // [rsp+70h] [rbp-38h] BYREF

  CLockExclusive<DLT_QUEUE>::CLockExclusive<DLT_QUEUE>(v18);
  v12 = 0;
  if ( !a1
    || (*((_DWORD *)a1 + 120) & 1) == 0
    && ((vAdjustDelegatePriority(a1), (*((_DWORD *)a1 + 300) & 0x20) == 0)
     || (unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7)) )
  {
    v13 = AllocQEntryEx((struct tagMLIST *)(a2 + 24), 0LL, 0);
    if ( v13 )
    {
      if ( a4 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 120);
        if ( v14 )
          v15 = *(_QWORD *)(v14 + 16);
        else
          v15 = *(_QWORD *)(a2 + 96);
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 416) + 280LL);
      }
      StoreQMessage(v13, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v16, 0LL, 0LL);
      *((_QWORD *)v13 + 13) = a1;
      if ( a3 == 20 )
        CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a7, 3LL, v13);
      if ( !a1 )
      {
        SetWakeBit(*(_QWORD *)(a2 + 88), 8256LL);
        a1 = *(struct tagTHREADINFO **)(a2 + 96);
      }
      SetWakeBit(a1, 8256LL);
      v12 = 1;
    }
  }
  tagObjLock::UnLock(v18[1]);
  tagObjLock::UnLock(v18[0]);
  return v12;
}
