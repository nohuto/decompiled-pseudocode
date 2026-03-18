/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C012DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0003974 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000DF28 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkQueryDmmInterface @ 0x1C01269D4 (DxgkQueryDmmInterface.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C012D610 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C012F568 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C012F6B8 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02851F0 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(char *a1, struct _LUID *a2, GUID *a3, struct _DPI_INFORMATION *a4)
{
  __int64 v6; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  int v27; // eax
  int DmmInterface; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rcx
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v47; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v48; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v49; // r8
  int PlateauIndexForScaleFactor; // eax
  int v51; // r10d
  unsigned int v52; // r9d
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned __int8 v58; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v59[3]; // [rsp+31h] [rbp-CFh] BYREF
  struct _UNICODE_STRING v60; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v61; // [rsp+48h] [rbp-B8h]
  char v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63[10]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v64[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v65[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v66[72]; // [rsp+C8h] [rbp-38h] BYREF

  v61 = 0LL;
  v6 = (unsigned int)a2;
  HIDWORD(v60.Buffer) = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    HIDWORD(v60.Buffer) = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60.Buffer + 4, 2172LL);
  if ( !a1 )
  {
    v37 = WdLogNewEntry5_WdError(v9, v8, v10);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_15;
  }
  v59[0] = 0;
  v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v59, 0);
  v15 = v11;
  if ( v11 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v64, (struct DXGADAPTER *const)a1, 0LL);
    v17 = COREADAPTERACCESS::AcquireShared((__int64)v64, 0xFFFFFFFFLL, v16);
    v21 = v17;
    if ( v17 < 0 )
      goto LABEL_21;
    v58 = 0;
    IsEmergencyMonitorConnected(a1, v6, &v58);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v64);
    *(_DWORD *)&v60.Length = 0;
    if ( v58 )
    {
      *(_DWORD *)&v60.Length = dword_1C00A26DC;
    }
    else
    {
      v22 = DpiPersistence::ReadDpiFromRegistry(
              (struct _LUID *)(a1 + 276),
              (const struct _LUID *)(unsigned int)v6,
              1,
              &v60);
      v26 = v22;
      if ( v22 < 0 )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
        v43[3] = v26;
        CurrentProcess = PsGetCurrentProcess(v45, v44);
        v43[5] = a1;
        v43[4] = CurrentProcess;
        WdLogEvent5_WdWarning(v43);
      }
    }
    v27 = COREADAPTERACCESS::AcquireShared((__int64)v64, 0xFFFFFFFFLL, 0LL);
    v21 = v27;
    if ( v27 < 0 )
    {
LABEL_21:
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18, v20);
      v39[3] = v21;
      v39[4] = PsGetCurrentProcess(v41, v40);
      v42 = v39;
      v39[5] = a1;
    }
    else
    {
      *(_QWORD *)(&v60.MaximumLength + 1) = 0LL;
      DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1, v18, &v60.MaximumLength + 1);
      v21 = DmmInterface;
      if ( DmmInterface >= 0 )
      {
        LODWORD(v15) = UpdateGdiInfoForVidPnSource(
                         *(const struct _DXGDMM_INTERFACE **)(&v60.MaximumLength + 1),
                         a1,
                         v6,
                         *(int *)&v60.Length,
                         (struct _GDIINFO *)a3,
                         a4);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v64);
        if ( *((_DWORD *)a4 + 21) == 1234568 )
        {
          v47 = *((_DWORD *)a4 + 2);
          memset(v63, 0, 0x20uLL);
          QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v63);
          DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a4 + 3), (__int64)v63, v48);
          PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                         (DpiInternal *)v47,
                                         (__int64)v63,
                                         v49);
          v53 = DpiPersistence::WriteDpiToHKLMRegistry(
                  (DpiPersistence *)(a1 + 276),
                  (const struct _LUID *)(unsigned int)v6,
                  PlateauIndexForScaleFactor - v51,
                  v52);
          v15 = v53;
          if ( v53 < 0 )
          {
            v57 = WdLogNewEntry5_WdError(v55, v54, v56);
            *(_QWORD *)(v57 + 24) = v15;
            WdLogEvent5_WdError(v57);
            LODWORD(v15) = 0;
          }
        }
        goto LABEL_12;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
      v42[3] = v21;
      v42[4] = a1;
      v42[5] = v6;
    }
    WdLogEvent5_WdError(v42);
    LODWORD(v15) = v21;
LABEL_12:
    COREACCESS::~COREACCESS((COREACCESS *)v66);
    COREACCESS::~COREACCESS((COREACCESS *)v65);
    goto LABEL_13;
  }
  v38 = WdLogNewEntry5_WdError(v13, v12, v14);
  *(_QWORD *)(v38 + 24) = v15;
  WdLogEvent5_WdError(v38);
LABEL_13:
  if ( v59[0] )
    DxgkReleaseSessionModeChangeLock(v33, v32);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)((char *)&v60.Buffer + 4), v32);
  if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v34, &EventProfilerExit, v35, SHIDWORD(v60.Buffer));
  return (unsigned int)v15;
}
