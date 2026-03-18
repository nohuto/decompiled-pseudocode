/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C0108D28
 * Callers:
 *     xxxDesktopThread @ 0x1C000D660 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DCE0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C00B437C (xxxCreateWindowStation.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C010889C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 */

__int64 __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  struct tagWND *v2; // rdi
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(struct tagWND **)(a1 + 8);
  SetVisible(v2, 0);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow((ULONG_PTR)v2);
  return result;
}
