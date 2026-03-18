/*
 * XREFs of PspExecuteJobFreezeThawCallback @ 0x1400EAF30
 * Callers:
 *     <none>
 * Callees:
 *     PspChangeProcessExecutionState @ 0x140687F94 (PspChangeProcessExecutionState.c)
 *     PspGetNextJobProcess @ 0x14068A0A0 (PspGetNextJobProcess.c)
 */

__int64 __fastcall PspExecuteJobFreezeThawCallback(__int64 a1, int *a2)
{
  __int64 v3; // rsi
  struct _KPROCESS *v4; // r9
  struct _KTHREAD *CurrentThread; // rbp
  struct _KPROCESS *v6; // rax
  struct _KPROCESS *v7; // rbx
  int v9; // eax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v10, 0, 24);
  v3 = a1;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    v6 = (struct _KPROCESS *)((__int64 (__fastcall *)(__int64, struct _KTHREAD *, _BYTE *, struct _KPROCESS *))PspGetNextJobProcess)(
                               a1,
                               CurrentThread,
                               v10,
                               v4);
    v7 = v6;
    if ( !v6 )
      break;
    v9 = PspChangeProcessExecutionState(v6);
    if ( v9 < 0 )
      *a2 = v9;
    v4 = v7;
    a1 = v3;
  }
  return 0LL;
}
