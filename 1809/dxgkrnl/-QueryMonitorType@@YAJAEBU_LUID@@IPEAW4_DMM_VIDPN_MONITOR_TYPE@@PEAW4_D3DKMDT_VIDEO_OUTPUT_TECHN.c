/*
 * XREFs of ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C023B43C
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0239F8C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01222F0 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall QueryMonitorType(
        const struct _LUID *a1,
        unsigned int a2,
        enum _DMM_VIDPN_MONITOR_TYPE *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        bool *a8,
        bool *a9)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  DXGADAPTER *v15; // rdi
  int MonitorTypeLockHeld; // ebx
  unsigned __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+68h] [rbp-50h] BYREF
  _BYTE v21[40]; // [rsp+88h] [rbp-30h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v18);
  v15 = v14;
  if ( !v14 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v14, 0LL);
  MonitorTypeLockHeld = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
  DXGADAPTER::ReleaseReference(v15);
  if ( MonitorTypeLockHeld >= 0 )
    MonitorTypeLockHeld = DxgkQueryMonitorTypeLockHeld(v15, a2, a3, a4, a5, a6, (char *)a7, a8, a9);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  return (unsigned int)MonitorTypeLockHeld;
}
