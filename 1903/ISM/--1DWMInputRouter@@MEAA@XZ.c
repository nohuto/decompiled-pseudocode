/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x1800C2528
 * Callers:
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$0 @ 0x18003D0F4 (_MPCInputRouter--MPCInputRouter_--_1_--dtor$0.c)
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180053880 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x1800C2BDC (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180056724 (-clear@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x18005675C (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 *     ??1InputContext@@QEAA@XZ @ 0x1800BAE1C (--1InputContext@@QEAA@XZ.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x1800C4FA0 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  __int64 *v2; // r12
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 i; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD **v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  void *v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *v33; // rcx
  _QWORD **v34; // rax
  _QWORD *v35; // r8
  _QWORD *v36; // rcx
  _QWORD *v37; // rbx
  char v38; // [rsp+60h] [rbp+8h] BYREF

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
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  v2 = (__int64 *)((char *)this + 152);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 19);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 39);
  v4 = *((_QWORD *)this + 40);
  if ( v4 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  for ( i = **((_QWORD **)this + 12);
        i != *((_QWORD *)this + 12);
        i = *(_QWORD *)DWMInputRouter::RemoveTarget(this, &v38, i) )
  {
    ;
  }
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::clear((_QWORD *)this + 30);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 22);
  v6 = *((_QWORD *)this + 20);
  if ( v6 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 44);
  if ( v7 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 46);
  if ( v8 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (void *)*((_QWORD *)this + 98);
  if ( v9 )
  {
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 100) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 98) = 0LL;
    *((_QWORD *)this + 99) = 0LL;
    *((_QWORD *)this + 100) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 95);
  if ( v10 )
  {
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 97) - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 95) = 0LL;
    *((_QWORD *)this + 96) = 0LL;
    *((_QWORD *)this + 97) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 92);
  if ( v11 )
  {
    std::_Deallocate<16,0>(
      v11,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 94) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 92) = 0LL;
    *((_QWORD *)this + 93) = 0LL;
    *((_QWORD *)this + 94) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 87);
  if ( v12 )
  {
    std::_Deallocate<16,0>(
      v12,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 89) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 87) = 0LL;
    *((_QWORD *)this + 88) = 0LL;
    *((_QWORD *)this + 89) = 0LL;
  }
  v13 = (_QWORD **)*((_QWORD *)this + 85);
  v14 = *v13;
  *v13 = v13;
  *(_QWORD *)(*((_QWORD *)this + 85) + 8LL) = *((_QWORD *)this + 85);
  *((_QWORD *)this + 86) = 0LL;
  v15 = (_QWORD *)*((_QWORD *)this + 85);
  if ( v14 != v15 )
  {
    do
    {
      v16 = (_QWORD *)*v14;
      InputContext::~InputContext((InputContext *)(v14 + 3));
      std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x80);
      v14 = v16;
      v15 = (_QWORD *)*((_QWORD *)this + 85);
    }
    while ( v16 != v15 );
  }
  std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)0x80);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 608, v17);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 69,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 68);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 66,
    0LL);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)this + 464, v18);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 51,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 50);
  v19 = *((_QWORD *)this + 49);
  if ( v19 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  v20 = *((_QWORD *)this + 48);
  if ( v20 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *((_QWORD *)this + 46);
  if ( v21 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *((_QWORD *)this + 45);
  if ( v22 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *((_QWORD *)this + 44);
  if ( v23 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 43);
  v24 = *((_QWORD *)this + 42);
  if ( v24 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = *((_QWORD *)this + 40);
  if ( v25 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 38);
  v26 = (void *)*((_QWORD *)this + 33);
  if ( v26 )
  {
    std::_Deallocate<16,0>(
      v26,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 35) - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 248);
  std::_Deallocate<16,0>(*((void **)this + 31), (const struct std::nothrow_t *)0x20);
  v27 = *((_QWORD *)this + 28);
  if ( v27 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = (_QWORD *)*((_QWORD *)this + 25);
  if ( v28 )
  {
    v29 = (_QWORD *)*((_QWORD *)this + 26);
    if ( v28 != v29 )
    {
      do
      {
        v30 = v28[1];
        if ( v30 )
        {
          v28[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        v28 += 2;
      }
      while ( v28 != v29 );
      v28 = (_QWORD *)*((_QWORD *)this + 25);
    }
    std::_Deallocate<16,0>(
      v28,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 27) - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v31 = *((_QWORD *)this + 24);
  if ( v31 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 21);
  v32 = *((_QWORD *)this + 20);
  if ( v32 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v2);
  v33 = (void *)*((_QWORD *)this + 14);
  if ( v33 )
  {
    std::_Deallocate<16,0>(
      v33,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 16) - (_QWORD)v33) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  v34 = (_QWORD **)*((_QWORD *)this + 12);
  v35 = *v34;
  *v34 = v34;
  *(_QWORD *)(*((_QWORD *)this + 12) + 8LL) = *((_QWORD *)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  v36 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v35 != v36 )
  {
    do
    {
      v37 = (_QWORD *)*v35;
      std::_Deallocate<16,0>(v35, (const struct std::nothrow_t *)0x40);
      v35 = v37;
      v36 = (_QWORD *)*((_QWORD *)this + 12);
    }
    while ( v37 != v36 );
  }
  std::_Deallocate<16,0>(v36, (const struct std::nothrow_t *)0x40);
  *((_QWORD *)this + 9) = &RefCountedObject::`vftable';
}
