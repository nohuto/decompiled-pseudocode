/*
 * XREFs of RtlFillMemory @ 0x140312B60
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
