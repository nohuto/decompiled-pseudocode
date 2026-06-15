/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002D18
 * Callers:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180002DF0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002F44 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180005478 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 *     ?ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z @ 0x180005B70 (-ResetAllApplicationSpecificEndpoints@CWindowsPolicyManager@@UEAAJPEAX@Z.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001172C (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180018AAC (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180023CBC (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800241AC (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z @ 0x180002C1C (-ReportFailure_GetLastErrorHr@details@wil@@YAJPEAXIPEBD110W4FailureType@2@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr);
}
