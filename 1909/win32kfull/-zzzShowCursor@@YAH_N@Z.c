/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x1C0109C54
 * Callers:
 *     NtUserShowCursor @ 0x1C0109C10 (NtUserShowCursor.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0027140 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(char a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // r8
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ebx

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  ++gdwDeferWinEvent;
  v4 = *((_DWORD *)CurrentLogicalCursorThread + 188);
  v5 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( a1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 188) = v4 + 1;
    ++*(_DWORD *)(v5 + 392);
    if ( v3 != gpqCursor )
      goto LABEL_7;
    v6 = *(_DWORD *)(v3 + 392) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 188) = v4 - 1;
    --*(_DWORD *)(v5 + 392);
    if ( v3 != gpqCursor )
      goto LABEL_7;
    v6 = *(_DWORD *)(v3 + 392) == -1;
  }
  if ( v6 )
    zzzUpdateCursorImage();
LABEL_7:
  v7 = *(_DWORD *)(v3 + 392);
  zzzEndDeferWinEventNotify();
  return v7;
}
