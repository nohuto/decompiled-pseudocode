/*
 * XREFs of ??$Make@VMPCConstantManagerClient@@PEAVMPCManagerClientConnection@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VMPCConstantManagerClient@@@12@$$QEAPEAVMPCManagerClientConnection@@@Z @ 0x1800DB538
 * Callers:
 *     ?get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x1800DAA60 (-get_MPCConstantManagerClient@MPCManagerClient@@UEAAJPEAPEAUIMPCConstantManagerClient@MPCManager.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DED30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIMPCConstantManag.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<MPCConstantManagerClient,MPCManagerClientConnection *>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = *a2;
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    v4[3] = 1LL;
    *v4 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::`vftable'{for `Windows::Internal::Input::MPCManager::IMPCConstantManagerClient'};
    v4[1] = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    *v5 = &MPCConstantManagerClient::`vftable'{for `Windows::Internal::Input::MPCManager::IMPCConstantManagerClient'};
    v5[1] = &MPCConstantManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    v5[4] = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6)
                                                      + 8));
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[8] = 0LL;
    v5[9] = 0LL;
    v5[10] = 0LL;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IMPCConstantManagerClient>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
