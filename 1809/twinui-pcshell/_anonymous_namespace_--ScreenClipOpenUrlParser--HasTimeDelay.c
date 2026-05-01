/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x18017F8C8
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017EAF8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017F484 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?value@?$optional@I@std@@QEGBAAEBIXZ @ 0x1801839C4 (-value@-$optional@I@std@@QEGBAAEBIXZ.c)
 */

bool __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 24) )
    return (unsigned int)(*(_DWORD *)std::optional<unsigned int>::value(a1 + 20) - 1) <= 0x1D;
  return result;
}
