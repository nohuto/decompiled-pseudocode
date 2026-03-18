/*
 * XREFs of ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01F0A78
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0166BE4 (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC2F4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     DpiSetSchedulerCallbackState @ 0x1C0023180 (DpiSetSchedulerCallbackState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0035CB4 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0056038 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C013F2A8 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z @ 0x1C024543C (-RemoveAdapter@DXGADAPTERSOURCEHASH@@QEAAXPEBU_LUID@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Destroy(ADAPTER_DISPLAY **this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int i; // esi
  __int64 v7; // rdi
  ADAPTER_DISPLAY *v8; // rax
  void *v9; // rcx
  unsigned int j; // edi
  __int64 v11; // rsi
  ReferenceCounted *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rdi
  ADAPTER_DISPLAY *v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  unsigned int k; // edi
  __int64 v20; // rdx
  __int64 v21; // rcx
  ADAPTER_DISPLAY *v22; // rdi
  MONITOR_MGR *v23; // rcx
  ADAPTER_DISPLAY *v24; // rax
  __int64 v25; // rcx
  DXGDODPRESENT *v26; // rcx
  ADAPTER_DISPLAY *v27; // rbx
  struct DXGGLOBAL *Global; // rax
  _BYTE v29[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[36] != (ADAPTER_DISPLAY *)(this + 36) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 4915LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 20);
  for ( i = 0; i < v5; v5 = *((_DWORD *)this + 20) )
  {
    v7 = 3968LL * i;
    v8 = this[14];
    v9 = *(void **)((char *)v8 + v7 + 1080);
    if ( v9 )
    {
      operator delete[](v9);
      *(_QWORD *)((char *)this[14] + v7 + 1080) = 0LL;
      v8 = this[14];
    }
    *(_DWORD *)((char *)v8 + v7 + 1088) = 0;
    ++i;
    *((_BYTE *)this[14] + v7 + 1092) = 0;
    *(_DWORD *)((char *)this[14] + v7 + 1104) = -1;
    *(_DWORD *)((char *)this[14] + v7 + 1108) = -1;
  }
  for ( j = 0; j < v5; ++j )
  {
    v11 = 3968LL * j;
    v12 = *(ReferenceCounted **)((char *)this[14] + v11 + 904);
    if ( v12 )
    {
      ReferenceCounted::Release(v12, a2, a3);
      *(_QWORD *)((char *)this[14] + v11 + 904) = 0LL;
    }
    v5 = *((_DWORD *)this + 20);
  }
  v13 = 0;
  if ( v5 )
  {
    do
    {
      v14 = 3968LL * v13;
      v15 = this[14];
      v16 = *(void **)((char *)v15 + v14 + 760);
      if ( v16 )
      {
        operator delete[](v16);
        *(_QWORD *)((char *)this[14] + v14 + 760) = 0LL;
        *(_DWORD *)((char *)this[14] + v14 + 776) = 0;
        v15 = this[14];
      }
      v17 = *(void **)((char *)v15 + v14 + 808);
      if ( v17 )
      {
        operator delete[](v17);
        *(_QWORD *)((char *)this[14] + v14 + 808) = 0LL;
        v15 = this[14];
      }
      v18 = *(void **)((char *)v15 + v14 + 848);
      if ( v18 )
      {
        operator delete[](v18);
        *(_QWORD *)((char *)this[14] + v14 + 848) = 0LL;
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)this + 20) );
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(this + 63), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
    DISPLAY_SOURCE::ClearAllDisplayState((ADAPTER_DISPLAY *)((char *)this[14] + 3968 * k));
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
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = this;
    v23 = this[12];
    if ( v23 )
      MONITOR_MGR::`scalar deleting destructor'(v23);
    this[12] = 0LL;
  }
  v24 = this[2];
  v25 = *((_QWORD *)v24 + 24);
  if ( v25 && !*((_QWORD *)v24 + 320) )
  {
    DpiSetSchedulerCallbackState(v25, 0);
    KeFlushQueuedDpcs();
  }
  v26 = this[46];
  if ( v26 )
  {
    DXGDODPRESENT::`scalar deleting destructor'(v26);
    this[46] = 0LL;
  }
  v27 = this[2];
  Global = DXGGLOBAL::GetGlobal((__int64)v26, v20);
  DXGADAPTERSOURCEHASH::RemoveAdapter(
    (struct DXGGLOBAL *)((char *)Global + 1016),
    (const struct _LUID *)((char *)v27 + 276));
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
}
