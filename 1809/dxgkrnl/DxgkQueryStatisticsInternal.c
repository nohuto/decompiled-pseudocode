/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1C01D6738
 * Callers:
 *     DxgkQueryStatistics @ 0x1C01D6720 (DxgkQueryStatistics.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F2290 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0017E94 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C012FD70 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C01BD64C (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C01BD7F4 (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C01BD884 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01BD910 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C01D3F38 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C01F5DAC (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C0228440 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(__int64 a1, char a2, const GUID *a3)
{
  char v3; // r14
  ULONG64 v4; // rsi
  _OWORD *v5; // rax
  int *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rdx
  _OWORD *v9; // rax
  int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGADAPTER *v17; // r12
  struct DXGPROCESS *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  DXGADAPTER *v30; // rsi
  __int64 v31; // rax
  int Statistics; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  int ProcessStatistics; // eax
  DXGADAPTER *v39; // rcx
  __int64 v40; // r8
  int AdapterPerfData; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int AdapterPerfDataCaps; // eax
  int NodePerfData; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rax
  _OWORD *v53; // rcx
  _OWORD *v54; // rax
  _OWORD *v55; // rcx
  _OWORD *v56; // rax
  __int64 v57; // rcx
  const GUID *v58; // r8
  DXGADAPTER *v61; // [rsp+38h] [rbp-400h] BYREF
  int v62; // [rsp+40h] [rbp-3F8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-3F0h]
  char v64; // [rsp+50h] [rbp-3E8h]
  ULONG64 v65; // [rsp+58h] [rbp-3E0h]
  _BYTE v66[8]; // [rsp+60h] [rbp-3D8h] BYREF
  DXGADAPTER *v67; // [rsp+68h] [rbp-3D0h]
  char v68; // [rsp+70h] [rbp-3C8h]
  unsigned __int64 v69; // [rsp+78h] [rbp-3C0h] BYREF
  unsigned __int64 v70; // [rsp+80h] [rbp-3B8h] BYREF
  int v71; // [rsp+90h] [rbp-3A8h] BYREF
  struct _LUID v72; // [rsp+94h] [rbp-3A4h]
  void *v73; // [rsp+A0h] [rbp-398h]
  _BYTE v74[776]; // [rsp+A8h] [rbp-390h] BYREF
  unsigned int v75; // [rsp+3B0h] [rbp-88h]
  _BYTE v76[80]; // [rsp+3C0h] [rbp-78h] BYREF

  v3 = a2;
  v4 = a1;
  v65 = a1;
  v62 = -1;
  v63 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v64 = 1;
    v62 = 2049;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2049);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v62, 2049);
  if ( v3 )
  {
    v5 = (_OWORD *)v4;
    if ( v4 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = &v71;
    v7 = 6LL;
    v8 = 6LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v6 = *v5;
    *((_OWORD *)v6 + 1) = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v9 = (_OWORD *)v4;
    v10 = &v71;
    v7 = 6LL;
    v11 = 6LL;
    do
    {
      *(_OWORD *)v10 = *v9;
      *((_OWORD *)v10 + 1) = v9[1];
      *((_OWORD *)v10 + 2) = v9[2];
      *((_OWORD *)v10 + 3) = v9[3];
      *((_OWORD *)v10 + 4) = v9[4];
      *((_OWORD *)v10 + 5) = v9[5];
      *((_OWORD *)v10 + 6) = v9[6];
      v10 += 32;
      *((_OWORD *)v10 - 1) = v9[7];
      v9 += 8;
      --v11;
    }
    while ( v11 );
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v9 + 4);
  }
  memset(v74, 0, sizeof(v74));
  Global = DXGGLOBAL::GetGlobal(v12);
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v72, &v69);
  if ( v17 )
  {
    v18 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v76, v73, 1024);
    if ( v73 )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v76, 1) < 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v26 + 24) = v73;
        WdLogEvent5_WdWarning(v26);
        goto LABEL_21;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v76);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent();
    }
    v18 = Process;
LABEL_21:
    if ( !v18 )
    {
      v51 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v51 + 24) = 4998LL;
      WdLogEvent5_WdWarning(v51);
      LODWORD(v28) = -1073741811;
LABEL_63:
      DXGADAPTER::ReleaseReference(v17);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v76);
      v3 = a2;
      goto LABEL_66;
    }
    v61 = 0LL;
    LODWORD(v28) = DxgkpGetPairingAdapters(v17, 0, &v61, &v70, 0LL, 0LL);
    if ( (int)v28 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v29 + 24) = v17;
      WdLogEvent5_WdError(v29);
      v30 = v61;
LABEL_60:
      if ( v30 )
        DXGADAPTER::ReleaseReference(v30);
      v4 = v65;
      goto LABEL_63;
    }
    v30 = v61;
    if ( !v61 )
    {
      v31 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v31 + 24) = v17;
      v28 = -1073741637LL;
      goto LABEL_29;
    }
    if ( *((_BYTE *)v61 + 185) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v61 + 4152),
                     (struct _D3DKMT_QUERYSTATISTICS *)&v71,
                     v18);
      v28 = Statistics;
      if ( Statistics >= 0 )
        goto LABEL_60;
      v31 = WdLogNewEntry5_WdError(v33);
      *(_QWORD *)(v31 + 24) = v30;
