/*
 * XREFs of RtlZeroMemory @ 0x14013FC00
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
