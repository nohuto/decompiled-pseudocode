/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0246E9C
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01C4114 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000F778 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001A748 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00F711C (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127550 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C013429C (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C01F27D0 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C01F64A4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0246478 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C0246530 (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C02465E8 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C0247B6C (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C02482B4 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // edx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 Current; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _LIST_ENTRY *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _LIST_ENTRY **v24; // r13
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  const GUID *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  struct DXGADAPTER *Adapter; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  struct DXGDEVICE *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct DXGPROCESS *v42; // rax
  __int64 hDestination; // rcx
  struct _EX_RUNDOWN_REF *v44; // rbx
  struct _DXGKARG_PRESENT *v45; // rdx
  __int64 SubRectCnt; // rax
  _QWORD *v47; // rax
  struct DXGCONTEXT *v48; // rdx
  const struct _DXGKARG_PRESENT *v49; // r9
  struct _LIST_ENTRY *v50; // rcx
  __int64 v51; // rcx
  const GUID *v52; // r8
  struct COREDEVICEACCESS *AllocationType; // [rsp+20h] [rbp-128h]
  size_t Size; // [rsp+48h] [rbp-100h]
  PVOID BaseAddress; // [rsp+70h] [rbp-D8h] BYREF
  int v56; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v57; // [rsp+80h] [rbp-C8h]
  char v58; // [rsp+88h] [rbp-C0h]
  int v59; // [rsp+90h] [rbp-B8h]
  struct _EX_RUNDOWN_REF *v60; // [rsp+98h] [rbp-B0h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+A0h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v62; // [rsp+B0h] [rbp-98h]
  _QWORD v63[2]; // [rsp+B8h] [rbp-90h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v64; // [rsp+C8h] [rbp-80h] BYREF
  struct DXGDEVICE *v65; // [rsp+F0h] [rbp-58h]
  _BYTE v66[80]; // [rsp+F8h] [rbp-50h] BYREF
  BLTQUEUE *v67; // [rsp+150h] [rbp+8h] BYREF
  struct DXGCONTEXT *v68; // [rsp+158h] [rbp+10h]
  struct _D3DKMT_PRESENT *v69; // [rsp+160h] [rbp+18h]
  struct _DXGKARG_PRESENT *v70; // [rsp+168h] [rbp+20h]

  v70 = a4;
  v69 = a3;
  v68 = (struct DXGCONTEXT *)a2;
  v67 = this;
  v56 = -1;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 12000);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 12000);
  if ( (*((_DWORD *)this + 212) & 1) == 0 )
    goto LABEL_36;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a3->Flags.Value;
  if ( (*(_BYTE *)&Value & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v56);
    }
    LODWORD(Current) = -1073741811;
    return (unsigned int)Current;
  }
  v12 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 308LL);
  if ( (v12 & 0x10) != 0 )
  {
    if ( !*((_BYTE *)a2 + 433) )
      goto LABEL_25;
  }
  else if ( !*((_BYTE *)a2 + 433) )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    Current = -1073741811LL;
LABEL_14:
    *(_QWORD *)(v13 + 32) = this;
    *(_QWORD *)(v13 + 24) = Current;
    WdLogEvent5_WdError(v13);
LABEL_15:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v56);
    return (unsigned int)Current;
  }
  if ( (*(_BYTE *)&Value & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v56);
    return 3221225659LL;
  }
