/*
 * XREFs of KeRemoveEnclavePage @ 0x14028FE20
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x14085B328 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401BCE00 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FEA8 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
