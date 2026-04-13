/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x180089D70
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800893A0 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800893A0 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x180089574 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r9
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r13
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  unsigned __int64 v18; // r12
  _WORD *v19; // rdx
  unsigned __int64 v20; // rcx
  bool j; // zf
  int v22; // ecx
  int v23; // eax
  _QWORD *v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  bool k; // zf
  int v28; // ecx
  int v29; // eax
  __int64 result; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *iter; // rax
  _QWORD v42[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v44; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v45; // [rsp+88h] [rbp+20h]

  v45 = a4;
  v5 = a3;
  v8 = a3[2];
  if ( a3[3] < 8uLL )
    v9 = a3;
  else
    v9 = (_QWORD *)*a3;
  v10 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v8; ++i )
    v10 = 0x100000001B3LL * (*((unsigned __int8 *)v9 + i) ^ v10);
  v12 = *(_QWORD *)(a1 + 40);
  v13 = v12 & (HIDWORD(v10) ^ v10);
  if ( *(_QWORD *)(a1 + 48) <= v13 )
    v13 += -1LL - (v12 >> 1);
  v14 = 2 * v13;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 != *(_QWORD *)(v15 + 8 * v14) )
  {
    v16 = **(_QWORD ***)(v15 + 8 * v14 + 8);
    while ( v16 != *(_QWORD **)(v15 + 8 * v14) )
    {
      v16 = (_QWORD *)v16[1];
      v17 = v16 + 2;
      v18 = v16[4];
      if ( v16[5] >= 8uLL )
        v17 = (_QWORD *)*v17;
      if ( v5[3] < 8uLL )
        v19 = v5;
      else
        v19 = (_WORD *)*v5;
      v20 = v16[4];
      if ( v8 < v18 )
        v20 = v8;
      for ( j = v20 == 0; ; j = v20 == 0 )
      {
        if ( j )
        {
          v22 = 0;
          goto LABEL_22;
        }
        if ( *v19 != *(_WORD *)v17 )
          break;
        ++v19;
        v17 = (_QWORD *)((char *)v17 + 2);
        --v20;
      }
      v22 = *v19 < *(_WORD *)v17 ? -1 : 1;
LABEL_22:
      v23 = v8 != v18;
      if ( v8 < v18 )
        v23 = -1;
      if ( v22 )
        v23 = v22;
      if ( !v23 )
      {
        v24 = v16 + 2;
        if ( v5[3] >= 8uLL )
          v5 = (_QWORD *)*v5;
        v25 = v16[4];
        if ( v16[5] >= 8uLL )
          v24 = (_QWORD *)*v24;
        v26 = v8;
        if ( v25 < v8 )
          v26 = v16[4];
        for ( k = v26 == 0; ; k = v26 == 0 )
        {
          if ( k )
          {
            v28 = 0;
            goto LABEL_41;
          }
          if ( *(_WORD *)v24 != *(_WORD *)v5 )
            break;
          v24 = (_QWORD *)((char *)v24 + 2);
          v5 = (_QWORD *)((char *)v5 + 2);
          --v26;
        }
        v28 = *(_WORD *)v24 < *(_WORD *)v5 ? -1 : 1;
LABEL_41:
        v29 = v25 != v8;
        if ( v25 < v8 )
          v29 = -1;
        if ( v28 )
          v29 = v28;
        if ( v29 )
        {
          v16 = (_QWORD *)*v16;
          break;
        }
        std::list<std::wstring>::erase((void **)a1, &v44, a4);
        *(_QWORD *)a2 = v16;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v31 = (_QWORD *)*a4;
  if ( v16 != (_QWORD *)*a4 )
  {
    *(_QWORD *)a4[1] = v31;
    *(_QWORD *)v31[1] = v16;
    *(_QWORD *)v16[1] = a4;
    v32 = v16[1];
    v16[1] = v31[1];
    v31[1] = a4[1];
    a4[1] = v32;
  }
  v33 = *(_QWORD *)(a1 + 16);
  v34 = *(_QWORD **)(v33 + 8 * v14);
  if ( v34 == *(_QWORD **)a1 )
  {
    *(_QWORD *)(v33 + 8 * v14) = a4;
    v35 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v35 + 8 * v14 + 8) = a4;
  }
  else if ( v34 == v16 )
  {
    *(_QWORD *)(v33 + 8 * v14) = a4;
  }
  else
  {
    v36 = *(_QWORD **)(v33 + 8 * v14 + 8);
    v37 = (_QWORD *)*v36;
    *(_QWORD *)(v33 + 8 * v14 + 8) = *v36;
    if ( v37 != a4 )
    {
      v38 = *(_QWORD *)(a1 + 16);
      v39 = *(_QWORD *)(v38 + 8 * v14 + 8);
      *(_QWORD *)(v38 + 8 * v14 + 8) = *(_QWORD *)(v39 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Check_size((__int64 **)a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::_Make_iter(
             v40,
             &v44,
             (__int64)v45);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      (_QWORD *)a1,
      v42,
      (_QWORD *)*iter);
    throw;
  }
  return result;
}