LABEL_25:
  if ( *((int *)this + 213) < 0 )
    goto LABEL_36;
  if ( (*(_BYTE *)&Value & 0x20) != 0 )
  {
    *((_BYTE *)this + 407) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = -1073741130LL;
      *(_QWORD *)(v20 + 32) = this;
      WdLogEvent5_WdError(v20);
LABEL_36:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v27, &EventProfilerExit, v28, v56);
      return 3221226166LL;
    }
  }
  LODWORD(BaseAddress) = 0;
  v21 = (struct _LIST_ENTRY *)((char *)this + 80);
  v62 = (struct _LIST_ENTRY *)((char *)this + 80);
  do
  {
    v24 = BLTQUEUE::RemoveQueueHead(this, v21);
    v63[0] = v24;
    if ( v24 )
      break;
    if ( (a3->Flags.Value & 0x10) != 0 )
    {
      v29 = WdLogNewEntry5_WdEvent(v23, v22);
      *(_QWORD *)(v29 + 24) = -1071775486LL;
      *(_QWORD *)(v29 + 32) = this;
      WdLogEvent5_WdEvent(v29);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v30, &EventProfilerExit, v31, v56);
      return 3223191810LL;
    }
    *((_BYTE *)this + 406) = 1;
    v25 = BLTQUEUE::IssueCommand(this);
    Current = v25;
    if ( v25 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v23);
      goto LABEL_14;
    }
    LODWORD(BaseAddress) = (_DWORD)BaseAddress + 1;
    v21 = v62;
  }
  while ( (unsigned int)BaseAddress < 3 );
  if ( !v24 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v26 + 24) = -1073741130LL;
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdAssertion(v26);
    goto LABEL_36;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v33 = BLTENTRY::SetupPresentParameters(
          (BLTENTRY *)v24,
          this,
          (struct DXGCONTEXT *)a2,
          a3,
          v70,
          a5,
          BYTE1(*((_DWORD *)Adapter + 77)) & 1);
  Current = v33;
  if ( v33 >= 0 )
  {
    if ( !*((_BYTE *)a2 + 433) )
    {
      if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 77) & 0x100) != 0 )
      {
        KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
        if ( (v69->Flags.Value & 8) != 0 )
          LODWORD(Current) = 0;
        else
          LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(
                               this,
                               v48,
                               v69,
                               v49,
                               AllocationType,
                               (struct BLTENTRY *)v24);
        KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
        goto LABEL_82;
      }
      BaseAddress = 0LL;
      v60 = (struct _EX_RUNDOWN_REF *)a2[7];
      v44 = v60 + 1;
      RegionSize[1] = (ULONG_PTR)&v60[1];
      if ( LODWORD(v60->Count) != -791674878
        || ((v69->Flags.Value & 4) == 0 ? (hDestination = v69->hDestination) : (hDestination = v69->hSource),
            LODWORD(v44->Count) != (_DWORD)hDestination) )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdError(hDestination);
        v47[3] = Current;
        v47[4] = a2;
        v47[5] = this;
        WdLogEvent5_WdError(v47);
        LODWORD(Current) = -1073741811;
        v59 = -1073741811;
        goto LABEL_82;
      }
      if ( (v69->Flags.Value & 4) != 0 )
      {
        memset(v44, 0, 0x48uLL);
        LODWORD(v44[1].Count) |= 4u;
      }
      else
      {
        v45 = v70;
        LODWORD(v60[2].Count) = v70->Flags.0;
        HIDWORD(v44[1].Ptr) = v45->Color;
        *(RECT *)&v44[4].Count = v45->DstRect;
        *(RECT *)&v44[2].Count = v45->SrcRect;
        v65 = a2[6];
        SubRectCnt = v45->SubRectCnt;
        if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v65 - 80) >> 4) )
        {
          RegionSize[0] = 16 * SubRectCnt;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
            goto LABEL_82;
          v45 = v70;
        }
        else
        {
          BaseAddress = (char *)&v44[6].Ptr + 4;
        }
        memmove(BaseAddress, v45->pDstSubRects, 16LL * v45->SubRectCnt);
        LODWORD(v44[6].Count) = v70->SubRectCnt;
        v44->Count = (ULONG_PTR)BaseAddress;
      }
      LODWORD(v60->Count) = -791674877;
      goto LABEL_82;
    }
    v36 = a2[2];
    BaseAddress = *(PVOID *)(*((_QWORD *)v36 + 2) + 16LL);
    LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v36, a3->hSource, (PERESOURCE **)a5);
    if ( (int)Current < 0 )
    {
      v35 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v35 + 24) = 974LL;
      goto LABEL_47;
    }
    Current = (__int64)DXGPROCESS::GetCurrent();
    RegionSize[0] = Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v60, a3->hSource);
    LODWORD(Size) = 0;
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4152),
                         (struct DXGPROCESS *)Current,
                         (struct DXGCONTEXT *)a2,
                         v60[12].Count,
                         *((_DWORD *)this + 659),
                         &a3->SrcRect,
                         &a3->SrcRect,
                         1u,
                         &a3->SrcRect,
                         Size,
                         0LL);
    if ( (int)Current >= 0 )
    {
      ++*((_QWORD *)this + 335);
      LODWORD(v67) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4152),
                           (struct DXGPROCESS *)RegionSize[0],
                           1u,
                           (const unsigned int *)this + 666,
                           0,
                           1u,
                           (unsigned int *)&v67,
                           (unsigned __int64 *)this + 335,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      if ( (int)Current >= 0 )
      {
        memset(&v64, 0, sizeof(v64));
        v64.FenceValueArray = (const UINT64 *)((char *)this + 2680);
        v64.hDevice = *((_DWORD *)a2[2] + 83);
        v64.ObjectCount = 1;
        v64.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)this + 2664);
        LODWORD(Current) = DxgkWaitForSynchronizationObjectFromCpuInternal(&v64, 0, 0LL);
        v59 = Current;
        if ( (int)Current >= 0 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v63, (BLTQUEUE *)((char *)this + 632), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v63);
          v42 = DXGPROCESS::GetCurrent();
          DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v66, v42);
          if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
          {
            LODWORD(Current) = -1073741823;
          }
          else
          {
            *((_DWORD *)v24 + 22) = 4;
            *((_DWORD *)v24 + 18) = a3->VidPnSourceId;
            *((_DWORD *)v24 + 23) = *((_DWORD *)this + 661);
            v24[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 332);
            LODWORD(Current) = v59;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v66);
          DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v63);
          goto LABEL_62;
        }
        v39 = WdLogNewEntry5_WdError(v41);
        *(_QWORD *)(v39 + 24) = 1029LL;
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v40);
        *(_QWORD *)(v39 + 24) = 1012LL;
      }
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v38);
      *(_QWORD *)(v39 + 24) = 992LL;
    }
    WdLogEvent5_WdError(v39);
LABEL_62:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60);
    goto LABEL_82;
  }
  v35 = WdLogNewEntry5_WdError(v34);
  *(_QWORD *)(v35 + 24) = Current;
  *(_QWORD *)(v35 + 32) = this;
LABEL_47:
  WdLogEvent5_WdError(v35);
LABEL_82:
  if ( (int)Current < 0 )
  {
    v50 = v24[5];
    if ( v50 )
    {
      ObfDereferenceObject(v50);
      v24[5] = 0LL;
    }
    if ( v24[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v24, 0);
    BLTQUEUE::InsertQueueHead(this, v62, (struct BLTENTRY *)v24);
    goto LABEL_15;
  }
  BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 4, (struct BLTENTRY *)v24);
  *((LARGE_INTEGER *)this + 93) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 352), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v51, &EventProfilerExit, v52, v56);
  return 0LL;
}
