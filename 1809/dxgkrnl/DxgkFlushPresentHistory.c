/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C0138770
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v3; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGADAPTER *v9; // rbx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  DXGADAPTER *v22; // [rsp+30h] [rbp-29h] BYREF
  int v23; // [rsp+40h] [rbp-19h] BYREF
  __int64 v24; // [rsp+48h] [rbp-11h]
  char v25; // [rsp+50h] [rbp-9h]
  __int64 v26; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v27[32]; // [rsp+68h] [rbp+Fh] BYREF
  _BYTE v28[40]; // [rsp+88h] [rbp+2Fh] BYREF
  struct DXGADAPTER *v29; // [rsp+C8h] [rbp+6Fh] BYREF

  v23 = -1;
  v24 = 0LL;
  v3 = (unsigned int)a1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2189);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2189);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v19 = WdLogNewEntry5_WdError(v5);
    v15 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    goto LABEL_14;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v22, v3, Current, &v29, 1);
  v9 = v29;
  if ( v29 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v26, v29, 0LL);
    v11 = COREADAPTERACCESS::AcquireExclusive(&v26, (unsigned int)(v10 + 2));
    if ( v11 != -1073741130 )
    {
      if ( v11 < 0 )
      {
LABEL_16:
        v15 = v11;
LABEL_11:
        COREACCESS::~COREACCESS((COREACCESS *)v28);
        COREACCESS::~COREACCESS((COREACCESS *)v27);
        goto LABEL_12;
      }
      v14 = *((_QWORD *)v9 + 316);
      if ( v14 )
      {
        if ( !*((_BYTE *)v9 + 185) )
          ADAPTER_RENDER::FlushScheduler(v14, 1, 0xFFFFFFFF, 0);
        v15 = 0;
        goto LABEL_11;
      }
      v21 = WdLogNewEntry5_WdWarning(0LL, v12, v13);
      *(_QWORD *)(v21 + 24) = v3;
      *(_QWORD *)(v21 + 32) = -1073741637LL;
      WdLogEvent5_WdWarning(v21);
    }
    v11 = 0;
    goto LABEL_16;
  }
  v20 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  v15 = -1073741811;
  *(_QWORD *)(v20 + 24) = v3;
  *(_QWORD *)(v20 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v20);
LABEL_12:
  if ( v22 )
    DXGADAPTER::ReleaseReference(v22);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v23);
  return v15;
}
