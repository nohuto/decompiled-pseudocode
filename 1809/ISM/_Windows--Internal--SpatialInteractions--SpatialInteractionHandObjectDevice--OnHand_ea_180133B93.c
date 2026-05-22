/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectRemoved_::_1_::catch$4 @ 0x180133B93
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180064E60 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectRemoved_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 120),
                            (void *)0x21A,
                            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
                            a4);
  return &loc_1800BF87E;
}
