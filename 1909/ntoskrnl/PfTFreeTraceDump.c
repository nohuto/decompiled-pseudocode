/*
 * XREFs of PfTFreeTraceDump @ 0x1400D45F4
 * Callers:
 *     PfGetCompletedTrace @ 0x14066AF34 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x14066B5C4 (PfTTraceListFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpRepurposeNameLoggingTrace @ 0x14066E7A4 (PfpRepurposeNameLoggingTrace.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
