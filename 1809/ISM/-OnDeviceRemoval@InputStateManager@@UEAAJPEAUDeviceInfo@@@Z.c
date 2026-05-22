/*
 * XREFs of ?OnDeviceRemoval@InputStateManager@@UEAAJPEAUDeviceInfo@@@Z @ 0x180053640
 * Callers:
 *     ?OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z @ 0x180054560 (-OnDeviceRemoval@InputStateManager@@W7EAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@@Z @ 0x180025FFC (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800525F8 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceRemoval(InputStateManager *this, struct DeviceInfo *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  int v10; // eax
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 i; // rdx
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD **v20; // rdx
  _QWORD **v21; // r10
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rdi
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rbx
  _QWORD *v28; // r8
  int v29; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v31; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  InputETW::InputStateManager::OnDeviceRemoval(a2);
  v5 = *((_QWORD *)this + 9);
  if ( v5 == *((_QWORD *)this + 10) )
  {
LABEL_4:
    v6 = -2147467259;
    v7 = 2147500037LL;
    v8 = 371LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)v7);
    goto LABEL_6;
  }
  while ( *(_DWORD *)v5 != *(_DWORD *)a2 )
  {
    v5 += 16LL;
    if ( v5 == *((_QWORD *)this + 10) )
      goto LABEL_4;
  }
  v4 = *(_QWORD *)(v5 + 8);
  v10 = (*(__int64 (__fastcall **)(__int64, struct DeviceInfo *))(*(_QWORD *)v4 + 40LL))(v4, a2);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = 352LL;
    goto LABEL_5;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 10);
  if ( (_QWORD *)(v5 + 16) != v11 )
  {
    v12 = (_QWORD *)(v5 + 24);
    do
    {
      *((_DWORD *)v12 - 6) = *((_DWORD *)v12 - 2);
      *(v12 - 2) = *v12;
      v12 += 2;
    }
    while ( v12 - 1 != v11 );
  }
  *((_QWORD *)this + 10) -= 16LL;
  v13 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v13 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v13);
  v15 = v13 & *((_QWORD *)this + 18);
  v16 = 2 * v15;
  v17 = *((_QWORD *)this + 15);
  v18 = *(_QWORD **)(v17 + 16 * v15);
  v19 = 2 * v15;
  v20 = (_QWORD **)*((_QWORD *)this + 13);
  v21 = (_QWORD **)v18;
  while ( 1 )
  {
    if ( v21 == v20 )
      v22 = (_QWORD *)*((_QWORD *)this + 13);
    else
      v22 = **(_QWORD ***)(v17 + 8 * v19 + 8);
    if ( v18 == v22 )
      goto LABEL_31;
    if ( *((_DWORD *)v18 + 4) == *(_DWORD *)a2 )
      break;
    v18 = (_QWORD *)*v18;
  }
  v23 = v18;
  v24 = v18;
  while ( 1 )
  {
    v25 = v21 == v20 ? (_QWORD *)*((_QWORD *)this + 13) : **(_QWORD ***)(v17 + 8 * v16 + 8);
    if ( v18 == v25 || *(_DWORD *)a2 != *((_DWORD *)v18 + 4) )
      break;
    v18 = (_QWORD *)*v18;
  }
  if ( v23 == v18 )
  {
LABEL_31:
    v24 = (_QWORD *)*((_QWORD *)this + 13);
    v18 = v24;
  }
  v31 = v24;
  v26 = *v20;
  if ( v24 == *v20 && v18 == v20 )
  {
    *v20 = v20;
    *(_QWORD *)(*((_QWORD *)this + 13) + 8LL) = *((_QWORD *)this + 13);
    *((_QWORD *)this + 14) = 0LL;
    if ( v26 != *((_QWORD **)this + 13) )
    {
      do
      {
        v27 = (_QWORD *)*v26;
        operator delete(v26, (const struct std::nothrow_t *)0x20);
        v26 = v27;
      }
      while ( v27 != *((_QWORD **)this + 13) );
    }
    std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
      (_QWORD *)this + 12,
      8LL);
  }
  else
  {
    while ( v24 != v18 )
    {
      v28 = v24;
      v24 = (_QWORD *)*v24;
      std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::erase(
        (_QWORD *)this + 12,
        &v31,
        v28);
    }
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 40LL))(
          *((_QWORD *)this + 5),
          a2);
  v6 = v29;
  if ( v29 < 0 )
  {
    v7 = (unsigned int)v29;
    v8 = 364LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_6:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
