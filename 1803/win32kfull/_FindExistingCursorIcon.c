/*
 * XREFs of _FindExistingCursorIcon @ 0x1C0015514
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C0015280 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     SearchIconCache @ 0x1C00155B0 (SearchIconCache.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 */

__int64 __fastcall FindExistingCursorIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v7; // bx
  __int64 result; // rax
  __int64 CurrentLogicalCursorThread; // rax

  v7 = a1;
  result = 0LL;
  if ( *(_DWORD *)(a4 + 8) && (_WORD)a1 )
  {
    CurrentLogicalCursorThread = GetCurrentLogicalCursorThread(a1);
    result = SearchIconCache(*(_QWORD *)(*(_QWORD *)(CurrentLogicalCursorThread + 416) + 728LL), v7, a2, a3, a4);
    if ( !result )
      return SearchIconCache(gpcurFirst, v7, a2, a3, a4);
  }
  return result;
}
