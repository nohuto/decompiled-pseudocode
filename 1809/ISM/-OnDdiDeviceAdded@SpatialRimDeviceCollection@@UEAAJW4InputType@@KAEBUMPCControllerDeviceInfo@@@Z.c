/*
 * XREFs of ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCControllerDeviceInfo@@@Z @ 0x180062EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x180060220 (-TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@1@@Z @ 0x180064A14 (--$_Insert@AEAU-$pair@$$CBKV-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V-$_List_unchecked_itera.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180064C28 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List__ea_180064C28.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceAdded(_QWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  char *v7; // rdi
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r9d
  __int64 *v13; // rsi
  __int64 *v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // r14
  volatile signed __int32 *v20; // rsi
  int v21; // eax
  unsigned int v22; // esi
  const char *v23; // r9
  __int64 result; // rax
  _DWORD *v25; // rcx
  char v26; // r15
  __int64 v27; // rcx
  __int64 *v28; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v29[2]; // [rsp+38h] [rbp-70h] BYREF
  char *v30; // [rsp+48h] [rbp-60h]
  char *v31; // [rsp+50h] [rbp-58h]
  __int64 *v32; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v35; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v29[1] = -2LL;
  v4 = a4;
  try
  {
    v7 = (char *)operator new(0x3E8uLL);
    v26 = 1;
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<LegacyDeviceInfo>::`vftable';
    memset_0(v7 + 16, 0, 0x3D8uLL);
    *((_DWORD *)v7 + 6) = 984;
    v19 = v7 + 16;
    v30 = v7 + 16;
    v31 = v7;
    *((_DWORD *)v7 + 4) = v35;
    *((_DWORD *)v7 + 5) = a2;
    *((_DWORD *)v7 + 6) = 984;
    v8 = v7 + 68;
    v9 = (_OWORD *)v4;
    v10 = 7LL;
    do
    {
      *v8 = *v9;
      v8[1] = v9[1];
      v8[2] = v9[2];
      v8[3] = v9[3];
      v8[4] = v9[4];
      v8[5] = v9[5];
      v8[6] = v9[6];
      v8 += 8;
      *(v8 - 1) = v9[7];
      v9 += 8;
      --v10;
    }
    while ( v10 );
    *v8 = *v9;
    v8[1] = v9[1];
    *((_DWORD *)v8 + 8) = *((_DWORD *)v9 + 8);
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
      a1 + 12,
      &v28,
      &v35);
    v13 = (__int64 *)a1[13];
    v14 = v28;
    if ( v28 == v13 )
    {
      v29[0] = &v35;
      v15 = *v13;
      v16 = *(__int64 **)(v15 + 8);
      v17 = std::_List_buy<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v11,
              v15,
              (_DWORD)v16,
              v12,
              (__int64)v29);
      v18 = a1[14];
      if ( 0x666666666666665LL == v18 )
        std::_Xlength_error("list<T> too long");
      a1[14] = v18 + 1;
      *(_QWORD *)(v15 + 8) = v17;
      *v16 = v17;
      std::_Hash<std::_Umap_traits<unsigned long,std::shared_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>,0>>::_Insert<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>>>>(
        a1 + 12,
        &v32,
        *(_QWORD *)a1[13] + 16LL,
        *(_QWORD *)a1[13]);
      v14 = v32;
      v4 = v36;
    }
    else
    {
      v32 = v28;
    }
    if ( v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u);
      v19 = v30;
    }
    v14[3] = (__int64)v19;
    v20 = (volatile signed __int32 *)v14[4];
    v14[4] = (__int64)v7;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
      v19 = v30;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(*(_QWORD *)*(a1 - 343) + 40LL))(
            *(a1 - 343),
            v19,
            *(a1 - 342));
    v22 = v21;
    if ( v21 >= 0 )
    {
      v25 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
      if ( !v25 || !*v25 )
        v26 = 0;
      if ( v26 )
      {
        RawInputProvidersTracing::Instance();
        RawInputProvidersTracing::TelemetryDdiDevice_Added_(v27, v35, a2, (WCHAR *)(v4 + 10));
      }
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(void *))v7)(v7);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
        }
      }
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x236,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v21);
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(void *))v7)(v7);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
        }
      }
      result = v22;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x23B,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           v23);
  }
  return result;
}
