/*
 * XREFs of ProcLibTracePccCapChange @ 0x1C0007F00
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C002C7E0 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000805C (ProcLibTraceProcessorSpecificEvent.c)
 */

__int64 __fastcall ProcLibTracePccCapChange(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_CAP_CHANGE, 4LL, &v3);
}
