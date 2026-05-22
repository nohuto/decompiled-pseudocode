/*
 * XREFs of ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x1800155C8
 * Callers:
 *     ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x180018D38 (--$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliverySe.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@PEAX@2@PEAU32@0@Z @ 0x180012B78 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInf.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180015168 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
NonBamoInputDeliveryServer *__fastcall NonBamoInputDeliveryServer::NonBamoInputDeliveryServer(
        NonBamoInputDeliveryServer *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputDeliveryServer,IInputServiceProxyOwner>::`vftable'{for `IInputDeliveryServer'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputDeliveryServer,IInputServiceProxyOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner>'};
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &NonBamoInputDeliveryServer::`vftable'{for `IInputDeliveryServer'};
  *((_QWORD *)this + 1) = &NonBamoInputDeliveryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputServiceProxyOwner>'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 26) = std::_List_alloc<std::_List_base_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>::_Buynode0(
                             (__int64)v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 50) = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 25,
    8LL);
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  return this;
}
