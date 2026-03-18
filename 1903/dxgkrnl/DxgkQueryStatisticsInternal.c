/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1C02045C8
 * Callers:
 *     DxgkQueryStatistics @ 0x1C02045B0 (DxgkQueryStatistics.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221F70 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0018978 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101050 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C013C150 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C01ECC3C (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C01ECDE4 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C01ECE74 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01ECF00 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C02011AC (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C0225DD0 (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(__int64 a1, char a2, const GUID *a3)
{
  char v3; // r14
  ULONG64 v4; // rsi
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  DXGADAPTER *v18; // r12
  struct DXGPROCESS *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // r8
  __int64 v34; // rax
  DXGADAPTER *v35; // rsi
  __int64 v36; // rax
  int Statistics; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  int ProcessStatistics; // eax
  int AdapterPerfData; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int AdapterPerfDataCaps; // eax
  int NodePerfData; // eax
  int v54; // eax
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  _OWORD *v60; // rcx
  _OWORD *v61; // rax
  _OWORD *v62; // rcx
  _OWORD *v63; // rax
  __int64 v64; // rcx
  const GUID *v65; // r8
  DXGADAPTER *v68; // [rsp+48h] [rbp-400h] BYREF
  int v69; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 v70; // [rsp+58h] [rbp-3F0h]
  char v71; // [rsp+60h] [rbp-3E8h]
  ULONG64 v72; // [rsp+68h] [rbp-3E0h]
  _BYTE v73[8]; // [rsp+70h] [rbp-3D8h] BYREF
  DXGADAPTER *v74; // [rsp+78h] [rbp-3D0h]
  char v75; // [rsp+80h] [rbp-3C8h]
  unsigned __int64 v76; // [rsp+88h] [rbp-3C0h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-3B8h] BYREF
  _BYTE v78[808]; // [rsp+A0h] [rbp-3A8h] BYREF
  _BYTE v79[80]; // [rsp+3D0h] [rbp-78h] BYREF

  v3 = a2;
  v4 = a1;
  v72 = a1;
  v69 = -1;
  v70 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v71 = 1;
    v69 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2049);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v69, 2049LL);
  memset(v78, 0, sizeof(v78));
  if ( v3 )
  {
    v5 = (_OWORD *)v4;
    if ( v4 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = v78;
    v7 = 6LL;
    v8 = 6LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *v6 = *v5;
    v6[1] = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v9 = (_OWORD *)v4;
    v10 = v78;
    v7 = 6LL;
    v11 = 6LL;
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      *(v10 - 1) = v9[7];
      v9 += 8;
      --v11;
    }
    while ( v11 );
    *v10 = *v9;
    v10[1] = v9[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v9 + 4);
  }
  memset(&v78[24], 0, 0x308uLL);
  Global = DXGGLOBAL::GetGlobal(v13, v12);
  v18 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v78[4], &v76);
  if ( v18 )
  {
    v19 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v79, *(void **)&v78[16], 1024);
    if ( *(_QWORD *)&v78[16] )
    {
      LOBYTE(v20) = 1;
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v79, v20) < 0 )
      {
        v29 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v29 + 24) = *(_QWORD *)&v78[16];
        WdLogEvent5_WdWarning(v29);
        goto LABEL_21;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v79, v22);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent(v21, v20);
    }
    v19 = Process;
LABEL_21:
    if ( !v19 )
    {
      v58 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      *(_QWORD *)(v58 + 24) = 5396LL;
      WdLogEvent5_WdWarning(v58);
      LODWORD(v32) = -1073741811;
LABEL_63:
      DXGADAPTER::ReleaseReferenceNoTracking(v18);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v79);
      v3 = a2;
      goto LABEL_66;
    }
    v68 = 0LL;
    LODWORD(v32) = DxgkpGetPairingAdapters(v18, 0LL, &v68, &v77, 0LL, 0LL, 0);
    if ( (int)v32 < 0 )
    {
      v34 = WdLogNewEntry5_WdError(v31, v30, v33);
      *(_QWORD *)(v34 + 24) = v18;
      WdLogEvent5_WdError(v34);
      v35 = v68;
LABEL_60:
      if ( v35 )
        DXGADAPTER::ReleaseReferenceNoTracking(v35);
      v4 = v72;
      goto LABEL_63;
    }
    v35 = v68;
    if ( !v68 )
    {
      v36 = WdLogNewEntry5_WdError(v31, v30, v33);
      *(_QWORD *)(v36 + 24) = v18;
      v32 = -1073741637LL;
      goto LABEL_29;
    }
    if ( *((_BYTE *)v68 + 185) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v68 + 4144),
                     (struct _D3DKMT_QUERYSTATISTICS *)v78,
                     v19);
      v32 = Statistics;
      if ( Statistics >= 0 )
        goto LABEL_60;
      v36 = WdLogNewEntry5_WdError(v39, v38, v40);
      *(_QWORD *)(v36 + 24) = v35;
