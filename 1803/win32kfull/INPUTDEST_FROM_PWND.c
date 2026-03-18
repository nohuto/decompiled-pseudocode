/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C00E78F0
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C0073F40 (EditionMouseSpeedHitTest.c)
 *     xxxSpeedHitTest @ 0x1C0074020 (xxxSpeedHitTest.c)
 *     xxxDCompSpeedHitTest @ 0x1C00741EC (xxxDCompSpeedHitTest.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     GetPTPShellTarget @ 0x1C01A14D0 (GetPTPShellTarget.c)
 *     ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A78D0 (-DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01B8568 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01B8C08 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01B98A0 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01B9998 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01BA550 (EditionIsPointerInputRedirected.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01BAE44 (xxxDoDeferredPointerActivate.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01BE18C (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     EditionPointerWindowHitTest @ 0x1C01CB620 (EditionPointerWindowHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01CC154 (xxxPointerSpeedHitTest.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01D64DC (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC (-xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset(a1, 0, 0xB0uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 9) = a2;
    a1[21] = 2;
  }
  return a1;
}
