/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C75B0
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00C91D0 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00C7438 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00C74A0 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C00C7718 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7CB8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00C7E1C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00C8310 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00C8C1C (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00C8C5C (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00C8D6C (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00CB86C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00CBE04 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C028D2AC (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v7; // rcx
  CCD_SET_STRING_ID *v8; // rdi
  unsigned __int16 v9; // r14
  const struct CCD_SET_STRING_ID *v10; // rsi
  int SetIdFromRegistry; // eax
  __int64 v12; // rcx
  __int64 v13; // r12
  CCD_TOPOLOGY *OverflowTopology; // rax
  __int64 v15; // rcx
  struct CCD_TOPOLOGY *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r14
  CCD_SET_STRING_ID *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v26; // r8
  __int64 v27; // rbp
  bool IsSimilarTopology; // al
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  int TopologyClass; // eax
  __int64 v38; // rcx
  __int64 v39; // r14
  _QWORD *v40; // rax
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  int v44; // eax
  int v45; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v30 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v30 + 24) = v8;
    if ( v8 )
      v44 = *(_DWORD *)v8;
    else
      v44 = -1073741823;
    *(_QWORD *)(v30 + 32) = v44;
    goto LABEL_37;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v29[3] = this;
    v29[4] = v8;
    v29[5] = *(_QWORD *)a2;
    v30 = (__int64)v29;
    v29[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v30);
    return 0LL;
  }
  v10 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a2 + 22);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)v10 + 12), L"SetId", v10);
  v13 = SetIdFromRegistry;
  if ( SetIdFromRegistry < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v31[3] = v13;
    v31[4] = v10;
    v31[5] = *((_QWORD *)v10 + 12);
    WdLogEvent5_WdError(v31);
    v33 = (_QWORD *)WdLogNewEntry5_WdAssertion(v32);
    v33[3] = this;
    v33[4] = v8;
    v33[5] = *(_QWORD *)a2;
    v33[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v33[7] = *((_QWORD *)a2 + 22);
    WdLogEvent5_WdAssertion(v33);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v8, v10) )
    return 0LL;
  OverflowTopology = CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v9);
  v16 = OverflowTopology;
  if ( !OverflowTopology )
  {
    v34 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v34 + 24) = v9;
    WdLogEvent5_WdLowResource(v34);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v8);
  v17 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(v16, 0);
  v21 = v17;
  if ( v17 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v36[3] = v21;
    v36[4] = v16;
    v36[5] = *(_QWORD *)a2;
    v36[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v36[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v36);
    return 0LL;
  }
  v22 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 23);
  if ( v22 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v22, v8);
LABEL_15:
    if ( IsSimilarTopology )
    {
      *((union _LARGE_INTEGER *)a2 + 9) = *Timestamp;
      CCD_SET_STRING_ID::operator=((CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)a2 + 16));
    }
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 8) & 0xF) == 0xF )
  {
    RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                                 *((_QWORD *)a2 + 22),
                                                 15LL);
    if ( RecentTopologySetId )
      goto LABEL_13;
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v35[3] = this;
    v35[4] = *((_QWORD *)a2 + 22);
    v35[5] = *(_QWORD *)a2;
    v35[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v16, (enum CCD_TOPOLOGY_CLASS *)&v45);
  v39 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    v40[3] = v39;
    v40[4] = v16;
    v40[5] = *((_QWORD *)a2 + 22);
    v40[6] = *(_QWORD *)a2;
    v40[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v40);
    return (unsigned int)v39;
  }
  v41 = v45;
  if ( !v45 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v38);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( ((unsigned int)v41 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 22),
                                               (unsigned int)v41);
  if ( !RecentTopologySetId )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v35[3] = v41;
    v35[4] = this;
    v35[5] = *((_QWORD *)a2 + 22);
    v35[6] = *(_QWORD *)a2;
    v35[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v35);
    return 3221225495LL;
  }
LABEL_13:
  v27 = *(int *)RecentTopologySetId;
  if ( (int)v27 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v8);
    goto LABEL_15;
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v26);
  v43[3] = v27;
  v43[4] = RecentTopologySetId;
  v43[5] = *(_QWORD *)a2;
  v43[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v43);
  return (unsigned int)v27;
}