LABEL_29:
      *(_QWORD *)(v36 + 32) = v32;
      WdLogEvent5_WdError(v36);
      goto LABEL_60;
    }
    v74 = v68;
    v75 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    v43 = *((_DWORD *)v35 + 44);
    v35 = v68;
    if ( v43 != 1 )
    {
LABEL_58:
      if ( v75 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
      goto LABEL_60;
    }
    v44 = *((_QWORD *)v68 + 320);
    if ( !*(_QWORD *)(v44 + 544) )
    {
      v45 = WdLogNewEntry5_WdAssertion(v44, v41);
      *(_QWORD *)(v45 + 24) = 5278LL;
      WdLogEvent5_WdAssertion(v45);
      v44 = *((_QWORD *)v35 + 320);
    }
    if ( !*(_QWORD *)(v44 + 520) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v44, v41);
      *(_QWORD *)(v46 + 24) = 5279LL;
      WdLogEvent5_WdAssertion(v46);
    }
    switch ( *(_DWORD *)v78 )
    {
      case 0:
        LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 320)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 288LL))(
                         *(_QWORD *)(*((_QWORD *)v35 + 320) + 552LL),
                         &v78[24]);
        if ( (int)v32 < 0 )
          goto LABEL_58;
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 320)
                                                                                               + 520LL)
                                                                                   + 8LL)
                                                                       + 688LL))(
                              *(_QWORD *)(*((_QWORD *)v35 + 320) + 528LL),
                              &v78[24]);
        goto LABEL_57;
      case 3:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 320) + 544LL)
                                                                                           + 8LL)
                                                                               + 312LL))(
                              *(_QWORD *)(*((_QWORD *)v35 + 320) + 552LL),
                              *(unsigned int *)&v78[800],
                              &v78[24]);
        goto LABEL_57;
      case 5:
        v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 320) + 520LL)
                                                                             + 8LL)
                                                                 + 696LL))(
                *(_QWORD *)(*((_QWORD *)v35 + 320) + 528LL),
                *(unsigned int *)&v78[800],
                &v78[24]);
        v32 = v54;
        if ( v54 < 0 )
          goto LABEL_48;
        if ( *((int *)v35 + 613) < 2400 )
          goto LABEL_58;
        v56 = *(_DWORD *)&v78[800] % (unsigned int)**((unsigned __int16 **)v35 + 305);
        *(_DWORD *)&v78[572] = *(_DWORD *)&v78[800] / (unsigned int)**((unsigned __int16 **)v35 + 305);
        *(_DWORD *)&v78[568] = v56;
        NodePerfData = DXGADAPTER::GetNodePerfData(v35, (struct _D3DKMT_NODE_PERFDATA *)&v78[568], v51);
        break;
      case 7:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v35 + 320) + 520LL)
                                                                                           + 8LL)
                                                                               + 704LL))(
                              *(_QWORD *)(*((_QWORD *)v35 + 320) + 528LL),
                              *(unsigned int *)&v78[800],
                              &v78[24]);
        goto LABEL_57;
      case 0xA:
        if ( *((int *)v35 + 613) < 2400 )
        {
          LODWORD(v32) = -1073741822;
          goto LABEL_58;
        }
        *(_DWORD *)&v78[24] = *(_DWORD *)&v78[800];
        AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v35, (struct _D3DKMT_ADAPTER_PERFDATA *)&v78[24], v42);
        v32 = AdapterPerfData;
        if ( AdapterPerfData < 0
          || (*(_DWORD *)&v78[88] = *(_DWORD *)&v78[800],
              AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                      v35,
                                      (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v78[88],
                                      v51),
              v32 = AdapterPerfDataCaps,
              AdapterPerfDataCaps < 0) )
        {
LABEL_48:
          v55 = WdLogNewEntry5_WdWarning(v50, v49, v51);
          *(_QWORD *)(v55 + 24) = v32;
          WdLogEvent5_WdWarning(v55);
          goto LABEL_58;
        }
        *(_DWORD *)&v78[128] = *(_DWORD *)&v78[800];
        NodePerfData = DXGADAPTER::GetGpuVersion(v35, (struct _D3DKMT_GPUVERSION *)&v78[128], v51);
        break;
      default:
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)v78, v35, v19);
LABEL_57:
        LODWORD(v32) = ProcessStatistics;
        goto LABEL_58;
    }
    v32 = NodePerfData;
    if ( NodePerfData >= 0 )
      goto LABEL_58;
    goto LABEL_48;
  }
  v59 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v59 + 24) = *(unsigned int *)&v78[4];
  *(_QWORD *)(v59 + 32) = *(int *)&v78[8];
  WdLogEvent5_WdWarning(v59);
  LODWORD(v32) = -1073741811;
LABEL_66:
  if ( (int)v32 >= 0 )
  {
    if ( v3 )
    {
      v60 = (_OWORD *)(v4 + 24);
      v57 = v4 + 800;
      if ( v4 + 800 > MmUserProbeAddress || v57 <= (unsigned __int64)v60 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v61 = &v78[24];
      do
      {
        *v60 = *v61;
        v60[1] = v61[1];
        v60[2] = v61[2];
        v60[3] = v61[3];
        v60[4] = v61[4];
        v60[5] = v61[5];
        v60[6] = v61[6];
        v60 += 8;
        *(v60 - 1) = v61[7];
        v61 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v60 = *(_QWORD *)v61;
    }
    else
    {
      v62 = (_OWORD *)(v4 + 24);
      v63 = &v78[24];
      do
      {
        *v62 = *v63;
        v62[1] = v63[1];
        v62[2] = v63[2];
        v62[3] = v63[3];
        v62[4] = v63[4];
        v62[5] = v63[5];
        v62[6] = v63[6];
        v62 += 8;
        *(v62 - 1) = v63[7];
        v63 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v62 = *(_QWORD *)v63;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v57);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v64, &EventProfilerExit, v65, v69);
  return (unsigned int)v32;
}
