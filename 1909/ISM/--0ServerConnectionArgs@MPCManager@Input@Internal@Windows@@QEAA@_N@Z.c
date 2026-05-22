/*
 * XREFs of ??0ServerConnectionArgs@MPCManager@Input@Internal@Windows@@QEAA@_N@Z @ 0x18010F9FC
 * Callers:
 *     ??$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@@12@$$QEA_N@Z @ 0x18010F208 (--$Make@VServerConnectionArgs@MPCManager@Input@Internal@Windows@@_N@Details@WRL@Microsoft@@YA-AV.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180018F18 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Input::MPCManager::ServerConnectionArgs *__fastcall Windows::Internal::Input::MPCManager::ServerConnectionArgs::ServerConnectionArgs(
        Windows::Internal::Input::MPCManager::ServerConnectionArgs *this,
        char a2)
{
  _QWORD *v2; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Input::MPCManager::ServerConnectionArgs *)((char *)this + 16));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *((_BYTE *)this + 64) = a2;
  *(_QWORD *)this = &Windows::Internal::Input::MPCManager::ServerConnectionArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Input::MPCManager::ServerConnectionArgs::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Internal::Input::MPCManager::ServerConnectionArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return this;
}
