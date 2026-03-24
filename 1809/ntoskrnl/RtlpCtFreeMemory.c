/*
 * XREFs of RtlpCtFreeMemory @ 0x140899850
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F56A0 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
