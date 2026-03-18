/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C01FFA58
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C01C7638 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0005BF4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE608 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00EF06C (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00EF320 (OutputDuplProcessDestroyDevice.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C00F61AC (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00F7034 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C01D8500 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01FE00C (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C021EE24 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C022A510 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C0247BB4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r14d
  __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 v15; // rbx
  DXGOVERLAY *i; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DXGALLOCATION *v19; // r9
  __int64 j; // rbx
  __int64 v21; // rax
  DXGPROCESS *v22; // rcx
  const struct _WNF_STATE_NAME *v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v29[24]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v30; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v32[40]; // [rsp+80h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-9h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 1595LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = WdLogNewEntry5_WdEvent(v5, v4);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v30, *((struct DXGADAPTER *const *)this + 216), 0LL);
  if ( (*((_BYTE *)this + 1749) & 1) != 0
    && *((_QWORD *)this + 216) != v10
    && (int)COREADAPTERACCESS::AcquireExclusive(&v30, (unsigned int)(v10 + 2)) >= 0 )
  {
    v11 = 0;
    v12 = *(_QWORD *)(*((_QWORD *)this + 216) + 2520LL);
    v13 = *(_DWORD *)(v12 + 80);
    if ( v13 )
    {
      do
      {
        if ( this == ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 216) + 2520LL), v11) )
        {
          v14 = *(_QWORD *)(v12 + 264);
          v15 = 2704LL * v11;
          BLTQUEUE::Flush((BLTQUEUE *)(v15 + *(_QWORD *)(v14 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v15 + *(_QWORD *)(v14 + 8)), 0);
        }
        ++v11;
      }
      while ( v11 < v13 );
    }
  }
  if ( !a2 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 56LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 216), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 632LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 47); i != (DXGDEVICE *)((char *)this + 376) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v18 + 24) = 250LL;
        WdLogEvent5_WdAssertion(v18);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v29, (struct _KTHREAD **)this + 23);
    for ( j = *((_QWORD *)this + 7); j; j = *(_QWORD *)(j + 40) )
      DXGDEVICE::DestroyCoreAllocations(this, (struct DXGRESOURCE *)j, *(const GUID **)(j + 24), v19);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v28[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  }
  *((_DWORD *)this + 116) = 4;
  v21 = WdLogNewEntry5_WdEvent(v9, v8);
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdEvent(v21);
  v22 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v27 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v22, v23, &v27, v24) < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v26 + 24) = 1703LL;
    WdLogEvent5_WdError(v26);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
}
