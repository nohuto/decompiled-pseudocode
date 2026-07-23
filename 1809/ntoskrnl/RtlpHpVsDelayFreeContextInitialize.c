/*
 * XREFs of RtlpHpVsDelayFreeContextInitialize @ 0x1401B6EA0
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x14015FF30 (RtlpHpVsContextInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 */

void __fastcall RtlpHpVsDelayFreeContextInitialize(_SLIST_HEADER *a1)
{
  a1->Alignment = 0LL;
  a1->Region = 0LL;
  InitializeSListHead(a1);
}
