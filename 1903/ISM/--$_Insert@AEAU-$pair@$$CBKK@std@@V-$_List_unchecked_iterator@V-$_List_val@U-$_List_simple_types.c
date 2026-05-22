/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBKK@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKK@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@@Z @ 0x1800142C8
 * Callers:
 *     ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x180014188 (--$_Insert_or_assign@KH@-$unordered_map@KKU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$.c)
 *     ??$_Insert@AEAU?$pair@$$CBKK@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKK@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@@Z @ 0x1800142C8 (--$_Insert@AEAU-$pair@$$CBKK@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKK@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKK@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@@Z @ 0x1800142C8 (--$_Insert@AEAU-$pair@$$CBKK@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800151F8 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?erase@?$list@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@2@@Z @ 0x180034A88 (-erase@-$list@PEAUISystemContextObserver@@V-$allocator@PEAUISystemContextObserver@@@std@@@std@@Q.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert<std::pair<unsigned long const,unsigned long> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned long>>>>>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  unsigned __int8 *v5; // r10
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  float v21; // xmm0_4
  float v22; // xmm2_4
  __int64 result; // rax
  __int64 **v24; // rax
  __int64 *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r15
  __int64 v28; // rdi
  _BYTE v29[64]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v31; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v30 = a1;
  v5 = a3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = a3 + 4 >= a3 ? 4 : 0;
  if ( a3 < a3 + 4 )
  {
    do
      v8 = 0x100000001B3LL * (*a3++ ^ (unsigned __int64)v8);
    while ( a3 - v5 != v9 );
  }
  v10 = 2 * (v8 & *(_QWORD *)(a1 + 48));
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v11 + 16 * (v8 & *(_QWORD *)(a1 + 48))) != v12 )
    v12 = **(_QWORD **)(v11 + 16 * (v8 & *(_QWORD *)(a1 + 48)) + 8);
  v13 = v12;
  while ( v13 != *(_QWORD *)(v11 + 8 * v10) )
  {
    v12 = *(_QWORD *)(v12 + 8);
    v13 = v12;
    v14 = *(_DWORD *)(v12 + 16);
    if ( *(_DWORD *)v5 == v14 )
    {
      try
      {
        std::list<ISystemContextObserver *>::erase(a1 + 8, &v31, a4);
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 0;
        result = a2;
      }
      catch ( ... )
      {
        std::list<ISystemContextObserver *>::erase(v30 + 8, &v30, v32);
        throw;
      }
      return result;
    }
  }
  v31 = a4;
  v15 = *a4;
  if ( v13 != *a4 )
  {
    *(_QWORD *)a4[1] = v15;
    **(_QWORD **)(v15 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v16 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v15 + 8);
    *(_QWORD *)(v15 + 8) = a4[1];
    a4[1] = v16;
  }
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(_QWORD *)(v17 + 8 * v10);
  if ( v18 == *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(v17 + 8 * v10) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v10 + 8) = a4;
  }
  else if ( v18 == v13 )
  {
    *(_QWORD *)(v17 + 8 * v10) = a4;
  }
  else
  {
    v24 = *(__int64 ***)(v17 + 8 * v10 + 8);
    v25 = *v24;
    *(_QWORD *)(v17 + 8 * v10 + 8) = *v24;
    if ( v25 != a4 )
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v10 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v10 + 8) + 8LL);
  }
  v19 = *(_QWORD *)(a1 + 16);
  v20 = *(_QWORD *)(a1 + 56);
  v21 = (float)(int)v19;
  if ( v19 < 0 )
    v21 = v21 + 1.8446744e19;
  v22 = (float)(int)v20;
  if ( v20 < 0 )
    v22 = v22 + 1.8446744e19;
  if ( (float)(v21 / v22) > *(float *)a1 )
  {
    try
    {
      if ( (unsigned __int64)v20 >= 0x200 )
      {
        if ( (unsigned __int64)v20 < 0xFFFFFFFFFFFFFFFLL )
          v20 *= 2LL;
      }
      else
      {
        v20 *= 8LL;
      }
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
        a1,
        v20);
      v26 = *(_QWORD **)(a1 + 8);
      if ( (_QWORD *)*v26 != v26 )
      {
        v27 = v26[1];
        do
        {
          v28 = **(_QWORD **)(a1 + 8);
          std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert<std::pair<unsigned long const,unsigned long> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned long>>>>>(
            a1,
            v29,
            v28 + 16);
        }
        while ( v28 != v27 );
      }
    }
    catch ( ... )
    {
      std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::erase(
        v30,
        &v31,
        v31);
      throw;
    }
  }
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
