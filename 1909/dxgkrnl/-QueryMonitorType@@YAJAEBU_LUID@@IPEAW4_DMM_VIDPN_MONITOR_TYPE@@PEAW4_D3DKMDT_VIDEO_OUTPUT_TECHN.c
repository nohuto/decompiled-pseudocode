/*
 * XREFs of ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C02702C4
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026EDBC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0182E30 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall QueryMonitorType(
        const struct _LUID *a1,
        __int64 a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        bool *a8,
        bool *a9)
{
  unsigned int v11; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // rdi
  __int64 v17; // r8
  int MonitorTypeLockHeld; // ebx
  unsigned __int64 v19; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v21[64]; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v22[72]; // [rsp+B8h] [rbp-A0h] BYREF

  v11 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v19);
  v15 = v14;
  if ( !v14 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v14, 0LL);
  MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((__int64)v20, 0xFFFFFFFFLL, v17);
  DXGADAPTER::ReleaseReferenceNoTracking(v15);
  if ( MonitorTypeLockHeld >= 0 )
    MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld(v15, v11, a3, a4, a5, a6, (char *)a7, a8, a9);
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  return (unsigned int)MonitorTypeLockHeld;
}
