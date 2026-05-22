/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x180089B18
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180089D60 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180089D70 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180025B0C (-erase@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAUDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x180026654 (--$_Insert@AEAU-$pair@$$CBKPEAUDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Li.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180026F34 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x18008AA44 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(__int64 **this, struct DeviceInfo *a2, char a3)
{
  char v6; // r14
  char *v7; // rbx
  _QWORD *v8; // rcx
  _DWORD *v9; // r8
  __int64 **v10; // rax
  __int64 *v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 **); // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 (__fastcall **v15)(_QWORD, _QWORD); // rax
  int v16; // eax
  __int64 v17; // r9
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // r15
  _QWORD *v21; // r13
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 *v24; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  _QWORD v28[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v30; // [rsp+98h] [rbp+48h] BYREF

  v6 = 0;
  v7 = (char *)(this + 30);
  v8 = this + 30;
  if ( a3 )
  {
    if ( *std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
            v8,
            &v30,
            a2) == this[31] )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        v7,
        &v30,
        v9);
      v18 = (__int64 *)*((_QWORD *)v7 + 1);
      v19 = v30;
      if ( v30 == v18 )
      {
        v30 = (__int64 *)a2;
        v20 = *v18;
        v21 = *(_QWORD **)(*v18 + 8);
        v22 = std::_List_buy<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                (__int64)v18,
                (_QWORD *)*v18,
                v21,
                v17,
                (_DWORD **)&v30);
        v23 = *((_QWORD *)v7 + 2);
        if ( v23 == 0x7FFFFFFFFFFFFFELL )
          std::_Xlength_error("list<T> too long");
        *((_QWORD *)v7 + 2) = v23 + 1;
        *(_QWORD *)(v20 + 8) = v22;
        *v21 = v22;
        std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,DeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>(
          (float *)v7,
          (__int64)v28,
          (_DWORD *)(**((_QWORD **)v7 + 1) + 16LL),
          **((__int64 ***)v7 + 1));
        v19 = (__int64 *)v28[0];
      }
      v19[3] = (__int64)a2;
    }
    else
    {
      v6 = 1;
    }
  }
  else if ( !std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::erase(
               v8,
               a2) )
  {
    goto LABEL_27;
  }
  v10 = (__int64 **)this[12];
  v11 = *v10;
  if ( *v10 != (__int64 *)v10 )
  {
    while ( 1 )
    {
      v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))v11[7];
      v30 = 0LL;
      v13 = (**v12)(v12, &GUID_ce017166_b885_4259_a1c9_31032455b8b4, &v30);
      v14 = retaddr;
      if ( v13 < 0 )
        goto LABEL_28;
      if ( !v30 )
        break;
      v15 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v30;
      if ( a3 )
      {
        if ( v6 )
          v16 = ((__int64 (__fastcall **)(__int64 *, struct DeviceInfo *))v15)[4](v30, a2);
        else
          v16 = ((__int64 (__fastcall **)(__int64 *, struct DeviceInfo *))v15)[3](v30, a2);
      }
      else
      {
        v16 = ((__int64 (__fastcall **)(__int64 *, struct DeviceInfo *))v15)[5](v30, a2);
      }
      if ( v16 >= 0 )
        v11 = (__int64 *)*v11;
      else
        v11 = *(__int64 **)DWMInputRouter::RemoveTarget(this, v28, v11);
      v24 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
      }
      if ( v11 == this[12] )
        return 0LL;
    }
    v26 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3DF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)v26);
LABEL_27:
    v27 = wil::verify_hresult<long>(0x80004005);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3CB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)v27);
LABEL_28:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x3DB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x180089D53LL);
  }
  return 0LL;
}
