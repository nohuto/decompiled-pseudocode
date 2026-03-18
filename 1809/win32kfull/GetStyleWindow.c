/*
 * XREFs of GetStyleWindow @ 0x1C0039EC0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     UnredirectDCEs @ 0x1C000E880 (UnredirectDCEs.c)
 *     UpdateRedirectedDCE @ 0x1C000E950 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C000EE10 (SpbCheckDce.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0021674 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     NtUserRedrawWindow @ 0x1C003AE70 (NtUserRedrawWindow.c)
 *     CalcVisRgn @ 0x1C003C7D0 (CalcVisRgn.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A680 (UserGetRedirectedWindowOrigin.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 *     xxxDesktopPaintCallback @ 0x1C0131690 (xxxDesktopPaintCallback.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     xxxPrintWindow @ 0x1C01D43EC (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0217FA0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C02184C0 (NtUserHwndSetRedirectionInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( !a1 )
    return v2;
  do
  {
    if ( ((unsigned __int8)a2 & *(_BYTE *)(*(_QWORD *)(v2 + 40) + BYTE1(a2) + 16LL)) != 0 )
      break;
    v2 = *(_QWORD *)(v2 + 80);
  }
  while ( v2 );
  if ( v2 && (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x2FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
