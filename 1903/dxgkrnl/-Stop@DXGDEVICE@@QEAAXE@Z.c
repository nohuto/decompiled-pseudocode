/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0230240
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01F6200 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0001D54 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0121538 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C0121D98 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C0122084 (OutputDuplProcessDestroyDevice.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C01249BC (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0144E58 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0206928 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C022E2A0 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0253364 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C025ED78 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C027D458 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r14d
  __int64 v11; // r13
  unsigned int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rbx
  DXGOVERLAY *i; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGALLOCATION *v19; // r9
  __int64 j; // rbx
  __int64 v21; // rax
  DXGPROCESS *v22; // rcx
  const struct _WNF_STATE_NAME *v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v30[16]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v31[24]; // [rsp+50h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v34[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v35[72]; // [rsp+E0h] [rbp-28h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 1601LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = WdLogNewEntry5_WdEvent(v5);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v33, *((struct DXGADAPTER *const *)this + 216), 0LL);
  if ( (*((_BYTE *)this + 1749) & 1) != 0
    && *((_QWORD *)this + 216) != v9
    && (int)COREADAPTERACCESS::AcquireExclusive(&v33, (unsigned int)(v9 + 2), v9) >= 0 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(*((_QWORD *)this + 216) + 2552LL);
    v12 = *(_DWORD *)(v11 + 80);
    if ( v12 )
    {
      do
      {
        if ( this == ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 216) + 2552LL), v10) )
        {
          v13 = *(_QWORD *)(v11 + 368);
          v14 = 2760LL * v10;
          BLTQUEUE::Flush((BLTQUEUE *)(v14 + *(_QWORD *)(v13 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v14 + *(_QWORD *)(v13 + 8)), 0);
        }
        ++v10;
      }
      while ( v10 < v12 );
    }
  }
  if ( !a2 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 56LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 216), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 47); i != (DXGDEVICE *)((char *)this + 376) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v18 + 24) = 250LL;
        WdLogEvent5_WdAssertion(v18);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v31, (struct _KTHREAD **)this + 23);
    for ( j = *((_QWORD *)this + 7); j; j = *(_QWORD *)(j + 40) )
      DXGDEVICE::DestroyCoreAllocations(
        (struct _KTHREAD **)this,
        (struct DXGRESOURCE *)j,
        *(struct DXGALLOCATION ***)(j + 24),
        v19);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v30[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  }
  *((_DWORD *)this + 116) = 4;
  v21 = WdLogNewEntry5_WdEvent(v8);
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdEvent(v21);
  v22 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v29 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v22, v23, &v29, v24) < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = 1709LL;
    WdLogEvent5_WdError(v28);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  COREACCESS::~COREACCESS((COREACCESS *)v34);
}
