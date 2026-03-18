/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C014D600
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGADAPTER *v13; // rbx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+30h] [rbp-79h] BYREF
  __int64 v28; // [rsp+38h] [rbp-71h]
  char v29; // [rsp+40h] [rbp-69h]
  struct DXGADAPTER *v30; // [rsp+48h] [rbp-61h] BYREF
  DXGADAPTER *v31; // [rsp+50h] [rbp-59h] BYREF
  __int64 v32; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v33[64]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v34[72]; // [rsp+A8h] [rbp-1h] BYREF

  v27 = -1;
  v28 = 0LL;
  v3 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2189);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 2189LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdError(v8, v7, v9);
    v19 = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_14;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, (unsigned int)v3, Current, &v30, 1);
  v13 = v30;
  if ( v30 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v32, v30, 0LL);
    v15 = COREADAPTERACCESS::AcquireExclusive(&v32, (unsigned int)(v14 + 2));
    if ( v15 != -1073741130 )
    {
      if ( v15 < 0 )
      {
LABEL_16:
        v19 = v15;
LABEL_11:
        COREACCESS::~COREACCESS((COREACCESS *)v34);
        COREACCESS::~COREACCESS((COREACCESS *)v33);
        goto LABEL_12;
      }
      v18 = *((_QWORD *)v13 + 320);
      if ( v18 )
      {
        if ( !*((_BYTE *)v13 + 185) )
          ADAPTER_RENDER::FlushScheduler(v18, 1, 0xFFFFFFFF, 0);
        v19 = 0;
        goto LABEL_11;
      }
      v26 = WdLogNewEntry5_WdWarning(0LL, v16, v17);
      *(_QWORD *)(v26 + 24) = v3;
      *(_QWORD *)(v26 + 32) = -1073741637LL;
      WdLogEvent5_WdWarning(v26);
    }
    v15 = 0;
    goto LABEL_16;
  }
  v25 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  v19 = -1073741811;
  *(_QWORD *)(v25 + 24) = v3;
  *(_QWORD *)(v25 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v25);
LABEL_12:
  if ( v31 )
    DXGADAPTER::ReleaseReferenceNoTracking(v31);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v20);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v27);
  return v19;
}
