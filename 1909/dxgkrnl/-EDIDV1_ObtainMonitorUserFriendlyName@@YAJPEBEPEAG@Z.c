/*
 * XREFs of ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0056550
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01746F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C000D290 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x1C000D2CC (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 *     ?GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z @ 0x1C000D360 (-GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D64C (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 */

__int64 __fastcall EDIDV1_ObtainMonitorUserFriendlyName(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned int v3; // r9d
  int v4; // r9d
  __int64 v5; // r10
  unsigned __int16 *v6; // r11
  _QWORD v7[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v7[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v7, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    v3 = 0;
    while ( !MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v7, v3)
         || *(_BYTE *)(v5 + 18LL * v4 + 57) != 0xFC
         || !MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength((MonDescParser::EDID_PARSER *)v7, v4) )
    {
      v3 = v4 + 1;
      if ( v3 >= 4 )
        return 3221226021LL;
    }
    MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v7, v4, v6);
    return 0LL;
  }
  return result;
}
