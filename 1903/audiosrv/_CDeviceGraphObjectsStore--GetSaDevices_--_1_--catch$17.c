/*
 * XREFs of _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$17 @ 0x18007215A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA608 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x1EA,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                            a4);
  return &loc_18000435F;
}
