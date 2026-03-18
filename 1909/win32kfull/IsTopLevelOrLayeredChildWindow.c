/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00689E4
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C00277B0 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C0027E10 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1)
      || (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v1);
}
