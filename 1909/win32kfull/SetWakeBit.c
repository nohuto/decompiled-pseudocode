/*
 * XREFs of SetWakeBit @ 0x1C0070EE0
 * Callers:
 *     _ReplyMessage @ 0x1C0005410 (_ReplyMessage.c)
 *     SendMsgCleanup @ 0x1C000E0A0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C000E174 (xxxReceiverDied.c)
 *     _PostThreadMessageEx @ 0x1C000E634 (_PostThreadMessageEx.c)
 *     xxxSystemTimerProc @ 0x1C0015130 (xxxSystemTimerProc.c)
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ClearSendMessages @ 0x1C00380E0 (ClearSendMessages.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     IPostQuitMessage @ 0x1C0079FE0 (IPostQuitMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C0086374 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0136904 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     PostUpdateKeyStateEvent @ 0x1C01388DC (PostUpdateKeyStateEvent.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E2BE8 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01EBCE0 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     _DelegateCapturePointers @ 0x1C01F0FCC (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C02005C0 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C023AF30 (IncPaintCount.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E588 (UpdateRawMouseMode.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004F1CC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     SetForegroundPriority @ 0x1C02119B0 (SetForegroundPriority.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  int v6; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 480);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 96LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 424));
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 424));
    if ( (a2 & 0x401) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 104LL) = a1;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) |= a2;
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 416);
      v6 = *(_DWORD *)(v5 + 12);
      if ( (v6 & 0x400000) != 0
        && ((a2 & 2) == 0 || *(_DWORD *)(gpsi + 4960LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 4964LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v5 + 12) = v6 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1LL);
      }
    }
    v2 = *(_QWORD *)(a1 + 440);
    if ( (*(_WORD *)(v2 + 10) & a2) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 728), 2, 0);
  }
  return v2;
}
