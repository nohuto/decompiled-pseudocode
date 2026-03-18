/*
 * XREFs of MiInSwapSharedWorkingSetWorker @ 0x14089B930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiProcessWsInSwapSupport @ 0x1400F468C (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406A4F30 (MiFreeWorkingSetSwapContext.c)
 *     EtwTraceWorkingSetSwap @ 0x1406A5714 (EtwTraceWorkingSetSwap.c)
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
