/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::catch$33 @ 0x1800D903E
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CF53C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x184,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    a4);
  return &loc_1800D8FB7;
}
