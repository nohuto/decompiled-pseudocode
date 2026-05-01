/*
 * XREFs of ?value@?$optional@I@std@@QEGBAAEBIXZ @ 0x1801B4004
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds @ 0x1801AD6AC (_anonymous_namespace_--ScreenClipOpenUrlParser--GetTimeDelayInSeconds.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x1801AF28C (_anonymous_namespace_--ScreenClipOpenUrlParser--HasTimeDelay.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 */

__int64 __fastcall std::optional<unsigned int>::value(__int64 a1)
{
  void **v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h]

  if ( !*(_BYTE *)(a1 + 4) )
  {
    v3 = 0uLL;
    v2 = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&v2;
  }
  return a1;
}
