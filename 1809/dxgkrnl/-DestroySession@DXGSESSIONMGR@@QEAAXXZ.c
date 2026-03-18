/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0132100
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C013BD50 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0018A58 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0018B48 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0138F24 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONDATA **this)
{
  unsigned int CurrentProcessSessionId; // eax
  __int64 v3; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v5; // rdi
  DXGSESSIONDATA *v6; // rcx
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  DXGSESSIONDATA *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v17[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  v3 = CurrentProcessSessionId;
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  v5 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18528));
    v6 = this[15];
    if ( v5 == v6 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v14 + 24) = 3786LL;
      WdLogEvent5_WdAssertion(v14);
      v15 = (__int64)this[15];
      if ( v5 == (DXGSESSIONDATA *)v15 )
      {
        Global = DXGGLOBAL::GetGlobal(v15);
        DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 77), 0);
      }
    }
    DXGSESSIONDATA::ReleaseSessionModeChangeLock(v5);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v8 = DXGGLOBAL::GetGlobal(v7);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v8,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(this + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
  v11[3] = v3;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 18) )
    v12 = 0LL;
  else
    v12 = *((_QWORD *)this[5] + v3);
  v11[4] = v12;
  v11[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v11);
  if ( (unsigned int)v3 < *((_DWORD *)this + 18) )
  {
    v13 = (DXGSESSIONDATA *)*((_QWORD *)this[5] + v3);
    if ( v13 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v13);
      *((_QWORD *)this[5] + v3) = 0LL;
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
}
