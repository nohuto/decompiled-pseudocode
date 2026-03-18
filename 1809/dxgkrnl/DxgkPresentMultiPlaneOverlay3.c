/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C024E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0011C28 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00121E4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C001831C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0qqqqqqq @ 0x1C0022A2C (McTemplateK0qqqqqqq.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C00AD868 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C01C05D8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C02246A8 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C02492FC (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  int *p_PresentPlaneCount; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  UINT PresentPlaneCount; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  UINT ContextCount; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 VidPnSourceId; // rax
  unsigned __int64 pHDRMetaData; // rcx
  UINT HDRMetaDataSize; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rbx
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r14
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v41; // rax
  UINT i; // r14d
  __int64 v43; // rax
  __int64 v44; // r9
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rax
  struct DXGCONTEXT *v48; // rcx
  struct DXGCONTEXT *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  _QWORD *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  const GUID *v60; // r8
  bool v61; // zf
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rdx
  const struct DXGDEVICE *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rdx
  struct DXGPROCESS *v78; // rax
  __int64 v79; // rax
  int v80; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v81; // [rsp+58h] [rbp-1F0h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v82; // [rsp+60h] [rbp-1E8h]
  int *v83; // [rsp+68h] [rbp-1E0h]
  _BYTE v84[16]; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v85[16]; // [rsp+80h] [rbp-1C8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v86[2]; // [rsp+90h] [rbp-1B8h] BYREF
  struct tagRECT **v87[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  unsigned int *v88[2]; // [rsp+B0h] [rbp-198h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v89[2]; // [rsp+C0h] [rbp-188h] BYREF
  int v90; // [rsp+D0h] [rbp-178h]
  struct DXGCONTEXT **v91; // [rsp+E0h] [rbp-168h] BYREF
  _BYTE v92[32]; // [rsp+E8h] [rbp-160h] BYREF
  unsigned int v93; // [rsp+108h] [rbp-140h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v94; // [rsp+110h] [rbp-138h] BYREF
  _BYTE v95[8]; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v96; // [rsp+168h] [rbp-E0h]
  char v97; // [rsp+170h] [rbp-D8h]
  int v98; // [rsp+178h] [rbp-D0h]
  _QWORD v99[6]; // [rsp+180h] [rbp-C8h] BYREF
  char v100; // [rsp+1B0h] [rbp-98h]
  _BYTE v101[24]; // [rsp+1B8h] [rbp-90h] BYREF
  _BYTE v102[96]; // [rsp+1D0h] [rbp-78h] BYREF
  int v103; // [rsp+250h] [rbp+8h] BYREF
  struct DXGCONTEXT *v104; // [rsp+258h] [rbp+10h] BYREF

  v103 = -1073741811;
  memset(&v94, 0, sizeof(v94));
  v81 = 0LL;
  v80 = 2164;
  v82 = &v94;
  v83 = &v103;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2164);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v80, 2164);
  Current = DXGPROCESS::GetCurrent();
  if ( !a1 )
  {
    v103 = -1073741811;
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = v103;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v8, v7);
    WdLogEvent5_WdError(v6);
    v9 = v103;
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80);
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v10,
          v12,
          0,
          v82->VidPnSourceId,
          v82->PresentCount,
          1,
          v82->Flags.Value,
          v82->PresentPlaneCount,
          *v83);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v11, &EventProfilerExit, v12, v80);
    }
    return v9;
  }
  p_PresentPlaneCount = (int *)&a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (int *)MmUserProbeAddress;
  v98 = *p_PresentPlaneCount;
  *(_OWORD *)v86 = 0LL;
  *(_OWORD *)v87 = 0LL;
  *(_OWORD *)v88 = 0LL;
  *(_OWORD *)v89 = 0LL;
  v90 = v98;
  v103 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           &v94,
           v86,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v86[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v87,
           &v87[1],
           v88,
           &v88[1],
           (unsigned __int8 **)v89,
           &v89[1]);
  if ( v103 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = v103;
    *(_QWORD *)(v16 + 32) = PsGetCurrentProcess(v18, v17);
    v19 = v16;
LABEL_16:
    WdLogEvent5_WdError(v19);
    v9 = v103;
LABEL_17:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v86);
    goto LABEL_6;
  }
  PresentPlaneCount = v94.PresentPlaneCount;
  if ( !v94.PresentPlaneCount )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v21 + 24) = 2571LL;
    WdLogEvent5_WdAssertion(v21);
    PresentPlaneCount = v94.PresentPlaneCount;
  }
  if ( PresentPlaneCount > 0xA )
  {
    v22 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v22 + 24) = 2572LL;
    WdLogEvent5_WdAssertion(v22);
  }
  ContextCount = v94.ContextCount;
  if ( !v94.ContextCount )
  {
    v24 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v24 + 24) = 2573LL;
    WdLogEvent5_WdAssertion(v24);
    ContextCount = v94.ContextCount;
  }
  if ( ContextCount > 0x40 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v25 + 24) = 2574LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( v94.VidPnSourceId >= 0x10 )
  {
    v103 = -1073741811;
    v19 = WdLogNewEntry5_WdError(v15);
    VidPnSourceId = v94.VidPnSourceId;
LABEL_28:
    *(_QWORD *)(v19 + 24) = VidPnSourceId;
    *(_QWORD *)(v19 + 32) = v103;
    goto LABEL_16;
  }
  if ( v94.HDRMetaDataType )
  {
    pHDRMetaData = (unsigned int)(v94.HDRMetaDataType - 1);
    if ( v94.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      HDRMetaDataSize = v94.HDRMetaDataSize;
      if ( v94.HDRMetaDataSize && v94.HDRMetaDataSize != 28 )
        goto LABEL_42;
    }
    else
    {
      if ( v94.HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v103 = -1073741811;
        v19 = WdLogNewEntry5_WdError(pHDRMetaData);
        VidPnSourceId = v94.HDRMetaDataType;
        goto LABEL_28;
      }
      HDRMetaDataSize = v94.HDRMetaDataSize;
      if ( v94.HDRMetaDataSize && v94.HDRMetaDataSize != 72 )
        goto LABEL_42;
    }
    pHDRMetaData = (unsigned __int64)v94.pHDRMetaData;
    if ( v94.pHDRMetaData )
    {
      if ( HDRMetaDataSize )
        goto LABEL_45;
    }
    else if ( !HDRMetaDataSize )
    {
      goto LABEL_45;
    }
LABEL_42:
    v103 = -1073741811;
    v19 = WdLogNewEntry5_WdError(pHDRMetaData);
    VidPnSourceId = v94.HDRMetaDataSize;
    goto LABEL_28;
  }
  if ( v94.HDRMetaDataSize || v94.pHDRMetaData )
  {
    v103 = -1073741811;
    v79 = WdLogNewEntry5_WdError((unsigned int)v94.HDRMetaDataType);
    *(_QWORD *)(v79 + 24) = v103;
    v19 = v79;
    goto LABEL_16;
  }
