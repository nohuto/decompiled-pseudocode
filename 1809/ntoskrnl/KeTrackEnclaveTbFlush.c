/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14028FE64
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE310 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401BCE00 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FEA8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
