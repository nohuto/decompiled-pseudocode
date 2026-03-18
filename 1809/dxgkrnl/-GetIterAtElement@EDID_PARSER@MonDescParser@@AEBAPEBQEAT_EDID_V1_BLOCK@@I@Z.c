/*
 * XREFs of ?GetIterAtElement@EDID_PARSER@MonDescParser@@AEBAPEBQEAT_EDID_V1_BLOCK@@I@Z @ 0x1C00033E4
 * Callers:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00032F8 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001CB30 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@@@Z @ 0x1C0051BC4 (-GetColorimetryDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_COLORIMETRY_DESC@.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C0051C88 (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 *     ?GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z @ 0x1C0051D20 (-GetHDRDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDR_DESC@@@Z.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0051D94 (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0051E54 (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 *     ?GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLAY_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C0051EC8 (-GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_MSFT_DISPLA.c)
 * Callees:
 *     <none>
 */

union _EDID_V1_BLOCK *const *__fastcall MonDescParser::EDID_PARSER::GetIterAtElement(
        MonDescParser::EDID_PARSER *this,
        int a2)
{
  int v2; // r8d
  MonDescParser::EDID_PARSER *v3; // r9

  v2 = 0;
  v3 = (MonDescParser::EDID_PARSER *)((char *)this + 8 * *((_QWORD *)this + 10));
  while ( this != v3 )
  {
    if ( v2 == a2 )
      return (union _EDID_V1_BLOCK *const *)this;
    ++v2;
    this = (MonDescParser::EDID_PARSER *)((char *)this + 8);
  }
  return 0LL;
}
