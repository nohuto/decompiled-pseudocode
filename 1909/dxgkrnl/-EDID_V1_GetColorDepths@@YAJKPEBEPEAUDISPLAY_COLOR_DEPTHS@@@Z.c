/*
 * XREFs of ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0020124
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0175B58 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D64C (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C002037C (-GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_LLC_VENDOR.c)
 *     ?GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC@@@Z @ 0x1C00586A4 (-GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_HDMI_FORUM_VE.c)
 */

__int64 __fastcall EDID_V1_GetColorDepths(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_COLOR_DEPTHS *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // rax
  int v10; // eax
  __int16 v11; // r9
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v14[12]; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v15; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v14[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v14, a2, a1);
  if ( (int)result < 0 )
    return result;
  v13 = 0uLL;
  *(_OWORD *)a3 = 0uLL;
  *((_DWORD *)a3 + 4) = 0;
  if ( MonDescParser::EDID_PARSER::GetHdmiLLCVendorDataBlock(
         (MonDescParser::EDID_PARSER *)v14,
         (struct _EDID_V1_CEA_861_HDMI_LLC_VENDOR_SPECIFIC_DESC *)&v13) )
  {
    v7 = v13;
    v8 = ((unsigned __int64)v13 >> 42) & 0xC | ((unsigned __int64)v13 >> 41) & 0x20 | 2;
    *(_DWORD *)a3 = v8;
    if ( (v7 & 0x80000000000LL) != 0 )
    {
      v9 = v14[0];
      *((_DWORD *)a3 + 1) = v8;
      *((_DWORD *)a3 + 2) = (*(_BYTE *)(v9 + 24) & 0x10) != 0 ? v8 : 0;
    }
    v15 = 0LL;
    if ( MonDescParser::EDID_PARSER::GetHdmiForumVendorDataBlock(
           (MonDescParser::EDID_PARSER *)v14,
           (struct _EDID_V1_CEA_861_HDMI_FORUM_VENDOR_SPECIFIC_DESC *)&v15) )
    {
      *((_DWORD *)a3 + 3) |= (v15 >> 46) & 0xC | (v15 >> 45) & 0x20;
    }
    return 0LL;
  }
  v5 = v14[0];
  v6 = *(_BYTE *)(v14[0] + 20LL);
  if ( (v6 & 0x80u) != 0 )
  {
    switch ( (v6 >> 4) & 7 )
    {
      case 0:
        goto LABEL_28;
      case 1:
        *(_DWORD *)a3 = 1;
        break;
      case 2:
LABEL_28:
        *(_DWORD *)a3 = 2;
        break;
      case 3:
        *(_DWORD *)a3 = 6;
        break;
      case 4:
        *(_DWORD *)a3 = 14;
        break;
      case 5:
        *(_DWORD *)a3 = 30;
        break;
      case 6:
        *(_DWORD *)a3 = 62;
        break;
      case 7:
        return 3221225485LL;
    }
    switch ( (*(unsigned __int8 *)(v5 + 24) >> 3) & 3 )
    {
      case 0:
        v11 = *(_WORD *)(v5 + 33);
        *(_QWORD *)&v13 = *(_QWORD *)(v5 + 25);
        WORD4(v13) = v11;
        if ( !(((unsigned __int8)v13 >> 6) | (4 * BYTE2(v13)))
          && !(((unsigned __int8)v13 >> 4) & 3 | (4 * BYTE3(v13)))
          && !(((unsigned __int8)v13 >> 2) & 3 | (4 * BYTE4(v13)))
          && !(v13 & 3 | (4 * (unsigned int)BYTE5(v13)))
          && !((BYTE1(v13) >> 6) | (4 * BYTE6(v13)))
          && !((BYTE1(v13) >> 4) & 3 | (4 * BYTE7(v13)))
          && (BYTE1(v13) >> 2) & 3 | (4 * (unsigned __int8)v11) )
        {
          if ( BYTE1(v13) & 3 | (4 * HIBYTE(v11)) )
          {
            v12 = *(_DWORD *)a3;
            *(_DWORD *)a3 = 0;
            *((_DWORD *)a3 + 4) = v12;
          }
        }
        return 0LL;
      case 1:
        *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
        return 0LL;
      case 2:
        v10 = *(_DWORD *)a3;
        break;
      case 3:
        v10 = *(_DWORD *)a3;
        *((_DWORD *)a3 + 1) = *(_DWORD *)a3;
        break;
      default:
        return 0LL;
    }
    *((_DWORD *)a3 + 2) = v10;
    return 0LL;
  }
  return 3221226021LL;
}
