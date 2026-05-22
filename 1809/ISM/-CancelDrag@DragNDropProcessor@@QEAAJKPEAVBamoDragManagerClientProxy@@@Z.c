/*
 * XREFs of ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180024880
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x180021B90 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManager.c)
 * Callees:
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18002260C (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x1800239D0 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180023B34 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180025668 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800259B0 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::CancelDrag(
        DragNDropProcessor *this,
        int a2,
        struct BamoDragManagerClientProxy *a3)
{
  unsigned __int64 v6; // rsi
  struct BamoDragManagerClientProxy *v7; // rdi
  struct tagPOINT v8; // rbx
  HMONITOR v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // rbx
  DragNDropProcessor *v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+58h] [rbp-19h] BYREF
  int v17[2]; // [rsp+60h] [rbp-11h] BYREF
  struct tagPOINT v18; // [rsp+68h] [rbp-9h] BYREF
  int v19; // [rsp+70h] [rbp-1h] BYREF
  struct _GUID v20; // [rsp+78h] [rbp+7h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+17h] BYREF
  __int64 v22; // [rsp+90h] [rbp+1Fh]
  struct BamoDragManagerClientProxy *v23; // [rsp+98h] [rbp+27h]
  unsigned int v24; // [rsp+E0h] [rbp+6Fh] BYREF

  v24 = a2;
  v22 = -2LL;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (char *)this + 104,
    &v16,
    &v24);
  v6 = v16;
  if ( v16 != *((_QWORD *)this + 14) )
  {
    v7 = *(struct BamoDragManagerClientProxy **)(v16 + 48);
    v23 = v7;
    if ( v7 )
      (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))v7)(v7);
    if ( v7 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
        (char *)this + 40,
        &v16,
        &v24);
      if ( v16 != *((_QWORD *)this + 6) )
      {
        v8 = *(struct tagPOINT *)(v16 + 24);
        v9 = *(HMONITOR *)(v16 + 32);
        v10 = *(_DWORD *)(v16 + 40);
        DragNDropProcessor::UpdateVelocityForPointerId(this, a2, v8);
        DragNDropProcessor::GetVelocityForPointerId(this, &v21, a2);
        v18 = v8;
        v16 = 0LL;
        v20 = *(struct _GUID *)(*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v7 + 1) + 72LL))((_QWORD *)v7 + 1);
        DragNDropProcessor::HitTest(this, v8, v9, &v20, &v18, &v16, 0LL, 0LL, 0LL, 0LL);
        v17[0] = 0;
        v17[1] = 0;
        *(_QWORD *)&v20.Data1 = 0LL;
        DragNDropProcessor::GetDragManagerInputSite(this, v8, v9, v7, (struct InputSite **)&v20);
        v11 = *(_QWORD *)&v20.Data1;
        DragNDropProcessor::GetPositionRelativeToSite(v12, (struct InputSite *)&v19, *(struct tagPOINT *)&v20.Data1);
        v13 = v16;
        InputETW::DragNDrop::DragEnded(v24, &v19, (int *)&v18, v17, v16, v10);
        (*(void (__fastcall **)(_QWORD *, _QWORD, int *, struct tagPOINT *, int *, unsigned int *, unsigned __int64, unsigned int))(*((_QWORD *)v7 + 1) + 40LL))(
          (_QWORD *)v7 + 1,
          v24,
          &v19,
          &v18,
          v17,
          &v21,
          v13,
          v10);
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
          (char *)this + 248,
          &v24);
        v14 = *(_QWORD *)(v6 + 48);
        if ( v14 )
        {
          *(_QWORD *)(v6 + 48) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return 0LL;
}
