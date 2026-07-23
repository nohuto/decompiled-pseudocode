/*
 * XREFs of PfTFreeTraceDump @ 0x1400D8A60
 * Callers:
 *     PfGetCompletedTrace @ 0x14064C7F4 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14064CCC0 (PfTTraceListFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpRepurposeNameLoggingTrace @ 0x14066AC94 (PfpRepurposeNameLoggingTrace.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
