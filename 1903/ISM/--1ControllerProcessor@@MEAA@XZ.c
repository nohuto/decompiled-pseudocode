/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x180074C20
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180074FB8 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800347E0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180057E88 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800742C8 (-erase@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U-$eq.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180076F90 (-Remove@InjectionDevice@@QEAAJXZ.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180077D70 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180078AFC (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800E7464 (--1ManipulationInjector@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  struct ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 8) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 9) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 544) != 2 )
    ControllerProcessor::UpdateNavigationState(this, 2LL, 0LL);
  ControllerProcessor::StopAutoRepeatTimer(this);
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v5 = **((_DWORD **)this + 5);
  std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::erase(
    (_QWORD *)ControllerNavigationManager + 8,
    (unsigned __int8 *)&v5);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1417);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1416);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1415);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1414);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1407);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1406);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 1384);
  if ( *((_BYTE *)this + 11064) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 9488));
  if ( *((_BYTE *)this + 9480) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 7904));
  if ( *((_BYTE *)this + 7896) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 6320));
  if ( *((_BYTE *)this + 6312) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 4736));
  if ( *((_BYTE *)this + 4728) )
    InjectionDevice::Remove((ControllerProcessor *)((char *)this + 3152));
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 2328));
  v3 = *((_QWORD *)this + 276);
  if ( v3 )
  {
    *((_QWORD *)this + 276) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 274);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 273);
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 15) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::list<unsigned int>::clear((__int64)this + 88);
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x18);
  NonPointerProcessor::~NonPointerProcessor(this);
}
