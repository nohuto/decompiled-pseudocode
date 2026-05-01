/*
 * XREFs of ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18021FB60
 * Callers:
 *     ?BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z @ 0x18001E884 (-BoostUnboostSiHostProcess@WindowEventDispatcher@@AEAAX_N@Z.c)
 *     ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x180213580 (-BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z.c)
 *     ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x18023BC40 (-Shutdown@ConnectedStandbyHelper@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800E7008 (-ReportFailure_NtStatus@details@wil@@YAJPEAXIPEBD110W4FailureType@2@J@Z.c)
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
