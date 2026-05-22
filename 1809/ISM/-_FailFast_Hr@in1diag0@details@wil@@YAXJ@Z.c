/*
 * XREFs of ?_FailFast_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD9C
 * Callers:
 *     ?Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z @ 0x1800A1CC8 (-Disconnect@SipcServer@@QEAAXPEAVSipcEndpoint@@@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800033AC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag0::_FailFast_Hr(wil::details::in1diag0 *this)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(0LL, 0, 0LL, 0LL, 0LL, retaddr, 3, (unsigned int)this);
}
