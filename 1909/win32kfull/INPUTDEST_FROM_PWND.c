/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C0116D7C
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C002CA00 (EditionMouseSpeedHitTest.c)
 *     xxxSpeedHitTest @ 0x1C002CB10 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C002CCD4 (xxxDCompSpeedHitTest.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DD32C (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01F07DC (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1408 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F20FC (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F21EC (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01F2DE0 (EditionIsPointerInputRedirected.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F3688 (xxxDoDeferredPointerActivate.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01F6D44 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     GetPTPShellTarget @ 0x1C0202DA0 (GetPTPShellTarget.c)
 *     EditionPointerWindowHitTest @ 0x1C0205B40 (EditionPointerWindowHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C0206614 (xxxPointerSpeedHitTest.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211A10 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023E62C (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
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
