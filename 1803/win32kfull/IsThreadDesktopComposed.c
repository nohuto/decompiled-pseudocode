/*
 * XREFs of IsThreadDesktopComposed @ 0x1C0066CF8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     UserIsCurrentThreadDesktopComposed @ 0x1C0066CB0 (UserIsCurrentThreadDesktopComposed.c)
 *     EditionMouseSpeedHitTest @ 0x1C0073F40 (EditionMouseSpeedHitTest.c)
 *     ?NotifyDWMOfWallpaperChange@@YAHXZ @ 0x1C010D174 (-NotifyDWMOfWallpaperChange@@YAHXZ.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01CB56C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxPointerWindowHitTest @ 0x1C01CC520 (xxxPointerWindowHitTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 448);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(**(_QWORD **)(v1 + 8) + 52LL) & 1;
  return result;
}
