/*
 * XREFs of ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180079898
 * Callers:
 *     ?callback@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18007A230 (-callback@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@d.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180077D9C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::FailFast_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    0xCAu,
    (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/registry.h",
    0LL,
    0LL,
    retaddr,
    3,
    (unsigned int)a4);
}
