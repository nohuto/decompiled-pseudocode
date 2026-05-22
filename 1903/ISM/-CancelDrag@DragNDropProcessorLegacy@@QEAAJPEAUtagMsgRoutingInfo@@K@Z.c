/*
 * XREFs of ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800FE830
 * Callers:
 *     ?Thunk_CancelDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x1800FFF60 (-Thunk_CancelDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPE.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180027B40 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1800FE3DC (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEB24 (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Window.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FF1F4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::CancelDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  struct tagPOINT v6; // rsi
  int v7; // r12d
  HMONITOR v8; // r8
  unsigned __int64 v9; // rdi
  struct tagPOINT v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp-31h] BYREF
  struct tagPOINT v18; // [rsp+90h] [rbp-29h] BYREF
  struct tagPOINT v19; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v20[2]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v21[40]; // [rsp+B0h] [rbp-9h] BYREF

  v14 = a3;
  v16 = a3;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (__int64)this + 144,
    (__int64)&v15,
    (unsigned __int8 *)&v16);
  if ( v15 != *((_QWORD *)this + 19) )
  {
    v20[0] = *(_QWORD *)(v15 + 24);
    v5 = v20[0];
    memset_0(v21, 0, sizeof(v21));
    if ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 4) + 120LL))(
           *((_QWORD *)this + 4),
           v5,
           v21) >= 0 )
    {
      if ( operator==((__int64)v21, (__int64)a2) )
      {
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
          (__int64)this + 80,
          (__int64)&v15,
          (unsigned __int8 *)&v16);
        if ( v15 != *((_QWORD *)this + 11) )
        {
          v6 = *(struct tagPOINT *)(v15 + 24);
          v7 = *(_DWORD *)(v15 + 40);
          v8 = *(HMONITOR *)(v15 + 32);
          v15 = 0LL;
          v17 = 0LL;
          v18 = v6;
          v19 = v6;
          DragNDropProcessorLegacy::HitTest(this, v6, v8, &v15, &v18, &v17, &v19);
          v9 = (unsigned __int64)v19;
          v10 = v18;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))InputETW::DragNDrop::DragCancelledLegacy)(
            v14,
            v6,
            v15,
            v18,
            v17,
            v19,
            v7);
          v18 = v10;
          v11 = v20[0];
          v12 = *((_QWORD *)this + 8);
          v15 = v9;
          v17 = (unsigned __int64)v6;
          CoreUICallSend(v12, v20, 1LL, 1LL);
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 152LL))(*((_QWORD *)this + 4), v11);
          v14 = 0;
          std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
            (__int64)this + 144,
            (__int64)v20,
            &v16,
            (int *)&v14);
        }
      }
    }
  }
  return 0LL;
}
