/*
 * XREFs of zzzShowCursor @ 0x1C010BEA4
 * Callers:
 *     NtUserShowCursor @ 0x1C010BE70 (NtUserShowCursor.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzShowCursor(int a1)
{
  __int64 CurrentLogicalCursorThread; // r8
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  unsigned int v7; // ebx

  CurrentLogicalCursorThread = GetCurrentLogicalCursorThread();
  v3 = *(_QWORD *)(CurrentLogicalCursorThread + 424);
  ++gdwDeferWinEvent;
  v4 = *(_DWORD *)(CurrentLogicalCursorThread + 744);
  v5 = *(_QWORD *)(CurrentLogicalCursorThread + 424);
  if ( a1 )
  {
    *(_DWORD *)(CurrentLogicalCursorThread + 744) = v4 + 1;
    ++*(_DWORD *)(v5 + 384);
    if ( v3 != gpqCursor )
      goto LABEL_6;
    v6 = *(_DWORD *)(v3 + 384) == 0;
  }
  else
  {
    *(_DWORD *)(CurrentLogicalCursorThread + 744) = v4 - 1;
    --*(_DWORD *)(v5 + 384);
    if ( v3 != gpqCursor )
      goto LABEL_6;
    v6 = *(_DWORD *)(v3 + 384) == -1;
  }
  if ( v6 )
    zzzUpdateCursorImage();
LABEL_6:
  v7 = *(_DWORD *)(v3 + 384);
  zzzEndDeferWinEventNotify();
  return v7;
}
