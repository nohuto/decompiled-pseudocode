/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C007239C
 * Callers:
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0071350 (NtUserSetWindowCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00734E0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0078020 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1)
      || (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v1);
}
