/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C024D4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0011BD4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0012E54 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     McTemplateK0qqqqqqq @ 0x1C0022A2C (McTemplateK0qqqqqqq.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C02246A8 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C02496D4 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024BC7C (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  const GUID *v4; // r8
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rsi
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  ULONG v27; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  const struct DXGDEVICE *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  const GUID *v66; // r8
  int v68; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v69[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v70[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v71; // [rsp+70h] [rbp-90h]
  char v72; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v74[32]; // [rsp+88h] [rbp-78h] BYREF
  ULONG v75; // [rsp+A8h] [rbp-58h]
  struct D3DKMT_MULTIPLANE_OVERLAY *v76; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT *v77; // [rsp+B8h] [rbp-48h] BYREF
  int v78; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-38h]
  int *v80; // [rsp+D0h] [rbp-30h]
  int *v81; // [rsp+D8h] [rbp-28h]
  _BYTE v82[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v83[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v84[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v85[56]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v86[6]; // [rsp+150h] [rbp+50h] BYREF
  char v87; // [rsp+180h] [rbp+80h]
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v88; // [rsp+190h] [rbp+90h] BYREF

  v2 = -1073741811;
  v68 = -1073741811;
  memset(&v88, 0, sizeof(v88));
  v80 = (int *)&v88;
  v81 = &v68;
  v79 = 0LL;
  v78 = 2092;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v3, &EventProfilerEnter, v4, 2092);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v78, 2092);
  Current = DXGPROCESS::GetCurrent();
  if ( !a1 )
  {
    v68 = -1073741811;
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v68;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9, v8);
    WdLogEvent5_WdError(v7);
    v2 = v68;
    goto LABEL_74;
  }
  v76 = 0LL;
  v77 = 0LL;
  v68 = CapturePresentMultiPlaneOverlayArgs(a1, &v88, &v76, &v77);
  if ( v68 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v11 + 24) = v68;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12);
    v14 = v11;
LABEL_10:
    WdLogEvent5_WdError(v14);
    v2 = v68;
    goto LABEL_73;
  }
  if ( v88.VidPnSourceId >= 0x10 )
  {
    v68 = -1073741811;
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = v88.VidPnSourceId;
    *(_QWORD *)(v14 + 32) = v68;
    goto LABEL_10;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82, v88.hDevice, (struct _KTHREAD **)Current, v69, 0);
  v18 = (__int64 *)v69[0];
  if ( !v69[0] )
  {
    v68 = -1073741811;
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v19[3] = v68;
    v19[4] = PsGetCurrentProcess(v21, v20);
    v19[5] = v88.hDevice;
    WdLogEvent5_WdWarning(v19);
LABEL_64:
    v2 = v68;
    goto LABEL_72;
  }
  if ( (*((_DWORD *)v69[0] + 99) & 8) != 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v22 + 24) = 326LL;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_72;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v69,
    *((struct DXGDEVICE **)v69[0] + 2));
  if ( v88.BroadcastContextCount > 0x40 )
  {
    v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v26 + 24) = v18;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_70;
  }
  v27 = v88.BroadcastContextCount + 1;
  P = 0LL;
  v75 = 0;
  if ( v88.BroadcastContextCount + 1 <= 4 )
  {
    PoolWithTag = v74;
  }
  else
  {
    v23 = 0xFFFFFFFFFFFFFFFFuLL % v27;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v27 < 8 )
    {
LABEL_65:
      v63 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v63 + 24) = 348LL;
      WdLogEvent5_WdWarning(v63);
      v2 = -1073741801;
      goto LABEL_66;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v27, 0x4B677844u);
  }
  P = PoolWithTag;
  v75 = v27;
  if ( !PoolWithTag )
    goto LABEL_65;
  memset(PoolWithTag, 0, 8LL * v27);
  if ( !P )
    goto LABEL_65;
  *(_QWORD *)P = v18;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v70, (struct _KTHREAD **)Current);
  v30 = 0;
  if ( !v88.BroadcastContextCount )
  {
LABEL_35:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v70);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v86,
      P,
      v75);
    if ( v87 )
    {
      if ( v86[0] )
      {
        v42 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v42 + 24) = 404LL;
        WdLogEvent5_WdWarning(v42);
      }
      else
      {
        v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
        *(_QWORD *)(v40 + 24) = 399LL;
        WdLogEvent5_WdWarning(v40);
        v2 = -1073741801;
      }
    }
    else
    {
      v43 = v18[2];
      v72 = 0;
      v71 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v83, v18[2], 1, v44, 0);
      v68 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v83);
      if ( v68 >= 0 )
      {
        v51 = (const struct DXGDEVICE *)v18[2];
        v52 = *((_QWORD *)v51 + 216);
        if ( v52 )
        {
          if ( *((_BYTE *)Current + 322)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v52 + 2520), v51, v88.VidPnSourceId) )
          {
            v58 = v18[2];
            v59 = *(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL);
            if ( *(_QWORD *)(v58 + 1728) == v59 )
            {
              v2 = DXGCONTEXT::PresentMultiPlaneOverlay(
                     (DXGCONTEXT *)v18,
                     &v88,
                     (struct COREDEVICEACCESS *)v83,
                     (struct DXGCONTEXT **)P);
            }
            else
            {
              v60 = WdLogNewEntry5_WdWarning(v59, v58, v47);
              *(_QWORD *)(v60 + 24) = -1073741811LL;
              *(_QWORD *)(v60 + 32) = PsGetCurrentProcess(v62, v61);
              WdLogEvent5_WdWarning(v60);
            }
            v68 = v2;
            if ( v2 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v18[2], (struct COREDEVICEACCESS *)v83);
            COREACCESS::~COREACCESS((COREACCESS *)v85);
            COREACCESS::~COREACCESS((COREACCESS *)v84);
            if ( v72 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v86);
            if ( P != v74 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v75 = 0;
            if ( v69[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
            goto LABEL_64;
          }
          v68 = -1073741790;
          v55 = WdLogNewEntry5_WdError(v54);
          *(_QWORD *)(v55 + 24) = v68;
          *(_QWORD *)(v55 + 32) = PsGetCurrentProcess(v57, v56);
          v53 = v55;
        }
        else
        {
          v68 = -1073741811;
          v53 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v53 + 24) = v68;
        }
        WdLogEvent5_WdError(v53);
      }
      else
      {
        v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
        *(_QWORD *)(v48 + 24) = v68;
        *(_QWORD *)(v48 + 32) = PsGetCurrentProcess(v50, v49);
        WdLogEvent5_WdWarning(v48);
      }
      v2 = v68;
      COREACCESS::~COREACCESS((COREACCESS *)v85);
      COREACCESS::~COREACCESS((COREACCESS *)v84);
      if ( v72 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v86);
    goto LABEL_66;
  }
  while ( 1 )
  {
    v31 = (v88.BroadcastContext[v30] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *((_DWORD *)Current + 62) )
    {
      v32 = *((_QWORD *)Current + 29);
      v29 = *(unsigned int *)(v32 + 16 * v31 + 8);
      if ( ((v88.BroadcastContext[v30] >> 25) & 0x60) == (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60)
        && (v29 & 0x2000) == 0
        && (v29 & 0x1F) != 0 )
      {
        v29 &= 0x1Fu;
        if ( (_BYTE)v29 == 7 )
        {
          v34 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31);
          goto LABEL_31;
        }
        v33 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v33 + 24) = 316LL;
        WdLogEvent5_WdError(v33);
      }
    }
    v34 = 0LL;
LABEL_31:
    v35 = v30 + 1;
    *((_QWORD *)P + v35) = v34;
    v36 = *((_QWORD *)P + v35);
    if ( !v36 || (*(_DWORD *)(v36 + 396) & 8) != 0 || *(_QWORD *)(v36 + 16) != v18[2] )
      break;
    ++v30;
    if ( (unsigned int)v35 >= v88.BroadcastContextCount )
      goto LABEL_35;
  }
  v41 = (_QWORD *)WdLogNewEntry5_WdError(v29);
  v41[3] = v18;
  v41[4] = v88.BroadcastContext[v30];
  v41[5] = v30;
  v41[6] = -1073741811LL;
  WdLogEvent5_WdError(v41);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v70);
LABEL_66:
  if ( P != v74 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v75 = 0;
LABEL_70:
  if ( v69[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v69);
LABEL_72:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v82);
LABEL_73:
  operator delete[](v76);
  operator delete[](v77);
LABEL_74:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v78);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        v64,
        v66,
        *v80,
        v80[66],
        v80[67],
        v80[68],
        v80[69],
        v80[70],
        *v81);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v65, &EventProfilerExit, v66, v78);
  }
  return v2;
}
