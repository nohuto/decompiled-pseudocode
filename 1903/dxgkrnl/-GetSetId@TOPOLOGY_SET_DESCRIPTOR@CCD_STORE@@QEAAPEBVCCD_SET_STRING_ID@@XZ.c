/*
 * XREFs of ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D7990
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D6560 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD028 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0147190 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00D79D0 (_CcdLazyRetrieveSetIdFromRegistry.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  int SetIdFromRegistry; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  _QWORD *v8; // rax

  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)this + 8), L"SetId", this);
  v6 = SetIdFromRegistry;
  if ( SetIdFromRegistry >= 0 )
    return this;
  v8 = (_QWORD *)WdLogNewEntry5_WdError(v4, v3, v5);
  v8[3] = v6;
  v8[4] = this;
  v8[5] = *((_QWORD *)this + 8);
  WdLogEvent5_WdError(v8);
  return 0LL;
}
