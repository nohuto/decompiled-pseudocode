/*
 * XREFs of ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x18009FE08
 * Callers:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800A132C (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 *     ?InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z @ 0x1800A190C (-InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z.c)
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800033AC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag0::FailFast_Unexpected(wil::details::in1diag0 *this)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(0LL, 0, 0LL, 0LL, 0LL, retaddr, 3, 0x8000FFFF);
}
