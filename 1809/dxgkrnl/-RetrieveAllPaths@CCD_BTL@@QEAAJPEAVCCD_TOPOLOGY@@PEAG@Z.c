/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C013A264
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C013A1DC (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00C9674 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00C98DC (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00C9924 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00C9978 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00CA828 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CA944 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00CC2C0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C00CC92C (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  __int64 (__fastcall **v11)(CCD_BTL *, int *); // rax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v16; // rax
  CCD_TOPOLOGY *v17; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+28h] [rbp-48h]
  int v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int16 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  CCD_TOPOLOGY *v26; // [rsp+98h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v17 = a2;
  v18 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v26, 96);
  Global = DXGGLOBAL::GetGlobal(v6);
  LODWORD(v8) = DXGGLOBAL::IterateAdaptersWithCallback(
                  (__int64)Global,
                  (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
                  (__int64)&v17,
                  4);
  if ( (int)v8 < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED(&v26);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v17);
    LODWORD(v8) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v17, 1);
    if ( v26 )
      CCD_TOPOLOGY::ClearReservedFields(v26);
  }
  if ( (int)v8 >= 0 )
  {
    v9 = *((_QWORD *)a2 + 8);
    if ( v9 )
      v10 = *(_WORD *)(v9 + 20);
    else
      v10 = 0;
    if ( v18 > v10 )
      LODWORD(v8) = -1073741789;
    if ( a3 )
      *a3 = v18;
    if ( (int)v8 >= 0 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v11 = *this;
      v22 = 0LL;
      v23 = 0;
      v12 = (*v11)((CCD_BTL *)this, &v19);
      v8 = v12;
      if ( v12 < 0
        || (v14 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v19), v8 = v14, v14 < 0) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v16[3] = v8;
        v16[4] = &v19;
        v16[5] = a2;
        v16[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v16);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
    }
  }
  return (unsigned int)v8;
}
