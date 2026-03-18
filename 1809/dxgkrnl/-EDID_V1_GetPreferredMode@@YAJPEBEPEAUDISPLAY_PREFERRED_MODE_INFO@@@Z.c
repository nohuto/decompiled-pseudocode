/*
 * XREFs of ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C00030C4
 * Callers:
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C00B5EF8 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C00C58D4 (MonitorGetDpiInfoFromDescriptor.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02554D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C0003288 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C00032F8 (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDID_V1_GetPreferredMode(unsigned __int8 *a1, struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  __int64 result; // rax
  bool v4; // r9
  unsigned __int8 *v5; // rax
  int v6; // ecx
  int v7; // edx
  _BYTE v8[80]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]
  unsigned __int8 *v10; // [rsp+90h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v9 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v8, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v10 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetDetTimParser(
           (MonDescParser::EDID_PARSER *)v8,
           0,
           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v10,
           v4) )
    {
      v5 = v10;
      v6 = v10[5];
      *(_DWORD *)a2 = v10[2] + (v10[4] >> 4 << 8);
      v7 = v6 + (v5[7] >> 4 << 8);
      *((_BYTE *)a2 + 8) = v5[17] >> 7;
      result = 0LL;
      *((_DWORD *)a2 + 1) = v7;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
