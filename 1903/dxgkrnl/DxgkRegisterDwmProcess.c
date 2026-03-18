/*
 * XREFs of DxgkRegisterDwmProcess @ 0x1C014A820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C001AF30 (-VidSchRegisterAsDwm@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001AF74 (-ReferenceCurrentProcessAsDwm@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkRegisterDwmProcess(__int64 a1, __int64 a2)
{
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 i; // rsi
  VIDSCH_EXPORT *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *v18; // rax
  __int64 result; // rax
  __int64 v20; // rax

  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    *((_BYTE *)Current + 298) = 1;
    v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v4, v3) + 74);
    if ( v8 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReferenceCurrentProcessAsDwm(SessionDataForSpecifiedSession);
    v13 = 0;
    for ( i = 120LL; ; i += 8LL )
    {
      DXGGLOBAL::GetGlobal(v12, v11);
      if ( *(_QWORD *)((char *)&DXGGLOBAL::m_pDxgmmsExport + i - 120) )
      {
        v15 = *(VIDSCH_EXPORT **)((char *)DXGGLOBAL::GetGlobal(v12, v11) + i);
        v18 = DXGPROCESS::GetCurrent(v17, v16);
        result = VIDSCH_EXPORT::VidSchRegisterAsDwm(v15, v18);
        if ( (int)result < 0 )
          break;
      }
      if ( (unsigned int)++v13 >= 2 )
        return 0LL;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v20 + 24) = 3178LL;
    WdLogEvent5_WdError(v20);
    return 3221225473LL;
  }
  return result;
}
