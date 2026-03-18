/*
 * XREFs of GetStyleWindow @ 0x1C002B990
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C002AA50 (UserGetRedirectedWindowOrigin.c)
 *     xxxSimpleDoSyncPaint @ 0x1C002B824 (xxxSimpleDoSyncPaint.c)
 *     UnredirectDCEs @ 0x1C002D49C (UnredirectDCEs.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0039174 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     CalcVisRgn @ 0x1C00662C0 (CalcVisRgn.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     UnsetLayeredWindow @ 0x1C00896A4 (UnsetLayeredWindow.c)
 *     UpdateRedirectedDCE @ 0x1C00CF6D0 (UpdateRedirectedDCE.c)
 *     SpbCheckDce @ 0x1C00CFC80 (SpbCheckDce.c)
 *     xxxDesktopPaintCallback @ 0x1C01167A0 (xxxDesktopPaintCallback.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     xxxPrintWindow @ 0x1C01E97EC (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C022F810 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C022FD30 (NtUserHwndSetRedirectionInfo.c)
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
