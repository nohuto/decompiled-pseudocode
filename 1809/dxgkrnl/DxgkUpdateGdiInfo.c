/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C00B9710
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0002824 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000E0C4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z @ 0x1C00AE7D4 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IH_NPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z @ 0x1C00AEB7C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK_N@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00B98C8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00BACE0 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00BAE38 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C00CF110 (DxgkQueryDmmInterface.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00DE760 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z @ 0x1C027C050 (-DmmIsVidPnTargetConnectedToSource@@YAJQEAXIIPEA_N@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        char *a1,
        struct _LUID *a2,
        const GUID *a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  int DpiFromRegistry; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  int v21; // eax
  int DmmInterface; // eax
  __int64 v23; // rcx
  struct _DPI_INFORMATION *v24; // rdi
  __int64 v25; // rcx
  const GUID *v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rbx
  __int64 CurrentProcess; // rax
  int IsVidPnTargetConnectedToSource; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v42; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v43; // r8
  int PlateauIndexForScaleFactor; // eax
  int v45; // r10d
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rax
  _BYTE v49[4]; // [rsp+30h] [rbp-61h] BYREF
  bool v50[4]; // [rsp+34h] [rbp-5Dh] BYREF
  int v51; // [rsp+38h] [rbp-59h] BYREF
  __int64 v52; // [rsp+40h] [rbp-51h]
  char v53; // [rsp+48h] [rbp-49h]
  unsigned int v54[8]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v55[8]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v56[32]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v57[40]; // [rsp+98h] [rbp+7h] BYREF
  struct _DXGDMM_INTERFACE *v58; // [rsp+F0h] [rbp+5Fh] BYREF

  v51 = -1;
  v52 = 0LL;
  v7 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v53 = 1;
    v51 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2172);
  if ( !a1 )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    goto LABEL_16;
  }
  v49[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v49, 0);
  v12 = v10;
  if ( v10 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, (struct DXGADAPTER *const)a1, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
    v15 = v13;
    if ( v13 < 0 )
      goto LABEL_22;
    LOBYTE(v58) = 0;
    IsEmergencyMonitorConnected(a1, v8, (unsigned __int8 *)&v58);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v55);
    *(_DWORD *)v50 = 0;
    if ( (_BYTE)v58 )
    {
      *(_DWORD *)v50 = dword_1C008E6D4;
    }
    else
    {
      DpiFromRegistry = DpiPersistence::ReadDpiFromRegistry(
                          (struct _LUID *)(a1 + 276),
                          (const struct _LUID *)(unsigned int)v8,
                          1,
                          1,
                          v50);
      v20 = DpiFromRegistry;
      if ( DpiFromRegistry < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
        v32[3] = v20;
        CurrentProcess = PsGetCurrentProcess();
        v32[5] = a1;
        v32[4] = CurrentProcess;
        WdLogEvent5_WdWarning(v32);
      }
    }
    v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
    v15 = v21;
    if ( v21 < 0 )
    {
LABEL_22:
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v30[3] = v15;
      v30[4] = PsGetCurrentProcess();
      v31 = v30;
      v30[5] = a1;
LABEL_30:
      WdLogEvent5_WdError(v31);
      goto LABEL_31;
    }
    if ( (_DWORD)v7 != -1 )
    {
      LOBYTE(v58) = 0;
      IsVidPnTargetConnectedToSource = DmmIsVidPnTargetConnectedToSource(a1, v8, v7, (bool *)&v58);
      v15 = IsVidPnTargetConnectedToSource;
      if ( IsVidPnTargetConnectedToSource < 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v39[6] = v7;
LABEL_29:
        v39[5] = v8;
        v31 = v39;
        v39[4] = a1;
        v39[3] = v15;
        goto LABEL_30;
      }
      if ( !(_BYTE)v58 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
        LODWORD(v15) = -1071774937;
        v40[3] = a1;
        v40[4] = v8;
        v40[5] = v7;
LABEL_31:
        LODWORD(v12) = v15;
LABEL_13:
        COREACCESS::~COREACCESS((COREACCESS *)v57);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        goto LABEL_14;
      }
    }
    v58 = 0LL;
    DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1);
    v15 = DmmInterface;
    if ( DmmInterface >= 0 )
    {
      v24 = a5;
      LODWORD(v12) = UpdateGdiInfoForVidPnSource(v58, a1, v8, *(int *)v50, a4, a5);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v55);
      if ( *((_DWORD *)v24 + 21) == 1234568 )
      {
        v41 = *((_DWORD *)v24 + 2);
        memset(v54, 0, sizeof(v54));
        QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v54);
        DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)v24 + 3), (__int64)v54, v42);
        PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)v41, (__int64)v54, v43);
        v46 = DpiPersistence::WriteDpiToHKLMRegistry(
                (struct _LUID *)(a1 + 276),
                (const struct _LUID *)(unsigned int)v8,
                PlateauIndexForScaleFactor - v45);
        v12 = v46;
        if ( v46 < 0 )
        {
          v48 = WdLogNewEntry5_WdError(v47);
          *(_QWORD *)(v48 + 24) = v12;
          WdLogEvent5_WdError(v48);
          LODWORD(v12) = 0;
        }
      }
      goto LABEL_13;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v23);
    goto LABEL_29;
  }
  v29 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v29 + 24) = v12;
  WdLogEvent5_WdError(v29);
LABEL_14:
  if ( v49[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v51);
  return (unsigned int)v12;
}
