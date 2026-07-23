/*
 * XREFs of EtwpOpenLogger @ 0x140113820
 * Callers:
 *     NtTraceEvent @ 0x1400CB590 (NtTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1401132B0 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C82C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x14017D004 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14030E860 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14030E9CC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EE00 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp

  *a4 = 0;
  if ( (_BYTE)a3 == 1 || KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = a1;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8LL * a1), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = a1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 456) + 8 * v8) & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v8);
  LOBYTE(a3) = *a4;
  EtwpCloseLogger(a1, a2, a3);
  return 0LL;
}
