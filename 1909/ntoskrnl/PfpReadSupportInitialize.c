/*
 * XREFs of PfpReadSupportInitialize @ 0x14009023C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140647054 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408A034C (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PfpOpenHandleInitialize @ 0x1408A0328 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
