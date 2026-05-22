/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@U_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@V?$_Uhash_compare@U_GUID@@UGuidHash@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@U?$equal_to@U_GUID@@@std@@@3@V?$allocator@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x1800BFA3C
 * Callers:
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800BEF5C (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 *     ?OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800BF47C (-OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<_GUID,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>,std::_Uhash_compare<_GUID,Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::GuidHash,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  _QWORD *v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  _QWORD *i; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx

  v4 = (_QWORD *)a1[1];
  v5 = a1[3];
  v6 = 2
     * (a1[6] & (*a3 ^ (*((unsigned __int16 *)a3 + 3) | ((unsigned __int64)*((unsigned __int16 *)a3 + 2) << 16)) ^ (*((unsigned __int8 *)a3 + 15) | ((unsigned __int64)*((unsigned __int8 *)a3 + 10) << 24))));
  for ( i = *(_QWORD **)(v5
                       + 16
                       * (a1[6] & (*a3 ^ (*((unsigned __int16 *)a3 + 3) | ((unsigned __int64)*((unsigned __int16 *)a3 + 2) << 16)) ^ (*((unsigned __int8 *)a3 + 15) | ((unsigned __int64)*((unsigned __int8 *)a3 + 10) << 24)))));
        ;
        i = (_QWORD *)*i )
  {
    if ( *(_QWORD **)(v5 + 8 * v6) == v4 )
      v8 = v4;
    else
      v8 = **(_QWORD ***)(v5 + 8 * v6 + 8);
    if ( i == v8 )
    {
      *a2 = v4;
      return a2;
    }
    if ( i[2] == *(_QWORD *)a3 && i[3] == *((_QWORD *)a3 + 1) )
      break;
  }
  v9 = *(_QWORD *)a3 - i[2];
  if ( *(_QWORD *)a3 == i[2] )
    v9 = *((_QWORD *)a3 + 1) - i[3];
  if ( v9 )
    i = v4;
  *a2 = i;
  return a2;
}
