/*
 * XREFs of ??0MagnifierProcessor@@QEAA@XZ @ 0x18008D5CC
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VMagnifierProcessor@@@WRL@Microsoft@@@012@@Z @ 0x18008CEC8 (--$MakeAndInitialize@VMagnifierProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPt.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180008EA4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
MagnifierProcessor *__fastcall MagnifierProcessor::MagnifierProcessor(MagnifierProcessor *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::`vftable';
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MagnifierProcessor::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>'};
  *((_QWORD *)this + 2) = &MagnifierProcessor::`vftable'{for `IMagnifierServerOwner'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 6) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                            (__int64)v2,
                            0LL,
                            0LL);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 10) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 5,
    8LL);
  *((_QWORD *)this + 13) = 500LL;
  *((_QWORD *)this + 14) = 100LL;
  *((_DWORD *)this + 30) = 200;
  *((_DWORD *)this + 31) = 270;
  *((_QWORD *)this + 16) = 0x3FE8D4FDF3B645A2LL;
  return this;
}
