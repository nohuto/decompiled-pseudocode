/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C00BBB2C
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C001E2A4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00BC27C (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A2E4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C00ED85C (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        struct SESSION_ADAPTER **a3)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct SESSION_ADAPTER **v7; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  struct _LUID v12; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rcx
  DXGSESSIONDATA **v16; // rdx
  DXGSESSIONDATA *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( v7 )
      *v7 = SessionAdapterFromLuid;
    return 0LL;
  }
  v9 = operator new(0x80uLL, 0x4B677844u, PagedPool);
  v11 = v9;
  if ( v9 )
  {
    *v9 = this;
    v12 = *a2;
    v11[2] = 0LL;
    *((_DWORD *)v11 + 12) = 0;
    *((_DWORD *)v11 + 13) = 0;
    v11[7] = 0LL;
    v11[8] = 0LL;
    v11[1] = v12;
    v11[9] = 0LL;
    *((_DWORD *)v11 + 24) = 0;
    *((_DWORD *)v11 + 26) = 0;
    *((_DWORD *)v11 + 27) = 0;
    v11[15] = v11 + 14;
    v11[14] = v11 + 14;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)v11[1], v11 + 3);
    v11[2] = v14;
    if ( v14 )
    {
      v16 = this[2320];
      v17 = (DXGSESSIONDATA *)(v11 + 4);
      if ( *v16 != (DXGSESSIONDATA *)(this + 2319) )
        __fastfail(3u);
      *(_QWORD *)v17 = this + 2319;
      v11[5] = v16;
      *v16 = v17;
      this[2320] = (DXGSESSIONDATA **)v17;
      ++*((_DWORD *)v11 + 12);
      if ( a3 )
        *a3 = (struct SESSION_ADAPTER *)v11;
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v18[3] = a2->HighPart;
      v18[4] = a2->LowPart;
      v18[5] = this;
      WdLogEvent5_WdEvent(v18);
      return 0LL;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v20[3] = *((int *)v11 + 3);
    v20[4] = *((unsigned int *)v11 + 2);
    v20[5] = -1073741811LL;
    WdLogEvent5_WdError(v20);
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v11);
    return 3221225485LL;
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10);
    v19[3] = a2->HighPart;
    v19[4] = a2->LowPart;
    v19[5] = this;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
}
