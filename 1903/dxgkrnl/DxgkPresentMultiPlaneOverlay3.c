/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C0284140
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C000D348 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C000D3B8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C0042CA0 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     McTemplateK0qqqqqqq @ 0x1C0047930 (McTemplateK0qqqqqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0258F10 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C027E820 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C027EBBC (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  UINT PresentPlaneCount; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  UINT ContextCount; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 VidPnSourceId; // rax
  __int64 v29; // rcx
  UINT HDRMetaDataSize; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rdi
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rsi
  _BYTE *PoolWithTag; // rax
  __int64 v44; // r8
  unsigned int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  const struct DXGDEVICE *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  PVOID v78; // rcx
  struct DXGPROCESS *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  const GUID *v83; // r8
  int v85; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v86[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v87[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v88; // [rsp+70h] [rbp-90h]
  char v89; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v91[32]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v92; // [rsp+A8h] [rbp-58h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v93; // [rsp+B0h] [rbp-50h] BYREF
  int v94; // [rsp+100h] [rbp+0h] BYREF
  __int64 v95; // [rsp+108h] [rbp+8h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v96; // [rsp+110h] [rbp+10h]
  int *v97; // [rsp+118h] [rbp+18h]
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v98[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v99[16]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v100[6]; // [rsp+170h] [rbp+70h] BYREF
  char v101; // [rsp+1A0h] [rbp+A0h]
  _BYTE v102[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v103[64]; // [rsp+1B8h] [rbp+B8h] BYREF
  _BYTE v104[88]; // [rsp+1F8h] [rbp+F8h] BYREF

  v2 = -1073741811;
  v85 = -1073741811;
  memset(&v93, 0, sizeof(v93));
  v96 = &v93;
  v97 = &v85;
  v95 = 0LL;
  v94 = 2164;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2164);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v94, 2164LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !a1 )
  {
    v85 = -1073741811;
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v85;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12);
    WdLogEvent5_WdError(v11);
    v2 = v85;
    goto LABEL_96;
  }
  memset(v98, 0, sizeof(v98));
  v85 = CapturePresentMultiPlaneOverlayArgs3(
          a1,
          &v93,
          v98,
          (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v98[1],
          (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)&v98[2],
          (struct tagRECT **)&v98[3],
          (unsigned int **)&v98[4],
          (unsigned int **)&v98[5],
          (unsigned __int8 **)&v98[6],
          (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION **)&v98[7]);
  if ( v85 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v85;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v20, v19);
    v21 = v18;
LABEL_94:
    WdLogEvent5_WdError(v21);
    v2 = v85;
    goto LABEL_95;
  }
  PresentPlaneCount = v93.PresentPlaneCount;
  if ( !v93.PresentPlaneCount )
  {
    v23 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v23 + 24) = 2496LL;
    WdLogEvent5_WdAssertion(v23);
    PresentPlaneCount = v93.PresentPlaneCount;
  }
  if ( PresentPlaneCount > 0xA )
  {
    v24 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v24 + 24) = 2497LL;
    WdLogEvent5_WdAssertion(v24);
  }
  ContextCount = v93.ContextCount;
  if ( !v93.ContextCount )
  {
    v26 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v26 + 24) = 2498LL;
    WdLogEvent5_WdAssertion(v26);
    ContextCount = v93.ContextCount;
  }
  if ( ContextCount > 0x40 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v27 + 24) = 2499LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( v93.VidPnSourceId >= 0x10 )
  {
    v85 = -1073741811;
    v21 = WdLogNewEntry5_WdError(v16, v15, v17);
    VidPnSourceId = v93.VidPnSourceId;
LABEL_18:
    *(_QWORD *)(v21 + 24) = VidPnSourceId;
    *(_QWORD *)(v21 + 32) = v85;
    goto LABEL_94;
  }
  if ( v93.HDRMetaDataType )
  {
    v29 = (unsigned int)(v93.HDRMetaDataType - 1);
    if ( v93.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      HDRMetaDataSize = v93.HDRMetaDataSize;
      if ( v93.HDRMetaDataSize && v93.HDRMetaDataSize != 28 )
        goto LABEL_25;
    }
    else
    {
      if ( v93.HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v85 = -1073741811;
        v21 = WdLogNewEntry5_WdError(v29, v15, v17);
        VidPnSourceId = v93.HDRMetaDataType;
        goto LABEL_18;
      }
      HDRMetaDataSize = v93.HDRMetaDataSize;
      if ( v93.HDRMetaDataSize && v93.HDRMetaDataSize != 72 )
      {
LABEL_25:
        v85 = -1073741811;
        v21 = WdLogNewEntry5_WdError(v29, v15, v17);
        VidPnSourceId = v93.HDRMetaDataSize;
        goto LABEL_18;
      }
    }
    if ( v93.pHDRMetaData )
    {
      if ( !HDRMetaDataSize )
        goto LABEL_25;
    }
    else if ( HDRMetaDataSize )
    {
      goto LABEL_25;
    }
  }
  else if ( v93.HDRMetaDataSize || v93.pHDRMetaData )
  {
    v85 = -1073741811;
    v21 = WdLogNewEntry5_WdError((unsigned int)v93.HDRMetaDataType, v15, v17);
    *(_QWORD *)(v21 + 24) = v85;
    goto LABEL_94;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v99,
    *v93.pContextList,
    (struct _KTHREAD **)Current,
    v86,
    0);
  v34 = (__int64 *)v86[0];
  if ( !v86[0] )
  {
    v85 = -1073741811;
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33);
    v35[3] = v85;
    v35[4] = PsGetCurrentProcess(v37, v36);
    v35[5] = *v93.pContextList;
    WdLogEvent5_WdWarning(v35);
