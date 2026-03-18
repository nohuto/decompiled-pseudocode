/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C0246400
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F2F0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxGetMenuItemRect @ 0x1C0246268 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C024650C (xxxMenuItemFromPoint.c)
 *     xxxHiliteMenuItem @ 0x1C024D170 (xxxHiliteMenuItem.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C0033D9C (GetCaptionHeight.c)
 *     GetWindowBordersForDpi @ 0x1C012DCF8 (GetWindowBordersForDpi.c)
 *     xxxMenuBarCompute @ 0x1C012DEE0 (xxxMenuBarCompute.c)
 */

__int64 *__fastcall xxxMNRecomputeBarIfNeeded(ULONG_PTR a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  int *v7; // r8
  unsigned int WindowDpiLastNotify; // eax
  __int64 v9; // rax
  int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = *(__int64 **)(**a2 + 40);
  if ( (*((_DWORD *)result + 10) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(**a2 + 80) != a1 || !*(_DWORD *)(**a2 + 64) || (result = *a2, !*(_DWORD *)(**a2 + 68)) )
    {
      v7 = *(int **)(a1 + 40);
      if ( (v7[58] & 0x8000000) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
      }
      else if ( (v7[72] & 0xF) == 0
             && (v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
      }
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return (__int64 *)xxxMenuBarCompute(
                          a2,
                          a1,
                          (unsigned int)(WindowBordersForDpi + CaptionHeight),
                          WindowBordersForDpi,
                          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL)
                        - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL)
                        - 2 * WindowBordersForDpi);
    }
  }
  return result;
}
