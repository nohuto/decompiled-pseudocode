/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C023AC8C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02398A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00AF410 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B3DE0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3F34 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C00BB48C (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00C6574 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00CA51C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C023B6DC (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C02885F8 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C028D138 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r13
  __int64 v8; // r12
  struct DXGGLOBAL *Global; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  DXGGLOBAL *v18; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rcx
  DXGADAPTER *v21; // r15
  _QWORD *v22; // rax
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rax
  __int64 v28; // rcx
  struct DXGGLOBAL *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  __int64 v44; // rcx
  struct CCD_BTL *v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned int v52; // r14d
  __int64 v53; // rax
  int PathDescriptorByTarget; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rsi
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  int v65; // eax
  _QWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // [rsp+38h] [rbp-99h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v74[9]; // [rsp+48h] [rbp-89h] BYREF
  int v75; // [rsp+94h] [rbp-3Dh]
  int v76; // [rsp+98h] [rbp-39h]
  _BYTE v77[8]; // [rsp+A8h] [rbp-29h] BYREF
  _BYTE v78[32]; // [rsp+B0h] [rbp-21h] BYREF
  _BYTE v79[40]; // [rsp+D0h] [rbp-1h] BYREF
  unsigned __int8 v80; // [rsp+140h] [rbp+6Fh] BYREF

  v6 = a4;
  v8 = a3;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    Global = DXGGLOBAL::GetGlobal(2LL);
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v6 - 6);
    v15 = v11;
    if ( v11 >= 0 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      return 0LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdWarning(v16);
      return (unsigned int)v15;
    }
  }
  if ( a5 != 5 )
  {
    v35 = DxgkInvalidateMonitorConnections(2uLL);
    v23 = 0;
    v38 = v35;
    if ( v35 < 0 )
    {
      v39 = WdLogNewEntry5_WdEvent(v37, v36);
      *(_QWORD *)(v39 + 24) = v38;
      WdLogEvent5_WdEvent(v39);
    }
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v8) < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
      v43[3] = a2->HighPart;
      v43[4] = a2->LowPart;
      v43[5] = v8;
      WdLogEvent5_WdWarning(v43);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v74, 8u, 0);
    v45 = CCD_BTL::Global(v44);
    v46 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v74, (struct CCD_BTL *)((char *)v45 + 8));
    v48 = v46;
    if ( v46 < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v47);
      v66[3] = v48;
      v66[4] = a2->HighPart;
      v66[5] = a2->LowPart;
      v66[6] = v8;
      v66[7] = v6;
      WdLogEvent5_WdError(v66);
      DxgkLogCodePointPacket(0x3Du, v48, 0, 0, (__int64)*a2);
      goto LABEL_35;
    }
    v52 = *((_DWORD *)DXGGLOBAL::GetGlobal(v47) + 378);
    if ( v52 > 1 )
    {
      v53 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      *(_QWORD *)(v53 + 24) = 3118LL;
      WdLogEvent5_WdWarning(v53);
      v73 = 0LL;
      DxgkLogCodePointPacket(0x52u, v52, 0, 0, 0LL);
LABEL_40:
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v74);
      return v23;
    }
    if ( *(_DWORD *)(a1 + 20) != -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v74, a2, v8, 0LL);
      v58 = PathDescriptorByTarget;
      if ( PathDescriptorByTarget == -1073741275 )
      {
        v75 = 1;
        v76 = 4;
        v59 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v74, 0, v57);
        v58 = v59;
        if ( v59 >= 0 )
        {
          v65 = CCD_TOPOLOGY::Persist(v74, 0LL, v62, v63);
          v58 = v65;
          if ( v65 >= 0 )
          {
            *(_DWORD *)(a1 + 32) |= 0x20u;
            *(_BYTE *)(a1 + 25) = 0;
            *(_BYTE *)(a1 + 30) = 0;
            goto LABEL_35;
          }
        }
        v64 = WdLogNewEntry5_WdWarning(v61, v60, v62);
      }
      else
      {
        if ( PathDescriptorByTarget >= 0 )
          goto LABEL_35;
        v64 = WdLogNewEntry5_WdWarning(v56, v55, v57);
        *(_QWORD *)(v64 + 32) = v8;
      }
      *(_QWORD *)(v64 + 24) = v58;
      WdLogEvent5_WdWarning(v64);
    }
LABEL_35:
    if ( *(_BYTE *)(a1 + 29) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = v8;
    }
    v67 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v70 = v67;
    if ( v67 < 0 )
    {
      v71 = WdLogNewEntry5_WdEvent(v69, v68);
      *(_QWORD *)(v71 + 24) = v70;
      WdLogEvent5_WdEvent(v71);
      LODWORD(v70) = 0;
    }
    v72 = WdLogNewEntry5_WdEvent(v69, v68);
    *(_QWORD *)(v72 + 24) = (int)v70;
    WdLogEvent5_WdEvent(v72);
    v23 = v70;
    goto LABEL_40;
  }
  v18 = DXGGLOBAL::GetGlobal(2LL);
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(v18, *a2, &v73);
  v21 = v19;
  if ( !v19 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v23 = -1073741811;
    v22[3] = a2->HighPart;
    v22[4] = a2->LowPart;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return v23;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, v19, 0LL);
  DXGADAPTER::ReleaseReference(v21);
  v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77);
  v26 = v24;
  if ( v24 >= 0 )
  {
    v80 = 0;
    if ( (int)DmmIsTargetInClientVidPnTopology(v21, v8, (bool *)&v80) >= 0 && !v80 )
      *(_BYTE *)(a1 + 25) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v77);
    *(_BYTE *)(a1 + 24) = 0;
    v29 = DXGGLOBAL::GetGlobal(v28);
    v30 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v29,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            4);
    v26 = v30;
    if ( v30 >= 0 )
    {
      LODWORD(v26) = 0;
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = v26;
      WdLogEvent5_WdWarning(v34);
    }
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v27[3] = a2->HighPart;
    v27[4] = a2->LowPart;
    v27[5] = v26;
    WdLogEvent5_WdError(v27);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v79);
  COREACCESS::~COREACCESS((COREACCESS *)v78);
  return (unsigned int)v26;
}
