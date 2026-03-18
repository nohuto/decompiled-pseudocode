/*
 * XREFs of KeBlockEnclavePage @ 0x14028F834
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1402BD0D4 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEncls @ 0x1401BCC80 (KiEncls.c)
 *     KiEnclsStatus @ 0x14028FBB8 (KiEnclsStatus.c)
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
