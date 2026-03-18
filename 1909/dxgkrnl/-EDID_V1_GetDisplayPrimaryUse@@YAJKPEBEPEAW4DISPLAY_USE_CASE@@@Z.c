/*
 * XREFs of ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C0020618
 * Callers:
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z @ 0x1C01764C8 (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D64C (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0021674 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 */

__int64 __fastcall EDID_V1_GetDisplayPrimaryUse(unsigned int a1, unsigned __int8 *a2, enum DISPLAY_USE_CASE *a3)
{
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+30h] [rbp-78h]
  char v7; // [rsp+34h] [rbp-74h]
  _BYTE v8[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v9; // [rsp+90h] [rbp-18h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v9 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v8, a2, a1);
  if ( (int)result >= 0 )
  {
    v5[0] = 0LL;
    v5[1] = 0LL;
    v6 = 0;
    v7 = 0;
    if ( MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v8,
           (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)v5)
      && (v5[0] & 0xFF000000) >= 0x1000000 )
    {
      *(_BYTE *)a3 = BYTE4(v5[0]) & 0x1F;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
