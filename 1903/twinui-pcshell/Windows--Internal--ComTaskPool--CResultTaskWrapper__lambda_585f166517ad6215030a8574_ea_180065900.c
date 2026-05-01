/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07_____lambda_585f166517ad6215030a8574fdaaae07___ @ 0x180065900
 * Callers:
 *     ?NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180065800 (-NavigateView@WindowManagerBridge@@UEAAJIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07___::CResultTaskWrapper__lambda_585f166517ad6215030a8574fdaaae07_____lambda_585f166517ad6215030a8574fdaaae07___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // xmm1_8
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a3;
  v6 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a1 = off_18042A430;
  result = a1;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}
