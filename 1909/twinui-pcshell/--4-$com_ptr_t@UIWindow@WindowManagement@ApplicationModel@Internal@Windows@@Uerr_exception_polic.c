/*
 * XREFs of ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18003D7B4
 * Callers:
 *     _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x18003D604 (_lambda_88a6f648851480fde846e948b133eaba_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
