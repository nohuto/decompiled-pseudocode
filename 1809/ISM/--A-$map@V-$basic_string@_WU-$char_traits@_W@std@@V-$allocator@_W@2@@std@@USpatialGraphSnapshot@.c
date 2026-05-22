/*
 * XREFs of ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialGraphSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x18011D0F4
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___ @ 0x18011BA6C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic-.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_3f0123449741a7972872694de663f1a4___ @ 0x18011BB18 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18011BB18.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___ @ 0x18011BBC4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18011BBC4.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180120FE0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@_WU-$char_tr_ea_180120FE0.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x18012107C (--$_Insert_hint@AEAU-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato_ea_18012107C.c)
 */

_QWORD *__fastcall std::map<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::operator[](
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rax
  __int64 *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  void *v9; // rax
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      v7 = v6 + 4;
      if ( (unsigned __int64)v6[7] >= 8 )
        v7 = (_QWORD *)*v7;
      if ( (int)_o__wcsicmp(v7) >= 0 )
      {
        v2 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = *a1;
  }
  if ( v2 == v5 )
    goto LABEL_13;
  v8 = a2;
  if ( a2[3] >= 8uLL )
    v8 = (_QWORD *)*a2;
  if ( (int)_o__wcsicmp(v8) < 0 )
  {
LABEL_13:
    v11 = a2;
    v9 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
                   a1,
                   a2,
                   &v11);
    std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>,0>>::_Insert_hint<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot> &,std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>,void *> *>(
      (int)a1,
      v9);
    v2 = v11;
  }
  return v2 + 8;
}
