/*
 * XREFs of ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x18007B760
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?lower_bound@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@2@AEBQEAUIHeatSystemContextClient@@@Z @ 0x1800569B0 (-lower_bound@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSy.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18007B674 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CAX_N.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUIHeatSystemContextClient@@@Z @ 0x18007B9EC (-erase@-$_Hash@V-$_Uset_traits@PEAUIHeatSystemContextClient@@V-$_Uhash_compare@PEAUIHeatSystemCo.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::UnregisterForSystemContext(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a3;
  v3 = a2;
  wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::ReportUsageToService((__int64)a1, a2, a3);
  if ( v3 != 1 )
  {
    v5 = -2147024809;
    v6 = 235LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !a1[6] )
  {
    v5 = -2147418113;
    v6 = 214LL;
    goto LABEL_5;
  }
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::lower_bound(
    (__int64)(a1 + 7),
    (__int64)&v11,
    (unsigned __int8 *)&v10);
  if ( v11 == a1[8] )
  {
    v5 = -2147024809;
    v6 = 219LL;
    goto LABEL_5;
  }
  std::_Hash<std::_Uset_traits<IHeatSystemContextClient *,std::_Uhash_compare<IHeatSystemContextClient *,std::hash<IHeatSystemContextClient *>,std::equal_to<IHeatSystemContextClient *>>,std::allocator<IHeatSystemContextClient *>,0>>::erase(
    a1 + 7,
    &v10);
  if ( !a1[9] )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[6] + 32LL))(a1[6], a1 + 1);
    if ( v5 < 0 )
    {
      v6 = 226LL;
      goto LABEL_5;
    }
    v8 = a1[6];
    if ( v8 )
    {
      a1[6] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return 0LL;
}
