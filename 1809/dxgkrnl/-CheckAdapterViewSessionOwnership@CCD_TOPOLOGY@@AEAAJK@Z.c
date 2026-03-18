/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C013782C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00ED894 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C0288830 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // r8
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r12
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // r13d
  __int64 v15; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rcx
  _QWORD *v21; // rbx

  v2 = a2;
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v8 = 324 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionDataForSpecifiedSession,
                               (const struct _LUID *)(324 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v12 = *(_DWORD *)(v9 + 80);
      v13 = 0;
      if ( v12 )
      {
        do
        {
          v14 = v12;
          if ( (v12 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v13) )
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdError(v15);
            v21[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
            v21[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8);
            v21[5] = v13;
            v21[6] = (unsigned int)PsGetCurrentProcessSessionId(v13);
            v21[7] = -1073741790LL;
            WdLogEvent5_WdError(v21);
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 80) &= ~(1 << v13);
            CCD_TOPOLOGY::MarkPathsApplyFailure(
              this,
              (const struct _LUID *)(v8 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
              v13,
              -1073741790);
          }
          ++v13;
          v12 >>= 1;
        }
        while ( v14 >= 2 );
      }
      return 0LL;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v19[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v8 + 4);
      v20 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 324 * v2);
      v19[4] = v20;
      v19[5] = (unsigned int)PsGetCurrentProcessSessionId(v20);
      v19[6] = -1073741790LL;
      WdLogEvent5_WdError(v19);
      return 3221225506LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}
