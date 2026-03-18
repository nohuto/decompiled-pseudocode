/*
 * XREFs of GetCaptionHeight @ 0x1C00F6358
 * Callers:
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0205270 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C0209284 (xxxMenuBarDraw.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v2 + 16) & 8) == 0 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 232);
  if ( *(char *)(v2 + 24) < 0 )
  {
    if ( (v3 & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v2 + 288) & 0xF) == 0
           && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v5 = 22LL;
  }
  else
  {
    if ( (v3 & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v2 + 288) & 0xF) == 0
           && (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v5 = 2LL;
  }
  return GetDpiDependentMetric(v5, WindowDpiLastNotify);
}
