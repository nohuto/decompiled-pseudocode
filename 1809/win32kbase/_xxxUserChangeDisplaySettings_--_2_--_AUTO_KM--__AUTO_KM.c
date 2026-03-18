/*
 * XREFs of _xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C004B8E8
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C004B2B0 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxUserChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[4] )
    result = PopAndFreeAlwaysW32ThreadLock(a1 + 5);
  if ( *a1 )
    return PopAndFreeAlwaysW32ThreadLock(a1 + 1);
  return result;
}
