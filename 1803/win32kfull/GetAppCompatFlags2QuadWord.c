/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C00F0E40
 * Callers:
 *     NtUserEnableMouseInPointer @ 0x1C00F0D40 (NtUserEnableMouseInPointer.c)
 *     W32kCddDisableGdiHwAcceleration @ 0x1C00F0E00 (W32kCddDisableGdiHwAcceleration.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0135B88 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C01CD9C0 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(__int64 ThreadWin32Thread, __int64 a2)
{
  if ( !ThreadWin32Thread )
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  return *(_QWORD *)(ThreadWin32Thread + 640);
}
