/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C011F0A0
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C011F390 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C011F1C4 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this)
{
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v21; // [rsp+58h] [rbp-20h]

  v21 = 0;
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
  if ( v3 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v6 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v15 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v16);
    v17 = v15;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v17);
    goto LABEL_12;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2328));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v7);
    goto LABEL_18;
  }
  v19[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v19, 1);
  v11 = v9;
  if ( v9 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v18 + 24) = v11;
  }
  else
  {
    v12 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
    {
LABEL_9:
      v6 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v13 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v12);
      v11 = v13;
      if ( v13 < 0 )
        break;
      if ( ++v12 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_9;
    }
    v18 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = v11;
  }
  WdLogEvent5_WdError(v18);
  v6 = v11;
LABEL_10:
  if ( v19[0] )
    DxgkReleaseSessionModeChangeLock(v10);
LABEL_12:
  if ( v21 )
    KeUnstackDetachProcess(&ApcState);
  return v6;
}
