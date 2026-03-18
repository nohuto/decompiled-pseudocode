/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x1C012C4E4
 * Callers:
 *     NtUserShowCursor @ 0x1C012C4A0 (NtUserShowCursor.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct tagTHREADINFO *CurrentLogicalCursorThread; // r8
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  bool v7; // zf
  unsigned int v8; // ebx

  v2 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1, a2);
  v4 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  ++gdwDeferWinEvent;
  v5 = *((_DWORD *)CurrentLogicalCursorThread + 190);
  v6 = *((_QWORD *)CurrentLogicalCursorThread + 54);
  if ( v2 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 190) = v5 + 1;
    ++*(_DWORD *)(v6 + 384);
    if ( v4 != gpqCursor )
      goto LABEL_6;
    v7 = *(_DWORD *)(v4 + 384) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 190) = v5 - 1;
    --*(_DWORD *)(v6 + 384);
    if ( v4 != gpqCursor )
      goto LABEL_6;
    v7 = *(_DWORD *)(v4 + 384) == -1;
  }
  if ( v7 )
    zzzUpdateCursorImage();
LABEL_6:
  v8 = *(_DWORD *)(v4 + 384);
  zzzEndDeferWinEventNotify();
  return v8;
}
