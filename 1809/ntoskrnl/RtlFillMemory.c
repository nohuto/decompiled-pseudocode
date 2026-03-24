/*
 * XREFs of RtlFillMemory @ 0x1402F4010
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
