/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C01D6F90
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01C21D0 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C23C4 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGDEVICE *v10; // r15
  __int64 v11; // rax
  struct _KTHREAD **v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // r14d
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  const GUID *v32; // r8
  ADAPTER_DISPLAY *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // edi
  __int64 v36; // rcx
  const GUID *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  int v41; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C0h]
  char v43; // [rsp+40h] [rbp-B8h]
  DXGADAPTER *v44; // [rsp+48h] [rbp-B0h] BYREF
  unsigned int v45[4]; // [rsp+58h] [rbp-A0h]
  void *v46[2]; // [rsp+68h] [rbp-90h]
  _BYTE v47[120]; // [rsp+80h] [rbp-78h] BYREF
  struct DXGDEVICE *v48; // [rsp+108h] [rbp+10h] BYREF
  struct DXGDEVICE *v49; // [rsp+110h] [rbp+18h] BYREF
  struct DXGADAPTER *v50; // [rsp+118h] [rbp+20h] BYREF

  v3 = (_OWORD *)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2114;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2114);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2114);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 8147LL;
    WdLogEvent5_WdError(v6);
LABEL_53:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v41);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v45 = *v3;
  *(_OWORD *)v46 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v45[1], Current, &v49);
  v10 = v49;
  if ( !v49 )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v45[1];
    WdLogEvent5_WdWarning(v11);
LABEL_50:
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    goto LABEL_53;
  }
  v12 = Current;
  v13 = v45[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v45[0], v12, &v50, 1);
  v17 = v50;
  if ( !v50 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v13;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_48;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v47, v50, 0LL);
  v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v47);
  if ( v22 >= 0 )
  {
    if ( *((_QWORD *)v17 + 316) || (*((_DWORD *)v17 + 77) & 0x100) == 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v38 + 24) = v13;
      WdLogEvent5_WdWarning(v38);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
LABEL_48:
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      goto LABEL_50;
    }
    v26 = v45[2];
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v17 + 315), v10, v45[2]) )
    {
      v33 = (ADAPTER_DISPLAY *)*((_QWORD *)v17 + 315);
      if ( LODWORD(v46[1]) )
        v34 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v33, (unsigned int)v26, v29);
      else
        v34 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v33, (unsigned int)v26, v46[0]);
      v35 = v34;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v36, &EventProfilerExit, v37, v41);
      return v35;
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v30[3] = v10;
      v30[4] = v17;
      v30[5] = v26;
      WdLogEvent5_WdWarning(v30);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v31, &EventProfilerExit, v32, v41);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v47);
    if ( v44 )
      DXGADAPTER::ReleaseReference(v44);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v41);
    return (unsigned int)v22;
  }
}
