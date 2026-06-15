/*
 * XREFs of _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x1400590A9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateSpatialCrossProcessEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CCrossProcessClientOutputEndpoint::operator delete(*(void **)(a2 + 32));
}
