/*
 * XREFs of DxgkPresentMultiPlaneOverlay2 @ 0x1C0283940
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
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
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
 *     McTemplateK0qqqqqqq @ 0x1C0047930 (McTemplateK0qqqqqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0258F10 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C027E87C (-CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C027FFB0 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay2(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1)
{
  unsigned int v2; // edi
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rsi
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  ULONG v34; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  const struct DXGDEVICE *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  const GUID *v74; // r8
  int v76; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v77[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v78[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v79; // [rsp+70h] [rbp-90h]
  char v80; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v82[32]; // [rsp+88h] [rbp-78h] BYREF
  ULONG v83; // [rsp+A8h] [rbp-58h]
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v84; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT *v85; // [rsp+B8h] [rbp-48h] BYREF
  int v86; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-38h]
  int *v88; // [rsp+D0h] [rbp-30h]
  int *v89; // [rsp+D8h] [rbp-28h]
  _BYTE v90[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v91[6]; // [rsp+F0h] [rbp-10h] BYREF
  char v92; // [rsp+120h] [rbp+20h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 v93; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v94[8]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v95[64]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v96[88]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v2 = -1073741811;
  v76 = -1073741811;
  memset(&v93, 0, sizeof(v93));
  v88 = (int *)&v93;
  v89 = &v76;
  v87 = 0LL;
  v86 = 2163;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2163);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v86, 2163LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !a1 )
  {
    v76 = -1073741811;
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = v76;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12);
    WdLogEvent5_WdError(v11);
    v2 = v76;
    goto LABEL_74;
  }
  v84 = 0LL;
  v85 = 0LL;
  v76 = CapturePresentMultiPlaneOverlayArgs2(a1, &v93, &v84, &v85);
  if ( v76 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v76;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v20, v19);
    v21 = v18;
LABEL_10:
    WdLogEvent5_WdError(v21);
    v2 = v76;
    goto LABEL_73;
  }
  if ( v93.VidPnSourceId >= 0x10 )
  {
    v76 = -1073741811;
    v21 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v21 + 24) = v93.VidPnSourceId;
    *(_QWORD *)(v21 + 32) = v76;
    goto LABEL_10;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90, v93.hDevice, (struct _KTHREAD **)Current, v77, 0);
  v25 = (__int64 *)v77[0];
  if ( !v77[0] )
  {
    v76 = -1073741811;
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
    v26[3] = v76;
    v26[4] = PsGetCurrentProcess(v28, v27);
    v26[5] = v93.hDevice;
    WdLogEvent5_WdWarning(v26);
LABEL_64:
    v2 = v76;
    goto LABEL_72;
  }
  if ( (*((_DWORD *)v77[0] + 103) & 8) != 0 )
  {
    v29 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v29 + 24) = 979LL;
    WdLogEvent5_WdWarning(v29);
    goto LABEL_72;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v77,
    *((struct DXGDEVICE **)v77[0] + 2));
  if ( v93.BroadcastContextCount > 0x40 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = v25;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_70;
  }
  v34 = v93.BroadcastContextCount + 1;
  P = 0LL;
  v83 = 0;
  if ( v93.BroadcastContextCount + 1 <= 4 )
  {
    PoolWithTag = v82;
  }
  else
  {
    v30 = 0xFFFFFFFFFFFFFFFFuLL % v34;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v34 < 8 )
    {
LABEL_65:
      v71 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v71 + 24) = 1001LL;
      WdLogEvent5_WdWarning(v71);
      v2 = -1073741801;
      goto LABEL_66;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v34, 0x4B677844u);
  }
  P = PoolWithTag;
  v83 = v34;
  if ( !PoolWithTag )
    goto LABEL_65;
  memset(PoolWithTag, 0, 8LL * v34);
  if ( !P )
    goto LABEL_65;
  *(_QWORD *)P = v25;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v78, (struct _KTHREAD **)Current);
  v37 = 0;
  if ( !v93.BroadcastContextCount )
  {
LABEL_35:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v78);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v91,
      P,
      v83);
    if ( v92 )
    {
      if ( v91[0] )
      {
        v49 = WdLogNewEntry5_WdWarning(v45, v44, v46);
        *(_QWORD *)(v49 + 24) = 1057LL;
        WdLogEvent5_WdWarning(v49);
      }
      else
      {
        v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
        *(_QWORD *)(v47 + 24) = 1052LL;
        WdLogEvent5_WdWarning(v47);
        v2 = -1073741801;
      }
    }
    else
    {
      v50 = v25[2];
      v80 = 0;
      v79 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v94, v25[2], 1, v51, 0);
      v76 = COREDEVICEACCESS::AcquireShared((__int64)v94, 0xFFFFFFFF, 0LL);
      if ( v76 >= 0 )
      {
        v58 = (const struct DXGDEVICE *)v25[2];
        v59 = *((_QWORD *)v58 + 216);
        if ( v59 )
        {
          if ( *((_BYTE *)Current + 298)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v59 + 2552), v58, v93.VidPnSourceId) )
          {
            v66 = v25[2];
            v67 = *(_QWORD *)(*(_QWORD *)(v66 + 16) + 16LL);
            if ( *(_QWORD *)(v66 + 1728) == v67 )
            {
              v2 = DXGCONTEXT::PresentMultiPlaneOverlay2(
                     (DXGCONTEXT *)v25,
                     &v93,
                     (struct COREDEVICEACCESS *)v94,
                     (struct DXGCONTEXT **)P);
            }
            else
            {
              v68 = WdLogNewEntry5_WdWarning(v67, v66, v54);
              *(_QWORD *)(v68 + 24) = -1073741811LL;
              *(_QWORD *)(v68 + 32) = PsGetCurrentProcess(v70, v69);
              WdLogEvent5_WdWarning(v68);
            }
            v76 = v2;
            if ( v2 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v25[2], (struct COREDEVICEACCESS *)v94);
            COREACCESS::~COREACCESS((COREACCESS *)v96);
            COREACCESS::~COREACCESS((COREACCESS *)v95);
            if ( v80 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v91);
            if ( P != v82 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v83 = 0;
            if ( v77[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
            goto LABEL_64;
          }
          v76 = -1073741790;
          v63 = WdLogNewEntry5_WdError(v62, v61, v54);
          *(_QWORD *)(v63 + 24) = v76;
          *(_QWORD *)(v63 + 32) = PsGetCurrentProcess(v65, v64);
          v60 = v63;
        }
        else
        {
          v76 = -1073741811;
          v60 = WdLogNewEntry5_WdError(0LL, v58, v54);
          *(_QWORD *)(v60 + 24) = v76;
        }
        WdLogEvent5_WdError(v60);
      }
      else
      {
        v55 = WdLogNewEntry5_WdWarning(v53, v52, v54);
        *(_QWORD *)(v55 + 24) = v76;
        *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v57, v56);
        WdLogEvent5_WdWarning(v55);
      }
      v2 = v76;
      COREACCESS::~COREACCESS((COREACCESS *)v96);
      COREACCESS::~COREACCESS((COREACCESS *)v95);
      if ( v80 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v78);
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v91);
    goto LABEL_66;
  }
  while ( 1 )
  {
    v38 = (v93.BroadcastContext[v37] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < *((_DWORD *)Current + 56) )
    {
      v39 = *((_QWORD *)Current + 26);
      v36 = *(unsigned int *)(v39 + 16 * v38 + 8);
      if ( ((v93.BroadcastContext[v37] >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60)
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        v36 &= 0x1Fu;
        if ( (_BYTE)v36 == 7 )
        {
          v41 = *(_QWORD *)(v39 + 16LL * (unsigned int)v38);
          goto LABEL_31;
        }
        v40 = WdLogNewEntry5_WdError(v36, (v93.BroadcastContext[v37] >> 25) & 0x60, 2LL * (unsigned int)v38);
        *(_QWORD *)(v40 + 24) = 267LL;
        WdLogEvent5_WdError(v40);
      }
    }
    v41 = 0LL;
LABEL_31:
    v42 = v37 + 1;
    *((_QWORD *)P + v42) = v41;
    v43 = *((_QWORD *)P + v42);
    if ( !v43 || (*(_DWORD *)(v43 + 412) & 8) != 0 || *(_QWORD *)(v43 + 16) != v25[2] )
      break;
    ++v37;
    if ( (unsigned int)v42 >= v93.BroadcastContextCount )
      goto LABEL_35;
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdError(v36, v43, v42);
  v48[3] = v25;
  v48[4] = v93.BroadcastContext[v37];
  v48[5] = v37;
  v48[6] = -1073741811LL;
  WdLogEvent5_WdError(v48);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v78);
LABEL_66:
  if ( P != v82 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v83 = 0;
LABEL_70:
  if ( v77[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v77);
LABEL_72:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
LABEL_73:
  operator delete[](v84);
  operator delete[](v85);
LABEL_74:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v86, v14);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v72,
        v74,
        v88[1],
        v88[67],
        v88[68],
        v88[69],
        v88[70],
        v88[71],
        *v89);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v73, &EventProfilerExit, v74, v86);
  }
  return v2;
}
