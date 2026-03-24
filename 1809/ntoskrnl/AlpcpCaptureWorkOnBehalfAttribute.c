/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B5220
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1406363E0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PsGetWorkOnBehalfThread @ 0x1400ACD14 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400ACDC0 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x1400ACF20 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACF80 (PoEnergyEstimationEnabled.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *WorkOnBehalfThread; // rax
  struct _KTHREAD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v8);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v5 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&IoThreadToProcess(CurrentThread)[2].ThreadSeed[14] || PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v5, &v9);
    v6 = v9;
    goto LABEL_6;
  }
  v6 = 0LL;
LABEL_6:
  if ( v8 )
    ObfDereferenceObject(v4);
  *(_QWORD *)(a1 + 64) = v6;
  return 0LL;
}
