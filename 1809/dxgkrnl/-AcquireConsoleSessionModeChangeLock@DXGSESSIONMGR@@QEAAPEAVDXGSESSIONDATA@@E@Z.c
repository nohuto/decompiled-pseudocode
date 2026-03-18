/*
 * XREFs of ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C013D988
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C013D490 (DxgkGetDisplayModeList.c)
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01C2530 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(DXGSESSIONMGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v5 + 18528));
    v6 = *((_QWORD *)this + 15);
  }
  else
  {
    v6 = 0LL;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v2, v3, v4) + 24) = 4124LL;
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return (struct DXGSESSIONDATA *)v6;
}
