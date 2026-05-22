/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x18008706C
 * Callers:
 *     ??1MPCInputRouter@@EEAA@XZ @ 0x180005F90 (--1MPCInputRouter@@EEAA@XZ.c)
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x180086F60 (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$0 @ 0x18012DE83 (_MPCInputRouter--MPCInputRouter_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180005EDC (--1-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??1?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@QEAA@XZ @ 0x1800214F0 (--1-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@InputSit.c)
 *     ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x18002A1AC (--1-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V?$_Uhash_compare@UtagMsgRoutingInfo@@URoutingInfoHash@@U?$equal_to@UtagMsgRoutingInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180086FB8 (--1-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@PEAUIInputTarget@@V-$_Uhash_compare@UtagMsgRoutin.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18008AA44 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     ??1?$list@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAA@XZ @ 0x18008C750 (--1-$list@U-$pair@$$CBKUInputContext@@@std@@V-$allocator@U-$pair@$$CBKUInputContext@@@std@@@2@@s.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char *v16; // rcx
  const struct std::nothrow_t *v17; // rdx
  char *v18; // r8
  char *v19; // rcx
  char *v20; // rcx
  char *v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // [rsp+40h] [rbp+8h] BYREF

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
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 39);
  if ( v4 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 12);
  v7 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 != v6 )
  {
    do
      v7 = *(_QWORD **)DWMInputRouter::RemoveTarget(this, &v42, v7);
    while ( v7 != *((_QWORD **)this + 12) );
  }
  v8 = (_QWORD **)*((_QWORD *)this + 31);
  v9 = *v8;
  *v8 = v8;
  *(_QWORD *)(*((_QWORD *)this + 31) + 8LL) = *((_QWORD *)this + 31);
  *((_QWORD *)this + 32) = 0LL;
  if ( v9 != *((_QWORD **)this + 31) )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      operator delete(v9, (const struct std::nothrow_t *)0x20);
      v9 = v10;
    }
    while ( v10 != *((_QWORD **)this + 31) );
  }
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    (_QWORD *)this + 30,
    8LL);
  v11 = *((_QWORD *)this + 21);
  if ( v11 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 22);
  if ( v12 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 20);
  if ( v13 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 44);
  if ( v14 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 46);
  if ( v15 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (char *)*((_QWORD *)this + 92);
  if ( v16 )
  {
    v17 = (const struct std::nothrow_t *)((*((_QWORD *)this + 94) - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v17 >= 0x1000 )
    {
      v17 = (const struct std::nothrow_t *)((char *)v17 + 39);
      v18 = (char *)*((_QWORD *)v16 - 1);
      v19 = (char *)(v16 - v18);
      if ( (unsigned __int64)(v19 - 8) > 0x1F )
        goto LABEL_72;
      v16 = v18;
    }
    operator delete(v16, v17);
    *((_QWORD *)this + 92) = 0LL;
    *((_QWORD *)this + 93) = 0LL;
    *((_QWORD *)this + 94) = 0LL;
  }
  v20 = (char *)*((_QWORD *)this + 87);
  if ( !v20 )
    goto LABEL_33;
  v17 = (const struct std::nothrow_t *)((*((_QWORD *)this + 89) - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (unsigned __int64)v17 >= 0x1000 )
  {
    v17 = (const struct std::nothrow_t *)((char *)v17 + 39);
    v21 = (char *)*((_QWORD *)v20 - 1);
    v19 = (char *)(v20 - v21);
    if ( (unsigned __int64)(v19 - 8) <= 0x1F )
    {
      v20 = v21;
      goto LABEL_32;
    }
LABEL_72:
    _o__invalid_parameter_noinfo_noreturn(v19, v17);
    JUMPOUT(0x18008763BLL);
  }
LABEL_32:
  operator delete(v20, v17);
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
LABEL_33:
  std::list<std::pair<unsigned long const,InputContext>>::~list<std::pair<unsigned long const,InputContext>>((char *)this + 680);
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 68,
    v22);
  v23 = *((_QWORD *)this + 67);
  if ( v23 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 144LL))(*((_QWORD *)this + 66));
  *((_QWORD *)this + 67) = 0LL;
  v24 = *((_QWORD *)this + 66);
  if ( v24 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
    (__int64 *)this + 50,
    v23);
  v25 = *((_QWORD *)this + 49);
  if ( v25 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  }
  v26 = *((_QWORD *)this + 48);
  if ( v26 )
  {
    *((_QWORD *)this + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = *((_QWORD *)this + 46);
  if ( v27 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = *((_QWORD *)this + 45);
  if ( v28 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *((_QWORD *)this + 44);
  if ( v29 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = *((_QWORD *)this + 43);
  if ( v30 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = *((_QWORD *)this + 42);
  if ( v31 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = *((_QWORD *)this + 40);
  if ( v32 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *((_QWORD *)this + 39);
  if ( v33 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *((_QWORD *)this + 38);
  if ( v34 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>((_QWORD *)this + 30);
  v35 = *((_QWORD *)this + 28);
  if ( v35 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  std::vector<InputSite::AttachedInputObjectEntry>::~vector<InputSite::AttachedInputObjectEntry>((__int64)this + 200);
  v36 = *((_QWORD *)this + 24);
  if ( v36 )
  {
    *((_QWORD *)this + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = *((_QWORD *)this + 23);
  if ( v37 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = *((_QWORD *)this + 22);
  if ( v38 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v39 = *((_QWORD *)this + 21);
  if ( v39 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = *((_QWORD *)this + 20);
  if ( v40 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = *((_QWORD *)this + 19);
  if ( v41 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>::~_Hash<std::_Umap_traits<tagMsgRoutingInfo,IInputTarget *,std::_Uhash_compare<tagMsgRoutingInfo,RoutingInfoHash,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,IInputTarget *>>,0>>((_QWORD *)this + 11);
  *((_QWORD *)this + 9) = &RefCountedObject::`vftable';
}
