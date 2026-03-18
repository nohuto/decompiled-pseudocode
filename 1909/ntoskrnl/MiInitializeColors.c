/*
 * XREFs of MiInitializeColors @ 0x1409F3B30
 * Callers:
 *     MiCreatePfnDatabase @ 0x1409F21E8 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x1409F3BB8 (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 result; // rax

  MiInitializeCacheSizes();
  _BitScanReverse(&v0, dword_1404657B4);
  LOBYTE(v1) = 1;
  byte_14046574E = v0;
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
  byte_14046574D = v3 + byte_14046574E;
  dword_140465740 = (1 << (v3 + byte_14046574E)) - 1;
  result = (unsigned int)dword_1404657B0;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_1404657B0;
  return result;
}
