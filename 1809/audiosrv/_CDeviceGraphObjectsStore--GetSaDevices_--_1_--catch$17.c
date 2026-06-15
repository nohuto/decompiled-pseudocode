/*
 * XREFs of _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$17 @ 0x1800E8273
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BBEF8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x1EA,
                            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                            a4);
  return &loc_1800E8250;
}
