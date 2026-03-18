/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1C00C7314
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0027220 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C008A530 (NtUserSetWindowCompositionAttribute.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C008AB90 (NtUserGetWindowCompositionAttribute.c)
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 */

_BOOL8 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // r9

  return (unsigned int)IsTopLevelWindow(a1)
      || (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) != 0 && GetTopLevelWindow(v1);
}
