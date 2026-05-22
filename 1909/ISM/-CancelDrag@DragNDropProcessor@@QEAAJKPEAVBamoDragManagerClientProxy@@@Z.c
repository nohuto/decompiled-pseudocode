/*
 * XREFs of ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006A9CC
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x180068D20 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManager.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006AE8C (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18006B7F0 (-GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManager.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18006B8E4 (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18006B9B4 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@7@Z @ 0x18006BA10 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@U_GUID@@PEAU2@PEA_KPEAPEAVBamoDragS.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BFAC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z @ 0x18006D2B8 (-UpdateVelocityForPointerId@DragNDropProcessor@@AEAAJKUtagPOINT@@@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006DF38 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare_ea_18006DF38.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::CancelDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  struct BamoDragManagerClientProxy *v6; // rdi
  struct tagPOINT v7; // rbx
  HMONITOR v8; // rsi
  int v9; // r15d
  __int64 (__fastcall ***v10)(_QWORD); // r14
  struct tagPOINT v11; // rbx
  DragNDropProcessor *v12; // rcx
  unsigned __int64 v13; // rdi
  unsigned __int64 v15; // [rsp+58h] [rbp-29h] BYREF
  __int64 (__fastcall ***v16)(_QWORD); // [rsp+60h] [rbp-21h] BYREF
  __int64 v17; // [rsp+68h] [rbp-19h] BYREF
  struct tagPOINT v18; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v19[16]; // [rsp+78h] [rbp-9h] BYREF
  struct tagPOINT v20[2]; // [rsp+88h] [rbp+7h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+17h] BYREF
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+A0h] [rbp+1Fh]
  __int64 v23; // [rsp+A8h] [rbp+27h]
  unsigned int v24; // [rsp+F0h] [rbp+6Fh] BYREF

  v24 = a2;
  v23 = -2LL;
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
    (char *)this + 104,
    &v16,
    &v24);
  if ( v16 != *((__int64 (__fastcall ****)(_QWORD))this + 14) )
  {
    v22 = v16 + 6;
    v16 = (__int64 (__fastcall ***)(_QWORD))v16[6];
    v6 = (struct BamoDragManagerClientProxy *)v16;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v16);
    if ( v6 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (char *)this + 40,
        &v15,
        &v24);
      if ( v15 != *((_QWORD *)this + 6) )
      {
        v7 = *(struct tagPOINT *)(v15 + 24);
        v8 = *(HMONITOR *)(v15 + 32);
        v9 = *(_DWORD *)(v15 + 40);
        DragNDropProcessor::UpdateVelocityForPointerId(this, a2, v7);
        DragNDropProcessor::GetVelocityForPointerId(this, (unsigned int)&v21);
        v18 = v7;
        v15 = 0LL;
        v10 = (__int64 (__fastcall ***)(_QWORD))((char *)v6 + 8);
        *(_OWORD *)&v20[0].x = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v6 + 1) + 72LL))((__int64)v6 + 8);
        DragNDropProcessor::HitTest(this, v7, v8, (struct _GUID *)v20, &v18, &v15, 0LL, 0LL, 0LL, 0LL);
        v17 = 0LL;
        v20[0] = 0LL;
        DragNDropProcessor::GetDragManagerInputSite(this, v7, v8, v6, (struct InputSite **)v20);
        v11 = v20[0];
        DragNDropProcessor::GetPositionRelativeToSite(v12, (struct InputSite *)v19, v20[0]);
        v13 = v15;
        InputETW::DragNDrop::DragEnded(a2, v19, &v18, &v17, v15, v9);
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, _BYTE *, struct tagPOINT *, __int64 *, unsigned int *, unsigned __int64, int))(*v10)[5])(
          v10,
          a2,
          v19,
          &v18,
          &v17,
          &v21,
          v13,
          v9);
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
          (char *)this + 248,
          &v24);
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(v22);
        if ( v11 )
          (*(void (__fastcall **)(struct tagPOINT))(**(_QWORD **)&v11 + 16LL))(v11);
      }
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(&v16);
  }
  return 0LL;
}
