/*
 * XREFs of ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800FAD1C
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800FB120 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x180049CF8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800F4814 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1801030B4 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
MPCMouseProcessor *__fastcall MPCMouseProcessor::MPCMouseProcessor(MPCMouseProcessor *this)
{
  _QWORD *v2; // rbx

  v2 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCMouseProcessor *)((char *)this + 16));
  *((_DWORD *)this + 943) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IRawInputProvider'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCMouseProcessor::`vftable'{for `IRawInputProvider'};
  *v2 = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCMouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 472) = 0LL;
  *((_QWORD *)this + 473) = 0LL;
  *((_QWORD *)this + 474) = 0LL;
  *((_QWORD *)this + 475) = 0LL;
  *((_QWORD *)this + 476) = 0LL;
  memset_0((char *)this + 3816, 0, 0x3D8uLL);
  *((_DWORD *)this + 956) = 984;
  *((_WORD *)this + 2400) = 1;
  *(_QWORD *)((char *)this + 4804) = 0LL;
  *(_QWORD *)((char *)this + 4812) = 0LL;
  *(_QWORD *)((char *)this + 4820) = 0LL;
  *(_QWORD *)((char *)this + 4828) = 0LL;
  *(_QWORD *)((char *)this + 4836) = 0LL;
  *(_QWORD *)((char *)this + 4844) = 0LL;
  *(_QWORD *)((char *)this + 4852) = 0LL;
  *(_QWORD *)((char *)this + 4860) = 0LL;
  *((_DWORD *)this + 1217) = 0;
  *((_QWORD *)this + 609) = 0LL;
  *((_WORD *)this + 2440) = 0;
  *(_QWORD *)((char *)this + 4884) = 0LL;
  *(_QWORD *)((char *)this + 4892) = 0LL;
  *((_DWORD *)this + 1225) = 0;
  *((_QWORD *)this + 613) = 0LL;
  *((_QWORD *)this + 614) = 0LL;
  *((_QWORD *)this + 613) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  *((_BYTE *)this + 4920) = 0;
  *(_QWORD *)((char *)this + 4924) = 0LL;
  *((_DWORD *)this + 1233) = 0;
  *((_QWORD *)this + 617) = 0LL;
  *((_QWORD *)this + 618) = 0LL;
  *((_WORD *)this + 2476) = 0;
  *((_DWORD *)this + 1239) = 0;
  *((_QWORD *)this + 620) = 500LL;
  memset_0((char *)this + 4968, 0, 0x640uLL);
  *((_DWORD *)this + 1248) = 1600;
  if ( *((_DWORD *)this + 109) != 1 )
  {
    *((_DWORD *)this + 109) = 1;
    *((_DWORD *)this + 108) = 3;
    RayStabilizer::Reset((MPCMouseProcessor *)((char *)this + 392));
  }
  return this;
}
