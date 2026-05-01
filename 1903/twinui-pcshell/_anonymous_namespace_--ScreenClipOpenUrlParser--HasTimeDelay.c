/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x1801AF28C
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AEE48 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?value@?$optional@I@std@@QEGBAAEBIXZ @ 0x1801B4004 (-value@-$optional@I@std@@QEGBAAEBIXZ.c)
 */

bool __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 24) )
    return (unsigned int)(*(_DWORD *)std::optional<unsigned int>::value(a1 + 20) - 1) <= 0x1D;
  return result;
}
