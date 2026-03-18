/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9728
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3860 (AlpcpCaptureAttributes.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14000D5BC (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x14000D668 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x14000E540 (PoEnergyEstimationEnabled.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v4; // rbx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v7);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v5 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&IoThreadToProcess(CurrentThread)[2].IdealNode[2] || PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v5, &v8);
  }
  if ( v7 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v8;
  return 0LL;
}
