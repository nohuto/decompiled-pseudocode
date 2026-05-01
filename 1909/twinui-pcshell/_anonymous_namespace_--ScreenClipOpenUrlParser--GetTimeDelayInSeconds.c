/*
 * XREFs of _anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds @ 0x1801CC5CC
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801CD0E8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801CDD78 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?value@?$optional@I@std@@QEGBAAEBIXZ @ 0x1801D2F74 (-value@-$optional@I@std@@QEGBAAEBIXZ.c)
 */

__int64 __fastcall anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 24) )
    return *(unsigned int *)std::optional<unsigned int>::value(a1 + 20);
  return result;
}
