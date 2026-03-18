/*
 * XREFs of IsWindowBroadcastingDpiToChildrenX @ 0x1C00EDC84
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     NtUserIsWindowBroadcastingDpiToChildren @ 0x1C00EDBD0 (NtUserIsWindowBroadcastingDpiToChildren.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E796C (xxxAppAdjustDpiCandidateRect.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsWindowBroadcastingDpiToChildrenX(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v3; // r10

  v1 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2
    && (unsigned int)IsTopLevelWindow(a1)
    && (*(_DWORD *)(v3 + 232) & 0x20000000) != 0 )
  {
    return 1;
  }
  return v1;
}
