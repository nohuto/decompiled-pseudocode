/*
 * XREFs of ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x1C0056630
 * Callers:
 *     ?_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z @ 0x1C01764C8 (-_ReadUsageFromEDIDForMsftVSDB@DXGMONITOR@@AEAAJPEAW4DISPLAY_USE_CASE@@PEA_N1@Z.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D64C (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0021674 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 */

__int64 __fastcall EDID_V1_GetDisplayIsForDesktopUsage(unsigned int a1, unsigned __int8 *a2, bool *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  _QWORD v7[2]; // [rsp+20h] [rbp-88h] BYREF
  int v8; // [rsp+30h] [rbp-78h]
  char v9; // [rsp+34h] [rbp-74h]
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v11; // [rsp+90h] [rbp-18h]

  v3 = 0;
  if ( a2 && a1 && a3 )
  {
    v11 = 0LL;
    v5 = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v10, a2, a1);
    if ( v5 >= 0 )
    {
      v7[0] = 0LL;
      v7[1] = 0LL;
      v8 = 0;
      v9 = 0;
      if ( !MonDescParser::EDID_PARSER::GetMSFTDisplayVendorDataBlock(
              (MonDescParser::EDID_PARSER *)v10,
              (struct _EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC *)v7) )
        return (unsigned int)-1073741275;
      if ( (v7[0] & 0xFF000000) >= 0x3000000 && (unsigned __int8)((BYTE4(v7[0]) & 0x1F) - 7) > 1u )
      {
        *a3 = (v7[0] & 0x4000000000LL) != 0;
        return v3;
      }
      v5 = 0;
      *a3 = 0;
    }
    return (unsigned int)v5;
  }
  return 3221225485LL;
}
