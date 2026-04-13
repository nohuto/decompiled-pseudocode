/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U_Nil@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@U_Nil@1@@Z @ 0x180098E18
 * Callers:
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x180097540 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800875D8 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ??$_Buynode@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@?$_List_buy@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAX@1@PEAU21@0AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800993E4 (--$_Buynode@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@-$_List_buy@V-$.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800AA034 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_Nil>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v5; // r11
  _QWORD *v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 *v13; // rdx
  __int64 *v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 v16; // r12
  _WORD *v17; // r9
  unsigned __int64 v18; // rcx
  bool j; // zf
  int v20; // eax
  _QWORD *v21; // rcx
  _WORD *v22; // rdx
  unsigned __int64 v23; // rax
  bool k; // zf
  int v25; // eax
  __int64 result; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 *v29; // rax
  unsigned __int64 *v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // rax
  __int64 v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *iter; // rax
  __int64 v43[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3[2];
  if ( a3[3] < 8uLL )
    v6 = a3;
  else
    v6 = (_QWORD *)*a3;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v5; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)v6 + i) ^ v7);
  v9 = HIDWORD(v7) ^ v7;
  v10 = v9 & (unsigned __int64)a1[5];
  if ( (unsigned __int64)a1[6] <= v10 )
    v10 += -1LL - ((unsigned __int64)a1[5] >> 1);
  v11 = *a1;
  v12 = 2 * v10;
  v13 = a1[2];
  if ( (__int64 *)v13[v12] == *a1 )
    v14 = *a1;
  else
    v14 = *(__int64 **)v13[v12 + 1];
  if ( v14 == (__int64 *)v13[v12] )
  {
LABEL_53:
    v27 = *v11;
    v28 = std::_List_buy<std::wstring>::_Buynode<std::wstring const &>(v9, *v11, *(_QWORD *)(*v11 + 8), a3, -2LL);
    v29 = a1[1];
    if ( v29 == (__int64 *)0x555555555555554LL )
      std::_Xlength_error("list<T> too long");
    a1[1] = (__int64 *)((char *)v29 + 1);
    *(_QWORD *)(v27 + 8) = v28;
    **(_QWORD **)(v28 + 8) = v28;
    v30 = (unsigned __int64 *)*a1;
    v31 = **a1;
    v45 = v31;
    v32 = *(_QWORD *)v31;
    if ( v14 != *(__int64 **)v31 )
    {
      **(_QWORD **)(v31 + 8) = v32;
      **(_QWORD **)(v32 + 8) = v14;
      *(_QWORD *)v14[1] = v31;
      v33 = v14[1];
      v14[1] = *(_QWORD *)(v32 + 8);
      *(_QWORD *)(v32 + 8) = *(_QWORD *)(v31 + 8);
      *(_QWORD *)(v31 + 8) = v33;
      v30 = (unsigned __int64 *)*a1;
    }
    v34 = a1[2];
    if ( (unsigned __int64 *)v34[v12] == v30 )
    {
      v34[v12] = v31;
      v35 = a1[2];
      v35[v12 + 1] = v31;
    }
    else if ( (__int64 *)v34[v12] == v14 )
    {
      v34[v12] = v31;
    }
    else
    {
      v36 = (__int64 *)v34[v12 + 1];
      v37 = *v36;
      v34[v12 + 1] = *v36;
      if ( v37 != v31 )
      {
        v38 = a1[2];
        v39 = v38[v12 + 1];
        v40 = *(_QWORD *)(v39 + 8);
        v38[v12 + 1] = v40;
      }
    }
    try
    {
      std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size(a1);
      *(_QWORD *)a2 = v31;
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    catch ( ... )
    {
      iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
               v41,
               &v45,
               v45);
      std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
        a1,
        v43,
        (_QWORD *)*iter);
      throw;
    }
  }
  else
  {
    while ( 1 )
    {
      v14 = (__int64 *)v14[1];
      v15 = v14 + 2;
      v16 = v14[4];
      v45 = v14[5];
      if ( v45 >= 8 )
        v15 = (_QWORD *)*v15;
      if ( a3[3] < 8uLL )
        v17 = a3;
      else
        v17 = (_WORD *)*a3;
      v18 = v16;
      if ( v5 < v16 )
        v18 = v5;
      for ( j = v18 == 0; ; j = v18 == 0 )
      {
        if ( j )
        {
          v9 = 0LL;
          goto LABEL_24;
        }
        if ( *v17 != *(_WORD *)v15 )
          break;
        ++v17;
        v15 = (_QWORD *)((char *)v15 + 2);
        --v18;
      }
      v9 = *v17 < *(_WORD *)v15 ? -1 : 1;
LABEL_24:
      v20 = v5 != v16;
      if ( v5 < v16 )
        v20 = -1;
      if ( (_DWORD)v9 )
        v20 = v9;
      if ( !v20 )
        break;
      if ( v14 == (__int64 *)v13[v12] )
        goto LABEL_50;
    }
    v21 = v14 + 2;
    if ( a3[3] < 8uLL )
      v22 = a3;
    else
      v22 = (_WORD *)*a3;
    if ( v45 >= 8 )
      v21 = (_QWORD *)*v21;
    v23 = v5;
    if ( v16 < v5 )
      v23 = v16;
    for ( k = v23 == 0; ; k = v23 == 0 )
    {
      if ( k )
      {
        v9 = 0LL;
        goto LABEL_44;
      }
      if ( *(_WORD *)v21 != *v22 )
        break;
      v21 = (_QWORD *)((char *)v21 + 2);
      ++v22;
      --v23;
    }
    v9 = *(_WORD *)v21 < *v22 ? -1 : 1;
LABEL_44:
    v25 = v16 != v5;
    if ( v16 < v5 )
      v25 = -1;
    if ( (_DWORD)v9 )
      v25 = v9;
    if ( v25 )
    {
      v14 = (__int64 *)*v14;
LABEL_50:
      v11 = *a1;
      goto LABEL_53;
    }
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  return result;
}
