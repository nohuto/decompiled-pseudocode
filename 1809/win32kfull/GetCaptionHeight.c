/*
 * XREFs of GetCaptionHeight @ 0x1C00A7388
 * Callers:
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C022E368 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0232510 (xxxMenuBarDraw.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v4 + 16) & 8) == 0 )
    return 0LL;
  v5 = *(_DWORD *)(v4 + 232);
  if ( *(char *)(v4 + 24) < 0 )
  {
    if ( (v5 & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v4 + 288) & 0xF) == 0
           && (v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v10 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v7 = 22LL;
  }
  else
  {
    if ( (v5 & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v4 + 288) & 0xF) == 0
           && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
    }
    v7 = 2LL;
  }
  return GetDpiDependentMetric(v7, WindowDpiLastNotify, a3);
}
