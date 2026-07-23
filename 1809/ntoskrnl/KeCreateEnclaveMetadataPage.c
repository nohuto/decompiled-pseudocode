/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x14028FD44
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD3C4 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1401BCE00 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
