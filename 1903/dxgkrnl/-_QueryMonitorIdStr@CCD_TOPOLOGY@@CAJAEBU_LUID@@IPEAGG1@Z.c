/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D0304
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C00D01C0 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002838 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00D0630 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetUsageClass @ 0x1C00D067C (MonitorGetUsageClass.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C00D0748 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C00E84A4 (MonitorGetCCDMonitorID.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // r14
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  VIDPN_MGR *v19; // r15
  int ConnectedMonitorHandle; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct HDXGMONITOR__ *v24; // rsi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r15
  __int64 v30; // rsi
  unsigned __int16 *v31; // r15
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _BYTE v41[2]; // [rsp+20h] [rbp-B1h] BYREF
  unsigned __int16 v42; // [rsp+22h] [rbp-AFh]
  int v43; // [rsp+24h] [rbp-ADh] BYREF
  struct HDXGMONITOR__ *v44; // [rsp+28h] [rbp-A9h] BYREF
  unsigned __int16 *v45; // [rsp+30h] [rbp-A1h]
  unsigned __int16 *v46; // [rsp+38h] [rbp-99h]
  __int64 v47; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v49[8]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v50[64]; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v51[72]; // [rsp+98h] [rbp-39h] BYREF

  v46 = a5;
  v42 = a4;
  v45 = a3;
  v6 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v48);
  v12 = v8;
  if ( !v8 )
  {
    v36 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v36 + 24) = a1->HighPart;
    *(_QWORD *)(v36 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v36);
    LODWORD(v18) = -1073741810;
    return (unsigned int)v18;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v49, v8, 0LL);
  v14 = COREADAPTERACCESS::AcquireShared((__int64)v49, 0xFFFFFFFFLL, v13);
  v18 = v14;
  if ( v14 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    v37[3] = v18;
    v37[4] = v12;
    v37[5] = a1->HighPart;
    v37[6] = a1->LowPart;
    WdLogEvent5_WdError(v37);
    goto LABEL_13;
  }
  v19 = *(VIDPN_MGR **)(*((_QWORD *)v12 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v47, (__int64)v19);
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v19, v6, &v44);
  v18 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v38[3] = v18;
    v38[5] = v12;
LABEL_21:
    v38[4] = v6;
    v38[6] = a1->HighPart;
    v38[7] = a1->LowPart;
    WdLogEvent5_WdError(v38);
    goto LABEL_12;
  }
  v43 = 0;
  v41[0] = 0;
  v24 = v44;
  MonitorGetUsageClass(v44, &v43, v41);
  if ( !v43 )
  {
    LODWORD(v18) = MonitorGetCCDMonitorID(v24, v42, v45);
    if ( (_DWORD)v18 == -2147483643 )
      LODWORD(v18) = -1073741789;
  }
  v25 = VIDPN_MGR::ReleaseMonitorHandle(v19, v24);
  v29 = v25;
  if ( v25 < 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27, v26);
    v39[3] = v29;
    v39[4] = v6;
    v39[5] = v24;
    v39[6] = a1->HighPart;
    v39[7] = a1->LowPart;
    WdLogEvent5_WdAssertion(v39);
    LODWORD(v18) = v29;
  }
  else
  {
    if ( !v43 )
    {
      if ( (int)v18 >= 0 )
      {
        v30 = v42;
        v31 = v45;
        v32 = RtlStringCchLengthW(v45, v42, (unsigned __int64 *)&v44);
        v18 = v32;
        if ( v32 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdAssertion(v34, v33);
          v40[3] = v18;
          v40[4] = v31;
          v40[5] = v30;
          v40[6] = a1->HighPart;
          v40[7] = a1->LowPart;
          WdLogEvent5_WdAssertion(v40);
        }
        else
        {
          *v46 = (unsigned __int16)v44;
        }
        goto LABEL_12;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
      v38[3] = (int)v18;
      v38[5] = v24;
      goto LABEL_21;
    }
    LODWORD(v18) = 0;
    *v46 = 0;
  }
LABEL_12:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v47 + 40));
LABEL_13:
  COREACCESS::~COREACCESS((COREACCESS *)v51);
  COREACCESS::~COREACCESS((COREACCESS *)v50);
  DXGADAPTER::ReleaseReferenceNoTracking(v12);
  return (unsigned int)v18;
}
