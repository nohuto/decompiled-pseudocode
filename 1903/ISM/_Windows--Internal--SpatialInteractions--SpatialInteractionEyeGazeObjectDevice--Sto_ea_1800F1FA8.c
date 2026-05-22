/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StopListeningToSpatialObjects_::_1_::catch$2 @ 0x1800F1FA8
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009EABC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StopListeningToSpatialObjects_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x6B,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                           a4);
  return &loc_1800F1F80;
}
