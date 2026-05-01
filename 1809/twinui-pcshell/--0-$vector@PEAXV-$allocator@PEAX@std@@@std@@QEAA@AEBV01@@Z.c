/*
 * XREFs of ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@AEBV01@@Z @ 0x18029324C
 * Callers:
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x18029344C (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18019646C (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUComp.c)
 */

__int64 *__fastcall std::vector<void *>::vector<void *>(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  size_t v5; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>>>>::_Buy(
         a1,
         (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3) )
  {
    v4 = *a1;
    v5 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0((void *)*a1, *(const void **)a2, v5);
    a1[1] = v5 + v4;
  }
  return a1;
}
