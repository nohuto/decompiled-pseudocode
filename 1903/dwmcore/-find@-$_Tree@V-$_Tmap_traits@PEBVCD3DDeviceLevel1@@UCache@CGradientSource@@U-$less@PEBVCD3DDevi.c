/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x18001ADDC
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180019FA8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x18001ACD8 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801F4C80 (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax

  v3 = *a1;
  v4 = v3;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( (unsigned __int64)v6[4] < *a3 )
      {
        v6 = (__int64 *)v6[2];
      }
      else
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = v3;
  }
  if ( v4 == v5 || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
