/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0141680
 * Callers:
 *     DxgkNotifySessionStateChange @ 0x1C00C52F0 (DxgkNotifySessionStateChange.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C001A220 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A2F0 (-ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C013DC18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONDATA **this, __int64 a2)
{
  __int64 CurrentProcessSessionId; // rsi
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v5; // rdi
  __int64 v6; // rdx
  DXGSESSIONDATA *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  DXGSESSIONDATA *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  v5 = SessionDataForSpecifiedSession;
  if ( SessionDataForSpecifiedSession )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGSESSIONDATA *)((char *)SessionDataForSpecifiedSession + 18528));
    v7 = this[15];
    if ( v5 == v7 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v15 + 24) = 3906LL;
      WdLogEvent5_WdAssertion(v15);
      v17 = (__int64)this[15];
      if ( v5 == (DXGSESSIONDATA *)v17 )
      {
        Global = DXGGLOBAL::GetGlobal(v17, v16);
        DXGSESSIONMGR::SetConsoleSession(*((struct DXGSESSIONDATA ***)Global + 74), 0LL);
      }
    }
    DXGSESSIONDATA::ReleaseSessionModeChangeLock(v5);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v10 = DXGGLOBAL::GetGlobal(v9, v8);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v10,
    (__int64)DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 10), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11);
  v12[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)this[5] + CurrentProcessSessionId);
  v12[4] = v13;
  v12[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v12);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v14 = (DXGSESSIONDATA *)*((_QWORD *)this[5] + CurrentProcessSessionId);
    if ( v14 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v14);
      *((_QWORD *)this[5] + CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
}
