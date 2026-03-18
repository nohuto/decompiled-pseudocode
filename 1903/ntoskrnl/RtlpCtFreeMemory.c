/*
 * XREFs of RtlpCtFreeMemory @ 0x1408D838C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
