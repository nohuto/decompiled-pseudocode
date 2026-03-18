/*
 * XREFs of RtlFillMemory @ 0x1403125B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
