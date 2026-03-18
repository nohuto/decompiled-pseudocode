/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C0147190
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D7990 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DA844 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD028 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        _WORD *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const struct CCD_SET_STRING_ID *v8; // rbx
  __int16 v9; // ax
  CCD_TOPOLOGY *v10; // rcx
  unsigned __int16 v11; // bx
  int Topology; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = SetId;
  if ( !SetId || *(int *)SetId < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v19 + 24) = v8;
    if ( v8 )
      v21 = *(_DWORD *)v8;
    else
      v21 = -1073741823;
    *(_QWORD *)(v19 + 32) = v21;
    goto LABEL_14;
  }
  v9 = *((_WORD *)SetId + 16);
  if ( !v9 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v18[3] = this;
    v18[4] = v8;
    v18[5] = *(_QWORD *)a2;
    v19 = (__int64)v18;
    v18[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
LABEL_14:
    WdLogEvent5_WdError(v19);
    return 3221225473LL;
  }
  v10 = *(CCD_TOPOLOGY **)a2;
  a2[6] = v9;
  v11 = *((_WORD *)v8 + 16);
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(v10, v11) < v11 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(this, *(struct CCD_TOPOLOGY **)a2);
  v16 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
  v20[3] = v16;
  v20[4] = this;
  v20[5] = *(_QWORD *)a2;
  v20[6] = *(_QWORD *)(*(_QWORD *)a2 + 64LL);
  WdLogEvent5_WdError(v20);
  return (unsigned int)v16;
}
