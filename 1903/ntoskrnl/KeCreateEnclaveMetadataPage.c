/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1402A654C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiInitializeEnclaveMetadataPage @ 0x140A3CA7C (MiInitializeEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x1401C49A0 (KiEncls.c)
 */

__int64 KeCreateEnclaveMetadataPage()
{
  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  KiEncls(0xAu);
  return 0LL;
}
