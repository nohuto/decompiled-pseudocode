/*
 * XREFs of ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x1801122B4
 * Callers:
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x180108F20 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::Invoke @ 0x18010AEC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18010AEC0.c)
 *     ?OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z @ 0x18010B840 (-OnAppRemovedFromSwitchers@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180112384 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlom(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rbx
  int GlomWorker; // edi
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  GlomWorker = (**a2)(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v11);
  if ( GlomWorker >= 0 )
    GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(a1, v11, a3, a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)GlomWorker;
}
