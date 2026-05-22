/*
 * XREFs of _Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnInit_::_1_::catch$0 @ 0x180136796
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180064E60 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall Windows::Internal::SpatialInteractions::AverageHapticsFilter::OnInit_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0xE9,
                            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
                            a4);
  return &loc_1801236EF;
}
