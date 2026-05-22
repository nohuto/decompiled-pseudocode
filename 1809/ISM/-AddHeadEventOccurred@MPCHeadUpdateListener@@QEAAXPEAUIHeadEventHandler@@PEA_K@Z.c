/*
 * XREFs of ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x18005B14C
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z @ 0x180058664 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@KK@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180061310 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800091D8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@@Z @ 0x18005BAF8 (--$_Insert@AEAU-$pair@$$CB_KV-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@s.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHeadUpdateListener::AddHeadEventOccurred(
        MPCHeadUpdateListener *this,
        struct IHeadEventHandler *a2,
        unsigned __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD **v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // r14
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // [rsp+38h] [rbp-30h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+80h] [rbp+18h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v23 = v6;
  *a3 = (*(_QWORD *)this)++;
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  do
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v7++) ^ (unsigned __int64)v8);
  while ( v7 < 8 );
  v9 = v8 & *((_QWORD *)this + 7);
  v10 = *((_QWORD *)this + 4);
  v11 = *(_QWORD **)(v10 + 16 * v9);
  v12 = 2 * v9;
  v13 = (_QWORD **)*((_QWORD *)this + 2);
  while ( 1 )
  {
    v14 = *(_QWORD ***)(v10 + 8 * v12) == v13 ? (_QWORD *)*((_QWORD *)this + 2) : **(_QWORD ***)(v10 + 8 * v12 + 8);
    if ( v11 == v14 )
      break;
    if ( v11[2] == *a3 )
    {
      v15 = (__int64)v11;
      goto LABEL_12;
    }
    v11 = (_QWORD *)*v11;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  v15 = (__int64)v11;
LABEL_12:
  if ( (_QWORD **)v15 == v13 )
  {
    v22 = a3;
    v16 = (__int64)*v13;
    v17 = (_QWORD *)(*v13)[1];
    v18 = std::_List_buy<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
            v15,
            *v13,
            v17,
            v12,
            &v22);
    v19 = *((_QWORD *)this + 3);
    if ( v19 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 3) = v19 + 1;
    *(_QWORD *)(v16 + 8) = v18;
    *v17 = v18;
    std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Insert<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>>>>(
      (char *)this + 8,
      &v21,
      **((_QWORD **)this + 2) + 16LL);
    v11 = v21;
  }
  v20 = v11[3];
  v11[3] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IHeadEventHandler *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v6 )
    LeaveCriticalSection(v6);
}
