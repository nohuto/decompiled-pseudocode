/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C00F0F30
 * Callers:
 *     NtUserEnableMouseInPointer @ 0x1C00F0E30 (NtUserEnableMouseInPointer.c)
 *     W32kCddDisableGdiHwAcceleration @ 0x1C00F0EF0 (W32kCddDisableGdiHwAcceleration.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01E2634 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C0207F44 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0211E68 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread, __int64 a2, __int64 a3)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  return *(_QWORD *)(ThreadWin32Thread + 640);
}
