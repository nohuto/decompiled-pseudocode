/*
 * XREFs of ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180163CC4
 * Callers:
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1801636B0 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 * Callees:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800D82C0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     ??$_Buynode@AEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@AEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1801625F8 (--$_Buynode@AEBKAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_Tree_com.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@@Z @ 0x1801627E8 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@st.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping(
        _DWORD *a1)
{
  struct Windows::Internal::Holographic::HolographicDeviceSnapshot *v2; // rbx
  const char *v3; // r9
  _DWORD *v4; // rax
  __int64 v5; // r8
  _BYTE v6[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    v2 = Windows::Internal::Holographic::HolographicDeviceSnapshot::Instance();
    if ( *((_BYTE *)v2 + 120) )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v2);
      v4 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Buynode<unsigned long const &,std::wstring const &>(
             (_QWORD *)v2 + 13,
             a1);
      std::_Tree<std::_Tmap_traits<unsigned long,std::wstring,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::wstring>>,0>>::_Insert_nohint<std::pair<unsigned long const,std::wstring> &,std::_Tree_node<std::pair<unsigned long const,std::wstring>,void *> *>(
        (__int64 *)v2 + 13,
        (__int64)v6,
        v5,
        v4 + 8,
        v4);
      if ( v2 )
        ReleaseSRWLockExclusive((PSRWLOCK)v2);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x127,
      (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdevicesnapshot.h",
      v3);
  }
}
