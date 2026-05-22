/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSystemContextClient@@@Z @ 0x180039FD4 (-BroadcastInputConfigMessage@ISMHeatFrameworkHost@@IEAAJPEAUSystemContextMessage@@PEAUIHeatSyste.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003A364 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wi.c)
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A4DC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18009DCBC (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::RegisterForSystemContext(
        __int64 a1,
        int a2,
        struct IHeatSystemContextClient *a3)
{
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  unsigned __int64 i; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *j; // rax
  _QWORD *v15; // rcx
  int v16; // ebx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  int v21; // [rsp+30h] [rbp-20h] BYREF
  __int16 v22; // [rsp+34h] [rbp-1Ch]
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IHeatSystemContextClient *v25; // [rsp+80h] [rbp+30h] BYREF
  int v26; // [rsp+88h] [rbp+38h]
  __int16 v27; // [rsp+8Ch] [rbp+3Ch]

  v25 = a3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetCachedFeatureEnabledState();
  LOBYTE(v27) = 3;
  v26 = 0;
  v21 = 0;
  v22 = v27;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data,
    0xB3542Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v21,
    1,
    3);
  if ( a2 != 1 )
  {
    v6 = 193LL;
LABEL_17:
    v16 = -2147024809;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
  v7 = *(_QWORD **)(a1 + 64);
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v10 = *((unsigned __int8 *)&v25 + i);
    v8 = 0x100000001B3LL * (v10 ^ v8);
  }
  v11 = v8 & *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD *)(a1 + 80);
  v13 = 2 * v11;
  for ( j = *(_QWORD **)(v12 + 16 * v11); ; j = (_QWORD *)*j )
  {
    v15 = *(_QWORD **)(v12 + 8 * v13) == v7 ? *(_QWORD **)(a1 + 64) : **(_QWORD ***)(v12 + 8 * v13 + 8);
    if ( j == v15 )
      break;
    if ( (struct IHeatSystemContextClient *)j[2] == a3 )
      goto LABEL_15;
  }
  j = *(_QWORD **)(a1 + 64);
LABEL_15:
  if ( j != v7 )
  {
    v6 = 153LL;
    goto LABEL_17;
  }
  LOBYTE(v13) = v26;
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::_Insert<IHeatSystemContextClient * const &,std::_Not_a_node_tag>(
    a1 + 56,
    v23,
    &v25,
    v13);
  v18 = *(_QWORD *)(a1 + 48);
  if ( v18 )
  {
    memset(v23, 0, sizeof(v23));
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 40LL))(v18, v23);
    if ( v16 < 0 )
    {
      if ( v16 == -2147023728 )
        v16 = 0;
    }
    else
    {
      v19 = ISMHeatFrameworkHost::BroadcastInputConfigMessage(
              (ISMHeatFrameworkHost *)a1,
              (struct SystemContextMessage *)v23,
              v25);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
          (const char *)(unsigned int)v19);
        return v20;
      }
    }
    if ( v16 < 0 )
    {
      v6 = 185LL;
      goto LABEL_18;
    }
  }
  else
  {
    v16 = InputConfigContextProvider::Create((struct ISystemContextProvider **)(a1 + 48));
    if ( v16 < 0 )
    {
      v6 = 163LL;
      goto LABEL_18;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), a1 + 8);
    if ( v16 < 0 )
    {
      v6 = 165LL;
      goto LABEL_18;
    }
  }
  return 0LL;
}
