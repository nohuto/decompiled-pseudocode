/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::InitializeStreamReaderHelpers_::_1_::catch$5 @ 0x1800F0E06
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009E8FC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::InitializeStreamReaderHelpers_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0x130,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                           a4);
  return &loc_1800F0DDD;
}
