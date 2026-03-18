/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1402A63F4
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401C5520 (KiEncls.c)
 *     KiEnclsStatus @ 0x1402A6438 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
