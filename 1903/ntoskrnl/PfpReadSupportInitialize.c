/*
 * XREFs of PfpReadSupportInitialize @ 0x140135B1C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14066D5F4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408A0B0C (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PfpOpenHandleInitialize @ 0x1408A0AE8 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
