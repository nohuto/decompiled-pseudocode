/*
 * XREFs of SetWakeBit @ 0x1C001C970
 * Callers:
 *     _ReplyMessage @ 0x1C0004C50 (_ReplyMessage.c)
 *     SendMsgCleanup @ 0x1C000BBC0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C000BC90 (xxxReceiverDied.c)
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     ClearSendMessages @ 0x1C0035CC0 (ClearSendMessages.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0057B60 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSystemTimerProc @ 0x1C0062FE0 (xxxSystemTimerProc.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     IPostQuitMessage @ 0x1C00BA650 (IPostQuitMessage.c)
 *     PostUpdateKeyStateEvent @ 0x1C00C073C (PostUpdateKeyStateEvent.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01AB650 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01B3EA0 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     _DelegateCapturePointers @ 0x1C01B88B4 (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C01FAEBC (IncPaintCount.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001DE64 (UpdateRawMouseMode.c)
 *     SetForegroundPriority @ 0x1C005FD30 (SetForegroundPriority.c)
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
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 424));
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 424));
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 96LL) = a1;
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
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 720), 2, 0);
  }
  return v2;
}
