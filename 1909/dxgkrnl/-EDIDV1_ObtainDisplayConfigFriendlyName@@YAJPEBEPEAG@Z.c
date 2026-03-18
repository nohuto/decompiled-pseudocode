/*
 * XREFs of ?EDIDV1_ObtainDisplayConfigFriendlyName@@YAJPEBEPEAG@Z @ 0x1C000D19C
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01290D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C000D290 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 *     ?GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z @ 0x1C000D2CC (-GetDispDescAsASCIIString@EDID_PARSER@MonDescParser@@QEBAXHPEAG@Z.c)
 *     ?GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z @ 0x1C000D360 (-GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser@@QEBA_KH@Z.c)
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D64C (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall EDIDV1_ObtainDisplayConfigFriendlyName(unsigned __int8 *a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int i; // ebx
  unsigned __int64 DispDescAsASCIIStringLength; // rax
  unsigned __int64 v7; // rbp
  _QWORD v8[12]; // [rsp+20h] [rbp-68h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v8[10] = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v8, a1, 0x80u);
  if ( (int)result >= 0 )
  {
    memset(a2, 0, 0x52uLL);
    v4 = 0LL;
    for ( i = 0; (unsigned int)i < 4; ++i )
    {
      if ( MonDescParser::EDID_PARSER::Is18ByteDispDesc((MonDescParser::EDID_PARSER *)v8, i)
        && *(_BYTE *)(v8[0] + 18LL * i + 57) == 0xFC )
      {
        DispDescAsASCIIStringLength = MonDescParser::EDID_PARSER::GetDispDescAsASCIIStringLength(
                                        (MonDescParser::EDID_PARSER *)v8,
                                        i);
        v7 = 40 - v4;
        if ( DispDescAsASCIIStringLength + v4 <= 0x28 )
          v7 = DispDescAsASCIIStringLength;
        if ( v7 && (unsigned __int64)(v4 + 13) <= 0x28 )
        {
          MonDescParser::EDID_PARSER::GetDispDescAsASCIIString((MonDescParser::EDID_PARSER *)v8, i, &a2[v4]);
          v4 += v7;
        }
      }
    }
    if ( v4 )
      return 0LL;
    else
      return 3221226021LL;
  }
  return result;
}
