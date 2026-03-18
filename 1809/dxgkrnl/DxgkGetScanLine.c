/*
 * XREFs of DxgkGetScanLine @ 0x1C01D4A70
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C0112E10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0126AEC (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C01CBD88 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C022EA38 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C0246334 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rax
  int ScanLine; // ebx
  _OWORD *v8; // rax
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  REMOTE_VSYNC *v20; // rcx
  __int64 v21; // rsi
  int PairingAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  struct DXGADAPTER *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  const GUID *v39; // r8
  unsigned __int8 IsVSyncAvailable; // al
  const GUID *v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // edx
  UINT v45; // ecx
  __int64 v46; // rdx
  _QWORD *v47; // rax
  ADAPTER_DISPLAY *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  _BYTE *v51; // rdx
  _DWORD *v52; // rdx
  __int64 v53; // rcx
  const GUID *v54; // r8
  int v55; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v56; // [rsp+38h] [rbp-D0h]
  char v57; // [rsp+40h] [rbp-C8h]
  struct DXGADAPTER *v58; // [rsp+48h] [rbp-C0h] BYREF
  DXGADAPTER *v59; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v60[4]; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v62[80]; // [rsp+80h] [rbp-88h] BYREF
  _DXGKARG_GETSCANLINE v63; // [rsp+D0h] [rbp-38h] BYREF

  v55 = -1;
  v56 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v57 = 1;
    v55 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2034);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    ScanLine = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_42:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
    if ( v57 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, v55);
    }
    return (unsigned int)ScanLine;
  }
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v60 = *v8;
  *(_QWORD *)&v63.VidPnTargetId = 0LL;
  v63.ScanLine = 0;
  if ( v60[0]
    || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v59, v60[0], (struct _KTHREAD **)Current, &v58, 1);
    v14 = v58;
    if ( !v58 )
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v15 + 24) = v60[0];
      ScanLine = -1073741811;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v15);
      goto LABEL_40;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
    {
      if ( *((_BYTE *)v14 + 185)
        && ((v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16) + 77)) == 0LL
          ? (SessionDataForSpecifiedSession = 0LL)
          : (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16),
             SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v17,
                                                CurrentProcessSessionId)),
            *((_DWORD *)SessionDataForSpecifiedSession + 4690)) )
      {
        v20 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v16) + 720);
      }
      else
      {
        v20 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v16) + 656);
      }
      ScanLine = REMOTE_VSYNC::GetScanLine(v20, &v63);
LABEL_60:
      if ( v59 )
        DXGADAPTER::ReleaseReference(v59);
      goto LABEL_62;
    }
    v21 = v60[1];
    PairingAdapters = DxgkpGetPairingAdapters(v14, v60[1], 0LL, 0LL, &v58, &v61);
    v25 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23);
      v26[3] = v14;
      v26[4] = v21;
      v26[5] = v25;
      WdLogEvent5_WdEvent(v26);
LABEL_25:
      if ( v59 )
        DXGADAPTER::ReleaseReference(v59);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
      if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v27, &EventProfilerExit, v28, v55);
      return (unsigned int)v25;
    }
    v30 = v58;
    if ( !v58 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v24);
      *(_QWORD *)(v31 + 24) = 6809LL;
      WdLogEvent5_WdAssertion(v31);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v30, 0LL);
    DXGADAPTER::ReleaseReference(v30);
    LODWORD(v25) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62);
    if ( (int)v25 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      goto LABEL_25;
    }
    v35 = *((_QWORD *)v30 + 315);
    if ( !v35 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v36 + 24) = 6823LL;
      WdLogEvent5_WdAssertion(v36);
      v35 = *((_QWORD *)v30 + 315);
    }
    if ( (unsigned int)v21 >= *(_DWORD *)(v35 + 80) )
    {
      v37 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v37 + 24) = v21;
      ScanLine = -1073741811;
      *(_QWORD *)(v37 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v37);
LABEL_39:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
LABEL_40:
      if ( v59 )
        DXGADAPTER::ReleaseReference(v59);
      goto LABEL_42;
    }
    IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v30, v21);
    v42 = *((_QWORD *)v30 + 315);
    if ( !IsVSyncAvailable )
    {
      v43 = *(_QWORD *)(v42 + 112);
      v44 = *(_DWORD *)(v43 + 3760 * v21 + 1076) + 20;
      v63.InVerticalBlank = v44 > *(_DWORD *)(v43 + 3760 * v21 + 1016);
      v45 = 0;
      if ( !v63.InVerticalBlank )
        v45 = v44;
      *(_DWORD *)(*(_QWORD *)(v42 + 112) + 3760 * v21 + 1076) = v45;
      v63.ScanLine = v45;
      ScanLine = 0;
      goto LABEL_59;
    }
    v46 = *(unsigned int *)(3760 * v21 + *(_QWORD *)(v42 + 112) + 1068);
    v63.VidPnTargetId = v46;
    if ( (_DWORD)v46 == -1 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdEvent(3760 * v21, v46);
      v47[3] = v21;
      v47[4] = v60[0];
      ScanLine = -1071774912;
      v47[5] = -1071774912LL;
      WdLogEvent5_WdEvent(v47);
      goto LABEL_39;
    }
    v48 = (ADAPTER_DISPLAY *)*((_QWORD *)v30 + 315);
    if ( !*((_QWORD *)v30 + 316) )
    {
      v49 = *((_QWORD *)v48 + 33);
      if ( !v49 )
      {
        ScanLine = -1073741811;
LABEL_59:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
        goto LABEL_60;
      }
      if ( !*(_BYTE *)(v49 + 96) )
      {
        BLTQUEUE::GetScanLineEmulation(
          (BLTQUEUE *)(*(_QWORD *)(v49 + 8) + 2704 * v21),
          &v63.ScanLine,
          &v63.InVerticalBlank);
        v50 = 0;
        goto LABEL_58;
      }
      v48 = *(ADAPTER_DISPLAY **)(v49 + 88);
    }
    v50 = ADAPTER_DISPLAY::DdiGetScanLine(v48, &v63, v41);
LABEL_58:
    ScanLine = v50;
    goto LABEL_59;
  }
  Global = DXGGLOBAL::GetGlobal(v9);
  ScanLine = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 656), &v63);
LABEL_62:
  if ( ScanLine < 0 )
    goto LABEL_42;
  v51 = (_BYTE *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v51 = (_BYTE *)MmUserProbeAddress;
  *v51 = v63.InVerticalBlank;
  v52 = (_DWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v52 = (_DWORD *)MmUserProbeAddress;
  *v52 = v63.ScanLine;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v53, &EventProfilerExit, v54, v55);
  return 0LL;
}
