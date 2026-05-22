/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CF2C
 * Callers:
 *     ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180069380 (-StartDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@I_KPEAVBamoDragManage.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x180069E9C (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006A108 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_18006A108.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18006AA70 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006AF34 (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006B3FC (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18006BA30 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18006BB24 (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18006BBF4 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BC50 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x18006D4F8 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006E178 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare_ea_18006E178.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E760 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        unsigned int *a3,
        struct BamoDragManagerClientProxy *a4)
{
  struct tagPOINT v6; // rdi
  bool v7; // bl
  char v8; // cl
  struct tagPOINT v9; // rbx
  unsigned int v10; // r15d
  HMONITOR v11; // r12
  DragNDropProcessor *v12; // rcx
  struct tagPOINT v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r8
  unsigned int *v16; // rbx
  struct tagPOINT v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-19h] BYREF
  struct tagPOINT v21; // [rsp+70h] [rbp-11h] BYREF
  unsigned int *v22; // [rsp+78h] [rbp-9h] BYREF
  __int128 v23; // [rsp+80h] [rbp-1h] BYREF
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+90h] [rbp+Fh] BYREF
  struct _GUID v25; // [rsp+98h] [rbp+17h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+27h]
  unsigned int v27; // [rsp+F0h] [rbp+6Fh] BYREF

  v27 = a2;
  v26 = -2LL;
  v22 = a3;
  v24 = (__int64 (__fastcall ***)(_QWORD))a4;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v24);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 40,
    &v18,
    &v27);
  v6 = v18;
  v7 = v18 == *((_QWORD *)this + 6);
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 168,
    &v18,
    &v27);
  v8 = v7;
  if ( v18 != *((_QWORD *)this + 22) )
    v8 = 1;
  v9 = *(struct tagPOINT *)(*(_QWORD *)&v6 + 24LL);
  v10 = *(_DWORD *)(*(_QWORD *)&v6 + 40LL);
  v23 = 0uLL;
  v20 = 0LL;
  v21 = v9;
  v19 = 0LL;
  if ( v8 )
  {
    InputETW::DragNDrop::DragCancelled(v27, (int *)&v19, (int *)&v21, (int *)&v20, 0, v10);
    (*(void (__fastcall **)(char *, _QWORD, __int64 *, struct tagPOINT *, __int64 *, __int128 *, _QWORD, unsigned int))(*((_QWORD *)a4 + 1) + 48LL))(
      (char *)a4 + 8,
      v27,
      &v19,
      &v21,
      &v20,
      &v23,
      0LL,
      v10);
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
      (char *)this + 248,
      &v27);
  }
  else
  {
    v11 = *(HMONITOR *)(*(_QWORD *)&v6 + 32LL);
    v18 = 0LL;
    DragNDropProcessor::GetDragManagerInputSite(this, v9, v11, a4, (struct InputSite **)&v18);
    v13 = v18;
    if ( v18 )
      v19 = **(_QWORD **)&DragNDropProcessor::GetPositionRelativeToSite(
                            v12,
                            (struct InputSite *)&v25,
                            v18,
                            *(_QWORD *)&v9);
    DragNDropProcessor::UpdateVelocityForPointerId(this, v27, v9);
    *(_QWORD *)&v23 = **(_QWORD **)&DragNDropProcessor::GetVelocityForPointerId(this, &v25, v27);
    v25 = *(struct _GUID *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a4 + 1) + 72LL))((char *)a4 + 8);
    DragNDropProcessor::HitTest(this, v9, v11, &v25, &v21, (unsigned __int64 *)&v23 + 1, 0LL, 0LL, 0LL, 0LL);
    v14 = *((_QWORD *)&v23 + 1);
    InputETW::DragNDrop::DragStarted(v27, (int *)&v19, (int *)&v21, (int *)&v20, SBYTE8(v23), v10);
    LODWORD(v14) = (*(__int64 (__fastcall **)(char *, _QWORD, __int64 *, struct tagPOINT *, __int64 *, __int128 *, __int64, unsigned int, unsigned int *))(*((_QWORD *)a4 + 1) + 24LL))(
                     (char *)a4 + 8,
                     v27,
                     &v19,
                     &v21,
                     &v20,
                     &v23,
                     v14,
                     v10,
                     v22);
    *((_QWORD *)&v23 + 1) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
      (__int64)this + 168,
      (__int64)&v25,
      &v27,
      (_QWORD *)&v23 + 1);
    if ( (int)v14 >= 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (char *)this + 104,
        &v22,
        &v27);
      v16 = v22;
      if ( v22 == *((unsigned int **)this + 14) )
      {
        v22 = &v27;
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
          (__int64)this + 104,
          (__int64)&v25,
          v15,
          &v22);
        v16 = *(unsigned int **)&v25.Data1;
      }
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))v16 + 6, &v24);
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v16 + 9, (__int64 *)&v18);
      v16[8] = 4;
    }
    if ( v13 )
      (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v13 + 16LL))(v13);
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v24);
  return 0LL;
}
