/*
 * XREFs of EtwpOpenLogger @ 0x14008C5A4
 * Callers:
 *     EtwpTraceMessageVa @ 0x14008BFF0 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140146E9C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140147688 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14032C280 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14032C3F0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x140707BBC (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeGetEffectiveIrql @ 0x1400C1830 (KeGetEffectiveIrql.c)
 *     EtwpCloseLogger @ 0x14014779C (EtwpCloseLogger.c)
 */

__int64 __fastcall EtwpOpenLogger(unsigned int a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 result; // rax

  v4 = a1;
  *a4 = 0;
  if ( a3 == 1 || (unsigned __int8)KeGetEffectiveIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = v4;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 448) + 8 * v4), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = v4;
  }
  result = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 8 * v8);
  if ( (result & 1) != 0 )
  {
    LOBYTE(v9) = *a4;
    EtwpCloseLogger((unsigned int)v4, a2, v9);
    return 0LL;
  }
  return result;
}
