/*
 * XREFs of KeBlockEnclavePage @ 0x1402A632C
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401C49A0 (KiEncls.c)
 *     KiEnclsStatus @ 0x1402A66D8 (KiEnclsStatus.c)
 */

__int64 KeBlockEnclavePage()
{
  unsigned int v0; // eax

  if ( (KeFeatureBits & 0x10000000000LL) == 0 )
    return 3221225659LL;
  do
    v0 = KiEncls(9u);
  while ( v0 == 15 );
  return KiEnclsStatus(v0);
}
