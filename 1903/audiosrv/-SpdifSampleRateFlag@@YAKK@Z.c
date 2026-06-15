/*
 * XREFs of ?SpdifSampleRateFlag@@YAKK@Z @ 0x1800E6B88
 * Callers:
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800E4C20 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpdifSampleRateFlag(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 22050:
      return 1LL;
    case 24000:
      return 2LL;
    case 32000:
      return 4LL;
    case 44100:
      return 8LL;
    case 48000:
      return 16LL;
    case 88200:
      return 32LL;
    case 96000:
      return 64LL;
    case 176400:
      return 128LL;
  }
  result = 256LL;
  if ( a1 != 192000 )
    return 0LL;
  return result;
}
