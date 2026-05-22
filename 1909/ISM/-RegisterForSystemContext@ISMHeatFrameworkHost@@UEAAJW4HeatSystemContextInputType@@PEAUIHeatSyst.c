/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18007B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18001B45C (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x180056710 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18007A7BC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 *     ?BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSystemContextClient@@@Z @ 0x18007AD74 (-BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSyste.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18007B434 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CAX_N.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext(
        __int64 a1,
        int a2,
        struct IHeatSystemContextClient *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IHeatSystemContextClient *v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  v13 = a3;
  wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::ReportUsageToService();
  if ( a2 != 1 )
  {
    v5 = 193LL;
LABEL_5:
    v6 = -2147024809;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    a1 + 56,
    (__int64)&v14,
    (unsigned __int8 *)&v13);
  if ( v14 != *(_QWORD *)(a1 + 64) )
  {
    v5 = 153LL;
    goto LABEL_5;
  }
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
    a1 + 56,
    (__int64)v11,
    (unsigned __int8 *)&v13);
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    memset(v11, 0, 24);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 40LL))(v8, v11);
    if ( v6 < 0 )
    {
      if ( v6 == -2147023728 )
        v6 = 0;
    }
    else
    {
      v9 = ISMHeatFrameworkHost::BroadcastInputConfigMessage(
             (ISMHeatFrameworkHost *)a1,
             (struct SystemContextMessage *)v11,
             v13);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
    }
    if ( v6 < 0 )
    {
      v5 = 185LL;
      goto LABEL_6;
    }
  }
  else
  {
    v6 = InputConfigContextProvider::Create((struct ISystemContextProvider **)(a1 + 48));
    if ( v6 < 0 )
    {
      v5 = 163LL;
      goto LABEL_6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), a1 + 8);
    if ( v6 < 0 )
    {
      v5 = 165LL;
      goto LABEL_6;
    }
  }
  return 0LL;
}
