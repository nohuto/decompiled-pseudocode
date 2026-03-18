/*
 * XREFs of ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0243740
 * Callers:
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C02426B0 (-DxgkEnableStablePowerState@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01ED0A8 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::EnableStablePowerState(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _BYTE v6[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v8[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v9[72]; // [rsp+88h] [rbp-60h] BYREF

  v1 = (_QWORD **)((char *)this + 448);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGGLOBAL *)((char *)this + 408), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *v1;
  while ( v2 != v1 && v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 3, v4 + 1, v4);
      if ( v5 == v4 )
      {
        LOBYTE(v4) = 1;
        break;
      }
    }
    if ( (_BYTE)v4 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v7, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v3);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v7, 1LL) >= 0 )
        DXGADAPTER::EnableStablePowerState((ADAPTER_RENDER **)v3);
      COREACCESS::~COREACCESS((COREACCESS *)v9);
      COREACCESS::~COREACCESS((COREACCESS *)v8);
    }
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
