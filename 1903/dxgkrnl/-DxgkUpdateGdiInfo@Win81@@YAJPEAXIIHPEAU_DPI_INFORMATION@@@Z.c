/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028AF0C
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C028C010 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     DxgkQueryDmmInterface @ 0x1C00CEE90 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C028B5D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, const GUID *a3, unsigned int a4, int a5)
{
  unsigned int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int updated; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  const GUID *v31; // r8
  Win81 *v33; // [rsp+30h] [rbp-A1h] BYREF
  int v34; // [rsp+38h] [rbp-99h] BYREF
  __int64 v35; // [rsp+40h] [rbp-91h]
  char v36; // [rsp+48h] [rbp-89h]
  _BYTE v37[8]; // [rsp+50h] [rbp-81h] BYREF
  _BYTE v38[64]; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v39[72]; // [rsp+98h] [rbp-39h] BYREF

  v34 = -1;
  v35 = 0LL;
  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v36 = 1;
    v34 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v34, 2172LL);
  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, this, 0LL);
    v16 = COREADAPTERACCESS::AcquireShared((__int64)v37, 0xFFFFFFFFLL, v15);
    v20 = v16;
    if ( v16 >= 0 )
    {
      v33 = 0LL;
      v26 = DxgkQueryDmmInterface(this, v17, &v33);
      v20 = v26;
      if ( v26 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v33, this, (void *const)(unsigned int)v8, v6, a4, a5, v33);
        goto LABEL_13;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v29);
      v25[3] = v20;
      v25[4] = this;
      v25[5] = v8;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
      v21[3] = v20;
      CurrentProcess = PsGetCurrentProcess(v23, v22);
      v21[5] = this;
      v25 = v21;
      v21[4] = CurrentProcess;
    }
    WdLogEvent5_WdError(v25);
    updated = v20;
LABEL_13:
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    goto LABEL_14;
  }
  v12 = WdLogNewEntry5_WdError(v10, v9, v11);
  updated = -1073741811;
  *(_QWORD *)(v12 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v12);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34, v14);
  if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v30, &EventProfilerExit, v31, v34);
  return updated;
}
