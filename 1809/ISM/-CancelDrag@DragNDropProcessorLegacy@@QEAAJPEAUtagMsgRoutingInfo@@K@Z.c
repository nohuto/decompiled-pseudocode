/*
 * XREFs of ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800C974C
 * Callers:
 *     ?Thunk_CancelDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x1800C9D30 (-Thunk_CancelDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPE.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800C861C (-DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Window.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800C996C (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1800C9C2C (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::CancelDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  __int64 v5; // rdi
  struct tagPOINT v7; // rsi
  unsigned int v8; // r12d
  HMONITOR v9; // r8
  unsigned __int64 v10; // rdi
  struct tagPOINT v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v17; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp-31h] BYREF
  struct tagPOINT v19; // [rsp+90h] [rbp-29h] BYREF
  struct tagPOINT v20; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v21[2]; // [rsp+A0h] [rbp-19h] BYREF
  _DWORD v22[10]; // [rsp+B0h] [rbp-9h] BYREF

  v15 = a3;
  v17 = a3;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 18,
    (__int64 **)&v16,
    &v17);
  if ( v16 != *((_QWORD *)this + 19) )
  {
    v21[0] = *(_QWORD *)(v16 + 24);
    v5 = v21[0];
    memset_0(v22, 0, sizeof(v22));
    if ( (*(int (__fastcall **)(_QWORD, __int64, _DWORD *))(**((_QWORD **)this + 4) + 112LL))(
           *((_QWORD *)this + 4),
           v5,
           v22) >= 0
      && v22[0] == *(_DWORD *)a2
      && operator==((__int64)v22, (__int64)a2) )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (_QWORD *)this + 10,
        (__int64 **)&v16,
        &v17);
      if ( v16 != *((_QWORD *)this + 11) )
      {
        v7 = *(struct tagPOINT *)(v16 + 24);
        v8 = *(_DWORD *)(v16 + 40);
        v9 = *(HMONITOR *)(v16 + 32);
        v16 = 0LL;
        v18 = 0LL;
        v19 = v7;
        v20 = v7;
        DragNDropProcessorLegacy::HitTest(this, v7, v9, &v16, &v19, &v18, &v20);
        v10 = (unsigned __int64)v20;
        v11 = v19;
        InputETW::DragNDrop::DragCancelledLegacy(v15, *(_QWORD *)&v7, v16, *(_QWORD *)&v19, v18, *(_QWORD *)&v20, v8);
        v19 = v11;
        v12 = v21[0];
        v13 = *((_QWORD *)this + 8);
        v16 = v10;
        v18 = (unsigned __int64)v7;
        CoreUICallSend(v13, v21, 1LL, 1LL, 3, &unk_18015804E, v15);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 144LL))(*((_QWORD *)this + 4), v12);
        v15 = 0;
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
          (char *)this + 144,
          v21,
          &v17,
          &v15);
      }
    }
  }
  return 0LL;
}
