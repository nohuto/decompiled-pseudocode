/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C014447C
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001DEE0 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C0144114 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A664 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00E977C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C0144640 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  SESSION_ADAPTER *v8; // rbx
  SESSION_ADAPTER **v11; // rdx
  SESSION_ADAPTER **v12; // rcx
  _QWORD *v13; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v8 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 12))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v11 = (SESSION_ADAPTER **)*((_QWORD *)v8 + 4);
      if ( v11[1] != (SESSION_ADAPTER *)((char *)v8 + 32)
        || (v12 = (SESSION_ADAPTER **)*((_QWORD *)v8 + 5), *v12 != (SESSION_ADAPTER *)((char *)v8 + 32)) )
      {
        __fastfail(3u);
      }
      *v12 = (SESSION_ADAPTER *)v11;
      v11[1] = (SESSION_ADAPTER *)v12;
      SESSION_ADAPTER::`scalar deleting destructor'(v8);
    }
    return 0LL;
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v13[3] = a2->HighPart;
    v13[4] = a2->LowPart;
    v13[5] = this;
    v13[6] = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
