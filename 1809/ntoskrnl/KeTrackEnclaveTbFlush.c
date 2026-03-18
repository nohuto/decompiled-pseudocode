/*
 * XREFs of KeTrackEnclaveTbFlush @ 0x14028FB74
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD0D4 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1402BE020 (MiProtectEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401BCC80 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FBB8 (KiEnclsStatus.c)
 */

__int64 KeTrackEnclaveTbFlush()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  v0 = KiEncls(0xCu);
  return KiEnclsStatus(v0);
}
