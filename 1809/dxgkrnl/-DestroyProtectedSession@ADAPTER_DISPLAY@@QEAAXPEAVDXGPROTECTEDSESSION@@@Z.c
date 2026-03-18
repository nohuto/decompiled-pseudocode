/*
 * XREFs of ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C022C890
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C003DE08 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C003DF68 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C022CDF4 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C022CF00 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, struct _EX_RUNDOWN_REF *P)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF v8; // rcx
  PVOID *Count; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v17[48]; // [rsp+58h] [rbp-30h] BYREF

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 914LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 915LL;
    WdLogEvent5_WdAssertion(v7);
  }
  ExWaitForRundownProtectionRelease(P + 16);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v14, (struct ADAPTER_DISPLAY *)this);
  v8.Count = P->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(P->Count + 8) != P || (Count = (PVOID *)P[1].Count, *Count != P) )
    __fastfail(3u);
  *Count = v8.Ptr;
  *(_QWORD *)(v8.Count + 8) = Count;
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v15, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive(&v15, (unsigned int)(v10 + 1)) < 0 )
  {
    v13 = WdLogNewEntry5_WdEvent(v12, v11);
    *(_QWORD *)(v13 + 24) = 950LL;
    WdLogEvent5_WdEvent(v13);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop((DXGPROTECTEDSESSION *)P);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v15);
    if ( LOBYTE(P[17].Count) )
    {
      DXGPROTECTEDSESSION::SignalFence((DXGPROTECTEDSESSION *)P);
      LOBYTE(P[17].Count) = 0;
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v16);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)P);
}
