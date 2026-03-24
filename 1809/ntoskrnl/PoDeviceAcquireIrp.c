/*
 * XREFs of PoDeviceAcquireIrp @ 0x140171DA0
 * Callers:
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     PopIrpWorker @ 0x140171740 (PopIrpWorker.c)
 *     PoHandleIrp @ 0x140171B94 (PoHandleIrp.c)
 * Callees:
 *     PopDiagTraceDeviceAcquireIrp @ 0x140171DDC (PopDiagTraceDeviceAcquireIrp.c)
 */

__int64 __fastcall PoDeviceAcquireIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 2) <= 1u )
  {
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200) + 40LL) = a3;
      return PopDiagTraceDeviceAcquireIrp(a1, a3);
    }
  }
  return result;
}
