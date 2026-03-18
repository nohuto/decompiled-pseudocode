/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C01417BC
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C001A220 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007534 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ?DisableDisplayBroker@DispBrokerClient@@QEAAXXZ @ 0x1C001A254 (-DisableDisplayBroker@DispBrokerClient@@QEAAXXZ.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C001A29C (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C001A2BC (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001B3BC (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001B510 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this, __int64 a2)
{
  __int64 v3; // rcx
  OUTPUTDUPL_SESSION_MGR *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r8
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = *((_QWORD *)this + 2339);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 2339) = 0LL;
  }
  v4 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  if ( *((_DWORD *)this + 4690) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v12 + 24) = 2921LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)this + 2346) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v13 + 24) = 2922LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((DXGSESSIONDATA **)this + 2319) != (DXGSESSIONDATA *)((char *)this + 18552) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v14 + 24) = 2927LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((DXGSESSIONDATA **)this + 2321) != (DXGSESSIONDATA *)((char *)this + 18568) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v15 + 24) = 2928LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_WORD *)this + 9305) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v16 + 24) = 2930LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = (void *)*((_QWORD *)this + 2327);
  if ( v5 )
  {
    operator delete[](v5);
    *((_WORD *)this + 9304) = 0;
    *((_QWORD *)this + 2327) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 2328);
  *((_QWORD *)this + 2329) = 0LL;
  ObfDereferenceObject(v6);
  if ( *((_QWORD *)this + 2335) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v17 + 24) = 2941LL;
    WdLogEvent5_WdAssertion(v17);
  }
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1284), this);
  v11 = (void *)*((_QWORD *)this + 2338);
  if ( v11 )
  {
    operator delete[](v11);
    *((_QWORD *)this + 2338) = 0LL;
    *((_DWORD *)this + 4674) = 0;
  }
  auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)this + 2359, 0LL, v10);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18824));
  DispBrokerClient::DisableDisplayBroker((struct _KTHREAD **)this + 2347);
  DispBrokerClientReference::Assign((HANDLE **)this + 2352, 0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18720));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18640));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
