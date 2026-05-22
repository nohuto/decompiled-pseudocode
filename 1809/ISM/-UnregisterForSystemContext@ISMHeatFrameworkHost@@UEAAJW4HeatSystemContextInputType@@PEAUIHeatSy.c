/*
 * XREFs of ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x18003A148 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003A364 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::UnregisterForSystemContext(_QWORD *a1, int a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // r8
  unsigned __int64 i; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *j; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-10h] BYREF
  __int16 v22; // [rsp+34h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  int v25; // [rsp+78h] [rbp+38h]
  __int16 v26; // [rsp+7Ch] [rbp+3Ch]

  v24 = a3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetCachedFeatureEnabledState();
  LOBYTE(v26) = 3;
  v25 = 0;
  v21 = 0;
  v22 = v26;
  wil::details::ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data,
    0xB3542Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v21,
    1,
    3);
  if ( a2 != 1 )
  {
    v6 = -2147024809;
    v7 = 235LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a1[6] )
  {
    v6 = -2147418113;
    v7 = 214LL;
    goto LABEL_7;
  }
  v9 = (_QWORD *)a1[8];
  v10 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v12 = *((unsigned __int8 *)&v24 + i);
    v10 = 0x100000001B3LL * (v12 ^ v10);
  }
  v13 = v10 & a1[13];
  v14 = a1[10];
  v15 = 2 * v13;
  for ( j = *(_QWORD **)(v14 + 16 * v13); ; j = (_QWORD *)*j )
  {
    v17 = *(_QWORD **)(v14 + 8 * v15) == v9 ? (_QWORD *)a1[8] : **(_QWORD ***)(v14 + 8 * v15 + 8);
    if ( j == v17 )
      break;
    if ( j[2] == a3 )
      goto LABEL_18;
  }
  j = (_QWORD *)a1[8];
LABEL_18:
  if ( j == v9 )
  {
    v6 = -2147024809;
    v7 = 219LL;
    goto LABEL_7;
  }
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::erase(
    a1 + 7,
    &v24);
  if ( !a1[9] )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[6] + 32LL))(a1[6], a1 + 1);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\heat\\lib\\ismheatframeworkhost.cpp",
        (const char *)(unsigned int)v18);
      return v19;
    }
    v20 = a1[6];
    if ( v20 )
    {
      a1[6] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  return 0LL;
}
