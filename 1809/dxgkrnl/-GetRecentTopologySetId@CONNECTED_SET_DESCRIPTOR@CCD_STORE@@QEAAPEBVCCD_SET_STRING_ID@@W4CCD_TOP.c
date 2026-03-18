/*
 * XREFs of ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7CB8
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C75B0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C7874 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00C7D40 (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00C8C5C (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v5; // r8
  CCD_SET_STRING_ID *v6; // rbx
  int SetIdFromRegistry; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  _QWORD *v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (int)a2;
  CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(a2, (__int64)v13);
  result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v2, 0LL);
  if ( !result )
  {
    LOBYTE(v5) = 1;
    result = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v2, v5);
    v6 = (CCD_SET_STRING_ID *)result;
    if ( result )
    {
      SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*(_QWORD *)(a1 + 96), v13[1], result);
      v11 = SetIdFromRegistry;
      if ( SetIdFromRegistry < 0 )
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
        v12[3] = v11;
        v12[4] = v2;
        v12[5] = a1;
        v12[6] = *(_QWORD *)(a1 + 96);
        WdLogEvent5_WdWarning(v12);
        CCD_SET_STRING_ID::_Cleanup(v6);
      }
      return (__int64)v6;
    }
  }
  return result;
}
