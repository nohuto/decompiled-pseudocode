/*
 * XREFs of _ShellPositionerTelemetry::PositionViewForActivation__::_1_::dtor$0 @ 0x1800ACC34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellPositionerTelemetry::PositionViewForActivation__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 80);
}
