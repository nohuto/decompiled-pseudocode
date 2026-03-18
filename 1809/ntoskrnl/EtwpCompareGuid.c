/*
 * XREFs of EtwpCompareGuid @ 0x1408C3120
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1401961E0 (memcmp.c)
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
