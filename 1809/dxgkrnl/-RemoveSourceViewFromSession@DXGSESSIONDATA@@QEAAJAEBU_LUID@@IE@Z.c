/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C0136FE4
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C0136F50 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0019388 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00ED7C8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00ED894 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C01370E0 (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C0241D9C (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r15d
  __int64 v5; // rbp
  SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v10; // rcx
  struct DISPLAY_SOURCE *DisplaySource; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v13; // rbx
  DXGSESSIONDATA *v14; // rdx
  DXGSESSIONDATA ***v15; // r8
  _QWORD *v17; // rax
  unsigned __int8 v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v18[0] = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5);
  else
    DisplaySource = 0LL;
  if ( DisplaySource )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
    v13 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( a4 )
      {
        SESSION_VIEW::RemoveAllDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource((SESSION_VIEW *)SessionViewFromSource, DisplaySource, v18);
        if ( !v18[0] )
          return v4;
      }
      v14 = v13[1];
      if ( *((DXGSESSIONDATA ***)v14 + 1) != v13 + 1 || (v15 = (DXGSESSIONDATA ***)v13[2], *v15 != v13 + 1) )
        __fastfail(3u);
      *v15 = (DXGSESSIONDATA **)v14;
      *((_QWORD *)v14 + 1) = v15;
      SESSION_VIEW::`scalar deleting destructor'((SESSION_VIEW *)v13);
      return v4;
    }
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v17[3] = v5;
  v17[4] = a2->HighPart;
  v17[5] = a2->LowPart;
  v17[6] = this;
  v17[7] = -1073741811LL;
  WdLogEvent5_WdError(v17);
  return 3221225485LL;
}
