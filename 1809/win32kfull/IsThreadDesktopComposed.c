/*
 * XREFs of IsThreadDesktopComposed @ 0x1C0043B10
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x1C0043AC0 (UserIsCurrentThreadDesktopComposed.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     EditionMouseSpeedHitTest @ 0x1C006E510 (EditionMouseSpeedHitTest.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxSetDeskWallpaper @ 0x1C012E4C4 (xxxSetDeskWallpaper.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01EF8FC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxPointerWindowHitTest @ 0x1C01F0930 (xxxPointerWindowHitTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 456);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(**(_QWORD **)(v1 + 8) + 64LL) & 1;
  return result;
}
