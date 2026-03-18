/*
 * XREFs of xxxMNRecomputeBarIfNeeded @ 0x1C0246B40
 * Callers:
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxGetMenuItemRect @ 0x1C02469A8 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C0246C4C (xxxMenuItemFromPoint.c)
 *     xxxHiliteMenuItem @ 0x1C024D8B0 (xxxHiliteMenuItem.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C0093074 (GetCaptionHeight.c)
 *     xxxMenuBarCompute @ 0x1C00FC124 (xxxMenuBarCompute.c)
 */

__int64 *__fastcall xxxMNRecomputeBarIfNeeded(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *result; // rax
  _DWORD *v7; // r8
  unsigned int WindowDpiLastNotify; // eax
  __int64 v9; // rax
  unsigned int WindowBordersForDpi; // ebx
  int CaptionHeight; // eax

  result = *(__int64 **)(**a2 + 40);
  if ( (*((_DWORD *)result + 10) & 0x80u) == 0 )
  {
    if ( *(_QWORD *)(**a2 + 80) != a1 || !*(_DWORD *)(**a2 + 64) || (result = *a2, !*(_DWORD *)(**a2 + 68)) )
    {
      v7 = *(_DWORD **)(a1 + 40);
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
      WindowBordersForDpi = GetWindowBordersForDpi(v7[7], (unsigned int)v7[6], (__int64)v7, a4, WindowDpiLastNotify);
      CaptionHeight = GetCaptionHeight(a1);
      return (__int64 *)xxxMenuBarCompute(
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
