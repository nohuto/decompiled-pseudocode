/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x1C012EB14
 * Callers:
 *     NtUserShowCursor @ 0x1C012EAD0 (NtUserShowCursor.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  struct tagTHREADINFO *CurrentLogicalCursorThread; // r8
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  unsigned int v10; // ebx

  v4 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1, a2, a3, a4);
  v6 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  ++gdwDeferWinEvent;
  v7 = *((_DWORD *)CurrentLogicalCursorThread + 188);
  v8 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( v4 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 188) = v7 + 1;
    ++*(_DWORD *)(v8 + 392);
    if ( v6 != gpqCursor )
      goto LABEL_7;
    v9 = *(_DWORD *)(v6 + 392) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 188) = v7 - 1;
    --*(_DWORD *)(v8 + 392);
    if ( v6 != gpqCursor )
      goto LABEL_7;
    v9 = *(_DWORD *)(v6 + 392) == -1;
  }
  if ( v9 )
    zzzUpdateCursorImage();
LABEL_7:
  v10 = *(_DWORD *)(v6 + 392);
  zzzEndDeferWinEventNotify();
  return v10;
}
