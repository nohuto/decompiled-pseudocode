/*
 * XREFs of GetCaptionHeight @ 0x1C0093074
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C0246B40 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxMenuBarDraw @ 0x1C024B184 (xxxMenuBarDraw.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetCaptionHeight(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v2 + 16) & 8) == 0 )
    return 0LL;
  if ( *(char *)(v2 + 24) < 0 )
  {
    if ( __CFSHR__(*(_DWORD *)(v2 + 232), 28) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v2 + 288) & 0xF) == 0
           && (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v4 = 22LL;
  }
  else
  {
    if ( __CFSHR__(*(_DWORD *)(v2 + 232), 28) )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v2 + 288) & 0xF) == 0
           && (v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
    }
    v4 = 2LL;
  }
  return GetDpiDependentMetric(v4, WindowDpiLastNotify);
}
