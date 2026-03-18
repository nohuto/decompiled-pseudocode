/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C026FAC4
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C026E68C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002E40 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D0C6C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D98F0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DAE0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C010287C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0130420 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C0140EE0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0141040 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C027057C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C02B4848 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02C0A28 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02C65A4 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // r13
  __int64 v9; // r12
  struct DXGGLOBAL *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGADAPTER *v23; // r15
  _QWORD *v24; // rax
  unsigned int v25; // ebx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DXGGLOBAL *v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct CCD_BTL *v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned int v57; // esi
  __int64 v58; // r8
  __int64 v59; // rax
  int PathDescriptorByTarget; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rsi
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  int v70; // eax
  _QWORD *v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int8 v77[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v78; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v80[76]; // [rsp+50h] [rbp-B0h] BYREF
  int v81; // [rsp+9Ch] [rbp-64h]
  int v82; // [rsp+A0h] [rbp-60h]
  _BYTE v83[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v84[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v85[72]; // [rsp+F8h] [rbp-8h] BYREF

  v7 = a4;
  v9 = a3;
  v78 = a6;
  if ( a4 != 10 || a5 != 2 )
  {
    if ( a5 == 5 )
    {
      Global = DXGGLOBAL::GetGlobal(2LL, (__int64)a2);
      v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v79);
      v23 = v19;
      if ( v19 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v83, v19, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v23);
        v26 = COREADAPTERACCESS::AcquireShared((__int64)v83, 0xFFFFFFFFLL, 0LL);
        v15 = v26;
        if ( v26 >= 0 )
        {
          v77[0] = 0;
          if ( DmmIsTargetInClientVidPnTopology(v23, v9, v77) >= 0 && !v77[0] )
            *(_BYTE *)(a1 + 25) = 0;
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v83);
          *(_BYTE *)(a1 + 24) = 0;
          v33 = DXGGLOBAL::GetGlobal(v32, v31);
          v34 = DXGGLOBAL::IterateAdaptersWithCallback((__int64)v33, (__int64)DisplayConfigCountMonitorsCallback, a1, 4);
          v15 = v34;
          if ( v34 >= 0 )
          {
            LODWORD(v15) = 0;
          }
          else
          {
            v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
            *(_QWORD *)(v38 + 24) = v15;
            WdLogEvent5_WdWarning(v38);
          }
        }
        else
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
          v30[3] = a2->HighPart;
          v30[4] = a2->LowPart;
          v30[5] = v15;
          WdLogEvent5_WdError(v30);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v85);
        COREACCESS::~COREACCESS((COREACCESS *)v84);
        return (unsigned int)v15;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
      v25 = -1073741811;
      v24[3] = a2->HighPart;
      v24[4] = a2->LowPart;
      v24[5] = -1073741811LL;
      WdLogEvent5_WdError(v24);
      return v25;
    }
    v39 = DxgkInvalidateMonitorConnections(2uLL);
    v25 = 0;
    v41 = v39;
    if ( v39 < 0 )
    {
      v42 = WdLogNewEntry5_WdEvent(v40);
      *(_QWORD *)(v42 + 24) = v41;
      WdLogEvent5_WdEvent(v42);
    }
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v9) < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
      v46[3] = a2->HighPart;
      v46[4] = a2->LowPart;
      v46[5] = v9;
      WdLogEvent5_WdWarning(v46);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v80, 8u, 0);
    v49 = CCD_BTL::Global(v48, v47);
    v50 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v80, (struct CCD_BTL *)((char *)v49 + 8));
    v54 = v50;
    if ( v50 < 0 )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
      v71[3] = v54;
      v71[4] = a2->HighPart;
      v71[5] = a2->LowPart;
      v71[6] = v9;
      v71[7] = v7;
      WdLogEvent5_WdError(v71);
      DxgkLogCodePointPacket(0x3Du, v54, 0, 0, (__int64)*a2);
      goto LABEL_36;
    }
    v57 = *((_DWORD *)DXGGLOBAL::GetGlobal(v52, v51) + 370);
    if ( v57 > 1 )
    {
      v59 = WdLogNewEntry5_WdWarning(v56, v55, v58);
      *(_QWORD *)(v59 + 24) = 3147LL;
      WdLogEvent5_WdWarning(v59);
      v78 = 0LL;
      DxgkLogCodePointPacket(0x52u, v57, 0, 0, 0LL);
LABEL_41:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v80);
      return v25;
    }
    if ( *(_DWORD *)(a1 + 20) != -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v80, a2, v9, 0LL);
      v64 = PathDescriptorByTarget;
      if ( PathDescriptorByTarget == -1073741275 )
      {
        v81 = 1;
        v82 = 4;
        v65 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v80, 0, 0);
        v64 = v65;
        if ( v65 >= 0 )
        {
          v70 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v80, 0LL);
          v64 = v70;
          if ( v70 >= 0 )
          {
            *(_DWORD *)(a1 + 32) |= 0x20u;
            *(_BYTE *)(a1 + 25) = 0;
            *(_BYTE *)(a1 + 30) = 0;
            goto LABEL_36;
          }
        }
        v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
      }
      else
      {
        if ( PathDescriptorByTarget >= 0 )
          goto LABEL_36;
        v69 = WdLogNewEntry5_WdWarning(v62, v61, v63);
        *(_QWORD *)(v69 + 32) = v9;
      }
      *(_QWORD *)(v69 + 24) = v64;
      WdLogEvent5_WdWarning(v69);
    }
LABEL_36:
    if ( *(_BYTE *)(a1 + 29) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = v9;
    }
    v72 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, v78);
    v74 = v72;
    if ( v72 < 0 )
    {
      v75 = WdLogNewEntry5_WdEvent(v73);
      *(_QWORD *)(v75 + 24) = v74;
      WdLogEvent5_WdEvent(v75);
      LODWORD(v74) = 0;
    }
    v76 = WdLogNewEntry5_WdEvent(v73);
    *(_QWORD *)(v76 + 24) = (int)v74;
    WdLogEvent5_WdEvent(v76);
    v25 = v74;
    goto LABEL_41;
  }
  *(_BYTE *)(a1 + 24) = 0;
  v10 = DXGGLOBAL::GetGlobal(2LL, (__int64)a2);
  v11 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v10,
          (__int64)DisplayConfigCountMonitorsCallback,
          a1,
          (int)v7 - 6);
  v15 = v11;
  if ( v11 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v15;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v15;
  }
  *(_BYTE *)(a1 + 25) = 1;
  return 0LL;
}
