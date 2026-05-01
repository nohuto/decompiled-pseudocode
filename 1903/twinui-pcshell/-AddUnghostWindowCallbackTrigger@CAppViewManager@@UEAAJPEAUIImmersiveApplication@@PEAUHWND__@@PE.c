/*
 * XREFs of ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x18012EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180010D68 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::AddUnghostWindowCallbackTrigger(
        CAppViewManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *),
        __int64 a3,
        struct IAsyncCallback *a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 (__fastcall *v9)(struct IImmersiveApplication *, GUID *, __int64 *); // rdi
  int v10; // edi
  __int64 v12[4]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v12[1] = -2LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v12[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12[0] = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  v10 = v9((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v12);
  if ( v10 >= 0 )
  {
    v10 = -2147019873;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 472LL))(v12[0]) )
      v10 = CAppViewManager::_AddPresentedWindowCallbackTrigger(
              (__int64)this - 40,
              1,
              (__int64 (__fastcall ***)(_QWORD, GUID *, _DWORD *))v12[0],
              a3,
              (__int64)a4,
              &v13);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v10;
}
