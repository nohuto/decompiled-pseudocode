/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C026FEEC
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026F434 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0149C14 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(__int64 a1, struct _LUID *a2, int a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v20[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v21[72]; // [rsp+78h] [rbp-70h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v18);
  v10 = (__int64)v7;
  if ( !v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v11[3] = 0LL;
    v11[4] = a2->HighPart;
    v11[5] = a2->LowPart;
    return 3223191554LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v7, 0LL);
  v14 = COREADAPTERACCESS::AcquireShared((__int64)v19, 0xFFFFFFFFLL, v13);
  DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v10);
  if ( v14 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v10, a3);
    goto LABEL_7;
  }
  if ( v14 == -1073741130 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
    v17[3] = v10;
    v17[4] = *(int *)(v10 + 280);
    v17[5] = *(unsigned int *)(v10 + 276);
LABEL_7:
    v14 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  return (unsigned int)v14;
}
