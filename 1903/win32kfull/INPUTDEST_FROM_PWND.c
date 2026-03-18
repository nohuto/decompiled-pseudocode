/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C013D0BC
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C0026590 (EditionMouseSpeedHitTest.c)
 *     xxxSpeedHitTest @ 0x1C00266A0 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD4AC (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F095C (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1588 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F227C (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F236C (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01F2F60 (EditionIsPointerInputRedirected.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3808 (xxxDoDeferredPointerActivate.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01F6FF4 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     GetPTPShellTarget @ 0x1C0203050 (GetPTPShellTarget.c)
 *     EditionPointerWindowHitTest @ 0x1C0205DF0 (EditionPointerWindowHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C02068C4 (xxxPointerSpeedHitTest.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211F50 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023EC4C (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  memset(a1, 0, 0x78uLL);
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
    a1[29] = *(_DWORD *)(*(_QWORD *)(v4 + 416) + 1080LL);
  }
  return a1;
}
