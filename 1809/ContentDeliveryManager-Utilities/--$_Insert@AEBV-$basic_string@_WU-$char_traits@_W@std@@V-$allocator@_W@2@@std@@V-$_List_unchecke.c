/*
 * XREFs of ??$_Insert@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@1@@Z @ 0x180087FA4
 * Callers:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800875D8 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800875D8 (-_Check_size@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x1800877AC (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Insert<std::wstring const &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::wstring>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r10
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r15
  _WORD *v17; // r11
  unsigned __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  bool j; // zf
  int v23; // ecx
  int v24; // eax
  __int64 result; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *iter; // rax
  _QWORD v37[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v40; // [rsp+88h] [rbp+20h]

  v40 = a4;
  v5 = a3;
  v8 = a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  v9 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v8; ++i )
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ v9);
  v11 = (HIDWORD(v9) ^ v9) & *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) <= v11 )
    v11 += -1LL - (*(_QWORD *)(a1 + 40) >> 1);
  v12 = *(_QWORD **)a1;
  v13 = 2 * v11;
  v14 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 != *(_QWORD *)(v14 + 8 * v13) )
  {
    v12 = **(_QWORD ***)(v14 + 8 * v13 + 8);
    while ( v12 != *(_QWORD **)(v14 + 8 * v13) )
    {
      v12 = (_QWORD *)v12[1];
      v15 = v12 + 2;
      v16 = v12[4];
      v39 = v12[5];
      if ( v39 >= 8 )
        v15 = (_QWORD *)*v15;
      if ( v5[3] < 8uLL )
        v17 = v5;
      else
        v17 = (_WORD *)*v5;
      v18 = v16;
      if ( v8 < v16 )
        v18 = v8;
      if ( v18 )
      {
        while ( *v17 == *(_WORD *)v15 )
        {
          ++v17;
          v15 = (_QWORD *)((char *)v15 + 2);
          if ( !--v18 )
            goto LABEL_19;
        }
        LODWORD(v18) = *v17 < *(_WORD *)v15 ? -1 : 1;
      }
LABEL_19:
      v19 = v8 != v16;
      if ( v8 < v16 )
        v19 = -1;
      if ( (_DWORD)v18 )
        v19 = v18;
      if ( !v19 )
      {
        v20 = v12 + 2;
        if ( v5[3] >= 8uLL )
          v5 = (_QWORD *)*v5;
        if ( v39 >= 8 )
          v20 = (_QWORD *)*v20;
        v21 = v8;
        if ( v16 < v8 )
          v21 = v16;
        for ( j = v21 == 0; ; j = v21 == 0 )
        {
          if ( j )
          {
            v23 = 0;
            goto LABEL_38;
          }
          if ( *(_WORD *)v20 != *(_WORD *)v5 )
            break;
          v20 = (_QWORD *)((char *)v20 + 2);
          v5 = (_QWORD *)((char *)v5 + 2);
          --v21;
        }
        v23 = *(_WORD *)v20 < *(_WORD *)v5 ? -1 : 1;
LABEL_38:
        v24 = v16 != v8;
        if ( v16 < v8 )
          v24 = -1;
        if ( v23 )
          v24 = v23;
        if ( v24 )
        {
          v12 = (_QWORD *)*v12;
          break;
        }
        std::list<std::wstring>::erase((void **)a1, &v39, a4);
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v26 = (_QWORD *)*a4;
  if ( v12 != (_QWORD *)*a4 )
  {
    *(_QWORD *)a4[1] = v26;
    *(_QWORD *)v26[1] = v12;
    *(_QWORD *)v12[1] = a4;
    v27 = v12[1];
    v12[1] = v26[1];
    v26[1] = a4[1];
    a4[1] = v27;
  }
  v28 = *(_QWORD *)(a1 + 16);
  v29 = *(_QWORD **)(v28 + 8 * v13);
  if ( v29 == *(_QWORD **)a1 )
  {
    *(_QWORD *)(v28 + 8 * v13) = a4;
    v30 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v30 + 8 * v13 + 8) = a4;
  }
  else if ( v29 == v12 )
  {
    *(_QWORD *)(v28 + 8 * v13) = a4;
  }
  else
  {
    v31 = *(_QWORD **)(v28 + 8 * v13 + 8);
    v32 = (_QWORD *)*v31;
    *(_QWORD *)(v28 + 8 * v13 + 8) = *v31;
    if ( v32 != a4 )
    {
      v33 = *(_QWORD *)(a1 + 16);
      v34 = *(_QWORD *)(v33 + 8 * v13 + 8);
      *(_QWORD *)(v33 + 8 * v13 + 8) = *(_QWORD *)(v34 + 8);
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
             v35,
             &v39,
             (__int64)v40);
    std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::erase(
      (_QWORD *)a1,
      v37,
      (_QWORD *)*iter);
    throw;
  }
  return result;
}
