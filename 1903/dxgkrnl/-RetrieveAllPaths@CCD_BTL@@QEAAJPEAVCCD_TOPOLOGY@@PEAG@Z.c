/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C014ABC8
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C014AB40 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D8860 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00D88F0 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00D8B58 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00D8BA0 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9258 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00D92D4 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DD8D0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C02C0030 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  __int64 (__fastcall **v12)(CCD_BTL *, int *); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  _QWORD *v19; // rax
  CCD_TOPOLOGY *v20; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v21; // [rsp+28h] [rbp-48h]
  int v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h]
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int16 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  CCD_TOPOLOGY *v29; // [rsp+98h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v20 = a2;
  v21 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v29, 96);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(
                  (__int64)Global,
                  (__int64)BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
                  (__int64)&v20,
                  4);
  if ( (int)v9 < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v29);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v20);
    LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v20, 1);
    if ( v29 )
      CCD_TOPOLOGY::ClearReservedFields(v29);
  }
  if ( (int)v9 >= 0 )
  {
    v10 = *((_QWORD *)a2 + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v21 > v11 )
      LODWORD(v9) = -1073741789;
    if ( a3 )
      *a3 = v21;
    if ( (int)v9 >= 0 )
    {
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v12 = *this;
      v25 = 0LL;
      v26 = 0;
      v13 = (*v12)((CCD_BTL *)this, &v22);
      v9 = v13;
      if ( v13 < 0
        || (v17 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v22), v9 = v17, v17 < 0) )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
        v19[3] = v9;
        v19[4] = &v22;
        v19[5] = a2;
        v19[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v19);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v22);
    }
  }
  return (unsigned int)v9;
}
