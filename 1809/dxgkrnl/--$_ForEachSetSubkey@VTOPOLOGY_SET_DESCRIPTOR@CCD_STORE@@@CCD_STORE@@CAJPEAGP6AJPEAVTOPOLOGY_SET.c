/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00C91D0
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0139DF0 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C75B0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C00C9348 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00CA46C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CA874 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00CA8D4 (_CcdOpenRegistrySubkey_0.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        void *a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _WORD v28[4]; // [rsp+38h] [rbp-29h] BYREF
  char *v29; // [rsp+40h] [rbp-21h]
  _BYTE v30[112]; // [rsp+48h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF
  void *v33; // [rsp+E0h] [rbp+7Fh]

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
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v23[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v23[3] = TopologySetIdDescriptorCallback;
    v23[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v23[6] = a3;
    WdLogEvent5_WdError(v23);
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
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v21[3] = i;
        v21[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v21[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v21[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v13 = v33;
      v28[0] = *((_WORD *)v33 + 6);
      v28[1] = *((_WORD *)v33 + 6);
      v29 = (char *)v33 + 16;
      if ( v28[0] != *((_DWORD *)v33 + 3) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v28[0]);
        WdLogEvent5_WdAssertion(v24);
      }
      TopologySetIdDescriptorCallback = (int)CcdOpenRegistrySubkey_0(
                                               (int)&Handle,
                                               983103,
                                               (int)KeyHandle,
                                               (int)v28,
                                               0LL);
      operator delete[](v13);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
        v26[4] = i;
        v26[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v26[3] = TopologySetIdDescriptorCallback;
        v26[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v26[7] = a3;
        WdLogEvent5_WdWarning(v26);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v30,
        Handle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v30,
                                               a3);
      ZwClose(Handle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
        v25[4] = i;
        v25[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v25[3] = TopologySetIdDescriptorCallback;
        v25[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v25[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v30);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v30);
    }
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v27[4] = i;
    v27[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v27[3] = TopologySetIdDescriptorCallback;
    v27[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v27[7] = a3;
LABEL_11:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
