/*
 * XREFs of ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009AD54
 * Callers:
 *     ?OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x180029770 (-OnRIMPnpEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMAutoRepeatEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18009A8D0 (-OnRIMAutoRepeatEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18009A9C0 (-OnRIMTimerEventStatic@RIMDeviceCollection@@CAJPEAXK0@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18010E2B8 (-Initialize@CursorManager@@IEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x180055908 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NtStatus(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_NtStatus(
    (__int64)this,
    (unsigned int)a2,
    a3,
    (__int64)a4,
    v4,
    retaddr,
    2,
    (unsigned int)a4);
}
