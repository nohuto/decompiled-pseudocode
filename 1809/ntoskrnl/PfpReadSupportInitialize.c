/*
 * XREFs of PfpReadSupportInitialize @ 0x1400DF2E8
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140661FA4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140864028 (PfpPrefetchFiles.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     PfpOpenHandleInitialize @ 0x140863FF8 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(char *a1)
{
  memset(a1, 0, 0x38uLL);
  return PfpOpenHandleInitialize(a1 + 8);
}
