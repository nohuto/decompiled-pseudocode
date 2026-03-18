/*
 * XREFs of ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720
 * Callers:
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01F301C (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004614 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000C434 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001B890 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F2030 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0124AA4 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C01422F8 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C02224A0 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C02264D4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C027BC44 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C027BCFC (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C027BDB4 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027BFD0 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C027D410 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C027DCB4 (-SetupPresentParameters@BLTENTRY@@QEAAJPEAVBLTQUEUE@@PEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_D.c)
 */

__int64 __fastcall BLTQUEUE::Present(
        BLTQUEUE *this,
        struct DXGDEVICE **a2,
        struct _D3DKMT_PRESENT *a3,
        struct _DXGKARG_PRESENT *a4,
        struct COREDEVICEACCESS *a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 Current; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _LIST_ENTRY **v30; // r13
  __int64 Value; // rcx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  struct DXGADAPTER *Adapter; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 hDestination; // rdx
  struct _D3DKMT_PRESENT *v46; // rcx
  __int64 v47; // r8
  struct DXGCONTEXT *v48; // rdx
  const struct _DXGKARG_PRESENT *v49; // r9
  struct DXGDEVICE *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct DXGPROCESS *v67; // rax
  struct _EX_RUNDOWN_REF *v68; // rbx
  struct _DXGKARG_PRESENT *v69; // rdx
  __int64 SubRectCnt; // rax
  _QWORD *v71; // rax
  struct _LIST_ENTRY *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  const GUID *v75; // r8
  struct COREDEVICEACCESS *Timeout; // [rsp+20h] [rbp-128h]
  size_t Size; // [rsp+48h] [rbp-100h]
  PVOID BaseAddress; // [rsp+70h] [rbp-D8h] BYREF
  int v79; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v80; // [rsp+80h] [rbp-C8h]
  char v81; // [rsp+88h] [rbp-C0h]
  int v82; // [rsp+90h] [rbp-B8h]
  struct _EX_RUNDOWN_REF *v83; // [rsp+98h] [rbp-B0h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+A0h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v85; // [rsp+B0h] [rbp-98h]
  _QWORD v86[2]; // [rsp+B8h] [rbp-90h] BYREF
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v87; // [rsp+C8h] [rbp-80h] BYREF
  struct DXGDEVICE *v88; // [rsp+F0h] [rbp-58h]
  _BYTE v89[80]; // [rsp+F8h] [rbp-50h] BYREF
  BLTQUEUE *v90; // [rsp+150h] [rbp+8h] BYREF
  struct DXGCONTEXT *v91; // [rsp+158h] [rbp+10h]
  struct _D3DKMT_PRESENT *v92; // [rsp+160h] [rbp+18h]
  struct _DXGKARG_PRESENT *v93; // [rsp+168h] [rbp+20h]

  v93 = a4;
  v92 = a3;
  v91 = (struct DXGCONTEXT *)a2;
  v90 = this;
  v79 = -1;
  v80 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v81 = 1;
    v79 = 12000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, (const GUID *)a3, 12000);
  }
  else
  {
    v81 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v79, 12000LL);
  if ( (*((_DWORD *)this + 212) & 1) == 0 )
    goto LABEL_6;
  LODWORD(v12) = a3->Flags.0;
  if ( (v12 & 7) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v79, v8);
    if ( v81 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v79);
    return -1073741811LL;
  }
  LOBYTE(v8) = *((_BYTE *)a2 + 449);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2[2] + 2) + 16LL) + 308LL) & 0x10) != 0 )
    goto LABEL_24;
  if ( !(_BYTE)v8 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 77) & 0x100) == 0 )
    {
      v16 = WdLogNewEntry5_WdError(v15, v8, v12);
      Current = -1073741811LL;
LABEL_19:
      *(_QWORD *)(v16 + 24) = Current;
      *(_QWORD *)(v16 + 32) = this;
      WdLogEvent5_WdError(v16);
LABEL_20:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v79, v18);
      if ( v81 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v19, &EventProfilerExit, v20, v79);
      return (unsigned int)Current;
    }
LABEL_24:
    if ( !(_BYTE)v8 )
      goto LABEL_30;
  }
  if ( (v12 & 4) == 0 )
  {
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v79, v8);
    if ( v81 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v79);
    return 3221225659LL;
  }
