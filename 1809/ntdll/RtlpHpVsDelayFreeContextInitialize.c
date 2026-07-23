/*
 * XREFs of RtlpHpVsDelayFreeContextInitialize @ 0x18009FE24
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x180064324 (RtlpHpVsContextInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpHpVsDelayFreeContextInitialize(PSLIST_HEADER ListHead)
{
  *ListHead = 0uLL;
  RtlInitializeSListHead(ListHead);
}
