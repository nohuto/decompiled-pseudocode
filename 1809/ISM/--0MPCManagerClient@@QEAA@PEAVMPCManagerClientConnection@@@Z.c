/*
 * XREFs of ??0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x1800DA5B4
 * Callers:
 *     ?Create@MPCManagerClient@@SAJPEAPEAV1@@Z @ 0x1800DA1F0 (-Create@MPCManagerClient@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18001B270 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DF050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPC_ea_1800DF050.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DF110 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCM_ea_1800DF110.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
MPCManagerClient *__fastcall MPCManagerClient::MPCManagerClient(
        MPCManagerClient *this,
        struct MPCManagerClientConnection *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v10; // [rsp+58h] [rbp+10h]

  *((_QWORD *)this + 6) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::`vftable'{for `IMPCManager'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::`vftable'{for `Windows::Internal::Input::MPCManager::IMPCManagerClient'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Input::MPCManager::IMPCManagerConnection>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCManagerClient::`vftable';
  *((_QWORD *)this + 1) = &MPCManagerClient::`vftable'{for `IMPCManager'};
  *((_QWORD *)this + 2) = &MPCManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>'};
  *((_QWORD *)this + 3) = &MPCManagerClient::`vftable'{for `Windows::Internal::Input::MPCManager::IMPCManagerClient'};
  *((_QWORD *)this + 4) = &MPCManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Input::MPCManager::IMPCManagerConnection>'};
  memset_0((char *)this + 56, 0, 0x3D8uLL);
  *((_DWORD *)this + 16) = 984;
  *((_DWORD *)this + 260) = 0;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 135);
  InitializeSRWLock((PSRWLOCK)this + 136);
  *((_QWORD *)this + 137) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 138);
  InitializeSRWLock((PSRWLOCK)this + 139);
  *((_QWORD *)this + 140) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 141);
  InitializeSRWLock((PSRWLOCK)this + 142);
  *((_QWORD *)this + 143) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 144);
  InitializeSRWLock((PSRWLOCK)this + 145);
  *((_QWORD *)this + 146) = 0LL;
  v10 = operator new(0x40uLL);
  *v10 = &BamoMPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v10[1] = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v10 + 2), a2);
  v10[2] = &BamoImpl::BamoMPCManagerClientPrincipalImpl::`vftable';
  *v10 = &MPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v10[1] = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  v10[7] = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::AddRef(this);
  v4 = *((_QWORD *)this + 132);
  *((_QWORD *)this + 132) = v10;
  (*(void (__fastcall **)(_QWORD *))*v10)(v10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 133);
  *((_QWORD *)this + 133) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(struct MPCManagerClientConnection *))(*(_QWORD *)a2 + 24LL))(a2)
                                                    + 8));
  if ( v5 )
  {
    v6 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    (**v6)(v6);
  }
  v7 = *((_QWORD *)this + 133);
  v8 = *(_QWORD *)(v7 + 160);
  *(_QWORD *)(v7 + 160) = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::AddRef(this);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(v8);
  return this;
}
