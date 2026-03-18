/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C00BB9FC
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C001E2A4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A2E4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C01392AC (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v5; // rcx
  SESSION_ADAPTER *v6; // rbx
  SESSION_ADAPTER **v9; // rdx
  SESSION_ADAPTER **v10; // rcx
  _QWORD *v11; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v6 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 12))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v9 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 4);
      if ( v9[1] != (SESSION_ADAPTER *)((char *)v6 + 32)
        || (v10 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 5), *v10 != (SESSION_ADAPTER *)((char *)v6 + 32)) )
      {
        __fastfail(3u);
      }
      *v10 = (SESSION_ADAPTER *)v9;
      v9[1] = (SESSION_ADAPTER *)v10;
      SESSION_ADAPTER::`scalar deleting destructor'(v6);
    }
    return 0LL;
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v11[3] = a2->HighPart;
    v11[4] = a2->LowPart;
    v11[5] = this;
    v11[6] = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}
