/*
 * XREFs of ProcLibTracePccCapChange @ 0x1C0002894
 * Callers:
 *     CpcGuaranteedNotifyWorker @ 0x1C002DD48 (CpcGuaranteedNotifyWorker.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0002644 (ProcLibTraceProcessorSpecificEvent.c)
 */

char __fastcall ProcLibTracePccCapChange(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_CAP_CHANGE, 4, (__int64)&v3);
}
