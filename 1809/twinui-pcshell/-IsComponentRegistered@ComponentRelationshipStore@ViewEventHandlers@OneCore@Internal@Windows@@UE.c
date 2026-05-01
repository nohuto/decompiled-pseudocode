/*
 * XREFs of ?IsComponentRegistered@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x1803A6960
 * Callers:
 *     <none>
 * Callees:
 *     ?count@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1803A8224 (-count@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsComponentRegistered(
        RTL_SRWLOCK *this,
        int a2,
        bool *a3)
{
  RTL_SRWLOCK *v3; // rsi
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  *a3 = std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::count(
          &this[19],
          &v7) != 0;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
