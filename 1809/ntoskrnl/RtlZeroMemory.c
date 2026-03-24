/*
 * XREFs of RtlZeroMemory @ 0x14013FC20
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
