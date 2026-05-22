/*
 * XREFs of _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$0 @ 0x1801312BF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180064E60 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x249,
                           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdev"
                                    "icecollection.cpp",
                           a4);
  return &loc_18006331C;
}
