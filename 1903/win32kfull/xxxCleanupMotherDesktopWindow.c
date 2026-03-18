/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C01415E0
 * Callers:
 *     xxxDesktopThread @ 0x1C000DE70 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000E3DC (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C000ED9C (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 * Callees:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
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
    return xxxDestroyWindow((__int64 *)v2);
  return result;
}
