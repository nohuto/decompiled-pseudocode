/*
 * XREFs of _SurfaceHubPositioner::_GetMonitorForLaunch_::_1_::dtor$2 @ 0x180399B99
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SurfaceHubPositioner::_GetMonitorForLaunch_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 64);
}
