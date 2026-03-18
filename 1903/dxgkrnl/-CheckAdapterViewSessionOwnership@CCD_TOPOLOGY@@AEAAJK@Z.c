/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00CD7AC
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CDBBC (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00E977C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00E97B4 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02C0BA0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r8
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  SESSION_ADAPTER *SessionAdapterFromLuid; // r12
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rdx

  v2 = (unsigned int)a2;
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 74);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v9 = 332 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(332 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v14 = *(_DWORD *)(v10 + 84);
      v15 = 0;
      if ( v14 )
      {
        do
        {
          v16 = v14;
          if ( (v14 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v15) )
          {
            v27 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
            v27[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v9 + 4);
            v28 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
            v27[4] = *(unsigned int *)(v28 + v9);
            v27[5] = v15;
            v27[6] = (unsigned int)PsGetCurrentProcessSessionId(v15, v28);
            v27[7] = -1073741790LL;
            WdLogEvent5_WdError(v27);
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v9 + 84) &= ~(1 << v15);
            CCD_TOPOLOGY::MarkPathsApplyFailure(
              this,
              (const struct _LUID *)(v9 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
              v15,
              -1073741790);
          }
          ++v15;
          v14 >>= 1;
        }
        while ( v16 >= 2 );
      }
      return 0LL;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
      v24[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v9 + 4);
      v25 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
      v26 = *(unsigned int *)(v25 + 332 * v2);
      v24[4] = v26;
      v24[5] = (unsigned int)PsGetCurrentProcessSessionId(v26, v25);
      v24[6] = -1073741790LL;
      WdLogEvent5_WdError(v24);
      return 3221225506LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v5, v4, 0LL);
    *(_QWORD *)(v21 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v23, v22);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
}
