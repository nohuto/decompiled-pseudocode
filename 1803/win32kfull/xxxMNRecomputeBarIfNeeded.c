/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C0205270
 * Callers:
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C01FECA4 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxGetMenuItemRect @ 0x1C02050FC (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C020537C (xxxMenuItemFromPoint.c)
 *     xxxHiliteMenuItem @ 0x1C020B944 (xxxHiliteMenuItem.c)
 * Callees:
 *     xxxMenuBarCompute @ 0x1C000FB5C (xxxMenuBarCompute.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 *     GetCaptionHeight @ 0x1C00F6358 (GetCaptionHeight.c)
 */

__int64 __fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int *v7; // r8
  unsigned int WindowDpiLastNotify; // eax
  __int64 v9; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  if ( (*(_DWORD *)(result + 40) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(**(_QWORD **)a2 + 80LL) != a1
      || !*(_DWORD *)(**(_QWORD **)a2 + 64LL)
      || (result = *(_QWORD *)a2, !*(_DWORD *)(**(_QWORD **)a2 + 68LL)) )
    {
      v7 = *(int **)(a1 + 40);
      if ( (v7[58] & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( (v7[72] & 0xF) == 0
             && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return xxxMenuBarCompute(
               a2,
               a1,
               WindowBordersForDpi + CaptionHeight,
               WindowBordersForDpi,
               *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL)
             - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL)
             - 2 * WindowBordersForDpi);
    }
  }
  return result;
}
