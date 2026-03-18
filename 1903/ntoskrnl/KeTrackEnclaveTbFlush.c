/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x1402A6694
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402D4AB8 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401C49A0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1402A66D8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
