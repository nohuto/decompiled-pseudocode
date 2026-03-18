/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAVDXGADAPTER@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C0147EE0
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001DF30 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C0147CB4 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A8A4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00EBF54 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C0148120 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct DXGADAPTER *a3,
        struct SESSION_ADAPTER **a4)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rbx
  struct _LUID v16; // rax
  int v17; // r14d
  DXGSESSIONDATA **v18; // rdx
  DXGSESSIONDATA *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( a4 )
      *a4 = SessionAdapterFromLuid;
    return 0LL;
  }
  v10 = operator new[](0x80uLL, 0x4B677844u, PagedPool);
  v15 = v10;
  if ( v10 )
  {
    *v10 = this;
    v16 = *a2;
    v15[2] = 0LL;
    *((_DWORD *)v15 + 12) = 0;
    *((_DWORD *)v15 + 13) = 0;
    v15[7] = 0LL;
    v15[8] = 0LL;
    v15[1] = v16;
    v15[9] = 0LL;
    *((_DWORD *)v15 + 24) = 0;
    *((_DWORD *)v15 + 26) = 0;
    *((_DWORD *)v15 + 27) = 0;
    v15[15] = v15 + 14;
    v15[14] = v15 + 14;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v17 = SESSION_ADAPTER::Initialize((SESSION_ADAPTER *)v15, a3);
    if ( v17 >= 0 )
    {
      v18 = this[2320];
      v19 = (DXGSESSIONDATA *)(v15 + 4);
      if ( *v18 != (DXGSESSIONDATA *)(this + 2319) )
        __fastfail(3u);
      *(_QWORD *)v19 = this + 2319;
      v15[5] = v18;
      *v18 = v19;
      this[2320] = (DXGSESSIONDATA **)v19;
      ++*((_DWORD *)v15 + 12);
      if ( a4 )
        *a4 = (struct SESSION_ADAPTER *)v15;
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v19);
      v20[3] = a2->HighPart;
      v20[4] = a2->LowPart;
      v20[5] = this;
      WdLogEvent5_WdEvent(v20);
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v15);
    return (unsigned int)v17;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    v21[3] = a2->HighPart;
    v21[4] = a2->LowPart;
    v21[5] = this;
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
}
