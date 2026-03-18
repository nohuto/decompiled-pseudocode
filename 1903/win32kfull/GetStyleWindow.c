/*
 * XREFs of GetStyleWindow @ 0x1C0025520
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00245E0 (UserGetRedirectedWindowOrigin.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00253B4 (xxxSimpleDoSyncPaint.c)
 *     UnredirectDCEs @ 0x1C002702C (UnredirectDCEs.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00983A4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UpdateRedirectedDCE @ 0x1C00EE8D0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00EEE80 (SpbCheckDce.c)
 *     xxxDesktopPaintCallback @ 0x1C013CC30 (xxxDesktopPaintCallback.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C022FE30 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C0230350 (NtUserHwndSetRedirectionInfo.c)
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
    v2 = *(_QWORD *)(v2 + 104);
  }
  while ( v2 );
  if ( v2 && (*(_WORD *)(*(_QWORD *)(v2 + 40) + 42LL) & 0x3FFF) == 0x29D && v2 != a1 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return v2;
}
