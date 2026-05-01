/*
 * XREFs of _AppViewDataSourceAdapterBase::OnApplicationViewChanged_::_1_::catch$3 @ 0x18030598D
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AppViewDataSourceAdapterBase::OnApplicationViewChanged_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 112) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0x47,
                            (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewdatasourceadapterbase.h",
                            a4);
  return &loc_180305962;
}
