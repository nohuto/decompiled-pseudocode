/*
 * XREFs of PostEventMessageEx @ 0x1C00D4C3C
 * Callers:
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C000468C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserSendEventMessage @ 0x1C0005AD0 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0006C70 (xxxSwitchToThisWindow.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00190F0 (xxxProcessNotifyWinEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxSetWindowPlacement @ 0x1C00B87BC (xxxSetWindowPlacement.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00BCD34 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00CCD4C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00CE784 (xxxApplyGlobalInputSettings.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 *     PostUpdateKeyStateEvent @ 0x1C00D5A24 (PostUpdateKeyStateEvent.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C010F3C0 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C010F804 (SetWindowExtendedBoundsMargin.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0123420 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0125EF0 (NtUserDisableThreadIme.c)
 *     EditionPostEventMessage @ 0x1C012B230 (EditionPostEventMessage.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C012BAD0 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserShowWindowAsync @ 0x1C012EF10 (NtUserShowWindowAsync.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0133960 (NtUserRegisterBSDRWindow.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01BF4D4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     QueueShutdownData @ 0x1C01C3A80 (QueueShutdownData.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01D1110 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01E4434 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01E68E0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     EditionPostAccessibility @ 0x1C01EC900 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C01EC960 (EditionPostRitSound.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C022565C (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0226380 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C0226E54 (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     StoreQMessage @ 0x1C002A320 (StoreQMessage.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     ??0?$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D4DF4 (--0-$CLockExclusive@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00D4E68 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FF6FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C0124B64 (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        __int64 a2,
        DWORD a3,
        InputTransform *a4,
        DWORD a5,
        __int64 a6,
        LARGE_INTEGER a7,
        DWORD *a8)
{
  unsigned int v12; // ebx
  LARGE_INTEGER *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  tagObjLock *v18[2]; // [rsp+70h] [rbp-38h] BYREF

  CLockExclusive<DLT_QUEUE>::CLockExclusive<DLT_QUEUE>(v18);
  v12 = 0;
  if ( !a1
    || (*((_DWORD *)a1 + 122) & 1) == 0
    && ((vAdjustDelegatePriority(a1), (*((_DWORD *)a1 + 302) & 0x20) == 0)
     || (unsigned int)ProcessSuspendedEventMessage(a1, a3, a4)) )
  {
    v13 = (LARGE_INTEGER *)AllocQEntryEx((struct tagMLIST *)(a2 + 24), 0LL, 0);
    if ( v13 )
    {
      if ( a4 )
      {
        v16 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 120);
        if ( v14 )
          v15 = *(_QWORD *)(v14 + 16);
        else
          v15 = *(_QWORD *)(a2 + 96);
        v16 = *(_DWORD *)(*(_QWORD *)(v15 + 424) + 280LL);
      }
      StoreQMessage(v13, a4, a5, (LARGE_INTEGER)a6, a7, 0, 0LL, a3, 0LL, 0, a8, v16, 0LL, 0LL);
      v13[13].QuadPart = (LONGLONG)a1;
      if ( a3 == 20 )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CTouchProcessor::ReferenceMsgDataExternal)(
          gpTouchProcessor,
          (LARGE_INTEGER)a7.QuadPart,
          3LL,
          v13);
      if ( !a1 )
      {
        SetWakeBit(*(_QWORD *)(a2 + 88), 0x2040u);
        a1 = *(struct tagTHREADINFO **)(a2 + 96);
      }
      SetWakeBit((__int64)a1, 0x2040u);
      v12 = 1;
    }
  }
  tagObjLock::UnLock(v18[1]);
  tagObjLock::UnLock(v18[0]);
  return v12;
}