LABEL_85:
    v2 = v85;
    goto LABEL_92;
  }
  if ( (*((_DWORD *)v86[0] + 103) & 8) != 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v38 + 24) = 2591LL;
    WdLogEvent5_WdWarning(v38);
    goto LABEL_92;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v86,
    *((struct DXGDEVICE **)v86[0] + 2));
  v42 = v93.ContextCount;
  P = 0LL;
  v92 = 0;
  if ( v93.ContextCount <= 4 )
  {
    PoolWithTag = v91;
  }
  else
  {
    v39 = 0xFFFFFFFFFFFFFFFFuLL % v93.ContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v93.ContextCount < 8 )
    {
LABEL_86:
      v80 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      *(_QWORD *)(v80 + 24) = 2601LL;
      WdLogEvent5_WdWarning(v80);
      v2 = -1073741801;
      goto LABEL_87;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v93.ContextCount, 0x4B677844u);
  }
  P = PoolWithTag;
  v92 = v42;
  if ( !PoolWithTag )
    goto LABEL_86;
  memset(PoolWithTag, 0, 8 * v42);
  if ( !P )
    goto LABEL_86;
  *(_QWORD *)P = v34;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v87, (struct _KTHREAD **)Current);
  v45 = 1;
  if ( v93.ContextCount <= 1 )
  {
LABEL_58:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v87);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v100,
      P,
      v92);
    if ( v101 )
    {
      if ( v100[0] )
      {
        v59 = WdLogNewEntry5_WdWarning(v55, v54, v56);
        *(_QWORD *)(v59 + 24) = 2657LL;
        WdLogEvent5_WdWarning(v59);
      }
      else
      {
        v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
        *(_QWORD *)(v57 + 24) = 2652LL;
        WdLogEvent5_WdWarning(v57);
        v2 = -1073741801;
      }
    }
    else
    {
      v60 = v34[2];
      v89 = 0;
      v88 = *(_QWORD *)(*(_QWORD *)(v60 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v102, v34[2], 1, v61, 0);
      v85 = COREDEVICEACCESS::AcquireShared((__int64)v102, 0xFFFFFFFF, 0LL);
      if ( v85 >= 0 )
      {
        v68 = (const struct DXGDEVICE *)v34[2];
        v69 = *((_QWORD *)v68 + 216);
        if ( v69 )
        {
          if ( *((_BYTE *)Current + 298)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v69 + 2552), v68, v93.VidPnSourceId) )
          {
            v85 = DXGCONTEXT::PresentMultiPlaneOverlay3(
                    (DXGCONTEXT *)v34,
                    &v93,
                    (struct COREDEVICEACCESS *)v102,
                    (struct DXGCONTEXT **)P);
            if ( v85 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v34[2], (struct COREDEVICEACCESS *)v102);
            COREACCESS::~COREACCESS((COREACCESS *)v104);
            COREACCESS::~COREACCESS((COREACCESS *)v103);
            if ( v89 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
            v78 = P;
            if ( P != v91 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v92 = 0;
            if ( v86[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v86);
            v79 = DXGPROCESS::GetCurrent((__int64)v78, v77);
            DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v79 + 9) + 88LL));
            goto LABEL_85;
          }
          v85 = -1073741790;
          v74 = WdLogNewEntry5_WdError(v72, v71, v73);
          *(_QWORD *)(v74 + 24) = v85;
          *(_QWORD *)(v74 + 32) = PsGetCurrentProcess(v76, v75);
          v70 = v74;
        }
        else
        {
          v85 = -1073741811;
          v70 = WdLogNewEntry5_WdError(0LL, v68, v64);
          *(_QWORD *)(v70 + 24) = v85;
        }
        WdLogEvent5_WdError(v70);
      }
      else
      {
        v65 = WdLogNewEntry5_WdWarning(v63, v62, v64);
        *(_QWORD *)(v65 + 24) = v85;
        *(_QWORD *)(v65 + 32) = PsGetCurrentProcess(v67, v66);
        WdLogEvent5_WdWarning(v65);
      }
      v2 = v85;
      COREACCESS::~COREACCESS((COREACCESS *)v104);
      COREACCESS::~COREACCESS((COREACCESS *)v103);
      if ( v89 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v87);
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v100);
    goto LABEL_87;
  }
  while ( 1 )
  {
    v46 = v93.pContextList[v45];
    v47 = (v93.pContextList[v45] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v47 < *((_DWORD *)Current + 56) )
    {
      v48 = *((_QWORD *)Current + 26);
      v44 = (unsigned int)v47;
      v46 = ((unsigned int)v46 >> 25) & 0x60;
      v49 = *(_DWORD *)(v48 + 16 * v47 + 8);
      if ( (_BYTE)v46 == (*(_BYTE *)(v48 + 16 * v47 + 8) & 0x60) && (v49 & 0x2000) == 0 && (v49 & 0x1F) != 0 )
      {
        v44 = 2LL * (unsigned int)v47;
        v50 = v49 & 0x1F;
        if ( (_BYTE)v50 == 7 )
        {
          v52 = *(_QWORD *)(v48 + 16LL * (unsigned int)v47);
          goto LABEL_54;
        }
        v51 = WdLogNewEntry5_WdError(v50, v46, v44);
        *(_QWORD *)(v51 + 24) = 267LL;
        WdLogEvent5_WdError(v51);
      }
    }
    v52 = 0LL;
LABEL_54:
    *((_QWORD *)P + v45) = v52;
    v53 = *((_QWORD *)P + v45);
    if ( !v53 || (*(_DWORD *)(v53 + 412) & 8) != 0 || *(_QWORD *)(v53 + 16) != v34[2] )
      break;
    if ( ++v45 >= v93.ContextCount )
      goto LABEL_58;
  }
  v58 = (_QWORD *)WdLogNewEntry5_WdError(v53, v46, v44);
  v58[3] = v34;
  v58[4] = v93.pContextList[v45];
  v58[5] = v45;
  v58[6] = -1073741811LL;
  WdLogEvent5_WdError(v58);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v87);
LABEL_87:
  if ( P != v91 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v92 = 0;
  if ( v86[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v86);
LABEL_92:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v99);
LABEL_95:
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((void **)v98);
LABEL_96:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v14);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v81,
        v83,
        0,
        v96->VidPnSourceId,
        v96->PresentCount,
        1,
        v96->Flags.Value,
        v96->PresentPlaneCount,
        *v97);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v82, &EventProfilerExit, v83, v94);
  }
  return v2;
}
