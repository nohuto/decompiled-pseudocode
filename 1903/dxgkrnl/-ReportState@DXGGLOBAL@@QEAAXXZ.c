/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0245798
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C024204C (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CE40 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C003554C (McTemplateK0.c)
 *     McTemplateK0j @ 0x1C003DA54 (McTemplateK0j.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3E0 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C0225D38 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C026A29C (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportState(PERESOURCE *this)
{
  DXGGLOBAL *v2; // rdi
  DXGGLOBAL *v3; // rbx
  struct DXGSYNCOBJECT *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r8
  DXGGLOBAL *v10; // rdi
  DXGGLOBAL *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rcx
  __int64 v15; // rcx
  PERESOURCE v16; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[72]; // [rsp+C8h] [rbp-38h] BYREF

  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v22, this);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v22);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(this + 36), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v2 = (DXGGLOBAL *)this[41];
  while ( v2 != (DXGGLOBAL *)(this + 41) && v2 )
  {
    v3 = v2;
    v4 = v2;
    v2 = *(DXGGLOBAL **)v2;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (DXGGLOBAL *)((char *)v3 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    if ( (*((_DWORD *)v3 + 49) & 4) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)v3 + 36);
      v6 = (_QWORD *)((char *)v4 + 288);
      while ( v5 != v6 )
      {
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v6 - 40LL), v4);
        v5 = (_QWORD *)*v5;
      }
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v3 + 288), v3);
    }
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  if ( v22[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v22);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(this + 51), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v10 = (DXGGLOBAL *)this[56];
  while ( v10 != (DXGGLOBAL *)(this + 56) && v10 )
  {
    v11 = v10;
    v10 = *(DXGGLOBAL **)v10;
    _m_prefetchw((char *)v11 + 24);
    v12 = *((_QWORD *)v11 + 3);
    while ( v12 )
    {
      v8 = v12 + 1;
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 3, v12 + 1, v12);
      if ( v13 == v12 )
      {
        LOBYTE(v12) = 1;
        break;
      }
    }
    if ( (_BYTE)v12 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v25, v11, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v11);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v25, 2LL, 0LL) >= 0 )
      {
        v14 = *((_QWORD *)v11 + 320);
        if ( v14 )
          ADAPTER_RENDER::FlushScheduler(v14, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v11);
        v15 = *((_QWORD *)v11 + 320);
        if ( v15 )
          ADAPTER_RENDER::FlushScheduler(v15, 7, 0xFFFFFFFF, 0);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      COREACCESS::~COREACCESS((COREACCESS *)v26);
    }
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  v16 = this[164];
  if ( v16 && LOBYTE(v16->OwnerEntry.OwnerThread) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0(v8, &EventVGPUGuestStart, v9);
    Global = DXGGLOBAL::GetGlobal(v8, v7);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 164), &v24);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j(v18, &EventVGPUGuestEnd, v19, (__int64)&v24);
  }
}
