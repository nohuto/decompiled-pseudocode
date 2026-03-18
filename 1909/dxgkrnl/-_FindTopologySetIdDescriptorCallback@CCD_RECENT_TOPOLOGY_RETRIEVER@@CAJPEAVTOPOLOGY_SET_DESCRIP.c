/*
 * XREFs of ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D6DB0
 * Callers:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00D7DA0 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D237C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00D46A8 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D4710 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00D6CE4 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C00D6F10 (-GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D7FD4 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00D8014 (_CcdLazyRetrieveSetIdFromRegistry.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C00DA7A0 (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB40 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00DC904 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00DD4F8 (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C02C6718 (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a2)
{
  const union _LARGE_INTEGER *Timestamp; // r15
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  CCD_SET_STRING_ID *v9; // rdi
  unsigned __int16 v10; // r14
  const struct CCD_SET_STRING_ID *v11; // rsi
  int SetIdFromRegistry; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r12
  CCD_TOPOLOGY *OverflowTopology; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct CCD_TOPOLOGY *v22; // rsi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  CCD_SET_STRING_ID *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  CCD_SET_STRING_ID *RecentTopologySetId; // rsi
  __int64 v32; // r8
  __int64 v33; // rbp
  char IsSimilarTopology; // al
  _QWORD *v36; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  int TopologyClass; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r14
  _QWORD *v50; // rax
  __int64 v51; // r14
  __int64 v52; // rax
  _QWORD *v53; // rax
  int v54; // eax
  int v55; // [rsp+58h] [rbp+10h] BYREF

  Timestamp = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(this);
  if ( *((_QWORD *)a2 + 9) > Timestamp->QuadPart )
    return 0LL;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v9 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v37 + 24) = v9;
    if ( v9 )
      v54 = *(_DWORD *)v9;
    else
      v54 = -1073741823;
    *(_QWORD *)(v37 + 32) = v54;
    goto LABEL_37;
  }
  v10 = *((_WORD *)SetId + 16);
  if ( !v10 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
    v36[3] = this;
    v36[4] = v9;
    v36[5] = *(_QWORD *)a2;
    v37 = (__int64)v36;
    v36[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_37:
    WdLogEvent5_WdError(v37);
    return 0LL;
  }
  v11 = (const struct CCD_SET_STRING_ID *)*((_QWORD *)a2 + 22);
  SetIdFromRegistry = CcdLazyRetrieveSetIdFromRegistry(*((_QWORD *)v11 + 12), L"SetId", v11);
  v16 = SetIdFromRegistry;
  if ( SetIdFromRegistry < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
    v38[3] = v16;
    v38[4] = v11;
    v38[5] = *((_QWORD *)v11 + 12);
    WdLogEvent5_WdError(v38);
    v41 = (_QWORD *)WdLogNewEntry5_WdAssertion(v40, v39);
    v41[3] = this;
    v41[4] = v9;
    v41[5] = *(_QWORD *)a2;
    v41[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v41[7] = *((_QWORD *)a2 + 22);
    WdLogEvent5_WdAssertion(v41);
    return 3221225473LL;
  }
  if ( !CCD_SET_STRING_ID::IsSubsetOf(v9, v11) )
    return 0LL;
  OverflowTopology = CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(a2, v10);
  v22 = OverflowTopology;
  if ( !OverflowTopology )
  {
    v42 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v42 + 24) = v10;
    WdLogEvent5_WdLowResource(v42);
    return 3221225495LL;
  }
  CCD_TOPOLOGY::SetModalitySetId(OverflowTopology, v9);
  v23 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(v22, 0);
  v27 = v23;
  if ( v23 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
    v44[3] = v27;
    v44[4] = v22;
    v44[5] = *(_QWORD *)a2;
    v44[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    v44[7] = *((unsigned int *)a2 + 2);
    WdLogEvent5_WdWarning(v44);
    return 0LL;
  }
  v28 = (CCD_SET_STRING_ID *)*((_QWORD *)a2 + 23);
  if ( v28 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsSimilarTopology(v28, v9);
LABEL_14:
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
      goto LABEL_12;
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v32);
    v43[3] = this;
    v43[4] = *((_QWORD *)a2 + 22);
    v43[5] = *(_QWORD *)a2;
    v43[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    goto LABEL_21;
  }
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v22, (enum CCD_TOPOLOGY_CLASS *)&v55);
  v49 = TopologyClass;
  if ( TopologyClass < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46, v48);
    v50[3] = v49;
    v50[4] = v22;
    v50[5] = *((_QWORD *)a2 + 22);
    v50[6] = *(_QWORD *)a2;
    v50[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
    WdLogEvent5_WdError(v50);
    return (unsigned int)v49;
  }
  v51 = v55;
  if ( !v55 )
  {
    v52 = WdLogNewEntry5_WdAssertion(v47, v46);
    WdLogEvent5_WdAssertion(v52);
  }
  if ( ((unsigned int)v51 & *((_DWORD *)a2 + 2)) == 0 )
    return 0LL;
  RecentTopologySetId = (CCD_SET_STRING_ID *)CCD_STORE::CONNECTED_SET_DESCRIPTOR::GetRecentTopologySetId(
                                               *((_QWORD *)a2 + 22),
                                               (unsigned int)v51);
  if ( !RecentTopologySetId )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v32);
    v43[3] = v51;
    v43[4] = this;
    v43[5] = *((_QWORD *)a2 + 22);
    v43[6] = *(_QWORD *)a2;
    v43[7] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_21:
    WdLogEvent5_WdError(v43);
    return 3221225495LL;
  }
LABEL_12:
  v33 = *(int *)RecentTopologySetId;
  if ( (int)v33 >= 0 )
  {
    IsSimilarTopology = CCD_SET_STRING_ID::IsEnabledSetEqual(RecentTopologySetId, v9);
    goto LABEL_14;
  }
  v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v32);
  v53[3] = v33;
  v53[4] = RecentTopologySetId;
  v53[5] = *(_QWORD *)a2;
  v53[6] = *((unsigned int *)a2 + 2);
  WdLogEvent5_WdWarning(v53);
  return (unsigned int)v33;
}
