/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C02840D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00076FC (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000C174 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CCF4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000CEC4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000CF34 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A950 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001AAB8 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     McTemplateK0qqqqqqq @ 0x1C0024AFC (McTemplateK0qqqqqqq.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C0042E00 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C00C3EC8 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C01F01E8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0259590 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C027EF24 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  int *p_PresentPlaneCount; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  UINT PresentPlaneCount; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  UINT ContextCount; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 VidPnSourceId; // rax
  unsigned __int64 pHDRMetaData; // rcx
  UINT HDRMetaDataSize; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *v39; // rbx
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  const GUID *v47; // r8
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r14
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  __int64 v57; // r8
  UINT i; // r14d
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // r9
  int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rax
  struct DXGCONTEXT *v65; // rcx
  struct DXGCONTEXT *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  const GUID *v75; // r8
  bool v76; // zf
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // rdx
  const struct DXGDEVICE *v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct DXGPROCESS *v98; // rax
  __int64 v99; // rax
  int v100; // [rsp+50h] [rbp-268h] BYREF
  int v101; // [rsp+58h] [rbp-260h] BYREF
  __int64 v102; // [rsp+60h] [rbp-258h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v103; // [rsp+68h] [rbp-250h]
  int *v104; // [rsp+70h] [rbp-248h]
  _BYTE v105[16]; // [rsp+78h] [rbp-240h] BYREF
  _BYTE v106[24]; // [rsp+88h] [rbp-230h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v107[2]; // [rsp+A0h] [rbp-218h] BYREF
  struct tagRECT **v108[2]; // [rsp+B0h] [rbp-208h] BYREF
  unsigned int *v109[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v110[2]; // [rsp+D0h] [rbp-1E8h] BYREF
  int v111; // [rsp+E0h] [rbp-1D8h]
  struct DXGCONTEXT **v112; // [rsp+F0h] [rbp-1C8h] BYREF
  _BYTE v113[32]; // [rsp+F8h] [rbp-1C0h] BYREF
  unsigned int v114; // [rsp+118h] [rbp-1A0h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v115; // [rsp+120h] [rbp-198h] BYREF
  _BYTE v116[8]; // [rsp+170h] [rbp-148h] BYREF
  __int64 v117; // [rsp+178h] [rbp-140h]
  char v118; // [rsp+180h] [rbp-138h]
  int v119; // [rsp+188h] [rbp-130h]
  struct DXGCONTEXT *v120; // [rsp+190h] [rbp-128h] BYREF
  _QWORD v121[6]; // [rsp+198h] [rbp-120h] BYREF
  char v122; // [rsp+1C8h] [rbp-F0h]
  _BYTE v123[32]; // [rsp+1D0h] [rbp-E8h] BYREF
  _BYTE v124[160]; // [rsp+1F0h] [rbp-C8h] BYREF

  v100 = -1073741811;
  memset(&v115, 0, sizeof(v115));
  v102 = 0LL;
  v101 = 2164;
  v103 = &v115;
  v104 = &v100;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2164);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v101, 2164LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( !a1 )
  {
    v100 = -1073741811;
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = v100;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
    v14 = v100;
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v13);
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v15,
          v17,
          0,
          v103->VidPnSourceId,
          v103->PresentCount,
          1,
          v103->Flags.Value,
          v103->PresentPlaneCount,
          *v104);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v16, &EventProfilerExit, v17, v101);
    }
    return v14;
  }
  p_PresentPlaneCount = (int *)&a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (int *)MmUserProbeAddress;
  v119 = *p_PresentPlaneCount;
  *(_OWORD *)v107 = 0LL;
  *(_OWORD *)v108 = 0LL;
  *(_OWORD *)v109 = 0LL;
  *(_OWORD *)v110 = 0LL;
  v111 = v119;
  v100 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           &v115,
           v107,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v107[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v108,
           &v108[1],
           v109,
           &v109[1],
           (unsigned __int8 **)v110,
           &v110[1]);
  if ( v100 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = v100;
    *(_QWORD *)(v23 + 32) = PsGetCurrentProcess(v25, v24);
    v26 = v23;
LABEL_16:
    WdLogEvent5_WdError(v26);
    v14 = v100;
LABEL_17:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v107);
    goto LABEL_6;
  }
  PresentPlaneCount = v115.PresentPlaneCount;
  if ( !v115.PresentPlaneCount )
  {
    v28 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v28 + 24) = 2571LL;
    WdLogEvent5_WdAssertion(v28);
    PresentPlaneCount = v115.PresentPlaneCount;
  }
  if ( PresentPlaneCount > 0xA )
  {
    v29 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v29 + 24) = 2572LL;
    WdLogEvent5_WdAssertion(v29);
  }
  ContextCount = v115.ContextCount;
  if ( !v115.ContextCount )
  {
    v31 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v31 + 24) = 2573LL;
    WdLogEvent5_WdAssertion(v31);
    ContextCount = v115.ContextCount;
  }
  if ( ContextCount > 0x40 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v21, v20);
    *(_QWORD *)(v32 + 24) = 2574LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( v115.VidPnSourceId >= 0x10 )
  {
    v100 = -1073741811;
    v26 = WdLogNewEntry5_WdError(v21, v20, v22);
    VidPnSourceId = v115.VidPnSourceId;
LABEL_28:
    *(_QWORD *)(v26 + 24) = VidPnSourceId;
    *(_QWORD *)(v26 + 32) = v100;
    goto LABEL_16;
  }
  if ( v115.HDRMetaDataType )
  {
    pHDRMetaData = (unsigned int)(v115.HDRMetaDataType - 1);
    if ( v115.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      HDRMetaDataSize = v115.HDRMetaDataSize;
      if ( v115.HDRMetaDataSize && v115.HDRMetaDataSize != 28 )
        goto LABEL_42;
    }
    else
    {
      if ( v115.HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v100 = -1073741811;
        v26 = WdLogNewEntry5_WdError(pHDRMetaData, v20, v22);
        VidPnSourceId = v115.HDRMetaDataType;
        goto LABEL_28;
      }
      HDRMetaDataSize = v115.HDRMetaDataSize;
      if ( v115.HDRMetaDataSize && v115.HDRMetaDataSize != 72 )
        goto LABEL_42;
    }
    pHDRMetaData = (unsigned __int64)v115.pHDRMetaData;
    if ( v115.pHDRMetaData )
    {
      if ( HDRMetaDataSize )
        goto LABEL_45;
    }
    else if ( !HDRMetaDataSize )
    {
      goto LABEL_45;
    }
LABEL_42:
    v100 = -1073741811;
    v26 = WdLogNewEntry5_WdError(pHDRMetaData, v20, v22);
    VidPnSourceId = v115.HDRMetaDataSize;
    goto LABEL_28;
  }
  if ( v115.HDRMetaDataSize || v115.pHDRMetaData )
  {
    v100 = -1073741811;
    v99 = WdLogNewEntry5_WdError((unsigned int)v115.HDRMetaDataType, v20, v22);
    *(_QWORD *)(v99 + 24) = v100;
    v26 = v99;
    goto LABEL_16;
  }
