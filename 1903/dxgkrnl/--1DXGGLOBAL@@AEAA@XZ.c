/*
 * XREFs of ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240718
 * Callers:
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0241C68 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007534 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     McGenEventUnregister @ 0x1C0040624 (McGenEventUnregister.c)
 *     ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C0041FB8 (--_GDXGDIAGNOSTICS@@QEAAPEAXI@Z.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C004200C (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1AUTOEXPANDALLOCATION@@QEAA@XZ @ 0x1C014C4FC (--1AUTOEXPANDALLOCATION@@QEAA@XZ.c)
 *     ??1EDIDCACHE@@QEAA@XZ @ 0x1C024FFE0 (--1EDIDCACHE@@QEAA@XZ.c)
 *     ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C0250788 (-Release@DXGMMS_EXPORT@@QEAAJXZ.c)
 *     ??1REMOTE_VSYNC@@QEAA@XZ @ 0x1C0263178 (--1REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??1QDC_CACHE@@QEAA@XZ @ 0x1C026DAE4 (--1QDC_CACHE@@QEAA@XZ.c)
 *     ??1DXGSESSIONMGR@@QEAA@XZ @ 0x1C0276750 (--1DXGSESSIONMGR@@QEAA@XZ.c)
 *     ??1DXGBLACKBOX@@QEAA@XZ @ 0x1C0296B50 (--1DXGBLACKBOX@@QEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL *this)
{
  DXGMMS_EXPORT **v2; // rbx
  __int64 v3; // rbp
  DXGMMS_EXPORT *v4; // rsi
  struct _ERESOURCE *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  void *v8; // rbx
  void *v9; // rbx
  struct DXGPROCESS *v10; // rcx
  void *v11; // rcx
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rcx
  ReferenceCounted *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rbp
  __int64 v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax

  v2 = (DXGMMS_EXPORT **)DXGGLOBAL::m_pDxgmmsExport;
  v3 = 2LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      DXGMMS_EXPORT::Release(*v2);
      operator delete(v4);
    }
    *v2++ = 0LL;
    --v3;
  }
  while ( v3 );
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 43);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(*((void **)this + 43));
    *((_QWORD *)this + 43) = 0LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 72);
  if ( v6 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 72) = 0LL;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 73);
  if ( v7 )
  {
    DXGDIAGNOSTICS::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 73) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 74);
  if ( v8 )
  {
    DXGSESSIONMGR::~DXGSESSIONMGR(*((DXGSESSIONMGR **)this + 74));
    operator delete(v8);
    *((_QWORD *)this + 74) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 95);
  if ( v9 )
  {
    EDIDCACHE::~EDIDCACHE(*((EDIDCACHE **)this + 95));
    operator delete(v9);
    *((_QWORD *)this + 95) = 0LL;
  }
  if ( *((_BYTE *)this + 977) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)this + 8);
    *((_BYTE *)this + 977) = 0;
  }
  if ( *((_BYTE *)this + 978) )
  {
    ExDeleteLookasideListEx((PLOOKASIDE_LIST_EX)this + 9);
    *((_BYTE *)this + 978) = 0;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)this + 125);
  if ( v10 )
  {
    DXGPROCESS::DestroyDxgProcess(v10);
    *((_QWORD *)this + 125) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 38000);
  if ( v11 )
  {
    operator delete(v11);
    *((_QWORD *)this + 38000) = 0LL;
  }
  if ( *((_QWORD *)this + 65) )
  {
    v12 = RtlNumberOfClearBits((PRTL_BITMAP)((char *)this + 504));
    v14 = (*((_DWORD *)this + 248) + 31) & 0xFFFFFFE0;
    if ( v12 != (_DWORD)v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v15 + 24) = 1393LL;
      WdLogEvent5_WdAssertion(v15);
    }
    operator delete[](*((void **)this + 65));
    *((_QWORD *)this + 65) = 0LL;
    RtlInitializeBitMap((PRTL_BITMAP)((char *)this + 504), 0LL, 0);
  }
  v16 = (void *)*((_QWORD *)this + 139);
  if ( v16 )
  {
    QDC_CACHE::~QDC_CACHE(*((QDC_CACHE **)this + 139));
    operator delete(v16);
    *((_QWORD *)this + 139) = 0LL;
  }
  v17 = *((_QWORD *)this + 186);
  if ( v17 )
  {
    ExUnsubscribeWnfStateChange(v17);
    *((_QWORD *)this + 186) = 0LL;
  }
  v18 = *((_QWORD *)this + 209);
  if ( v18 )
  {
    ExUnsubscribeWnfStateChange(v18);
    *((_QWORD *)this + 209) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 210);
  if ( v19 )
  {
    PoUnregisterPowerSettingCallback(v19);
    *((_QWORD *)this + 210) = 0LL;
  }
  if ( *((_DWORD *)this + 423) )
  {
    McGenEventUnregister(&SLEEPSTUDY_ETW_PROVIDER_Context);
    *((_DWORD *)this + 423) = 0;
  }
  if ( !KeCancelTimer((PKTIMER)((char *)this + 1504)) )
    KeFlushQueuedDpcs();
  operator delete[](*((void **)this + 37990));
  v22 = (_QWORD *)*((_QWORD *)this + 164);
  if ( v22 )
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v22);
  v23 = (ReferenceCounted *)*((_QWORD *)this + 38013);
  if ( v23 )
  {
    ReferenceCounted::Release(v23, v20, v21);
    *((_QWORD *)this + 38013) = 0LL;
  }
  if ( *((_DWORD *)this + 49) != *((_DWORD *)this + 48) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v23, v20);
    *(_QWORD *)(v24 + 24) = 1466LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = (_QWORD *)((char *)this + 328);
  if ( (_QWORD *)*v25 != v25 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v23, v20);
    *(_QWORD *)(v26 + 24) = 1467LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v27 = (_QWORD *)((char *)this + 392);
  if ( (_QWORD *)*v27 != v27 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v23, v20);
    *(_QWORD *)(v28 + 24) = 1468LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v29 = (_QWORD *)((char *)this + 448);
  if ( (_QWORD *)*v29 != v29 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v23, v20);
    *(_QWORD *)(v30 + 24) = 1469LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = (_QWORD *)((char *)this + 1400);
  if ( (_QWORD *)*v31 != v31 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v23, v20);
    *(_QWORD *)(v32 + 24) = 1470LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *((_QWORD *)this + 141) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v23, v20);
    *(_QWORD *)(v33 + 24) = 1471LL;
    WdLogEvent5_WdAssertion(v33);
  }
  DXGBLACKBOX::~DXGBLACKBOX((DXGGLOBAL *)((char *)this + 304048));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 304008));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 303944));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1696));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1416));
  if ( (_QWORD *)*v31 != v31 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v36 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v36);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1240));
  if ( *((DXGGLOBAL **)this + 151) != (DXGGLOBAL *)((char *)this + 1208) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v38, v37);
    *(_QWORD *)(v39 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v39);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1168));
  AUTOEXPANDALLOCATION::~AUTOEXPANDALLOCATION((DXGGLOBAL *)((char *)this + 1056));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 1016));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 696));
  REMOTE_VSYNC::~REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 632));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 464));
  if ( (_QWORD *)*v29 != v29 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v41, v40);
    *(_QWORD *)(v42 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v42);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 408));
  if ( (_QWORD *)*v27 != v27 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v44, v43);
    *(_QWORD *)(v45 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v45);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 352));
  if ( (_QWORD *)*v25 != v25 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v47, v46);
    *(_QWORD *)(v48 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v48);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 288));
  if ( *((DXGGLOBAL **)this + 31) != (DXGGLOBAL *)((char *)this + 248) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v50, v49);
    *(_QWORD *)(v51 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v51);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 208));
  operator delete[](*((void **)this + 22));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGGLOBAL *)((char *)this + 136));
}
