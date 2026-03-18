/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C000B050
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000BDB0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThread @ 0x1C000D5F0 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000DB5C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 * Callees:
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  struct tagWND *v2; // rdi
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(struct tagWND **)(a1 + 8);
  SetVisible(v2);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow(v2);
  return result;
}
