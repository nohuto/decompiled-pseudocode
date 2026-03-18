/*
 * XREFs of ThreadLockExchange @ 0x1C00DF110
 * Callers:
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0030A40 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00C2DC0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00C2F90 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00C30E0 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00C324C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     TimersProc @ 0x1C00D37B0 (TimersProc.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00DEBF0 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     DestroyThreadsTimers @ 0x1C00EB2B0 (DestroyThreadsTimers.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01D3384 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     EditionPointerParentNotify @ 0x1C01DD430 (EditionPointerParentNotify.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1C020F0B8 (xxxMNSetTop.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C0222EE0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00DF140 (HMUnlockObject.c)
 */

__int64 __fastcall ThreadLockExchange(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( result )
    return HMUnlockObject(result);
  return result;
}
