/*
 * XREFs of ApiSetCheckCursorClipAccess @ 0x1C005993C
 * Callers:
 *     NtUserLockCursor @ 0x1C0059860 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C0072D80 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C00B6280 (NtUserGetClipCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetCheckCursorClipAccess(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (int)IsCheckCursorClipAccessSupported() >= 0 )
    return (unsigned int)CheckCursorClipAccess(a1, a2) != 0;
  return v4;
}
