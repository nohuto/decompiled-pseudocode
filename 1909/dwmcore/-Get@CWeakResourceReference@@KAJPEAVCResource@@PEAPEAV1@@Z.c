/*
 * XREFs of ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800A51BC
 * Callers:
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A5178 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A51D8 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DC604 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801E438C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBVCResource@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18003EDF4 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEBVCResource@@@2@V-$tuple@$$V@2@@-$_Hash@.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@AEBQEBVCResource@@@Z @ 0x18003F0E0 (-lower_bound@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compar.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakResourceReference@@@Z @ 0x1800A5268 (--4-$com_ptr_t@VCWeakResourceReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCWeakRe.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x1800A52AC (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CWeakResourceReference::Get(struct CResource *a1, struct CWeakResourceReference **a2)
{
  unsigned int v2; // ebx
  CWeakResourceReference *v4; // rax
  __int64 v5; // rcx
  struct CWeakResourceReference *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  struct CResource **v10; // rdx
  struct CResource **v11; // [rsp+30h] [rbp-10h] BYREF
  struct CResource *v12; // [rsp+60h] [rbp+20h] BYREF
  struct CWeakResourceReference *v13; // [rsp+70h] [rbp+30h] BYREF
  struct CResource **v14; // [rsp+78h] [rbp+38h] BYREF

  v12 = a1;
  v2 = 0;
  v13 = 0LL;
  if ( (*((_BYTE *)a1 + 32) & 8) != 0 )
  {
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::lower_bound(
      (__int64)a1,
      (__int64)&v14,
      (unsigned __int8 *)&v12);
    v10 = v14;
    if ( v14 == (struct CResource **)qword_18033D078 )
    {
      v14 = &v12;
      std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CResource const * const &>,std::tuple<>>(
        v8,
        (__int64)&v11,
        v9,
        (__int64 **)&v14);
      v10 = v11;
    }
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(&v13, v10[3]);
    v6 = v13;
  }
  else
  {
    v4 = (CWeakResourceReference *)DefaultHeap::AllocClear(0x30uLL);
    if ( v4 )
      v4 = CWeakResourceReference::CWeakResourceReference(v4, v12);
    wil::com_ptr_t<CWeakResourceReference,wil::err_returncode_policy>::operator=(&v13, v4);
    v6 = v13;
    if ( !v13 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x20u, 0LL);
      return v2;
    }
  }
  *a2 = v6;
  return v2;
}
