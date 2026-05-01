/*
 * XREFs of ?value@?$optional@I@std@@QEGBAAEBIXZ @ 0x1801839C4
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds @ 0x18017DFDC (_anonymous_namespace_--ScreenClipOpenUrlParser--GetTimeDelayInSeconds.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x18017F8C8 (_anonymous_namespace_--ScreenClipOpenUrlParser--HasTimeDelay.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<unsigned int>::value(__int64 a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !*(_BYTE *)(a1 + 4) )
  {
    v2[1] = 0LL;
    v2[2] = 0LL;
    v2[0] = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)v2;
  }
  return a1;
}