LABEL_45:
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v84,
    *v94.pContextList,
    (struct _KTHREAD **)Current,
    &v104,
    0);
  v32 = (__int64 *)v104;
  if ( !v104 )
  {
    v103 = -1073741811;
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
    v33[3] = v103;
    v33[4] = PsGetCurrentProcess(v35, v34);
    v33[5] = *v94.pContextList;
    WdLogEvent5_WdWarning(v33);
LABEL_47:
    v9 = v103;
LABEL_48:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v104 + 99) & 8) != 0 )
  {
    v36 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v36 + 24) = 2666LL;
    WdLogEvent5_WdWarning(v36);
    goto LABEL_83;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v85,
    *((struct DXGDEVICE **)v104 + 2));
  v39 = v94.ContextCount;
  PoolWithTag = 0LL;
  v91 = 0LL;
  v93 = 0;
  if ( v94.ContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v92;
    v91 = (struct DXGCONTEXT **)v92;
  }
  else
  {
    v37 = 0xFFFFFFFFFFFFFFFFuLL % v94.ContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v94.ContextCount < 8 )
      goto LABEL_57;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v94.ContextCount, 0x4B677844u);
    v91 = PoolWithTag;
  }
  v93 = v39;
  if ( !PoolWithTag )
  {
LABEL_58:
    v41 = WdLogNewEntry5_WdWarning(PoolWithTag, v37, v38);
    *(_QWORD *)(v41 + 24) = 2676LL;
    WdLogEvent5_WdWarning(v41);
LABEL_74:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v91);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v86);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80);
    if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq(
          (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
          v54,
          v56,
          0,
          v82->VidPnSourceId,
          v82->PresentCount,
          1,
          v82->Flags.Value,
          v82->PresentPlaneCount,
          *v83);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v55, &EventProfilerExit, v56, v80);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * v39);
  PoolWithTag = v91;
