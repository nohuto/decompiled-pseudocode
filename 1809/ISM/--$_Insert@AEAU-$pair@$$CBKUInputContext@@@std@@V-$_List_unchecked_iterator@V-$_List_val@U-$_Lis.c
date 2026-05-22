/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x18008D8F0
 * Callers:
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x18008C7FC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x18008D8F0 (--$_Insert@AEAU-$pair@$$CBKUInputContext@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Lis.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000886C (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??$_Insert@AEAU?$pair@$$CBKUInputContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUInputContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@@Z @ 0x18008D8F0 (--$_Insert@AEAU-$pair@$$CBKUInputContext@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Lis.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Insert<std::pair<unsigned long const,InputContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>>(
        float *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD **a4)
{
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 result; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  void **v21; // rax
  _QWORD **v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  float v27; // xmm0_4
  float v28; // xmm2_4
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rdi
  _QWORD *iter; // rax
  __int64 v34[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v35[5]; // [rsp+30h] [rbp-28h] BYREF

  v34[1] = -2LL;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v8);
  v10 = *((_QWORD *)a1 + 1);
  v11 = 2 * (v8 & *((_QWORD *)a1 + 6));
  v12 = *((_QWORD *)a1 + 3);
  if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)))
    || (v10 = **(_QWORD **)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8),
        v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)))) )
  {
LABEL_13:
    v34[0] = (__int64)a4;
    v16 = *a4;
    if ( (_QWORD *)v10 != *a4 )
    {
      *a4[1] = v16;
      *(_QWORD *)v16[1] = v10;
      **(_QWORD **)(v10 + 8) = a4;
      v17 = *(_QWORD **)(v10 + 8);
      *(_QWORD *)(v10 + 8) = v16[1];
      v18 = a4[1];
      v16[1] = v18;
      a4[1] = v17;
    }
    v19 = *((_QWORD *)a1 + 3);
    v20 = *(_QWORD *)(v19 + 8 * v11);
    if ( v20 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v19 + 8 * v11) = a4;
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v11 + 8) = a4;
    }
    else if ( v20 == v10 )
    {
      *(_QWORD *)(v19 + 8 * v11) = a4;
    }
    else
    {
      v21 = *(void ***)(v19 + 8 * v11 + 8);
      v22 = (_QWORD **)*v21;
      *(_QWORD *)(v19 + 8 * v11 + 8) = *v21;
      if ( v22 != a4 )
      {
        v23 = *((_QWORD *)a1 + 3);
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 8 * v11 + 8) + 8LL);
        *(_QWORD *)(v23 + 8 * v11 + 8) = v24;
      }
    }
    v25 = *((_QWORD *)a1 + 2);
    v26 = *((_QWORD *)a1 + 7);
    v27 = (float)(int)v25;
    if ( v25 < 0 )
      v27 = v27 + 1.8446744e19;
    v28 = (float)(int)v26;
    if ( v26 < 0 )
      v28 = v28 + 1.8446744e19;
    if ( (float)(v27 / v28) > *a1 )
    {
      if ( (unsigned __int64)v26 >= 0x200 )
      {
        if ( (unsigned __int64)v26 < 0xFFFFFFFFFFFFFFFLL )
          v26 *= 2LL;
      }
      else
      {
        v26 *= 8LL;
      }
      try
      {
        std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
          a1,
          v26);
        v30 = (_QWORD *)*((_QWORD *)a1 + 1);
        if ( (_QWORD *)*v30 != v30 )
        {
          v31 = v30[1];
          do
          {
            v32 = **((_QWORD **)a1 + 1);
            std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Insert<std::pair<unsigned long const,InputContext> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>>(
              a1,
              v35,
              v32 + 16);
          }
          while ( v32 != v31 );
        }
      }
      catch ( ... )
      {
        iter = std::_Hash<std::_Umap_traits<unsigned __int64,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>,0>>::_Make_iter(
                 v29,
                 v34,
                 v34[0]);
        std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>,void>(
          a1,
          v35,
          (_QWORD *)*iter);
        throw;
      }
    }
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v10 + 8);
      if ( *a3 == *(_DWORD *)(v10 + 16) )
        break;
      if ( v10 == *(_QWORD *)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6))) )
        goto LABEL_13;
    }
    try
    {
      *a4[1] = *a4;
      (*a4)[1] = a4[1];
      --*((_QWORD *)a1 + 2);
      v13 = a4[4];
      if ( v13 )
      {
        a4[4] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      }
      v14 = a4[3];
      if ( v14 )
      {
        a4[3] = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      }
      operator delete(a4, (const struct std::nothrow_t *)0x40);
      *(_QWORD *)a2 = v10;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    catch ( ... )
    {
      std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::_Destroy_if_node(
        a1,
        a4);
      throw;
    }
  }
  return result;
}
