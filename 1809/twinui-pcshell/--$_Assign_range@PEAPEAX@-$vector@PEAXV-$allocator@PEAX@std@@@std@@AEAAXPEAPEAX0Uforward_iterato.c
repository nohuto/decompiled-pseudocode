/*
 * XREFs of ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x180292420
 * Callers:
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180291880 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x180292860 (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 *     ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x180292A00 (--$create_task@PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA-AV-$task@_N@0@PE$.c)
 *     Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___ @ 0x180292C94 (Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087___.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18019646C (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUComp.c)
 */

char *__fastcall std::vector<void *>::_Assign_range<void * *>(void **a1, char *a2, __int64 a3)
{
  char *v3; // rdi
  signed __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rbx
  char *result; // rax
  void *v15; // rcx
  __int64 v16; // rbx
  char *v17; // rdx
  char *v18; // rbx
  size_t v19; // r15

  v3 = (char *)*a1;
  v5 = a3 - (_QWORD)a2;
  v6 = v5 >> 3;
  v7 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v9 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v5 >> 3 <= v7 )
  {
    v15 = *a1;
    if ( v6 <= v9 )
    {
      memmove_0(v15, a2, v5);
      result = &v3[8 * v6];
    }
    else
    {
      v16 = 8 * v9;
      memmove_0(v15, a2, 8 * v9);
      v17 = &a2[v16];
      v18 = (char *)a1[1];
      v19 = a3 - (_QWORD)v17;
      memmove_0(v18, v17, v19);
      result = &v18[v19];
    }
  }
  else
  {
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v11 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v12 = v11 + v7;
      if ( v11 + v7 < v6 )
        v12 = v5 >> 3;
      v6 = v12;
    }
    if ( v3 )
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(8 * v7));
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::_Buy(
      a1,
      v6);
    v13 = (char *)*a1;
    memmove_0(*a1, a2, v5);
    result = &v13[v5];
  }
  a1[1] = result;
  return result;
}
