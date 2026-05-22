/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180049A90
 * Callers:
 *     ?AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z @ 0x1800482E4 (-AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z.c)
 *     ?AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004859C (-AddAndPopulateInputType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic_.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x18004963C (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_f8d27b8d936a7adc219ade59e2fa9c02_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x1800FF0E0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_f8d27b8d936a7adc219ade59e2fa9c02_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@U?$less@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@std@@V?$allocator@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@PEAX@2@@Z @ 0x180049B5C (-_Erase@-$_Tree@V-$_Tset_traits@U-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rax
  _BYTE *v3; // rdi
  _BYTE *v4; // rsi
  __int64 result; // rax

  v2 = *a1;
  v3 = *(_BYTE **)(*a1 + 8LL);
  v4 = v3;
  if ( !v3[25] )
  {
    do
    {
      std::_Tree<std::_Tset_traits<Windows::Internal::Holographic::TimestampedProperty<std::wstring>,std::less<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,std::allocator<Windows::Internal::Holographic::TimestampedProperty<std::wstring>>,0>>::_Erase(
        a1,
        *((_QWORD *)v4 + 2));
      v4 = *(_BYTE **)v4;
      std::wstring::~wstring((__int64)(v3 + 32));
      operator delete(v3, (const struct std::nothrow_t *)0x48);
      v3 = v4;
    }
    while ( !v4[25] );
    v2 = *a1;
  }
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
