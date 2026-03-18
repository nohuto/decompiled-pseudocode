/*
 * XREFs of EtwpOpenLogger @ 0x1400C8C44
 * Callers:
 *     EtwpTraceMessageVa @ 0x1400C8690 (EtwpTraceMessageVa.c)
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14014753C (EtwpLogSystemEventUnsafe.c)
 *     EtwpCCSwapFlush @ 0x140147D28 (EtwpCCSwapFlush.c)
 *     EtwSendTraceBuffer @ 0x14032BCD0 (EtwSendTraceBuffer.c)
 *     EtwTraceEvent @ 0x14032BE40 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C2D8 (EtwTraceRaw.c)
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D3DA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x140147E3C (EtwpCloseLogger.c)
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
  if ( a3 == 1 || KeGetEffectiveIrql() < 2u )
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
