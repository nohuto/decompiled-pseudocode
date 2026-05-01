/*
 * XREFs of ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180158F18
 * Callers:
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x18014E7B0 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::Invoke @ 0x180150A70 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180150A70.c)
 *     ?OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z @ 0x180151470 (-OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180158FF4 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlom(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rdi
  int GlomWorker; // edi
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  GlomWorker = v9(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v12);
  if ( GlomWorker >= 0 )
    GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(a1, v12, a3, a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)GlomWorker;
}
