/*
 * XREFs of DxgkSetDodIndirectSwapchain @ 0x1C02054B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000BBC0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000C240 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C01F1AD8 (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F1D24 (-DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkSetDodIndirectSwapchain(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // r14
  __int64 v19; // rax
  struct _KTHREAD **v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  struct DXGADAPTER *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r15d
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  const GUID *v42; // r8
  ADAPTER_DISPLAY *v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // edi
  __int64 v46; // rdx
  __int64 v47; // rcx
  const GUID *v48; // r8
  __int64 v49; // rax
  struct DXGDEVICE *v50; // [rsp+30h] [rbp-118h] BYREF
  int v51; // [rsp+38h] [rbp-110h] BYREF
  __int64 v52; // [rsp+40h] [rbp-108h]
  char v53; // [rsp+48h] [rbp-100h]
  struct DXGADAPTER *v54; // [rsp+50h] [rbp-F8h] BYREF
  DXGADAPTER *v55; // [rsp+58h] [rbp-F0h] BYREF
  struct DXGDEVICE *v56; // [rsp+68h] [rbp-E0h] BYREF
  unsigned int v57[4]; // [rsp+70h] [rbp-D8h]
  void *v58[2]; // [rsp+80h] [rbp-C8h]
  _BYTE v59[144]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (_OWORD *)a1;
  v51 = -1;
  v52 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v53 = 1;
    v51 = 2114;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2114);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v51, 2114LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = 8859LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v11);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v51);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v57 = *v3;
  *(_OWORD *)v58 = v3[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v57[1], Current, &v56);
  v18 = v56;
  if ( !v56 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v57[1];
    WdLogEvent5_WdWarning(v19);
LABEL_15:
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    goto LABEL_7;
  }
  v20 = Current;
  v21 = v57[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v55, v57[0], v20, &v54, 1);
  v25 = v54;
  if ( !v54 )
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v21;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_20;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v54, 0LL);
  v31 = COREADAPTERACCESS::AcquireShared((__int64)v59, 0xFFFFFFFFLL, v27);
  if ( v31 >= 0 )
  {
    if ( *((_QWORD *)v25 + 320) || (*((_DWORD *)v25 + 77) & 0x100) == 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v49 + 24) = v21;
      WdLogEvent5_WdWarning(v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
LABEL_20:
      if ( v55 )
        DXGADAPTER::ReleaseReferenceNoTracking(v55);
      goto LABEL_15;
    }
    v35 = v57[2];
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*((DXGADAPTER ***)v25 + 319), v18, v57[2]) )
    {
      v43 = (ADAPTER_DISPLAY *)*((_QWORD *)v25 + 319);
      if ( LODWORD(v58[1]) )
        v44 = ADAPTER_DISPLAY::DodTerminateIndirectOutput(v43, (unsigned int)v35, v38);
      else
        v44 = ADAPTER_DISPLAY::DodSetIndirectSwapchain(v43, (unsigned int)v35, v58[0]);
      v45 = v44;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      if ( v55 )
        DXGADAPTER::ReleaseReferenceNoTracking(v55);
      if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v46);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v47, &EventProfilerExit, v48, v51);
      return v45;
    }
    else
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
      v39[3] = v18;
      v39[4] = v25;
      v39[5] = v35;
      WdLogEvent5_WdWarning(v39);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
      if ( v55 )
        DXGADAPTER::ReleaseReferenceNoTracking(v55);
      if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v40);
      if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v41, &EventProfilerExit, v42, v51);
      return 3221225506LL;
    }
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    if ( v55 )
      DXGADAPTER::ReleaseReferenceNoTracking(v55);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v32);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v33, &EventProfilerExit, v34, v51);
    return (unsigned int)v31;
  }
}
