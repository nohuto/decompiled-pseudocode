/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C00FA354
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C0019C40 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C004449C (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C00444E0 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007758 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001B71C (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // zf
  int v6; // eax
  void *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdi
  PLIST_ENTRY v10; // rax
  PLIST_ENTRY v11; // rsi
  void *v12; // rdi
  __int64 v13; // rcx
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _ERESOURCE v29; // [rsp+20h] [rbp-78h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 41) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v23 + 24) = 1055LL;
    WdLogEvent5_WdAssertion(v23);
  }
  memset(&v29, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v29.SystemResourcesList.Blink);
  v5 = *((_BYTE *)this + 298) == 0;
  *(_QWORD *)&v29.ActiveEntries = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v29.ActiveCount = 25;
  LOBYTE(v29.OwnerEntry.OwnerThread) = -1;
  if ( !v5 )
  {
    v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v4, v3) + 74);
    if ( v20 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  v6 = *((_DWORD *)this + 10);
  if ( !v6 )
  {
    DXGPROCESS::Destroy(this, &v29, 0);
    v6 = *((_DWORD *)this + 10);
  }
  if ( v6 != 2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v24 + 24) = 1072LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_QWORD *)this + 52) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v25 + 24) = 1077LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v7 = (void *)*((_QWORD *)this + 36);
  if ( v7 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 36));
    operator delete(v7);
  }
  *((_QWORD *)this + 36) = 0LL;
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    operator delete[](*(void **)(v8 + 80));
    v9 = *((_QWORD *)this + 9);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v9 + 88), (PKSPIN_LOCK)(v9 + 104));
        v11 = v10;
        if ( !v10 )
          break;
        ((void (__fastcall *)(struct _LIST_ENTRY *))v10[1].Flink)(v10[1].Blink);
        operator delete(v11);
      }
      operator delete((void *)v9);
    }
  }
  v12 = (void *)*((_QWORD *)this + 13);
  if ( v12 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 13));
    operator delete(v12);
  }
  *((_QWORD *)this + 13) = 0LL;
  v13 = *((_QWORD *)this + 6);
  if ( v13 )
  {
    for ( i = 0; ; ++i )
    {
      Global = DXGGLOBAL::GetGlobal(v13, v3);
      v13 = *((unsigned int *)Global + 248);
      if ( !(_DWORD)v13 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v13, v3);
        *(_QWORD *)(v26 + 24) = 2436LL;
        WdLogEvent5_WdAssertion(v26);
        v13 = *((unsigned int *)Global + 248);
      }
      if ( i >= (unsigned int)v13 )
        break;
    }
    v13 = *((_QWORD *)this + 6);
  }
  operator delete[]((void *)v13);
  operator delete[](*((void **)this + 10));
  if ( *((DXGPROCESS **)this + 34) != (DXGPROCESS *)((char *)this + 272) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v27 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((DXGPROCESS **)this + 31) != (DXGPROCESS *)((char *)this + 248) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v28 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v28);
  }
  operator delete[](*((void **)this + 26));
  *((_QWORD *)this + 3) = 0LL;
}
