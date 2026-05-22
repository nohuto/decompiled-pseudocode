/*
 * XREFs of ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800FFA7C
 * Callers:
 *     ?Thunk_StartDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x1800FFD50 (-Thunk_StartDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x180069C5C (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEE10 (-DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FEFC4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 *     ?StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z @ 0x1800FFC88 (-StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::StartDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  struct tagPOINT v6; // rsi
  unsigned int v7; // r12d
  HMONITOR v8; // r8
  struct tagPOINT v9; // rdi
  struct tagPOINT v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+70h] [rbp+7h] BYREF
  struct tagPOINT v14; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int64 v15[8]; // [rsp+80h] [rbp+17h] BYREF
  unsigned __int64 v16; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v17; // [rsp+E0h] [rbp+77h] BYREF
  struct tagPOINT v18; // [rsp+E8h] [rbp+7Fh] BYREF

  v17 = a3;
  v5 = *((_QWORD *)this + 4);
  v16 = 0LL;
  if ( (*(int (__fastcall **)(__int64, struct tagMsgRoutingInfo *, unsigned __int64 *))(*(_QWORD *)v5 + 104LL))(
         v5,
         a2,
         &v16) >= 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
      (__int64)this + 144,
      (__int64)&v18,
      (unsigned __int8 *)&v17);
    if ( v18 != *((_QWORD *)this + 19)
      || (std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
            (__int64)this + 80,
            (__int64)&v18,
            (unsigned __int8 *)&v17),
          v18 == *((_QWORD *)this + 11)) )
    {
      InputETW::DragNDrop::StartDragFailedLegacy(a3);
      v18 = (struct tagPOINT)v16;
      CoreUICallSend(*((_QWORD *)this + 8), &v18, 1LL, 1LL);
    }
    else
    {
      v6 = *(struct tagPOINT *)(*(_QWORD *)&v18 + 24LL);
      v7 = *(_DWORD *)(*(_QWORD *)&v18 + 40LL);
      v8 = *(HMONITOR *)(*(_QWORD *)&v18 + 32LL);
      v15[0] = 0LL;
      v14 = v6;
      v13 = 0LL;
      v18 = v6;
      DragNDropProcessorLegacy::HitTest(this, v6, v8, v15, &v14, &v13, &v18);
      v9 = v18;
      v10 = v14;
      InputETW::DragNDrop::DragStartedLegacy(v17, *(_QWORD *)&v6, v15[0], *(_QWORD *)&v14, v13, *(_QWORD *)&v18, v7);
      v11 = *((_QWORD *)this + 8);
      v13 = v16;
      v15[0] = (unsigned __int64)v10;
      v18 = v9;
      v14 = v6;
      if ( (int)CoreUICallSend(v11, &v13, 1LL, 1LL) >= 0 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
          (__int64)this + 144,
          (__int64)v15,
          &v17,
          &v16);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 4) + 152LL))(*((_QWORD *)this + 4), v16);
  }
  return 0LL;
}
