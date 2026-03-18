/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1402A62AC
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3C84C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1401C5520 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
