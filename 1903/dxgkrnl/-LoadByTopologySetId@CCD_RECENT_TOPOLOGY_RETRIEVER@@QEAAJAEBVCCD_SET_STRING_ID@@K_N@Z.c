/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00D3D78
 * Callers:
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00D3CA4 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00D1FE0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00D3EC0 (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00D4B04 (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        bool a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  int TopologyClass; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  int v23; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 74);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18489) )
    return 3221226021LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             this,
             0);
  if ( (int)result >= 0 )
  {
    v13 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(*(struct CCD_TOPOLOGY **)this, a4);
    v17 = v13;
    if ( v13 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
      v22[3] = v17;
      v22[4] = this;
      v22[5] = *(_QWORD *)this;
      v22[6] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v22[7] = *((unsigned int *)this + 2);
    }
    else
    {
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(*(CCD_TOPOLOGY **)this, (enum CCD_TOPOLOGY_CLASS *)&v23);
      v17 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 32LL) = v23;
        return (unsigned int)v17;
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
      v22[3] = v17;
      v22[4] = *(_QWORD *)this;
      v22[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
    WdLogEvent5_WdError(v22);
    return (unsigned int)v17;
  }
  return result;
}
