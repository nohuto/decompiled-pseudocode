/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0254DF0
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C0255EE0 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     DxgkQueryDmmInterface @ 0x1C00CF110 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02554D8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, const GUID *a3, unsigned int a4, int a5)
{
  unsigned int v6; // r15d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int updated; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  const GUID *v24; // r8
  struct _DPI_INFORMATION *v26[2]; // [rsp+38h] [rbp-31h] BYREF
  char v27; // [rsp+48h] [rbp-21h]
  _BYTE v28[8]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v29[32]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v30[40]; // [rsp+80h] [rbp+17h] BYREF
  Win81 *v31; // [rsp+C8h] [rbp+5Fh] BYREF

  LODWORD(v26[0]) = -1;
  v26[1] = 0LL;
  v6 = (unsigned int)a3;
  v8 = (unsigned int)a2;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    LODWORD(v26[0]) = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v26, 2172);
  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, this, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28);
    v15 = v12;
    if ( v12 >= 0 )
    {
      v31 = 0LL;
      v21 = DxgkQueryDmmInterface(this, v13, &v31);
      v15 = v21;
      if ( v21 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v31, this, (void *const)(unsigned int)v8, v6, a4, a5, v26[0]);
        goto LABEL_13;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v20[3] = v15;
      v20[4] = this;
      v20[5] = v8;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[3] = v15;
      CurrentProcess = PsGetCurrentProcess(v18, v17);
      v16[5] = this;
      v20 = v16;
      v16[4] = CurrentProcess;
    }
    WdLogEvent5_WdError(v20);
    updated = v15;
LABEL_13:
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    goto LABEL_14;
  }
  v10 = WdLogNewEntry5_WdError(v9);
  updated = -1073741811;
  *(_QWORD *)(v10 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v10);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v26);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, (int)v26[0]);
  return updated;
}
