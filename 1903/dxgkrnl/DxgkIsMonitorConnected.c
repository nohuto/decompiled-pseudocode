/*
 * XREFs of DxgkIsMonitorConnected @ 0x1C0202E80
 * Callers:
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4C3C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     MonitorGetUsageClass @ 0x1C00D067C (MonitorGetUsageClass.c)
 *     MonitorGetMonitorHandle @ 0x1C00E8044 (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E86A4 (MonitorReleaseMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C012865C (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  __int64 v6; // r15
  char v7; // r13
  __int64 v9; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  DXGADAPTER *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 UsageClass; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rax
  int IsMonitorConnected; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int MonitorHandle; // eax
  __int64 HighPart; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // [rsp+38h] [rbp-91h] BYREF
  struct _LUID v42; // [rsp+40h] [rbp-89h] BYREF
  unsigned __int64 v43[2]; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v44[8]; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v45[64]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v46[72]; // [rsp+A0h] [rbp-29h] BYREF

  v6 = (unsigned int)a2;
  v7 = a3;
  v42 = a1;
  if ( !a5 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdError)(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = 9017LL;
LABEL_3:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, v43);
  v16 = v12;
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v9 + 24) = v42.HighPart;
    *(_QWORD *)(v9 + 32) = a1.LowPart;
    goto LABEL_3;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v12) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v19 + 24) = 9038LL;
    WdLogEvent5_WdAssertion(v19);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v16, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v16);
  if ( *((_QWORD *)v16 + 319) )
  {
    v25 = COREADAPTERACCESS::AcquireShared((__int64)v44, 0xFFFFFFFFLL, 0LL);
    UsageClass = v25;
    if ( v25 >= 0 )
    {
      if ( *((_BYTE *)v16 + 2465) )
      {
        v30 = WdLogNewEntry5_WdEvent(v27);
        *(_QWORD *)(v30 + 24) = v42.HighPart;
        *(_QWORD *)(v30 + 32) = a1.LowPart;
        WdLogEvent5_WdEvent(v30);
        LODWORD(UsageClass) = -1073741130;
        goto LABEL_23;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(v16, (unsigned int)v6, v7, a5);
      UsageClass = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
        goto LABEL_18;
      if ( !*a5 || a4 )
        goto LABEL_23;
      v43[0] = 0LL;
      MonitorHandle = MonitorGetMonitorHandle(v16, (unsigned int)v6, v7, DxgkIsMonitorConnected, v43);
      UsageClass = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v37 = v43[0];
        v42.LowPart = 0;
        LOBYTE(v41) = 0;
        UsageClass = (int)MonitorGetUsageClass((struct HDXGMONITOR__ *)v43[0], &v42, &v41);
        MonitorReleaseMonitorHandle(v16, v37, DxgkIsMonitorConnected);
        if ( (int)UsageClass >= 0 )
        {
          *a5 = v42.LowPart == 0;
          goto LABEL_23;
        }
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38, v40);
        v29[3] = v37;
        v29[4] = UsageClass;
      }
      else
      {
LABEL_18:
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
        HighPart = v42.HighPart;
        v29[3] = v6;
        v29[4] = HighPart;
        v29[5] = a1.LowPart;
        v29[6] = UsageClass;
      }
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      v29[3] = v42.HighPart;
      v29[4] = a1.LowPart;
      v29[5] = UsageClass;
    }
    WdLogEvent5_WdError(v29);
    goto LABEL_23;
  }
  v23 = WdLogNewEntry5_WdError(v21, v20, v22);
  *(_QWORD *)(v23 + 24) = v42.HighPart;
  *(_QWORD *)(v23 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v23);
  LODWORD(UsageClass) = -1073741811;
LABEL_23:
  COREACCESS::~COREACCESS((COREACCESS *)v46);
  COREACCESS::~COREACCESS((COREACCESS *)v45);
  return (unsigned int)UsageClass;
}
