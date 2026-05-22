/*
 * XREFs of ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18009FD40
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z @ 0x18009FFE0 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@_NPEAXAEAPEAVSipcPort@@@Z.c)
 *     ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0 (-AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 *     ?InitializeWaitHandle@AlpcPort@@AEAAJXZ @ 0x1800A1288 (-InitializeWaitHandle@AlpcPort@@AEAAJXZ.c)
 *     ?GetBoundaryDescriptor@SipcPrivateNamespace@@AEAAJAEAY0CG@$$CBGPEAPEAX@Z @ 0x1800A1848 (-GetBoundaryDescriptor@SipcPrivateNamespace@@AEAAJAEAY0CG@$$CBGPEAPEAX@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x1800034C8 (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag0::Return_GetLastError(
        wil::details::in1diag0 *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr(0LL, 0, 0LL, a4, v5, retaddr);
}
