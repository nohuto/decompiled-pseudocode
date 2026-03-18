/*
 * XREFs of ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C0277028
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0180660 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C01F48B8 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0046984 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  ReferenceCounted **v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( (unsigned int)v2 < *((_DWORD *)this + 18)
    && (v5 = *(ReferenceCounted ***)(*((_QWORD *)this + 5) + 8 * v2)) != 0LL )
  {
    DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(v5);
    v7 = 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v2;
    v7 = -1073741275;
    *(_QWORD *)(v8 + 32) = -1073741275LL;
    WdLogEvent5_WdError(v8);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v7;
}