LABEL_45:
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v105,
    *v115.pContextList,
    (struct _KTHREAD **)Current,
    &v120,
    0);
  v39 = (__int64 *)v120;
  if ( !v120 )
  {
    v100 = -1073741811;
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
    v40[3] = v100;
    v40[4] = PsGetCurrentProcess(v42, v41);
    v40[5] = *v115.pContextList;
    WdLogEvent5_WdWarning(v40);
LABEL_47:
    v14 = v100;
LABEL_48:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v120 + 103) & 8) != 0 )
  {
    v43 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v43 + 24) = 2666LL;
    WdLogEvent5_WdWarning(v43);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v107);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v44);
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v45,
          v47,
          0,
          v103->VidPnSourceId,
          v103->PresentCount,
          1,
          v103->Flags.Value,
          v103->PresentPlaneCount,
          *v104);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v46, &EventProfilerExit, v47, v101);
    }
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v106,
    *((struct DXGDEVICE **)v120 + 2));
  v50 = v115.ContextCount;
  PoolWithTag = 0LL;
  v112 = 0LL;
  v114 = 0;
  if ( v115.ContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v113;
    v112 = (struct DXGCONTEXT **)v113;
  }
  else
  {
    v48 = 0xFFFFFFFFFFFFFFFFuLL % v115.ContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v115.ContextCount < 8 )
      goto LABEL_62;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v115.ContextCount, 0x4B677844u);
    v112 = PoolWithTag;
  }
  v114 = v50;
  if ( !PoolWithTag )
  {
LABEL_63:
    v52 = WdLogNewEntry5_WdWarning(PoolWithTag, v48, v49);
    *(_QWORD *)(v52 + 24) = 2676LL;
    WdLogEvent5_WdWarning(v52);
LABEL_64:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v112);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v106);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v107);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v53);
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v54,
          v56,
          0,
          v103->VidPnSourceId,
          v103->PresentCount,
          1,
          v103->Flags.Value,
          v103->PresentPlaneCount,
          *v104);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v55, &EventProfilerExit, v56, v101);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * v50);
  PoolWithTag = v112;
