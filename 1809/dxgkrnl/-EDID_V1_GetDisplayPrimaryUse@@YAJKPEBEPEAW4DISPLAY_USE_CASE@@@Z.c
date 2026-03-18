/*
 * XREFs of ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C004FAD0
 * Callers:
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N@Z @ 0x1C029D0B0 (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00032F8 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0051EC8 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 */

__int64 __fastcall EDID_V1_GetDisplayPrimaryUse(unsigned int a1, unsigned __int8 *a2, enum DISPLAY_USE_CASE *a3)
{
  __int64 result; // rax
  int v5; // [rsp+20h] [rbp-88h] BYREF
  char v6; // [rsp+24h] [rbp-84h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v8; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v8 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a2, a1);
  if ( (int)result >= 0 )
  {
    if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v7,
           (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)&v5)
      && (v5 & 0xFF000000) >= 0x1000000 )
    {
      *(_BYTE *)a3 = v6 & 0xF;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
