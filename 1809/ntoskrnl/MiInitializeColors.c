/*
 * XREFs of MiInitializeColors @ 0x1409BCE94
 * Callers:
 *     MiCreatePfnDatabase @ 0x1409BB550 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x1409BCF1C (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 result; // rax

  MiInitializeCacheSizes();
  _BitScanReverse(&v0, dword_14043B14C);
  LOBYTE(v1) = 1;
  byte_14043B10A = v0;
  v2 = 1;
  MiChannelMaximumPowerOf2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
    {
      v1 = (unsigned __int8)(2 * v1);
      MiChannelMaximumPowerOf2 = v1;
      v2 = v1;
    }
    while ( v1 < MmNumberOfChannels );
  }
  MiChannelMaximumPowerOf2Mask = v2 - 1;
  _BitScanReverse(&v3, v2);
  byte_14043B109 = v3 + byte_14043B10A;
  dword_14043B100 = (1 << (v3 + byte_14043B10A)) - 1;
  result = (unsigned int)dword_14043B148;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_14043B148;
  return result;
}
