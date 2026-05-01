/*
 * XREFs of ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x1802F0980
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180082E6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetAssocElement(CWRLExecuteCommandBase *this, IUnknown *a2)
{
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 13);
  IUnknown_Set((IUnknown **)this + 12, a2);
  return 0LL;
}
