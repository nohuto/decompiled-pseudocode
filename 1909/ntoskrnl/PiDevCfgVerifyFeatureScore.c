/*
 * XREFs of PiDevCfgVerifyFeatureScore @ 0x14086B6E8
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgVerifyFeatureScore(__int64 a1, _BYTE *a2, unsigned int a3)
{
  unsigned int i; // eax

  for ( i = 0; i < a3; ++a2 )
  {
    if ( *a2 == *(_BYTE *)(a1 + 110) )
      break;
    ++i;
  }
  return i >= a3 ? 0xC0000424 : 0;
}
