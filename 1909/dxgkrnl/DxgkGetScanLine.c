/*
 * XREFs of DxgkGetScanLine @ 0x1C0151A40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01FAC24 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C0263844 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C027C258 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGPROCESS *v12; // rdi
  _OWORD *v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v18; // r15
  __int64 v19; // rax
  __int64 v21; // rsi
  int PairingAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  volatile signed __int64 *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  const GUID *v32; // r8
  struct DXGADAPTER *v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r15
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rdx
  _BYTE *v39; // rcx
  _DWORD *v40; // r14
  __int64 v41; // rcx
  const GUID *v42; // r8
  DXGPROCESS **ThreadProperty; // rax
  DXGPROCESS **v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v52; // rax
  DXGADAPTER *v53; // rcx
  DXGSESSIONMGR *v54; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGGLOBAL *v56; // rax
  struct DXGGLOBAL *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  const GUID *v61; // r8
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  const GUID *v74; // r8
  __int64 v75; // r8
  __int64 v76; // r10
  __int64 v77; // rcx
  unsigned int v78; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v80; // cc
  UINT v81; // ecx
  int v82; // [rsp+40h] [rbp-138h] BYREF
  __int64 v83; // [rsp+48h] [rbp-130h]
  char v84; // [rsp+50h] [rbp-128h]
  struct DXGADAPTER *v85; // [rsp+58h] [rbp-120h] BYREF
  DXGADAPTER *v86; // [rsp+60h] [rbp-118h] BYREF
  unsigned int v87[4]; // [rsp+70h] [rbp-108h]
  struct DXGADAPTER *v88; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v89; // [rsp+90h] [rbp-E8h] BYREF
  _DXGKARG_GETSCANLINE v90; // [rsp+98h] [rbp-E0h] BYREF
  char v91[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v92[16]; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-B0h]
  char v94; // [rsp+D0h] [rbp-A8h]
  int v95; // [rsp+D4h] [rbp-A4h]
  __int64 v96; // [rsp+D8h] [rbp-A0h]
  _BYTE v97[16]; // [rsp+F8h] [rbp-80h] BYREF
  __int64 v98; // [rsp+108h] [rbp-70h]

  v82 = -1;
  SessionDataForSpecifiedSession = 0LL;
  v83 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v84 = 1;
    v82 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v84 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v82, 2034LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v45 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v45;
    }
  }
  if ( !v12 )
  {
    v46 = WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(SessionDataForSpecifiedSession) = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_56;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v87 = *v13;
  *(_QWORD *)&v90.VidPnTargetId = 0LL;
  v90.ScanLine = 0;
  v14 = v87[0];
  if ( !v87[0] && DXGPROCESS::IsRemoteConnection(v12) )
  {
    Global = DXGGLOBAL::GetGlobal(v50, v49);
    LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine(
                                                (struct DXGGLOBAL *)((char *)Global + 632),
                                                &v90);
    goto LABEL_44;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v86,
    (unsigned int)v14,
    (struct _KTHREAD **)v12,
    &v88,
    1);
  v18 = v88;
  if ( !v88 )
  {
    v52 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v52 + 24) = v14;
    LODWORD(SessionDataForSpecifiedSession) = -1073741811;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    v53 = v86;
    if ( !v86 )
      goto LABEL_56;
    goto LABEL_63;
  }
  v19 = *((_QWORD *)v12 + 12);
  if ( v19 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v19 + 224))(0LL, 0LL, 0LL) )
  {
    if ( !*((_BYTE *)v18 + 185) )
      goto LABEL_70;
    v54 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 74);
    if ( v54 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v54, CurrentProcessSessionId);
    }
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4690) )
    {
      v56 = DXGGLOBAL::GetGlobal(v16, v15);
      LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)v56 + 696), &v90);
    }
    else
    {
LABEL_70:
      v57 = DXGGLOBAL::GetGlobal(v16, v15);
      LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)v57 + 632), &v90);
    }
    goto LABEL_41;
  }
  v21 = v87[1];
  PairingAdapters = DxgkpGetPairingAdapters(v18, v87[1], 0LL, 0LL, &v85, &v89, 0);
  v25 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v24);
    v58[3] = v18;
    v58[4] = v21;
    v58[5] = v25;
    WdLogEvent5_WdEvent(v58);
    if ( v86 )
      DXGADAPTER::ReleaseReferenceNoTracking(v86);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, v59);
    if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v60, &EventProfilerExit, v61, v82);
    return (unsigned int)v25;
  }
  v26 = (volatile signed __int64 *)v85;
  if ( !v85 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v62 + 24) = 7215LL;
    WdLogEvent5_WdAssertion(v62);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v91, (struct DXGADAPTER *const)v26, 0LL);
  if ( _InterlockedExchangeAdd64(v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v85 + 2), v85);
  if ( v94 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28, v27);
    v63[3] = 275LL;
    v63[4] = 4LL;
    v63[5] = v92;
    v63[6] = 0LL;
    v63[7] = 0LL;
    WdLogEvent5_WdCriticalError(v63);
  }
  v30 = v93;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v93 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v93 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v31, &EventBlockThread, v32, 72);
      KeWaitForSingleObject((PVOID)(v93 + 48), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v93, 0xFFFFFFFF, 0LL);
    v30 = v93;
  }
  v95 = -1;
  v96 = 0LL;
  v94 = 1;
  if ( *(_DWORD *)(v30 + 176) != 1 )
    goto LABEL_83;
  if ( v93 != v98 )
  {
    COREACCESS::AcquireShared((__int64)v97, 0xFFFFFFFF, 0LL);
    v30 = *(unsigned int *)(v98 + 176);
    if ( (_DWORD)v30 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v97);
LABEL_83:
      COREACCESS::Release((COREACCESS *)v92);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
      if ( v86 )
        DXGADAPTER::ReleaseReferenceNoTracking(v86);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, v64);
      if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v65, &EventProfilerExit, v66, v82);
      return 3221226166LL;
    }
  }
  v33 = v85;
  v34 = *((_QWORD *)v85 + 319);
  if ( !v34 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v30, v27);
    *(_QWORD *)(v67 + 24) = 7229LL;
    WdLogEvent5_WdAssertion(v67);
    v34 = *((_QWORD *)v33 + 319);
  }
  v35 = v87[1];
  if ( v87[1] >= *(_DWORD *)(v34 + 80) )
  {
    v68 = WdLogNewEntry5_WdWarning(v30, v27, v29);
    *(_QWORD *)(v68 + 24) = v35;
    LODWORD(SessionDataForSpecifiedSession) = -1073741811;
    *(_QWORD *)(v68 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v68);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
    v53 = v86;
    if ( !v86 )
    {
LABEL_56:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, v38);
      if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v47, &EventProfilerExit, v48, v82);
      return (unsigned int)SessionDataForSpecifiedSession;
    }
LABEL_63:
    DXGADAPTER::ReleaseReferenceNoTracking(v53);
    goto LABEL_56;
  }
  if ( !v34 )
  {
    v69 = WdLogNewEntry5_WdAssertion(v30, v27);
    *(_QWORD *)(v69 + 24) = 9139LL;
    WdLogEvent5_WdAssertion(v69);
    v34 = *((_QWORD *)v33 + 319);
  }
  if ( v34 )
  {
    v36 = 1;
  }
  else
  {
    v36 = 0;
    v34 = 0LL;
  }
  if ( !v36 )
    goto LABEL_103;
  if ( (unsigned int)v35 >= *(_DWORD *)(v34 + 80) )
  {
    v70 = WdLogNewEntry5_WdAssertion(v30, v27);
    *(_QWORD *)(v70 + 24) = 5823LL;
    WdLogEvent5_WdAssertion(v70);
  }
  if ( !*(_BYTE *)(*(_QWORD *)(v34 + 112) + 3968 * v35 + 720) )
  {
LABEL_103:
    v76 = *((_QWORD *)v33 + 319);
    v77 = *(_QWORD *)(v76 + 112);
    v78 = *(_DWORD *)(v77 + 3968 * v35 + 1076) + 20;
    InVerticalBlank = v90.InVerticalBlank;
    v80 = v78 <= *(_DWORD *)(v77 + 3968 * v35 + 1016);
    if ( v78 > *(_DWORD *)(v77 + 3968 * v35 + 1016) )
      InVerticalBlank = 1;
    v90.InVerticalBlank = InVerticalBlank;
    v81 = 0;
    if ( v80 )
      v81 = v78;
    *(_DWORD *)(3968 * v35 + *(_QWORD *)(v76 + 112) + 1076) = v81;
    v90.ScanLine = v81;
    goto LABEL_40;
  }
  v37 = *(_QWORD *)(*((_QWORD *)v33 + 319) + 112LL);
  v90.VidPnTargetId = *(_DWORD *)(v37 + 3968 * v35 + 1068);
  if ( v90.VidPnTargetId != -1 )
  {
    if ( *((_QWORD *)v33 + 320) )
    {
      LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(*((ADAPTER_DISPLAY **)v33 + 319), &v90);
    }
    else
    {
      v75 = *(_QWORD *)(*((_QWORD *)v33 + 319) + 368LL);
      if ( v75 )
      {
        if ( *(_BYTE *)(v75 + 96) )
          LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(
                                                      *(ADAPTER_DISPLAY **)(v75 + 88),
                                                      &v90);
        else
          BLTQUEUE::GetScanLineEmulation(
            (BLTQUEUE *)(*(_QWORD *)(v75 + 8) + 2760 * v35),
            &v90.ScanLine,
            &v90.InVerticalBlank);
      }
      else
      {
        LODWORD(SessionDataForSpecifiedSession) = -1073741811;
      }
    }
LABEL_40:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
LABEL_41:
    if ( v86 && _InterlockedExchangeAdd64((volatile signed __int64 *)v86 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v86 + 2), v86);
LABEL_44:
    if ( (int)SessionDataForSpecifiedSession >= 0 )
    {
      v39 = (_BYTE *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v39 = (_BYTE *)MmUserProbeAddress;
      *v39 = v90.InVerticalBlank;
      v40 = (_DWORD *)(a1 + 12);
      if ( (unsigned __int64)v40 >= MmUserProbeAddress )
        v40 = (_DWORD *)MmUserProbeAddress;
      *v40 = v90.ScanLine;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, MmUserProbeAddress);
      if ( v84 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v41, &EventProfilerExit, v42, v82);
      }
      return 0LL;
    }
    goto LABEL_56;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdEvent(v37);
  v71[3] = v35;
  v71[4] = v87[0];
  v71[5] = -1071774912LL;
  WdLogEvent5_WdEvent(v71);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91);
  if ( v86 )
    DXGADAPTER::ReleaseReferenceNoTracking(v86);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, v72);
  if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v73, &EventProfilerExit, v74, v82);
  return 3223192384LL;
}
