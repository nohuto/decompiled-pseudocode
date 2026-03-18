/*
 * XREFs of ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0261798
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0261938 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C00448C0 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0044A20 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0261D1C (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0261E30 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, struct _EX_RUNDOWN_REF *P)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _EX_RUNDOWN_REF v10; // rcx
  PVOID *Count; // rax
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  _BYTE v16[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v18[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v19[72]; // [rsp+88h] [rbp-60h] BYREF

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 914LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 915LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ExWaitForRundownProtectionRelease(P + 16);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v16, (struct ADAPTER_DISPLAY *)this);
  v10.Count = P->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(P->Count + 8) != P || (Count = (PVOID *)P[1].Count, *Count != P) )
    __fastfail(3u);
  *Count = v10.Ptr;
  *(_QWORD *)(v10.Count + 8) = Count;
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v17, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v17, (unsigned int)(v12 + 1)) < 0 )
  {
    v14 = WdLogNewEntry5_WdEvent(v13);
    *(_QWORD *)(v14 + 24) = 950LL;
    WdLogEvent5_WdEvent(v14);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop((DXGPROTECTEDSESSION *)P);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v17);
    if ( LOBYTE(P[17].Count) )
    {
      DXGPROTECTEDSESSION::SignalFence((DXGPROTECTEDSESSION *)P);
      LOBYTE(P[17].Count) = 0;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)P, v15);
}
