/*
 * XREFs of KeBlockEnclavePage @ 0x14028F934
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD1D4 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401BCCA0 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FCB8 (KiEnclsStatus.c)
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
