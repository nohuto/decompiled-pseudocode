/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0027140
 * Callers:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002404C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C00242D4 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C0026EF4 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0088A30 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C01011F8 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0109C54 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0135350 (-CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

struct tagTHREADINFO *_GetCurrentLogicalCursorThread(void)
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
  if ( (*(_DWORD *)(v1 + 1224) & 0x4000000) != 0 )
    return *(struct tagTHREADINFO **)(v1 + 1488);
  else
    return (struct tagTHREADINFO *)v1;
}
