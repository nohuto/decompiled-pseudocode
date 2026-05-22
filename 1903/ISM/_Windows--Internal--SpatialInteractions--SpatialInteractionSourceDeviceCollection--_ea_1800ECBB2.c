/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevices_::_1_::catch$13 @ 0x1800ECBB2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009EABC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevices_::_1_::catch_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 176) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 152),
                            (void *)0x134,
                            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteract"
                                     "ionobjectdevice.cpp",
                            a4);
  return &loc_1800ECB7D;
}
