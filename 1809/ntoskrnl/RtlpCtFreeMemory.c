/*
 * XREFs of RtlpCtFreeMemory @ 0x14089AAB0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F5890 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0x67744364u);
}
