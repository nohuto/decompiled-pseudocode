/*
 * XREFs of DxgkIncreaseSessionAdapterUniqueness @ 0x1C0140BC0
 * Callers:
 *     DxgkSessionDisconnected @ 0x1C01408C0 (DxgkSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01409D0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C015A690 (DxgkSessionReconnected.c)
 *     ?IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C01F5CF0 (-IncreaseAdapterUniquenessCallback@@YAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkIncreaseSessionAdapterUniqueness(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  volatile signed __int32 *v8; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 74);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3, v2);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    v8 = (volatile signed __int32 *)*((_QWORD *)SessionDataForSpecifiedSession + 2314);
    if ( v8 )
      _InterlockedIncrement(v8);
    return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v3, v2, v5);
    *(_QWORD *)(v10 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v12, v11);
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
}
