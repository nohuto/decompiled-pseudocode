/*
 * XREFs of ??0MPCMouseProcessor@@QEAA@XZ @ 0x18002883C
 * Callers:
 *     ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180017BF0 (--$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x180018C00 (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180018EE4 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$shared_ptr@VCustomCursorApplication@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication@@@std@@@std@@PEAX@2@XZ @ 0x180019498 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IV-$shared_ptr@VCustomCursorApplication@@@std@@.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x18012D848 (-Reset@RayStabilizer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
MPCMouseProcessor *__fastcall MPCMouseProcessor::MPCMouseProcessor(MPCMouseProcessor *this)
{
  _QWORD *v2; // rbx
  RayStabilizer *v4; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCMouseProcessor *)((char *)this + 16));
  *((_DWORD *)this + 1161) = 1;
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
  *((_QWORD *)this + 581) = 0LL;
  *((_QWORD *)this + 582) = 0LL;
  *((_QWORD *)this + 583) = 0LL;
  *((_QWORD *)this + 584) = 0LL;
  *((_QWORD *)this + 585) = 0LL;
  memset_0((char *)this + 4688, 0, 0x620uLL);
  *((_DWORD *)this + 1174) = 1568;
  *((_WORD *)this + 3128) = 1;
  *(_QWORD *)((char *)this + 6260) = 0LL;
  *(_QWORD *)((char *)this + 6268) = 0LL;
  *(_QWORD *)((char *)this + 6276) = 0LL;
  *(_QWORD *)((char *)this + 6284) = 0LL;
  *(_QWORD *)((char *)this + 6292) = 0LL;
  *(_QWORD *)((char *)this + 6300) = 0LL;
  *(_QWORD *)((char *)this + 6308) = 0LL;
  *(_QWORD *)((char *)this + 6316) = 0LL;
  *((_DWORD *)this + 1581) = 0;
  *((_QWORD *)this + 791) = 0LL;
  *((_WORD *)this + 3168) = 0;
  *(_QWORD *)((char *)this + 6340) = 0LL;
  *(_QWORD *)((char *)this + 6348) = 0LL;
  *((_DWORD *)this + 1589) = 0;
  *((_QWORD *)this + 795) = 0LL;
  *((_QWORD *)this + 796) = 0LL;
  *((_QWORD *)this + 795) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::shared_ptr<CustomCursorApplication>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication>>>,0>>::_Buyheadnode();
  *((_BYTE *)this + 6376) = 0;
  *(_QWORD *)((char *)this + 6380) = 0LL;
  *((_DWORD *)this + 1597) = 0;
  *((_QWORD *)this + 799) = 0LL;
  *((_QWORD *)this + 800) = 0LL;
  *((_WORD *)this + 3204) = 0;
  *((_DWORD *)this + 1603) = 0;
  *((_QWORD *)this + 802) = 0LL;
  memset_0((char *)this + 6424, 0, 0x7F0uLL);
  *((_DWORD *)this + 1612) = 2032;
  if ( *((_DWORD *)this + 111) != 1 )
  {
    *((_DWORD *)this + 111) = 1;
    RayStabilizer::CalculateMaximumSize((MPCMouseProcessor *)((char *)this + 400));
    RayStabilizer::Reset(v4);
  }
  return this;
}
