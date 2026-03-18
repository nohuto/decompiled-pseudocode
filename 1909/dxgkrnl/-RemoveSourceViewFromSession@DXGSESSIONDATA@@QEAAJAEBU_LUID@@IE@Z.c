/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C014FA14
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C014F980 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0002114 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00CE02C (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00EBEC0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00EBF54 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00EBF8C (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C0277948 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DISPLAY_SOURCE *DisplaySource; // rsi
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v15; // rbx
  DXGSESSIONDATA *v16; // rdx
  DXGSESSIONDATA ***v17; // r8
  _QWORD *v19; // rax
  unsigned __int8 v20[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v20[0] = 0;
  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  if ( SessionAdapterFromLuid )
    DisplaySource = SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, v5);
  else
    DisplaySource = 0LL;
  if ( DisplaySource )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
    v15 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( a4 )
      {
        SESSION_VIEW::RemoveAllDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource((SESSION_VIEW *)SessionViewFromSource, DisplaySource, v20);
        if ( !v20[0] )
          return v4;
      }
      v16 = v15[1];
      if ( *((DXGSESSIONDATA ***)v16 + 1) != v15 + 1 || (v17 = (DXGSESSIONDATA ***)v15[2], *v17 != v15 + 1) )
        __fastfail(3u);
      *v17 = (DXGSESSIONDATA **)v16;
      *((_QWORD *)v16 + 1) = v17;
      SESSION_VIEW::`scalar deleting destructor'((SESSION_VIEW *)v15);
      return v4;
    }
  }
  v19 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
  v19[3] = v5;
  v19[4] = a2->HighPart;
  v19[5] = a2->LowPart;
  v19[6] = this;
  v19[7] = -1073741811LL;
  WdLogEvent5_WdError(v19);
  return 3221225485LL;
}
