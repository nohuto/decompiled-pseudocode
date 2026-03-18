/*
 * XREFs of GreSetFontEnumeration @ 0x1C013C2E8
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreSetFontEnumeration(char a1)
{
  if ( (a1 & 4) != 0 )
  {
    gulFontInformation = a1 & 2 | gulFontInformation & 0x11;
  }
  else if ( (a1 & 0x20) != 0 )
  {
    gulFontInformation = a1 & 0x10 | gulFontInformation & 3;
  }
  else
  {
    gulFontInformation = a1 & 1 | gulFontInformation & 0x12;
  }
  return gulFontInformation;
}
