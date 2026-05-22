/*
 * XREFs of ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FF630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEAKUPointerCache@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x180069CE4 (--$emplace@AEAKUPointerCache@DragNDropProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDr.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUVelocityData@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006DF38 (-erase@-$_Hash@V-$_Umap_traits@KUVelocityData@DragNDropProcessor@@V-$_Uhash_compare_ea_18006DF38.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18006E364 (-erase@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1800FE1AC (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 *     ?DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEAA8 (-DragEndedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@.c)
 *     ?DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEC5C (-DragInProgressLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windo.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FEFC4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::OnInput(
        DragNDropProcessorLegacy *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v4; // eax
  DragNDropProcessorLegacy *v5; // rbx
  unsigned int v7; // r12d
  __int64 v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  struct tagPOINT v12; // rsi
  unsigned __int64 v13; // rdi
  struct tagPOINT v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v20; // [rsp+78h] [rbp-90h] BYREF
  int v21; // [rsp+7Ch] [rbp-8Ch]
  unsigned __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  struct tagPOINT v23; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  HMONITOR v26; // [rsp+A0h] [rbp-68h] BYREF
  struct tagPOINT v27; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v31[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v32; // [rsp+D8h] [rbp-30h]
  _BYTE v33[16]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v34[88]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v36; // [rsp+160h] [rbp+58h] BYREF
  struct InputContext *v37; // [rsp+168h] [rbp+60h]
  struct ContextualProcessorResponse *v38; // [rsp+170h] [rbp+68h]

  v38 = a4;
  v37 = a3;
  v4 = *((_DWORD *)a2 + 34);
  v5 = this;
  v7 = (v4 & 0x11) != 0;
  if ( (v4 & 0x22) != 0 )
    v7 |= 4u;
  if ( (v4 & 0x44) != 0 )
    v7 |= 2u;
  if ( (v4 & 0x88) != 0 )
    v7 |= 8u;
  v8 = 0LL;
  v21 = 0;
  if ( *((_DWORD *)a2 + 53) )
  {
    v9 = (_QWORD *)((char *)this + 80);
    do
    {
      v26 = 0LL;
      v10 = *((_QWORD *)a3 + 9);
      v11 = 144 * v8;
      v28 = 144 * v8;
      v12 = (struct tagPOINT)*((_QWORD *)a2 + 18 * v8 + 33);
      v20 = *((_DWORD *)a2 + 36 * v8 + 55);
      v36 = v20;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v10 + 24LL))(v10, &v26);
        v11 = v28;
      }
      if ( (*((_BYTE *)a2 + v11 + 228) & 4) != 0 )
      {
        v31[1] = v26;
        v31[0] = v12;
        v32 = v7;
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>,0>>::emplace<unsigned long &,DragNDropProcessor::PointerCache>(
          (__int64)v9,
          (__int64)v33,
          &v36,
          (__int64)v31);
        v20 = v36;
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
          (__int64)v9,
          (__int64)&v29,
          (unsigned __int8 *)&v36);
        if ( v29 != *((_QWORD *)v5 + 11) )
          std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::VelocityData,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>,0>>::erase(
            v9,
            (unsigned __int8 *)&v36);
      }
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
        (__int64)v5 + 144,
        (__int64)&v30,
        (unsigned __int8 *)&v36);
      if ( v30 == *((_QWORD *)v5 + 19) )
        goto LABEL_25;
      v25 = *(_QWORD *)(v30 + 24);
      if ( v25 )
      {
        v24 = 0LL;
        v22 = 0LL;
        v23 = v12;
        v27 = v12;
        DragNDropProcessorLegacy::HitTest(v5, v12, v26, &v24, &v23, &v22, &v27);
        v13 = (unsigned __int64)v27;
        v14 = v23;
        if ( (*((_BYTE *)a2 + v28 + 228) & 4) != 0 )
        {
          InputETW::DragNDrop::DragInProgressLegacy(
            v20,
            *(_QWORD *)&v12,
            v24,
            *(_QWORD *)&v23,
            v22,
            *(_QWORD *)&v27,
            v7);
          v23 = v14;
          v5 = this;
          v24 = v13;
          v8 = v25;
          v15 = *((_QWORD *)this + 8);
          v22 = (unsigned __int64)v12;
          if ( (int)CoreUICallSend(v15, &v25, 1LL, 1LL) < 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 152LL))(*((_QWORD *)this + 4), v8);
            v20 = 0;
            v16 = (_QWORD *)((char *)this + 144);
            std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,int>(
              (__int64)this + 144,
              (__int64)v34,
              &v36,
              (int *)&v20);
            LODWORD(v8) = v21;
            v9 = (_QWORD *)((char *)this + 80);
            goto LABEL_23;
          }
        }
        else
        {
          InputETW::DragNDrop::DragEndedLegacy(v20, *(_QWORD *)&v12, v24, *(_QWORD *)&v23, v22, *(_QWORD *)&v27, v7);
          v23 = v14;
          v5 = this;
          v24 = v13;
          v17 = v25;
          v18 = *((_QWORD *)this + 8);
          v22 = (unsigned __int64)v12;
          CoreUICallSend(v18, &v25, 1LL, 1LL);
          (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 4) + 152LL))(*((_QWORD *)v5 + 4), v17);
        }
        LODWORD(v8) = v21;
        v9 = (_QWORD *)((char *)v5 + 80);
      }
      v16 = (_QWORD *)((char *)v5 + 144);
LABEL_23:
      if ( (*((_BYTE *)a2 + v28 + 228) & 4) == 0 )
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::erase(
          v16,
          (unsigned __int8 *)&v36);
LABEL_25:
      a3 = v37;
      v8 = (unsigned int)(v8 + 1);
      v21 = v8;
    }
    while ( (unsigned int)v8 < *((_DWORD *)a2 + 53) );
  }
  *(_DWORD *)v38 = 4;
  return 0LL;
}
