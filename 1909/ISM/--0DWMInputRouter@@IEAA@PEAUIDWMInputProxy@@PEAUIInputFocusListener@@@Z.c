/*
 * XREFs of ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180015C28
 * Callers:
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180021834 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 *     ?Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800C2DE8 (-Create@DWMInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@PEAX@2@PEAU32@0@Z @ 0x180012CD8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUInputContext@@@std@@@1@@Z @ 0x180015104 (--0-$_Hash@V-$_Umap_traits@KUInputContext@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x180015168 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??0?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@1@@Z @ 0x18001538C (--0-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
DWMInputRouter *__fastcall DWMInputRouter::DWMInputRouter(
        DWMInputRouter *this,
        struct IDWMInputProxy *a2,
        struct IInputFocusListener *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v12; // [rsp+78h] [rbp+10h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF

  *((_QWORD *)this + 9) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 20) = 1;
  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 9) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  v6 = (_QWORD *)((char *)this + 88);
  v12 = (char *)this + 88;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = std::_List_alloc<std::_List_base_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>::_Buynode0(
                             (__int64)this,
                             0LL,
                             0LL);
  v6[3] = 0LL;
  v6[4] = 0LL;
  v6[5] = 0LL;
  *(_DWORD *)v6 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v6,
    8LL);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  v12 = (char *)this + 240;
  LODWORD(v12) = 0;
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>(
    (_QWORD *)this + 30,
    &v12);
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  v12 = (char *)this + 672;
  v13 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>(
    (__int64)this + 672,
    &v13);
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 29) = a2;
  *((_QWORD *)this + 41) = a3;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 152);
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 168);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 176);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((char *)this + 312);
  v8 = *((_QWORD *)this + 40);
  if ( v8 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 44);
  if ( v9 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 46);
  if ( v10 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_QWORD *)this + 47) = 0LL;
  return this;
}