LABEL_57:
  if ( !PoolWithTag )
    goto LABEL_58;
  *PoolWithTag = (struct DXGCONTEXT *)v32;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v101, (struct _KTHREAD **)Current);
  for ( i = 1; i < v94.ContextCount; ++i )
  {
    v43 = (v94.pContextList[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v43 < *((_DWORD *)Current + 62) )
    {
      v44 = *((_QWORD *)Current + 29);
      v45 = *(_DWORD *)(v44 + 16 * v43 + 8);
      if ( ((v94.pContextList[i] >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60)
        && (v45 & 0x2000) == 0
        && (v45 & 0x1F) != 0 )
      {
        v46 = v45 & 0x1F;
        if ( (_BYTE)v46 == 7 )
        {
          v48 = *(struct DXGCONTEXT **)(v44 + 16LL * (unsigned int)v43);
          goto LABEL_67;
        }
        v47 = WdLogNewEntry5_WdError(v46);
        *(_QWORD *)(v47 + 24) = 316LL;
        WdLogEvent5_WdError(v47);
      }
    }
    v48 = 0LL;
LABEL_67:
    v91[i] = v48;
    v49 = v91[i];
    if ( !v49 || (*((_DWORD *)v49 + 99) & 8) != 0 || *((_QWORD *)v49 + 2) != v32[2] )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v57[3] = v32;
      v57[4] = v94.pContextList[i];
      v57[5] = i;
      v57[6] = -1073741811LL;
      WdLogEvent5_WdError(v57);
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v101);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v91);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v86);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80);
      v61 = (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0;
      goto LABEL_84;
    }
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v101);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v99,
    v91,
    v93);
  if ( !v100 )
  {
    v96 = *(_QWORD *)(*(_QWORD *)(v32[2] + 16) + 16LL);
    v97 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, v32[2], 1, v63, 0);
    v103 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v102);
    if ( v103 >= 0 )
    {
      v70 = (const struct DXGDEVICE *)v32[2];
      v71 = *((_QWORD *)v70 + 216);
      if ( v71 )
      {
        if ( *((_BYTE *)Current + 322)
          || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v71 + 2520), v70, v94.VidPnSourceId) )
        {
          v103 = DXGCONTEXT::PresentMultiPlaneOverlay3((DXGCONTEXT *)v32, &v94, (struct COREDEVICEACCESS *)v102, v91);
          if ( v103 == -1071775482 )
            DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v32[2], (struct COREDEVICEACCESS *)v102);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v99);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v91);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85);
          v78 = DXGPROCESS::GetCurrent();
          DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(*((_QWORD *)v78 + 9) + 88LL));
          goto LABEL_47;
        }
        v103 = -1073741790;
        v75 = WdLogNewEntry5_WdError(v74);
        v76 = v103;
        *(_QWORD *)(v75 + 24) = v103;
        *(_QWORD *)(v75 + 32) = PsGetCurrentProcess(v76, v77);
        v73 = v75;
      }
      else
      {
        v103 = -1073741811;
        v72 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v72 + 24) = v103;
        v73 = v72;
      }
      WdLogEvent5_WdError(v73);
    }
    else
    {
      v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
      v68 = v103;
      *(_QWORD *)(v67 + 24) = v103;
      *(_QWORD *)(v67 + 32) = PsGetCurrentProcess(v68, v69);
      WdLogEvent5_WdWarning(v67);
    }
    v9 = v103;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v102);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v95);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v99);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v91);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85);
    goto LABEL_48;
  }
  if ( !v99[0] )
  {
    v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
    *(_QWORD *)(v53 + 24) = 2727LL;
    WdLogEvent5_WdWarning(v53);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v99);
    goto LABEL_74;
  }
  v62 = WdLogNewEntry5_WdWarning(v51, v50, v52);
  *(_QWORD *)(v62 + 24) = 2732LL;
  WdLogEvent5_WdWarning(v62);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v99);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v91);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v85);
LABEL_83:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v84);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v86);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v80);
  v61 = (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) == 0;
LABEL_84:
  if ( !v61 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v58,
        v60,
        0,
        v82->VidPnSourceId,
        v82->PresentCount,
        1,
        v82->Flags.Value,
        v82->PresentPlaneCount,
        *v83);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v59, &EventProfilerExit, v60, v80);
  }
  return 3221225485LL;
}
