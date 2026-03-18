/*
 * XREFs of PfTFreeTraceDump @ 0x1400D89C0
 * Callers:
 *     PfGetCompletedTrace @ 0x14064B654 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14064BB20 (PfTTraceListFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140669AF4 (PfpRepurposeNameLoggingTrace.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
