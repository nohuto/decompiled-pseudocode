/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C01D50C0
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C028C3AC (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     MonitorGetUsageClass @ 0x1C00CE230 (MonitorGetUsageClass.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C0137574 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, unsigned int a2, char a3, char a4, bool *a5)
{
  bool *v5; // r14
  __int64 v7; // r15
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 UsageClass; // rdi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rax
  int IsMonitorConnected; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int MonitorHandle; // eax
  __int64 v31; // rbx
  __int64 v32; // r9
  __int64 v33; // rcx
  int v34; // [rsp+38h] [rbp-31h] BYREF
  __int64 v35; // [rsp+40h] [rbp-29h] BYREF
  char v36[8]; // [rsp+48h] [rbp-21h] BYREF
  char v37[32]; // [rsp+50h] [rbp-19h] BYREF
  char v38[40]; // [rsp+70h] [rbp+7h] BYREF
  LONG HighPart; // [rsp+CCh] [rbp+63h]

  HighPart = a1.HighPart;
  v5 = a5;
  v7 = a2;
  if ( !a5 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdError)(a1);
    *(_QWORD *)(v10 + 24) = 8305LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&a5);
  v15 = v13;
  if ( !v13 )
  {
    v10 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v10 + 24) = HighPart;
    *(_QWORD *)(v10 + 32) = a1.LowPart;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v13) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v17 + 24) = 8326LL;
    WdLogEvent5_WdAssertion(v17);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v15, 0LL);
  DXGADAPTER::ReleaseReference(v15);
  if ( *((_QWORD *)v15 + 315) )
  {
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
    UsageClass = v21;
    if ( v21 >= 0 )
    {
      if ( *((_BYTE *)v15 + 2429) )
      {
        v26 = WdLogNewEntry5_WdEvent(v23, v22);
        *(_QWORD *)(v26 + 24) = HighPart;
        *(_QWORD *)(v26 + 32) = a1.LowPart;
        WdLogEvent5_WdEvent(v26);
        LODWORD(UsageClass) = -1073741130;
        goto LABEL_23;
      }
      LOBYTE(v24) = a3;
      IsMonitorConnected = MonitorIsMonitorConnected(v15, (unsigned int)v7, v24, v5);
      UsageClass = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
        goto LABEL_18;
      if ( !*v5 || a4 )
        goto LABEL_23;
      v35 = 0LL;
      LOBYTE(v29) = a3;
      MonitorHandle = MonitorGetMonitorHandle(v15, (unsigned int)v7, v29, DxgkIsMonitorConnected, &v35);
      UsageClass = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v31 = v35;
        v34 = 0;
        LOBYTE(a5) = 0;
        UsageClass = (int)MonitorGetUsageClass((struct HDXGMONITOR__ *)v35, &v34, &a5);
        MonitorReleaseMonitorHandle(v15, v31, DxgkIsMonitorConnected, v32);
        if ( (int)UsageClass >= 0 )
        {
          *v5 = v34 == 0;
          goto LABEL_23;
        }
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v33);
        v25[3] = v31;
        v25[4] = UsageClass;
      }
      else
      {
LABEL_18:
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v28);
        v25[3] = v7;
        v25[4] = HighPart;
        v25[5] = a1.LowPart;
        v25[6] = UsageClass;
      }
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v25[3] = HighPart;
      v25[4] = a1.LowPart;
      v25[5] = UsageClass;
    }
    WdLogEvent5_WdError(v25);
    goto LABEL_23;
  }
  v19 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v19 + 24) = HighPart;
  *(_QWORD *)(v19 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v19);
  LODWORD(UsageClass) = -1073741811;
LABEL_23:
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  return (unsigned int)UsageClass;
}
