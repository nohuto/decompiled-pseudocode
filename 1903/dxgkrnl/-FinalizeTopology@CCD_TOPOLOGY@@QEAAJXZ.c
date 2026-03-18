/*
 * XREFs of ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00CC4BC
 * Callers:
 *     DxgkFinalizePathsModality @ 0x1C00CC3F0 (DxgkFinalizePathsModality.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003868 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00CC5E0 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7BD0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FinalizeTopology(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  __int64 v6; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbp
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned int v19; // edi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF
  char v32; // [rsp+58h] [rbp-20h]

  v32 = 0;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 74);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4, v3);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  v9 = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v25 = WdLogNewEntry5_WdError(v4, v3, v6);
    *(_QWORD *)(v25 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v27, v26);
    v28 = v25;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v28);
    goto LABEL_12;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2328));
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v28 = WdLogNewEntry5_WdError(v11, v10, v13);
    goto LABEL_18;
  }
  v30[0] = 0;
  v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v30, 1);
  v18 = v14;
  if ( v14 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v29 + 24) = v18;
  }
  else
  {
    v19 = 0;
    if ( !*(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
    {
LABEL_9:
      v9 = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v20 = CCD_TOPOLOGY::FinalizeTopologyOnAdapter(this, Current, v19);
      v18 = v20;
      if ( v20 < 0 )
        break;
      if ( ++v19 >= *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) )
        goto LABEL_9;
    }
    v29 = WdLogNewEntry5_WdError(v22, v21, v23);
    *(_QWORD *)(v29 + 24) = v19;
    *(_QWORD *)(v29 + 32) = v18;
  }
  WdLogEvent5_WdError(v29);
  v9 = v18;
LABEL_10:
  if ( v30[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_12:
  if ( v32 )
    KeUnstackDetachProcess(&ApcState);
  return v9;
}
