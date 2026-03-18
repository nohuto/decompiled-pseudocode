/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C0139E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0019578 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00195BC (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 DxgkRegisterDwmProcess()
{
  struct DXGPROCESS *Current; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  DXGSESSIONMGR *v3; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v9; // rbx
  struct DXGPROCESS *v10; // rax
  __int64 result; // rax
  __int64 v12; // rax

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    *((_BYTE *)Current + 322) = 1;
    v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v1) + 77);
    if ( v3 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v7 = 0;
    for ( i = 120LL; ; i += 8LL )
    {
      DXGGLOBAL::GetGlobal(v6);
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
      {
        v9 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v6) + i);
        v10 = DXGPROCESS::GetCurrent();
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v9, v10);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v7 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v12 + 24) = 3176LL;
    WdLogEvent5_WdError(v12);
    return 3221225473LL;
  }
  return result;
}
