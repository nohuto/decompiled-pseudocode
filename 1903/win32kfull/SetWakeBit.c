/*
 * XREFs of SetWakeBit @ 0x1C00CF810
 * Callers:
 *     _ReplyMessage @ 0x1C0005410 (_ReplyMessage.c)
 *     SendMsgCleanup @ 0x1C000E9F0 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C000EAC4 (xxxReceiverDied.c)
 *     _PostThreadMessageEx @ 0x1C000F734 (_PostThreadMessageEx.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C00422E4 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 *     PostUpdateKeyStateEvent @ 0x1C0082ADC (PostUpdateKeyStateEvent.c)
 *     xxxSystemTimerProc @ 0x1C0083D00 (xxxSystemTimerProc.c)
 *     ClearSendMessages @ 0x1C00973B0 (ClearSendMessages.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     IPostQuitMessage @ 0x1C00DA2F0 (IPostQuitMessage.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E2D68 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01EBE60 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 *     _DelegateCapturePointers @ 0x1C01F114C (_DelegateCapturePointers.c)
 *     xxxCancelTrackingForThread @ 0x1C0200870 (xxxCancelTrackingForThread.c)
 *     IncPaintCount @ 0x1C023B550 (IncPaintCount.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E6F8 (UpdateRawMouseMode.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00AE3AC (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     SetForegroundPriority @ 0x1C0211EF0 (SetForegroundPriority.c)
 */

int __fastcall SetWakeBit(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rax
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rdx

  LODWORD(v2) = *(_DWORD *)(a1 + 480);
  if ( (v2 & 1) == 0 )
  {
    if ( (a2 & 6) != 0 )
    {
      IS_USERCRIT_OWNED_SHAREDONLY();
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 96LL) = a1;
      UpdateRawMouseMode(*(_QWORD *)(a1 + 424), v7);
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
