/*
 * XREFs of SetWakeBit @ 0x1C0037440
 * Callers:
 *     _ReplyMessage @ 0x1C0002570 (_ReplyMessage.c)
 *     ClearSendMessages @ 0x1C001D3C8 (ClearSendMessages.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     SendMsgCleanup @ 0x1C00BC690 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00BC764 (xxxReceiverDied.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     WakeSomeone @ 0x1C00D435C (WakeSomeone.c)
 *     _PostThreadMessageEx @ 0x1C00D4A14 (_PostThreadMessageEx.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     PostUpdateKeyStateEvent @ 0x1C00D5A24 (PostUpdateKeyStateEvent.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00D66A8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxSystemTimerProc @ 0x1C00DE230 (xxxSystemTimerProc.c)
 *     IPostQuitMessage @ 0x1C00EAD80 (IPostQuitMessage.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01CE7A8 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01D6710 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     _DelegateCapturePointers @ 0x1C01DB518 (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C0222FB4 (IncPaintCount.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 *     UpdateRawMouseMode @ 0x1C00D20E4 (UpdateRawMouseMode.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  int v6; // r8d

  LODWORD(v2) = *(_DWORD *)(a1 + 488);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 88LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 432));
    }
    if ( (a2 & 2) != 0 )
      CaptureLogicalCursorPosToQMouseMove(*(_QWORD *)(a1 + 432));
    if ( (a2 & 0x401) != 0 )
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 96LL) = a1;
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) |= a2;
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 4LL) |= a2;
    if ( (a2 & 0x1C07) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 424);
      v6 = *(_DWORD *)(v5 + 12);
      if ( (v6 & 0x400000) != 0
        && ((a2 & 2) == 0 || *(_DWORD *)(gpsi + 4960LL) != gptSSCursor[0]
                          || *(_DWORD *)(gpsi + 4964LL) != gptSSCursor[1]) )
      {
        *(_DWORD *)(v5 + 12) = v6 & 0xFFBFFFFF;
        SetForegroundPriority(a1, 1LL);
      }
    }
    v2 = *(_QWORD *)(a1 + 448);
    if ( (*(_WORD *)(v2 + 10) & a2) != 0 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 736), 2, 0);
  }
  return v2;
}
