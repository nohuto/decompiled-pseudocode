/*
 * XREFs of ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02448A4
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A1110 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02A2A90 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F67A8 (-SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::NotifyAdapterRemoval(DXGGLOBAL *this)
{
  ADAPTER_RENDER **v1; // rsi
  ADAPTER_RENDER *v2; // rdi
  ADAPTER_RENDER **v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  __int64 v6; // rdx
  _BYTE v7[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v8[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v9[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v10[72]; // [rsp+78h] [rbp-60h] BYREF

  v1 = (ADAPTER_RENDER **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v2 = *v1;
  while ( v2 != (ADAPTER_RENDER *)v1 && v2 )
  {
    v3 = (ADAPTER_RENDER **)v2;
    v2 = *(ADAPTER_RENDER **)v2;
    _m_prefetchw(v3 + 3);
    v4 = (signed __int64)v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        LOBYTE(v4) = 1;
        break;
      }
    }
    if ( (_BYTE)v4 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v8, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v3);
      if ( v3[320] )
      {
        if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v8, 0xFFFFFFFFLL, 0LL) >= 0 )
          ADAPTER_RENDER::SignalCrossAdapterSyncObjects(v3[320], v6);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v10);
      COREACCESS::~COREACCESS((COREACCESS *)v9);
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
