/*
 * XREFs of RtlpHpStackDbAllocRoutine @ 0x180104340
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x1801045C0 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 */

void *__fastcall RtlpHpStackDbAllocRoutine(unsigned __int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataAlloc(a1, a1, 0, &v2);
}
