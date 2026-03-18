/*
 * XREFs of _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C01460A0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D1FE0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D525C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0146120 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 */

__int64 __fastcall anonymous_namespace_::_UpdateConnectedSetCallback(
        struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1,
        CCD_TOPOLOGY *a2)
{
  int TopologyClass; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const struct CCD_SET_STRING_ID *v13; // rdi
  int v14; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // [rsp+38h] [rbp+10h] BYREF

  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v18);
  v8 = TopologyClass;
  if ( TopologyClass < 0 )
    goto LABEL_6;
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v13 = ModalitySetId;
  if ( *((_WORD *)ModalitySetId + 4) )
  {
    v14 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(a1, ModalitySetId, v18);
    v8 = v14;
    if ( v14 >= 0 )
      return (unsigned int)v8;
LABEL_6:
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v17[3] = v8;
    v17[4] = a2;
    v17[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v17);
    return (unsigned int)v8;
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
  v16[3] = a2;
  v16[4] = *((_QWORD *)a2 + 8);
  v16[5] = *(int *)v13;
  WdLogEvent5_WdError(v16);
  return 3221225473LL;
}
