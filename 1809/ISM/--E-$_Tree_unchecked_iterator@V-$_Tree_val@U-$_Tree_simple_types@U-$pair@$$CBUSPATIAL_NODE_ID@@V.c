/*
 * XREFs of ??E?$_Tree_unchecked_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180118854
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree_unchecked_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>>>::operator++(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 **v2; // r8
  __int64 *j; // rdx
  __int64 i; // rax

  v1 = *a1;
  if ( !*(_BYTE *)(*a1 + 25) )
  {
    v2 = *(__int64 ***)(v1 + 16);
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25) && v1 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      {
        *a1 = i;
        v1 = i;
      }
      *a1 = i;
    }
    else
    {
      for ( j = *v2; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v2 = (__int64 **)j;
      *a1 = (__int64)v2;
    }
  }
  return a1;
}
