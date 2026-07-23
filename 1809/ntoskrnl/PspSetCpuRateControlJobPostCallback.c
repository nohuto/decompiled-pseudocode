/*
 * XREFs of PspSetCpuRateControlJobPostCallback @ 0x14068E490
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14068E660 (PspGetNextJobProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14068E758 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetCpuRateControlJobPostCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 NextJobProcess; // rax
  __int64 v7; // rbx
  char v9[40]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v4 = (a2 + 128) & -(__int64)(a2 != 0);
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    PspSetProcessSchedulingGroup(NextJobProcess, v4);
    v5 = v7;
    a1 = v3;
  }
  return 0LL;
}
