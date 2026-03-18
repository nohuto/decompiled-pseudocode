/*
 * XREFs of ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C013223C
 * Callers:
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0018A58 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C0018A8C (-CleanupForSession@DXGVALIDATION@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C0018AAC (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSESSIONDATA::~DXGSESSIONDATA(DXGSESSIONDATA *this)
{
  __int64 v2; // rcx
  OUTPUTDUPL_SESSION_MGR *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *((_QWORD *)this + 2339);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2339) = 0LL;
  }
  v3 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  if ( *((_DWORD *)this + 4690) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v10 + 24) = 2802LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_QWORD *)this + 2346) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v11 + 24) = 2803LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((DXGSESSIONDATA **)this + 2319) != (DXGSESSIONDATA *)((char *)this + 18552) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v12 + 24) = 2808LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((DXGSESSIONDATA **)this + 2321) != (DXGSESSIONDATA *)((char *)this + 18568) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v13 + 24) = 2809LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_WORD *)this + 9305) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v14 + 24) = 2811LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v4 = (void *)*((_QWORD *)this + 2327);
  if ( v4 )
  {
    operator delete[](v4);
    *((_WORD *)this + 9304) = 0;
    *((_QWORD *)this + 2327) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2328);
  *((_QWORD *)this + 2329) = 0LL;
  ObfDereferenceObject(v5);
  if ( *((_QWORD *)this + 2335) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 2822LL;
    WdLogEvent5_WdAssertion(v15);
  }
  Global = DXGGLOBAL::GetGlobal(v6);
  DXGVALIDATION::CleanupForSession((struct DXGGLOBAL *)((char *)Global + 1316), this);
  v8 = (void *)*((_QWORD *)this + 2338);
  if ( v8 )
  {
    operator delete[](v8);
    *((_QWORD *)this + 2338) = 0LL;
    *((_DWORD *)this + 4674) = 0;
  }
  v9 = (void *)*((_QWORD *)this + 2352);
  if ( v9 )
    operator delete[](v9);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18776));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18720));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 18640));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSESSIONDATA *)((char *)this + 16));
}
