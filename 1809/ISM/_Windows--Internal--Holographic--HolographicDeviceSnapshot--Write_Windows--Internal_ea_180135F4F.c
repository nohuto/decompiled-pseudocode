/*
 * XREFs of _Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155____::_1_::catch$2 @ 0x180135F4F
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180094528 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::TrackedDeviceSnapshot__lambda_84d1669a2d3ff4f598ada49efe38a155____::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x14B,
    (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
    a4);
  return &loc_18011BDF5;
}
