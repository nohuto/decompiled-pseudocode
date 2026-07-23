/*
 * XREFs of PspExecuteJobFreezeThawCallback @ 0x140108BE0
 * Callers:
 *     <none>
 * Callees:
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 */

__int64 __fastcall PspExecuteJobFreezeThawCallback(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  struct _KPROCESS *v5; // r9
  struct _KPROCESS *NextJobProcess; // rax
  struct _KPROCESS *v7; // rbx
  int v9; // eax
  char v10[40]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = (struct _KPROCESS *)PspGetNextJobProcess(a1, CurrentThread, v10, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    v9 = PspChangeProcessExecutionState(NextJobProcess);
    if ( v9 < 0 )
      *a2 = v9;
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
