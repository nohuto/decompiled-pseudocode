/*
 * XREFs of ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C02009A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C0034278 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessPowerPStateWork(DXGADAPTER *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  const GUID *v4; // r8
  _BYTE v5[8]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v6[64]; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v7[72]; // [rsp+68h] [rbp-60h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v5, this, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((__int64)v5, 0xFFFFFFFFLL, v2) >= 0 )
    DXGADAPTER::ProcessPStateTransitionRequest(this, v3, v4);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  COREACCESS::~COREACCESS((COREACCESS *)v7);
  COREACCESS::~COREACCESS((COREACCESS *)v6);
}
