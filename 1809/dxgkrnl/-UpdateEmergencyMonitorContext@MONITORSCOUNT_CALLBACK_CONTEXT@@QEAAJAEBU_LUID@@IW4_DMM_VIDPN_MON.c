/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C023B6DC
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BD310 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(__int64 a1, struct _LUID *a2, int a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _QWORD *v13; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  unsigned __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v22[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v24[40]; // [rsp+58h] [rbp-30h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v21);
  v12 = (__int64)v7;
  if ( !v7 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[3] = 0LL;
    v13[4] = a2->HighPart;
    v13[5] = a2->LowPart;
    return 3223191554LL;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v7, 0LL);
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
  if ( v15 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v12, a3);
    goto LABEL_7;
  }
  if ( v15 == -1073741130 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    v20[3] = v12;
    v20[4] = *(int *)(v12 + 280);
    v20[5] = *(unsigned int *)(v12 + 276);
LABEL_7:
    v15 = 0;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  return (unsigned int)v15;
}
