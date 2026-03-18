/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C0138ECC
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C0138BF0 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C0138D00 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C0144600 (DxgkSessionReconnected.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v5; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1) + 77);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v5 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2314);
    if ( v5 )
      _InterlockedIncrement(v5);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v7 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v8);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
