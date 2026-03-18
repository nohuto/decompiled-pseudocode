/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C00E9490
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C0010390 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C003D930 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C003D974 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C001831C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A568 (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  int v4; // eax
  void *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  void *v8; // rdi
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _ERESOURCE v22; // [rsp+20h] [rbp-68h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 44) )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v16 + 24) = 1061LL;
    WdLogEvent5_WdAssertion(v16);
  }
  memset(&v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22.SystemResourcesList.Blink);
  v3 = *((_BYTE *)this + 322) == 0;
  *(_QWORD *)&v22.ActiveEntries = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v22.ActiveCount = 25;
  LOBYTE(v22.OwnerEntry.OwnerThread) = -1;
  if ( !v3 )
  {
    v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v2) + 77);
    if ( v13 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  v4 = *((_DWORD *)this + 10);
  if ( !v4 )
  {
    DXGPROCESS::Destroy(this, &v22, 0);
    v4 = *((_DWORD *)this + 10);
  }
  if ( v4 != 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v17 + 24) = 1078LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_QWORD *)this + 55) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v18 + 24) = 1083LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v5 = (void *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 39));
    operator delete(v5);
  }
  *((_QWORD *)this + 39) = 0LL;
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    operator delete[](*(void **)(v6 + 80));
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
    {
      DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(v7 + 88));
      operator delete((void *)v7);
    }
  }
  v8 = (void *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 14));
    operator delete(v8);
  }
  *((_QWORD *)this + 14) = 0LL;
  for ( i = 0; ; ++i )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    v6 = *((unsigned int *)Global + 256);
    if ( !(_DWORD)v6 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v19 + 24) = 2287LL;
      WdLogEvent5_WdAssertion(v19);
      v6 = *((unsigned int *)Global + 256);
    }
    if ( i >= (unsigned int)v6 )
      break;
  }
  operator delete[](*((void **)this + 6));
  operator delete[](*((void **)this + 10));
  operator delete[](*((void **)this + 11));
  if ( *((DXGPROCESS **)this + 37) != (DXGPROCESS *)((char *)this + 296) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v20 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((DXGPROCESS **)this + 34) != (DXGPROCESS *)((char *)this + 272) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v21 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v21);
  }
  operator delete[](*((void **)this + 29));
  *((_QWORD *)this + 3) = 0LL;
}
