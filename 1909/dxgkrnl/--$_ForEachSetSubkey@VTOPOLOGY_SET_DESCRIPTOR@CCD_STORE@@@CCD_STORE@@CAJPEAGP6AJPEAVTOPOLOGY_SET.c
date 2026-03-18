/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00D7DA0
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C014E480 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D6DB0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C00D7F20 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00DAD5C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00DB1CC (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00DB234 (_CcdOpenRegistrySubkey_0.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DDF10 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        void *a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // [rsp+38h] [rbp-29h] BYREF
  int v27; // [rsp+3Ch] [rbp-25h]
  char *v28; // [rsp+40h] [rbp-21h]
  _BYTE v29[112]; // [rsp+48h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF
  void *v32; // [rsp+E0h] [rbp+7Fh]

  Handle = a2;
  KeyHandle = 0LL;
  v4 = CcdOpenRegistrySubkey(
         (int)&KeyHandle,
         131097,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         (PULONG)&Handle);
  TopologySetIdDescriptorCallback = v4;
  if ( v4 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v21[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v21[3] = TopologySetIdDescriptorCallback;
    v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v21[6] = a3;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      Handle = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(KeyHandle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v19[3] = i;
        v19[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v19[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v19[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v13 = v32;
      LOWORD(v26) = *((_WORD *)v32 + 6);
      HIWORD(v26) = *((_WORD *)v32 + 6);
      v27 = 0;
      v28 = (char *)v32 + 16;
      if ( (unsigned __int16)v26 != *((_DWORD *)v32 + 3) )
      {
        v22 = WdLogNewEntry5_WdAssertion((unsigned __int16)v26, v11);
        WdLogEvent5_WdAssertion(v22);
      }
      TopologySetIdDescriptorCallback = (int)CcdOpenRegistrySubkey_0(
                                               (int)&Handle,
                                               983103,
                                               (int)KeyHandle,
                                               (int)&v26,
                                               0LL);
      operator delete[](v13);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
        v24[4] = i;
        v24[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v24[3] = TopologySetIdDescriptorCallback;
        v24[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v24[7] = a3;
        WdLogEvent5_WdWarning(v24);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v29,
        Handle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v29,
                                               a3);
      ZwClose(Handle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
        v23[4] = i;
        v23[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v23[3] = TopologySetIdDescriptorCallback;
        v23[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v23[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v29);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v29);
    }
    v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
    v25[4] = i;
    v25[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v25[3] = TopologySetIdDescriptorCallback;
    v25[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v25[7] = a3;
LABEL_11:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
