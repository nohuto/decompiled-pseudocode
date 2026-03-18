/*
 * XREFs of _GetCurrentLogicalCursorThread @ 0x1C0015808
 * Callers:
 *     _CreateEmptyCursorObject @ 0x1C00146DC (_CreateEmptyCursorObject.c)
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     _FindExistingCursorIcon @ 0x1C0015514 (_FindExistingCursorIcon.c)
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     zzzSetCursorPos @ 0x1C0067194 (zzzSetCursorPos.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C006DAE0 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00FA898 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     zzzShowCursor @ 0x1C010BEA4 (zzzShowCursor.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 GetCurrentLogicalCursorThread()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v1 + 1200) & 0x4000000) != 0 )
    return *(_QWORD *)(v1 + 1472);
  else
    return v1;
}
