/*
 * XREFs of KeRemoveEnclavePage @ 0x14028FB30
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD0D4 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x14085A0E8 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401BCC80 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FBB8 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
