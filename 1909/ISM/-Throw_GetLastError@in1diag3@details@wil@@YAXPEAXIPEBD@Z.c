/*
 * XREFs of ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059A70
 * Callers:
 *     ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18001EC18 (--0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSess.c)
 *     ??$?0W4EventOptions@wil@@$$V@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x18001EDF4 (--$-0W4EventOptions@wil@@$$V@-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAX.c)
 *     ??0MPC3DStateHelper@@AEAA@XZ @ 0x18001EE78 (--0MPC3DStateHelper@@AEAA@XZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F11C (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z @ 0x18001F2D0 (-RuntimeClassInitialize@ViewHierarchy@@UEAAJW4TestMode@1@@Z.c)
 *     ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1801106A0 (-CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180051028 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::Throw_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  const char *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(
    this,
    (void *)0x152F,
    (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
    a4,
    v4,
    retaddr,
    0);
}
