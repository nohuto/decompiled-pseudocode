/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x14089B150
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiProcessWsInSwapSupport @ 0x1400D9A20 (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwTraceWorkingSetSwap @ 0x140673710 (EtwTraceWorkingSetSwap.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406ED9BC (MiFreeWorkingSetSwapContext.c)
 */

LONG_PTR __fastcall MiInSwapSharedWorkingSetWorker(__int64 a1)
{
  __int64 v2; // rdi
  __int64 ProcessPartition; // rax
  _DWORD v5[10]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+48h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  memset(v5, 0, sizeof(v5));
  v2 = *(_QWORD *)(a1 + 48);
  KiStackAttachProcess((_KPROCESS *)v2, 0, (__int64)v6);
  v5[0] = 1;
  EtwTraceWorkingSetSwap((PEPROCESS)v2, 3, (__int64)v5);
  _InterlockedExchange((volatile __int32 *)(v2 + 1888), 1000);
  MiProcessWsInSwapSupport(*(_QWORD *)(a1 + 8), 1u);
  _InterlockedExchange((volatile __int32 *)(v2 + 1888), 0);
  v5[8] = -1;
  EtwTraceWorkingSetSwap((PEPROCESS)v2, 1, (__int64)v5);
  KiUnstackDetachProcess((struct _KTHREAD *)v6, 0);
  ProcessPartition = MiGetProcessPartition(v2);
  *(_QWORD *)(a1 + 48) = 0LL;
  MiFreeWorkingSetSwapContext(ProcessPartition, a1);
  return ObfDereferenceObjectWithTag((PVOID)v2, 0x73576D4Du);
}
