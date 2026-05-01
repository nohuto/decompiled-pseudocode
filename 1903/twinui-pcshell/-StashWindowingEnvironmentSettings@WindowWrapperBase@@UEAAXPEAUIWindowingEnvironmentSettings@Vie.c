/*
 * XREFs of ?StashWindowingEnvironmentSettings@WindowWrapperBase@@UEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A7F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::StashWindowingEnvironmentSettings(
        WindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34));
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::operator=(
    (__int64 *)this + 17,
    (__int64)a2);
}