LABEL_62:
  if ( !PoolWithTag )
    goto LABEL_63;
  *PoolWithTag = (struct DXGCONTEXT *)v39;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v123, (struct _KTHREAD **)Current);
  for ( i = 1; i < v115.ContextCount; ++i )
  {
    v59 = v115.pContextList[i];
    v60 = (v115.pContextList[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v60 < *((_DWORD *)Current + 56) )
    {
      v57 = (unsigned int)v60;
      v61 = *((_QWORD *)Current + 26);
      v62 = *(_DWORD *)(v61 + 16 * v60 + 8);
      v59 = ((unsigned int)v59 >> 25) & 0x60;
      if ( (_BYTE)v59 == (*(_BYTE *)(v61 + 16 * v60 + 8) & 0x60) && (v62 & 0x2000) == 0 && (v62 & 0x1F) != 0 )
      {
        v57 = 2LL * (unsigned int)v60;
        v63 = v62 & 0x1F;
        if ( (_BYTE)v63 == 7 )
        {
          v65 = *(struct DXGCONTEXT **)(v61 + 16LL * (unsigned int)v60);
          goto LABEL_78;
        }
        v64 = WdLogNewEntry5_WdError(v63, v59, v57);
        *(_QWORD *)(v64 + 24) = 267LL;
        WdLogEvent5_WdError(v64);
      }
    }
    v65 = 0LL;
LABEL_78:
    v112[i] = v65;
    v66 = v112[i];
    if ( !v66 || (*((_DWORD *)v66 + 103) & 8) != 0 || *((_QWORD *)v66 + 2) != v39[2] )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v66, v59, v57);
      v71[3] = v39;
      v71[4] = v115.pContextList[i];
      v71[5] = i;
      v71[6] = -1073741811LL;
      WdLogEvent5_WdError(v71);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v123);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v112);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v106);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v107);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v72);
      v76 = (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0;
      goto LABEL_87;
    }
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v123);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v121,
    v112,
    v114);
  if ( !v122 )
  {
    v117 = *(_QWORD *)(*(_QWORD *)(v39[2] + 16) + 16LL);
    v118 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v116);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v124, v39[2], 1, v79, 0);
    v100 = COREDEVICEACCESS::AcquireShared((__int64)v124, 0xFFFFFFFF, 0LL);
    if ( v100 >= 0 )
    {
      v86 = (const struct DXGDEVICE *)v39[2];
      v87 = *((_QWORD *)v86 + 216);
      if ( v87 )
      {
        if ( *((_BYTE *)Current + 298)
          || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v87 + 2552), v86, v115.VidPnSourceId) )
        {
          v100 = DXGCONTEXT::PresentMultiPlaneOverlay3((DXGCONTEXT *)v39, &v115, (struct COREDEVICEACCESS *)v124, v112);
          if ( v100 == -1071775482 )
            DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v39[2], (struct COREDEVICEACCESS *)v124);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v116);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v121);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v112);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v106);
          v98 = DXGPROCESS::GetCurrent(v97, v96);
          DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v98 + 9) + 88LL));
          goto LABEL_47;
        }
        v100 = -1073741790;
        v93 = WdLogNewEntry5_WdError(v91, v90, v92);
        v94 = v100;
        *(_QWORD *)(v93 + 24) = v100;
        *(_QWORD *)(v93 + 32) = PsGetCurrentProcess(v94, v95);
        v89 = v93;
      }
      else
      {
        v100 = -1073741811;
        v88 = WdLogNewEntry5_WdError(0LL, v86, v82);
        *(_QWORD *)(v88 + 24) = v100;
        v89 = v88;
      }
      WdLogEvent5_WdError(v89);
    }
    else
    {
      v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
      v84 = v100;
      *(_QWORD *)(v83 + 24) = v100;
      *(_QWORD *)(v83 + 32) = PsGetCurrentProcess(v84, v85);
      WdLogEvent5_WdWarning(v83);
    }
    v14 = v100;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v124);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v116);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v121);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v112);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v106);
    goto LABEL_48;
  }
  if ( !v121[0] )
  {
    v70 = WdLogNewEntry5_WdWarning(v68, v67, v69);
    *(_QWORD *)(v70 + 24) = 2727LL;
    WdLogEvent5_WdWarning(v70);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v121);
    goto LABEL_64;
  }
  v77 = WdLogNewEntry5_WdWarning(v68, v67, v69);
  *(_QWORD *)(v77 + 24) = 2732LL;
  WdLogEvent5_WdWarning(v77);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v121);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v112);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v106);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v105);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v107);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v101, v78);
  v76 = (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0;
LABEL_87:
  if ( !v76 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v73,
        v75,
        0,
        v103->VidPnSourceId,
        v103->PresentCount,
        1,
        v103->Flags.Value,
        v103->PresentPlaneCount,
        *v104);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v74, &EventProfilerExit, v75, v101);
  }
  return 3221225485LL;
}
