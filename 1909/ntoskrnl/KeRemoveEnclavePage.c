/*
 * XREFs of KeRemoveEnclavePage @ 0x1402A63B0
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiDeleteEnclavePages @ 0x140893838 (MiDeleteEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401C5520 (KiEncls.c)
 *     KiEnclsStatus @ 0x1402A6438 (KiEnclsStatus.c)
 */

__int64 KeRemoveEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(3u);
  return KiEnclsStatus(v0);
}
