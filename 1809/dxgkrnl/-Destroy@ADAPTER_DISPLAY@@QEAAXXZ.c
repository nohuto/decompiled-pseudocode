/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C14DC
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C014F768 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C001F450 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C00304D0 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C004EF14 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0122C48 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C02115AC (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this)
{
  __int64 v2; // rax
  unsigned int v3; // eax
  unsigned int i; // esi
  __int64 v5; // rdi
  ADAPTER_DISPLAY *v6; // rax
  void *v7; // rcx
  unsigned int j; // edi
  __int64 v9; // rsi
  ReferenceCounted *v10; // rcx
  unsigned int v11; // esi
  __int64 v12; // rdi
  ADAPTER_DISPLAY *v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  unsigned int k; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  ADAPTER_DISPLAY *v22; // rdi
  MONITOR_MGR *v23; // rcx
  ADAPTER_DISPLAY *v24; // rax
  __int64 v25; // rcx
  DXGDODPRESENT *v26; // rcx
  ADAPTER_DISPLAY *v27; // rbx
  struct DXGGLOBAL *Global; // rax
  _BYTE v29[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[23] != (ADAPTER_DISPLAY *)(this + 23) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 4687LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = *((_DWORD *)this + 20);
  for ( i = 0; i < v3; v3 = *((_DWORD *)this + 20) )
  {
    v5 = 3760LL * i;
    v6 = this[14];
    v7 = *(void **)((char *)v6 + v5 + 1080);
    if ( v7 )
    {
      operator delete[](v7);
      *(_QWORD *)((char *)this[14] + v5 + 1080) = 0LL;
      v6 = this[14];
    }
    *(_DWORD *)((char *)v6 + v5 + 1088) = 0;
    ++i;
    *((_BYTE *)this[14] + v5 + 1092) = 0;
    *(_DWORD *)((char *)this[14] + v5 + 1104) = -1;
    *(_DWORD *)((char *)this[14] + v5 + 1108) = -1;
  }
  for ( j = 0; j < v3; ++j )
  {
    v9 = 3760LL * j;
    v10 = *(ReferenceCounted **)((char *)this[14] + v9 + 904);
    if ( v10 )
    {
      ReferenceCounted::Release(v10);
      *(_QWORD *)((char *)this[14] + v9 + 904) = 0LL;
    }
    v3 = *((_DWORD *)this + 20);
  }
  v11 = 0;
  if ( v3 )
  {
    do
    {
      v12 = 3760LL * v11;
      v13 = this[14];
      v14 = *(void **)((char *)v13 + v12 + 760);
      if ( v14 )
      {
        operator delete[](v14);
        *(_QWORD *)((char *)this[14] + v12 + 760) = 0LL;
        *(_DWORD *)((char *)this[14] + v12 + 776) = 0;
        v13 = this[14];
      }
      v15 = *(void **)((char *)v13 + v12 + 808);
      if ( v15 )
      {
        operator delete[](v15);
        *(_QWORD *)((char *)this[14] + v12 + 808) = 0LL;
        v13 = this[14];
      }
      v16 = *(void **)((char *)v13 + v12 + 848);
      if ( v16 )
      {
        operator delete[](v16);
        *(_QWORD *)((char *)this[14] + v12 + 848) = 0LL;
      }
      ++v11;
    }
    while ( v11 < *((_DWORD *)this + 20) );
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(this + 50), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[14] + 3760 * k));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  v22 = this[11];
  if ( v22 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v22 + 5));
    (**(void (__fastcall ***)(ADAPTER_DISPLAY *, __int64))v22)(v22, 1LL);
    this[11] = 0LL;
  }
  if ( this[12] )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = this;
    v23 = this[12];
    if ( v23 )
      MONITOR_MGR::`scalar deleting destructor'(v23);
    this[12] = 0LL;
  }
  v24 = this[2];
  v25 = *((_QWORD *)v24 + 24);
  if ( v25 && !*((_QWORD *)v24 + 316) )
  {
    DpiSetSchedulerCallbackState(v25, 0);
    KeFlushQueuedDpcs();
  }
  v26 = this[33];
  if ( v26 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v26);
    this[33] = 0LL;
  }
  v27 = this[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v26);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 1048),
    (const struct _LUID *)((char *)v27 + 276));
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
}