LABEL_30:
  if ( *((int *)this + 213) < 0 )
  {
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v79, v8);
    if ( v81 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v9, &EventProfilerExit, v10, v79);
    }
    return 3221226166LL;
  }
  if ( (v12 & 0x20) != 0 )
  {
    *((_BYTE *)this + 407) = 1;
    if ( (int)BLTQUEUE::IssueCommand(this) < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v24, v23, v25);
      *(_QWORD *)(v26 + 24) = -1073741130LL;
      *(_QWORD *)(v26 + 32) = this;
      WdLogEvent5_WdError(v26);
      goto LABEL_6;
    }
  }
  LODWORD(BaseAddress) = 0;
  v27 = (struct _LIST_ENTRY *)((char *)this + 80);
  v85 = (struct _LIST_ENTRY *)((char *)this + 80);
  do
  {
    v30 = BLTQUEUE::RemoveQueueHead(this, v27);
    v86[0] = v30;
    if ( v30 )
      break;
    Value = a3->Flags.Value;
    if ( (Value & 0x10) != 0 )
    {
      v35 = WdLogNewEntry5_WdEvent(Value);
      *(_QWORD *)(v35 + 24) = -1071775486LL;
      *(_QWORD *)(v35 + 32) = this;
      WdLogEvent5_WdEvent(v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v79, v36);
      if ( v81 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v37, &EventProfilerExit, v38, v79);
      return 3223191810LL;
    }
    *((_BYTE *)this + 406) = 1;
    v32 = BLTQUEUE::IssueCommand(this);
    Current = v32;
    if ( v32 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v29, v28, v33);
      goto LABEL_19;
    }
    LODWORD(BaseAddress) = (_DWORD)BaseAddress + 1;
    v27 = v85;
  }
  while ( (unsigned int)BaseAddress < 3 );
  if ( !v30 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v29, v28);
    *(_QWORD *)(v34 + 24) = -1073741130LL;
    *(_QWORD *)(v34 + 32) = this;
    WdLogEvent5_WdAssertion(v34);
    goto LABEL_6;
  }
  Adapter = DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this);
  v40 = BLTENTRY::SetupPresentParameters(
          (BLTENTRY *)v30,
          this,
          (struct DXGCONTEXT *)a2,
          a3,
          v93,
          a5,
          BYTE1(*((_DWORD *)Adapter + 77)) & 1);
  Current = v40;
  if ( v40 >= 0 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 77) & 0x100) != 0 )
    {
      KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
      if ( (v92->Flags.Value & 8) != 0 )
        LODWORD(Current) = 0;
      else
        LODWORD(Current) = BLTQUEUE::PreparePresentIndirect(this, v48, v92, v49, Timeout, (struct BLTENTRY *)v30);
      KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
      goto LABEL_83;
    }
    if ( !*((_BYTE *)a2 + 449) )
    {
      BaseAddress = 0LL;
      v83 = (struct _EX_RUNDOWN_REF *)a2[7];
      v68 = v83 + 1;
      RegionSize[1] = (ULONG_PTR)&v83[1];
      if ( LODWORD(v83->Count) != -791674878
        || ((v46 = v92, (v92->Flags.Value & 4) == 0)
          ? (hDestination = v92->hDestination)
          : (hDestination = v92->hSource),
            LODWORD(v68->Count) != (_DWORD)hDestination) )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v46, hDestination, v47);
        v71[3] = Current;
        v71[4] = a2;
        v71[5] = this;
        WdLogEvent5_WdError(v71);
        LODWORD(Current) = -1073741811;
        v82 = -1073741811;
        goto LABEL_83;
      }
      if ( (v92->Flags.Value & 4) != 0 )
      {
        memset(v68, 0, 0x48uLL);
        LODWORD(v68[1].Count) |= 4u;
      }
      else
      {
        v69 = v93;
        LODWORD(v83[2].Count) = v93->Flags.0;
        HIDWORD(v68[1].Ptr) = v69->Color;
        *(RECT *)&v68[4].Count = v69->DstRect;
        *(RECT *)&v68[2].Count = v69->SrcRect;
        v88 = a2[6];
        SubRectCnt = v69->SubRectCnt;
        if ( (unsigned int)SubRectCnt > (unsigned int)(((unsigned __int64)(unsigned int)v88 - 80) >> 4) )
        {
          RegionSize[0] = 16 * SubRectCnt;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u) < 0 )
            goto LABEL_83;
          v69 = v93;
        }
        else
        {
          BaseAddress = (char *)&v68[6].Ptr + 4;
        }
        memmove(BaseAddress, v69->pDstSubRects, 16LL * v69->SubRectCnt);
        LODWORD(v68[6].Count) = v93->SubRectCnt;
        v68->Count = (ULONG_PTR)BaseAddress;
      }
      LODWORD(v83->Count) = -791674877;
      goto LABEL_83;
    }
    v50 = a2[2];
    BaseAddress = *(PVOID *)(*((_QWORD *)v50 + 2) + 16LL);
    LODWORD(Current) = BLTQUEUE::PrepareStagingBuffer(this, v50, a3->hSource, (PERESOURCE **)a5);
    if ( (int)Current < 0 )
    {
      v44 = WdLogNewEntry5_WdError(v52, v51, v53);
      *(_QWORD *)(v44 + 24) = 1030LL;
      goto LABEL_48;
    }
    Current = (__int64)DXGPROCESS::GetCurrent(v52, v51);
    RegionSize[0] = Current;
    DXGPROCESS::GetAllocationSafe(Current, (DXGALLOCATIONREFERENCE *)&v83, a3->hSource);
    LODWORD(Size) = 0;
    LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4144),
                         (struct DXGPROCESS *)Current,
                         (struct DXGCONTEXT *)a2,
                         v83[12].Count,
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
      LODWORD(v90) = *((_DWORD *)a2 + 6);
      LODWORD(Current) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)((char *)BaseAddress + 4144),
                           (struct DXGPROCESS *)RegionSize[0],
                           1LL,
                           (const unsigned int *)this + 666,
                           0,
                           1u,
                           (unsigned int *)&v90,
                           (unsigned __int64 *)this + 335,
                           0LL,
                           0LL,
                           0,
                           0,
                           0LL);
      if ( (int)Current >= 0 )
      {
        *(_QWORD *)&v87.hDevice = 0LL;
        v87.ObjectHandleArray = 0LL;
        *(_OWORD *)&v87.hAsyncEvent = 0LL;
        v87.FenceValueArray = (const UINT64 *)((char *)this + 2680);
        v87.hDevice = *((_DWORD *)a2[2] + 83);
        v87.ObjectCount = 1;
        v87.ObjectHandleArray = (const D3DKMT_HANDLE *)((char *)this + 2664);
        LODWORD(Current) = DxgkWaitForSynchronizationObjectFromCpuInternal(&v87, 0, 0LL);
        v82 = Current;
        if ( (int)Current >= 0 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v86, (BLTQUEUE *)((char *)this + 632), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v86);
          v67 = DXGPROCESS::GetCurrent(v66, v65);
          DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v89, v67);
          if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
          {
            LODWORD(Current) = -1073741823;
          }
          else
          {
            *((_DWORD *)v30 + 22) = 4;
            *((_DWORD *)v30 + 18) = a3->VidPnSourceId;
            *((_DWORD *)v30 + 23) = *((_DWORD *)this + 661);
            v30[10] = (struct _LIST_ENTRY *)*((_QWORD *)this + 332);
            LODWORD(Current) = v82;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v89);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v86);
          goto LABEL_68;
        }
        v57 = WdLogNewEntry5_WdError(v63, v62, v64);
        *(_QWORD *)(v57 + 24) = 1085LL;
      }
      else
      {
        v57 = WdLogNewEntry5_WdError(v60, v59, v61);
        *(_QWORD *)(v57 + 24) = 1068LL;
      }
    }
    else
    {
      v57 = WdLogNewEntry5_WdError(v55, v54, v56);
      *(_QWORD *)(v57 + 24) = 1048LL;
    }
    WdLogEvent5_WdError(v57);
LABEL_68:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v83, v58);
    goto LABEL_83;
  }
  v44 = WdLogNewEntry5_WdError(v42, v41, v43);
  *(_QWORD *)(v44 + 24) = Current;
  *(_QWORD *)(v44 + 32) = this;
LABEL_48:
  WdLogEvent5_WdError(v44);
LABEL_83:
  if ( (int)Current < 0 )
  {
    v72 = v30[5];
    if ( v72 )
    {
      ObfDereferenceObject(v72);
      v30[5] = 0LL;
    }
    if ( v30[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)v30, 0);
    BLTQUEUE::InsertQueueHead(this, v85, (struct BLTENTRY *)v30);
    goto LABEL_20;
  }
  BLTQUEUE::InsertQueueTail(this, (struct _LIST_ENTRY *)this + 4, (struct BLTENTRY *)v30);
  *((LARGE_INTEGER *)this + 93) = KeQueryPerformanceCounter(0LL);
  KeSetEvent((PRKEVENT)((char *)this + 352), 0, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v79, v73);
  if ( v81 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v74, &EventProfilerExit, v75, v79);
  return 0LL;
}
