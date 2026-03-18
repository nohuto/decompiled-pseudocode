/*
 * XREFs of PfTFreeTraceDump @ 0x1400972D4
 * Callers:
 *     PfGetCompletedTrace @ 0x140657F14 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1406585A4 (PfTTraceListFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpRepurposeNameLoggingTrace @ 0x14065B094 (PfpRepurposeNameLoggingTrace.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