LABEL_29:
      *(_QWORD *)(v31 + 32) = v28;
      WdLogEvent5_WdError(v31);
      goto LABEL_60;
    }
    v67 = v61;
    v68 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
    v34 = *((_DWORD *)v30 + 44);
    v30 = v61;
    if ( v34 != 1 )
    {
LABEL_58:
      if ( v68 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
      goto LABEL_60;
    }
    v35 = *((_QWORD *)v61 + 316);
    if ( !*(_QWORD *)(v35 + 544) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v36 + 24) = 4880LL;
      WdLogEvent5_WdAssertion(v36);
      v35 = *((_QWORD *)v30 + 316);
    }
    if ( !*(_QWORD *)(v35 + 520) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v37 + 24) = 4881LL;
      WdLogEvent5_WdAssertion(v37);
    }
    switch ( v71 )
    {
      case 0:
        LODWORD(v28) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 316)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 288LL))(
                         *(_QWORD *)(*((_QWORD *)v30 + 316) + 552LL),
                         v74);
        if ( (int)v28 < 0 )
          goto LABEL_58;
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 316)
                                                                                               + 520LL)
                                                                                   + 8LL)
                                                                       + 688LL))(
                              *(_QWORD *)(*((_QWORD *)v30 + 316) + 528LL),
                              v74);
        goto LABEL_57;
      case 3:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 316) + 544LL)
                                                                                           + 8LL)
                                                                               + 312LL))(
                              *(_QWORD *)(*((_QWORD *)v30 + 316) + 552LL),
                              v75,
                              v74);
        goto LABEL_57;
      case 5:
        v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 316) + 520LL)
                                                                             + 8LL)
                                                                 + 696LL))(
                *(_QWORD *)(*((_QWORD *)v30 + 316) + 528LL),
                v75,
                v74);
        v28 = v47;
        if ( v47 < 0 )
          goto LABEL_48;
        if ( (int)DXGADAPTER::GetDriverVersion(v30) < 2400 )
          goto LABEL_58;
        v50 = v75 % **((unsigned __int16 **)v30 + 302);
        *(_DWORD *)&v74[548] = v75 / **((unsigned __int16 **)v30 + 302);
        *(_DWORD *)&v74[544] = v50;
        NodePerfData = DXGADAPTER::GetNodePerfData(v30, (struct _D3DKMT_NODE_PERFDATA *)&v74[544], v49);
        break;
      case 7:
        ProcessStatistics = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v30 + 316) + 520LL)
                                                                                           + 8LL)
                                                                               + 704LL))(
                              *(_QWORD *)(*((_QWORD *)v30 + 316) + 528LL),
                              v75,
                              v74);
        goto LABEL_57;
      case 10:
        if ( (int)DXGADAPTER::GetDriverVersion(v30) < 2400 )
        {
          LODWORD(v28) = -1073741822;
          goto LABEL_58;
        }
        *(_DWORD *)v74 = v75;
        AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v39, (struct _D3DKMT_ADAPTER_PERFDATA *)v74, v40);
        v28 = AdapterPerfData;
        if ( AdapterPerfData < 0
          || (*(_DWORD *)&v74[64] = v75,
              AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                      v30,
                                      (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v74[64],
                                      v44),
              v28 = AdapterPerfDataCaps,
              AdapterPerfDataCaps < 0) )
        {
LABEL_48:
          v48 = WdLogNewEntry5_WdWarning(v43, v42, v44);
          *(_QWORD *)(v48 + 24) = v28;
          WdLogEvent5_WdWarning(v48);
          goto LABEL_58;
        }
        *(_DWORD *)&v74[104] = v75;
        NodePerfData = DXGADAPTER::GetGpuVersion(v30, (struct _D3DKMT_GPUVERSION *)&v74[104], v44);
        break;
      default:
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v71, v30, v18);
LABEL_57:
        LODWORD(v28) = ProcessStatistics;
        goto LABEL_58;
    }
    v28 = NodePerfData;
    if ( NodePerfData >= 0 )
      goto LABEL_58;
    goto LABEL_48;
  }
  v52 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v52 + 24) = v72.LowPart;
  *(_QWORD *)(v52 + 32) = v72.HighPart;
  WdLogEvent5_WdWarning(v52);
  LODWORD(v28) = -1073741811;
LABEL_66:
  if ( (int)v28 >= 0 )
  {
    if ( v3 )
    {
      v53 = (_OWORD *)(v4 + 24);
      if ( v4 + 800 > MmUserProbeAddress || v4 + 800 <= (unsigned __int64)v53 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v54 = v74;
      do
      {
        *v53 = *v54;
        v53[1] = v54[1];
        v53[2] = v54[2];
        v53[3] = v54[3];
        v53[4] = v54[4];
        v53[5] = v54[5];
        v53[6] = v54[6];
        v53 += 8;
        *(v53 - 1) = v54[7];
        v54 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v53 = *(_QWORD *)v54;
    }
    else
    {
      v55 = (_OWORD *)(v4 + 24);
      v56 = v74;
      do
      {
        *v55 = *v56;
        v55[1] = v56[1];
        v55[2] = v56[2];
        v55[3] = v56[3];
        v55[4] = v56[4];
        v55[5] = v56[5];
        v55[6] = v56[6];
        v55 += 8;
        *(v55 - 1) = v56[7];
        v56 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v55 = *(_QWORD *)v56;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, v62);
  return (unsigned int)v28;
}
