/*
 * XREFs of _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00C8C5C
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C75B0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7CB8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C8C1C (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00C8C80 (_CcdRetrieveSetIdFromRegistry.c)
 */

__int64 __fastcall CcdLazyRetrieveSetIdFromRegistry(void *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(int *)a3 < 0 || !*(_WORD *)(a3 + 8) )
    return CcdRetrieveSetIdFromRegistry(a1);
  return result;
}
