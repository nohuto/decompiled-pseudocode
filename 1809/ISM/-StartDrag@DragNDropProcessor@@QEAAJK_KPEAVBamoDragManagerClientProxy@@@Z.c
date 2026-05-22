/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180024520
 * Callers:
 *     ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180021B60 (-StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManage.c)
 * Callees:
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800222B4 (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800227B8 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x1800239D0 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180023B34 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x180024AD0 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180025668 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800259B0 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@s.c)
 *     ??A?$unordered_map@KVMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAAAEAVMessageInfo@DragNDropProcessor@@AEBK@Z @ 0x180025D98 (--A-$unordered_map@KVMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x1800261F4 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        __int64 a3,
        struct BamoDragManagerClientProxy *a4)
{
  unsigned int v5; // esi
  struct tagPOINT v7; // rbx
  bool v8; // di
  _QWORD *v9; // rax
  char v10; // dl
  struct tagPOINT v11; // rdi
  unsigned int v12; // r12d
  HMONITOR v13; // r13
  DragNDropProcessor *v14; // rcx
  struct tagPOINT v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h] BYREF
  struct tagPOINT v23; // [rsp+68h] [rbp-19h] BYREF
  struct tagPOINT v24; // [rsp+70h] [rbp-11h] BYREF
  __int64 v25; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp-1h] BYREF
  struct _GUID v27; // [rsp+88h] [rbp+7h] BYREF
  __int64 v28; // [rsp+98h] [rbp+17h]
  __int64 v29; // [rsp+A0h] [rbp+1Fh]
  struct BamoDragManagerClientProxy *v30; // [rsp+A8h] [rbp+27h]
  unsigned int v31; // [rsp+F0h] [rbp+6Fh] BYREF

  v31 = a2;
  v29 = -2LL;
  v28 = a3;
  v5 = a2;
  v30 = a4;
  if ( a4 )
  {
    (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))a4)(a4);
    v5 = v31;
  }
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (char *)this + 40,
    &v24,
    &v31);
  v7 = v24;
  v8 = v24 == *((_QWORD *)this + 6);
  v9 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
                   (char *)this + 168,
                   &v24,
                   &v31);
  v10 = v8;
  if ( *v9 != *((_QWORD *)this + 22) )
    v10 = 1;
  v11 = *(struct tagPOINT *)(*(_QWORD *)&v7 + 24LL);
  v12 = *(_DWORD *)(*(_QWORD *)&v7 + 40LL);
  v26 = 0LL;
  v22 = 0LL;
  v23 = v11;
  v21 = 0LL;
  v25 = 0LL;
  if ( v10 )
  {
    InputETW::DragNDrop::DragCancelled(v5, (int *)&v21, (int *)&v23, (int *)&v22, 0, v12);
    (*(void (__fastcall **)(char *, _QWORD, __int64 *, struct tagPOINT *, __int64 *, __int64 *, _QWORD, unsigned int))(*((_QWORD *)a4 + 1) + 48LL))(
      (char *)a4 + 8,
      v31,
      &v21,
      &v23,
      &v22,
      &v25,
      0LL,
      v12);
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
      (char *)this + 248,
      &v31);
  }
  else
  {
    v13 = *(HMONITOR *)(*(_QWORD *)&v7 + 32LL);
    v24 = 0LL;
    DragNDropProcessor::GetDragManagerInputSite(this, v11, v13, a4, (struct InputSite **)&v24);
    v15 = v24;
    if ( v24 )
      v21 = **(_QWORD **)&DragNDropProcessor::GetPositionRelativeToSite(v14, (struct InputSite *)&v27, v24);
    DragNDropProcessor::UpdateVelocityForPointerId(this, v31, v11);
    v25 = **(_QWORD **)&DragNDropProcessor::GetVelocityForPointerId(this, &v27, v31);
    v27 = *(struct _GUID *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a4 + 1) + 72LL))((char *)a4 + 8);
    DragNDropProcessor::HitTest(this, v11, v13, &v27, &v23, &v26, 0LL, 0LL, 0LL, 0LL);
    v16 = v26;
    InputETW::DragNDrop::DragStarted(v31, (int *)&v21, (int *)&v23, (int *)&v22, v26, v12);
    LODWORD(v16) = (*(__int64 (__fastcall **)(char *, _QWORD, __int64 *, struct tagPOINT *, __int64 *, __int64 *, unsigned __int64, unsigned int, __int64))(*((_QWORD *)a4 + 1) + 24LL))(
                     (char *)a4 + 8,
                     v31,
                     &v21,
                     &v23,
                     &v22,
                     &v25,
                     v16,
                     v12,
                     v28);
    v26 = 0LL;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
      (char *)this + 168,
      &v27,
      &v31,
      &v26);
    if ( (v16 & 0x80000000) == 0LL )
    {
      v17 = std::unordered_map<unsigned long,DragNDropProcessor::MessageInfo>::operator[]((char *)this + 104, &v31);
      if ( *(struct BamoDragManagerClientProxy **)(v17 + 24) != a4 )
      {
        (**(void (__fastcall ***)(struct BamoDragManagerClientProxy *))a4)(a4);
        v18 = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 24) = a4;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      }
      v19 = *(_QWORD *)(v17 + 56);
      if ( v19 != v15 )
      {
        if ( v15 )
        {
          (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v15 + 8LL))(v15);
          v19 = *(_QWORD *)(v17 + 56);
        }
        *(struct tagPOINT *)(v17 + 56) = v15;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      *(_DWORD *)(v17 + 8) = 4;
    }
    if ( v15 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v15 + 16LL))(v15);
  }
  (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  return 0LL;
}
