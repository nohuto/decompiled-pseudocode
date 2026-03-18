/*
 * XREFs of NtUserValidateTimerCallback @ 0x1C00F76A0
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 NtUserValidateTimerCallback()
{
  __int64 v0; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rcx
  __int64 *ThreadWin32Thread; // rax
  int v6; // eax
  HANDLE ProcessId; // rax
  struct _LIST_ENTRY *v8; // rcx

  v0 = 1LL;
  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  if ( *(_DWORD *)(v2 + 624) <= 0x501u )
    v6 = *(_DWORD *)(v2 + 640);
  else
    v6 = 0;
  if ( (v6 & 0x1000000) == 0
    || (*(_DWORD *)(v2 + 480) & 0xC) != 0
    || (ProcessId = PsGetProcessId(**(PEPROCESS **)(v2 + 416)),
        v8 = (struct _LIST_ENTRY *)gpidLogon,
        ProcessId == (HANDLE)gpidLogon) )
  {
    v8 = gtmrListHead;
    v0 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v0;
}
