/*
 * XREFs of GetLastTopMostWindow @ 0x1C001AECC
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00192CC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0019830 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0019C98 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C001A430 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C001AD5C (CalcForegroundInsertAfter.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0139FEC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4DC4 (_GetNextQueueWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v2; // rdx
  __int64 i; // r8

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1)) == 0 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(gptiCurrent);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v2 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v2 || (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v2 + 88); i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 24LL) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v2 = i;
  return v2;
}
