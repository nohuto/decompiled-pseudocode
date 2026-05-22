/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StartListeningToSpatialObjects_::_1_::catch$17 @ 0x1800F1D62
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009EABC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StartListeningToSpatialObjects_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0x61,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                           a4);
  return &loc_1800F1D14;
}
