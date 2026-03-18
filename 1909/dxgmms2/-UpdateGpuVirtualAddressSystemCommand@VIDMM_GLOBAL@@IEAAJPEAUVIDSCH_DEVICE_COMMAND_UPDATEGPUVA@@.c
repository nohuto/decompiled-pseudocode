/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0564
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002474 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00027A8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00117A4 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00180B4 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00180D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0024F2C (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchGetPagingContext @ 0x1C0032E2C (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037DA0 (VidSchSubmitSignalToHwQueue.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0A8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006D890 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C006DDE0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00744BC (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0079770 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00B75B8 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00B9418 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00B959C (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(VIDMM_GLOBAL *this, char *P, GUID *a3)
{
  unsigned __int64 v3; // r15
  VIDMM_GLOBAL *v5; // r12
  int v6; // edi
  struct _KTHREAD **v7; // r13
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  struct _LIST_ENTRY **v17; // rax
  struct _LIST_ENTRY *v18; // rcx
  struct _LIST_ENTRY *Blink; // r14
  unsigned int v20; // ecx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v21; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  _QWORD **v23; // r14
  volatile signed __int32 *v24; // r12
  volatile signed __int32 *v25; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  _QWORD *v33; // rcx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  char *v38; // r14
  volatile signed __int32 *v39; // r12
  volatile signed __int32 *v40; // rsi
  __int64 **v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rcx
  int v44; // eax
  int v45; // edi
  struct _MDL *v46; // rax
  unsigned __int64 v47; // rcx
  int v48; // r8d
  __int64 v49; // rdx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rax
  struct VIDMM_MAPPED_VA_RANGE *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  volatile signed __int32 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  volatile signed __int32 *v64; // rax
  __int64 v65; // rcx
  bool v66; // zf
  struct VIDMM_ALLOC *v67; // r8
  _QWORD *v68; // r11
  int v69; // eax
  struct _MDL *v70; // r10
  unsigned __int64 AllocationOffsetInBytes; // r9
  int v72; // r12d
  __int64 v73; // rcx
  int v74; // eax
  struct _MDL *FullMDL; // rax
  __int64 v76; // rax
  unsigned int v77; // ecx
  char *v78; // r13
  struct VIDMM_MAPPED_VA_RANGE *v79; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  struct _LIST_ENTRY *v83; // rdx
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  _QWORD *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  unsigned int v104; // ebx
  __int64 v105; // rcx
  const GUID *v106; // r8
  unsigned __int64 v108; // [rsp+40h] [rbp-89h]
  CVirtualAddressAllocator *v109; // [rsp+48h] [rbp-81h]
  struct _LIST_ENTRY *v110; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v111; // [rsp+58h] [rbp-71h]
  __int64 PagingContext; // [rsp+60h] [rbp-69h] BYREF
  _BYTE *v113; // [rsp+68h] [rbp-61h] BYREF
  struct _LIST_ENTRY *v114; // [rsp+70h] [rbp-59h] BYREF
  struct _LIST_ENTRY **v115; // [rsp+78h] [rbp-51h]
  unsigned __int64 v116; // [rsp+80h] [rbp-49h]
  struct _MDL *v117; // [rsp+88h] [rbp-41h]
  __int64 v118; // [rsp+90h] [rbp-39h] BYREF
  _QWORD *v119; // [rsp+98h] [rbp-31h] BYREF
  __int64 v120; // [rsp+A0h] [rbp-29h] BYREF
  int v121; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v122; // [rsp+B0h] [rbp-19h]
  char v123; // [rsp+B8h] [rbp-11h]
  _BYTE v124[96]; // [rsp+C0h] [rbp-9h] BYREF
  unsigned int v126; // [rsp+138h] [rbp+6Fh]
  unsigned __int64 v128; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = -1LL;
  v5 = this;
  v121 = -1;
  v122 = 0LL;
  if ( (qword_1C004E010 & 2) != 0 )
  {
    v123 = 1;
    v121 = 8011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8011);
  }
  else
  {
    v123 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v6 = 0;
  LOBYTE(v126) = 0;
  v7 = (struct _KTHREAD **)**((_QWORD **)P + 11);
  v109 = (CVirtualAddressAllocator *)v7;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v124, v7 + 7);
  if ( !*((_QWORD *)P + 14) )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    WdLogEvent5_WdEvent(v10);
    v6 = -1073741823;
    LOBYTE(v126) = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)P + 8);
  if ( P[176] )
  {
    if ( !*((_QWORD *)P + 15) )
    {
      v13 = WdLogNewEntry5_WdEvent(v12, v11);
      WdLogEvent5_WdEvent(v13);
      v6 = -1073741823;
      LOBYTE(v126) = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)(P + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v124);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v14 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0) )
    v6 = -1073741823;
  if ( v6 < 0 )
  {
    v20 = v126;
    goto LABEL_34;
  }
  v15 = *((_QWORD *)P + 14);
  v16 = *((unsigned int *)P + 4);
  v120 = v16;
  v108 = 0LL;
  v118 = 3 * (v16 + 4);
  v17 = (struct _LIST_ENTRY **)(v15 + 24 * (v16 + 4));
  v18 = *v17;
  v115 = v17;
  if ( v18 == (struct _LIST_ENTRY *)v17 )
  {
    Blink = (struct _LIST_ENTRY *)(v15 + 24 * (v120 + 4));
  }
  else
  {
    Blink = *(struct _LIST_ENTRY **)(v15 + 24 * v16 + 112);
    if ( !Blink )
      Blink = v18;
  }
  v110 = Blink;
  if ( *((_QWORD *)v5 + 5115) )
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      v5,
      0,
      v7[11],
      *(struct _VIDSCH_CONTEXT **)P,
      *((_DWORD *)P + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)P + 9),
      *((_QWORD *)P + 10));
  v20 = *((_DWORD *)P + 9);
  LODWORD(v128) = v20;
  if ( v20 < *((_DWORD *)P + 5) )
  {
LABEL_22:
    v21 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)P + 3) + ((unsigned __int64)v20 << 6));
    OperationType = v21->OperationType;
    if ( v21->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      v66 = *((_QWORD *)v5 + 5115) == 0LL;
      v67 = *(struct VIDMM_ALLOC **)(*((_QWORD *)P + 8) + 8LL * v21->Map.hAllocation);
      PagingContext = (__int64)v67;
      v68 = **(_QWORD ***)v67;
      v113 = v68;
      if ( !v66 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v5, v7[11], *(struct _VIDSCH_CONTEXT **)P, v67, v21);
        v67 = (struct VIDMM_ALLOC *)PagingContext;
        v68 = v113;
      }
      v69 = *((_DWORD *)v67 + 7);
      v70 = 0LL;
      AllocationOffsetInBytes = 0LL;
      v117 = 0LL;
      v116 = 0LL;
      v72 = 0;
      if ( (v69 & 3) == 2 )
      {
        v73 = v68[17];
        v74 = *(_DWORD *)(v73 + 80);
        if ( (v74 & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v68, 0LL);
          AllocationOffsetInBytes = v21->Map.AllocationOffsetInBytes;
          v70 = FullMDL;
          v67 = (struct VIDMM_ALLOC *)PagingContext;
          v117 = FullMDL;
        }
        else
        {
          if ( (v74 & 0x1000) == 0 )
            v72 = *(_DWORD *)(v73 + 16) + 1;
          AllocationOffsetInBytes = v21->Map.AllocationOffsetInBytes + v68[18];
          v117 = 0LL;
        }
        v116 = AllocationOffsetInBytes;
      }
      if ( (*((_BYTE *)this + 40873) & 4) != 0 )
        v76 = 1LL;
      else
        v76 = v21->Map.SizeInBytes / v21->Map.AllocationSizeInBytes;
      v77 = *((_DWORD *)P + 10);
      v114 = (struct _LIST_ENTRY *)v76;
      v111 = v77;
      if ( v77 >= (unsigned int)v76 )
        goto LABEL_125;
      v78 = P + 96;
      while ( 1 )
      {
        v119 = *(_QWORD **)v78;
        v79 = (struct VIDMM_MAPPED_VA_RANGE *)(v119 - 1);
        v80 = (struct VIDMM_MAPPED_VA_RANGE *)(v119 - 1);
        if ( (*((_DWORD *)v67 + 7) & 3) == 2 )
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 v109,
                 v80,
                 v113[76] & 0x3F,
                 v72,
                 AllocationOffsetInBytes,
                 v70,
                 0,
                 (struct VIDMM_ALLOC **)a3);
          if ( v6 < 0 )
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v87, v86);
            v94[3] = *((_QWORD *)v79 + 12);
            v95 = *((_QWORD *)v79 + 13);
            v94[5] = 24361LL;
LABEL_123:
            v94[4] = v95;
            WdLogEvent5_WdWarning(v94);
LABEL_124:
            v7 = (struct _KTHREAD **)v109;
LABEL_125:
            v20 = v128;
LABEL_126:
            if ( v6 >= 0 )
            {
              ++v20;
              *((_DWORD *)P + 10) = 0;
              LODWORD(v128) = v20;
              if ( v20 < *((_DWORD *)P + 5) )
              {
                v5 = this;
                goto LABEL_22;
              }
            }
LABEL_31:
            if ( v3 < v108 )
              CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v7, *((_DWORD *)P + 4), v3, v108);
            v20 = v128;
            v5 = this;
            goto LABEL_34;
          }
          v83 = (struct _LIST_ENTRY *)*((_QWORD *)v79 + 12);
          v88 = (unsigned __int64)v83;
          if ( v3 < (unsigned __int64)v83 )
            v88 = v3;
          v3 = v88;
          if ( v108 <= *((_QWORD *)v79 + 13) )
            v108 = *((_QWORD *)v79 + 13);
        }
        else
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(v109, v80, (struct VIDMM_ALLOC **)a3, 0);
          if ( v6 < 0 )
          {
            v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v81);
            v94[3] = *((_QWORD *)v79 + 12);
            v95 = *((_QWORD *)v79 + 13);
            goto LABEL_123;
          }
          v83 = (struct _LIST_ENTRY *)*((_QWORD *)v79 + 12);
          v84 = *((_QWORD *)v79 + 13);
          v85 = (unsigned __int64)v83;
          if ( v3 < (unsigned __int64)v83 )
            v85 = v3;
          v3 = v85;
          if ( v108 > v84 )
            v84 = v108;
          v108 = v84;
        }
        if ( *v115 != (struct _LIST_ENTRY *)v115 )
        {
          if ( v83 < Blink[5].Blink )
            Blink = *v115;
          v110 = Blink;
        }
        v89 = *(_QWORD **)v78;
        if ( *(char **)(*(_QWORD *)v78 + 8LL) != v78 )
          goto LABEL_131;
        v90 = *v89;
        if ( *(_QWORD **)(*v89 + 8LL) != v89 )
          goto LABEL_131;
        v91 = v119;
        *(_QWORD *)v78 = v90;
        *(_QWORD *)(v90 + 8) = v78;
        *((_QWORD *)v79 + 2) = 0LL;
        *v91 = 0LL;
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               (struct _KTHREAD **)v109,
               *((struct VIDMM_VAD **)P + 14),
               *((_DWORD *)P + 4),
               &v110,
               v79);
        if ( v6 < 0 )
        {
          v96 = WdLogNewEntry5_WdWarning(v93, v92);
          WdLogEvent5_WdWarning(v96);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)v79);
          Blink = v110;
          goto LABEL_124;
        }
        Blink = v110->Blink;
        v110 = Blink;
        *(_QWORD *)(*((_QWORD *)P + 14) + 24 * v120 + 112) = Blink;
        if ( ++v111 >= (unsigned int)v114 )
          goto LABEL_124;
        AllocationOffsetInBytes = v116;
        v70 = v117;
        v67 = (struct VIDMM_ALLOC *)PagingContext;
      }
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      if ( *((_QWORD *)v5 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v5, v7[11], *(struct _VIDSCH_CONTEXT **)P, 0LL, v21);
      v23 = (_QWORD **)(P + 96);
      v24 = (volatile signed __int32 *)*((_QWORD *)P + 12);
      v25 = v24 - 2;
      v26 = (struct VIDMM_MAPPED_VA_RANGE *)(v24 - 2);
      if ( (v24[20] & 8) != 0 )
      {
        v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
               (CVirtualAddressAllocator *)v7,
               v26,
               (struct VIDMM_ALLOC **)a3,
               0);
        if ( v6 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27);
          v29[3] = *((_QWORD *)v25 + 12);
          v29[4] = *((_QWORD *)v25 + 13);
          v29[5] = 24425LL;
LABEL_30:
          WdLogEvent5_WdWarning(v29);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v24 - 2);
          goto LABEL_31;
        }
      }
      else
      {
        v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
               (CVirtualAddressAllocator *)v7,
               v26,
               0,
               -2,
               0LL,
               0LL,
               0,
               (struct VIDMM_ALLOC **)a3);
        if ( v6 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30);
          v29[3] = *((_QWORD *)v25 + 12);
          v29[4] = *((_QWORD *)v25 + 13);
          v29[5] = 24439LL;
          goto LABEL_30;
        }
      }
      v32 = *((_QWORD *)v25 + 12);
      v33 = *v23;
      if ( v3 < v32 )
        v32 = v3;
      v3 = v32;
      v34 = *((_QWORD *)v25 + 13);
      if ( v108 > v34 )
        v34 = v108;
      v108 = v34;
      if ( (_QWORD **)v33[1] != v23 || (v35 = (_QWORD *)*v33, *(_QWORD **)(*v33 + 8LL) != v33) )
LABEL_131:
        __fastfail(3u);
      *v23 = v35;
      v35[1] = v23;
      *(_QWORD *)v24 = 0LL;
      *((_QWORD *)v25 + 2) = 0LL;
      v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             v7,
             *((struct VIDMM_VAD **)P + 14),
             *((_DWORD *)P + 4),
             0LL,
             (struct VIDMM_MAPPED_VA_RANGE *)(v24 - 2));
      if ( v6 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36);
        goto LABEL_30;
      }
LABEL_44:
      Blink = *v115;
      v110 = *v115;
      goto LABEL_125;
    }
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      goto LABEL_126;
    if ( *((_QWORD *)v5 + 5115) )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v5, v7[11], *(struct _VIDSCH_CONTEXT **)P, 0LL, v21);
    v38 = P + 48;
    if ( *(char **)v38 == v38 )
      v6 = CVirtualAddressAllocator::BuildVaRangeList(
             (CVirtualAddressAllocator *)v7,
             *((struct VIDMM_VAD **)P + 15),
             *((struct VIDMM_VAD **)P + 14),
             *((_DWORD *)P + 4),
             (struct _LIST_ENTRY *)P + 3,
             v21->Map.BaseAddress,
             v21->Map.BaseAddress + v21->Map.SizeInBytes,
             v21->Unmap.Protection.Value);
    if ( v6 < 0 )
    {
LABEL_80:
      if ( v6 != -1073741267 )
      {
        while ( 1 )
        {
          v64 = *(volatile signed __int32 **)v38;
          if ( *(char **)v38 == v38 )
            break;
          if ( *((char **)v64 + 1) != v38 )
            goto LABEL_131;
          v65 = *(_QWORD *)v64;
          if ( *(volatile signed __int32 **)(*(_QWORD *)v64 + 8LL) != v64 )
            goto LABEL_131;
          *(_QWORD *)v38 = v65;
          *(_QWORD *)(v65 + 8) = v38;
          *((_QWORD *)v64 + 1) = 0LL;
          *(_QWORD *)v64 = 0LL;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v64 - 2);
        }
      }
      goto LABEL_44;
    }
    v114 = *(struct _LIST_ENTRY **)(*((_QWORD *)P + 14) + 8 * v118);
    while ( 1 )
    {
      v39 = *(volatile signed __int32 **)v38;
      if ( *(char **)v38 == v38 || v6 < 0 )
        goto LABEL_80;
      v40 = v39 - 2;
      v41 = (__int64 **)*((_QWORD *)v39 + 6);
      if ( !v41 )
        break;
      v42 = **v41;
      if ( (*((_DWORD *)v41 + 7) & 3) == 2 )
      {
        v43 = *(_QWORD *)(v42 + 136);
        v44 = *(_DWORD *)(v43 + 80);
        if ( (v44 & 0x1001) != 0 )
        {
          v45 = 0;
          v46 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v42, 0LL);
          v47 = *((_QWORD *)v40 + 9);
        }
        else
        {
          if ( (v44 & 0x1000) != 0 )
            v45 = 0;
          else
            v45 = *(_DWORD *)(v43 + 16) + 1;
          v46 = 0LL;
          v47 = *((_QWORD *)v40 + 9) + *(_QWORD *)(v42 + 144);
        }
        v48 = *(_DWORD *)(v42 + 76) & 0x3F;
        v7 = (struct _KTHREAD **)v109;
        v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
               v109,
               (struct VIDMM_MAPPED_VA_RANGE *)(v39 - 2),
               v48,
               v45,
               v47,
               v46,
               0,
               (struct VIDMM_ALLOC **)a3);
        if ( v6 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49);
          v51[3] = *((_QWORD *)v40 + 12);
          v52 = *((_QWORD *)v40 + 13);
          v51[5] = 24529LL;
          goto LABEL_64;
        }
        goto LABEL_65;
      }
      v7 = (struct _KTHREAD **)v109;
LABEL_75:
      if ( v6 >= 0 )
      {
        v59 = *(volatile signed __int32 **)v38;
        if ( *(char **)(*(_QWORD *)v38 + 8LL) != v38 )
          goto LABEL_131;
        v60 = *(_QWORD *)v59;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v59 + 8LL) != v59 )
          goto LABEL_131;
        *(_QWORD *)v38 = v60;
        *(_QWORD *)(v60 + 8) = v38;
        *(_QWORD *)v39 = 0LL;
        *((_QWORD *)v40 + 2) = 0LL;
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               v7,
               *((struct VIDMM_VAD **)P + 14),
               *((_DWORD *)P + 4),
               &v114,
               (struct VIDMM_MAPPED_VA_RANGE *)(v39 - 2));
        if ( v6 < 0 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61);
          v63[3] = *((_QWORD *)v40 + 12);
          v63[4] = *((_QWORD *)v40 + 13);
          v63[5] = 24569LL;
          WdLogEvent5_WdWarning(v63);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v39 - 2);
        }
      }
    }
    v54 = (struct VIDMM_MAPPED_VA_RANGE *)(v39 - 2);
    if ( (v40[22] & 8) != 0 )
    {
      v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
             (CVirtualAddressAllocator *)v7,
             v54,
             (struct VIDMM_ALLOC **)a3,
             0);
      if ( v6 >= 0 )
        goto LABEL_65;
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55);
      v51[3] = *((_QWORD *)v40 + 12);
      v52 = *((_QWORD *)v40 + 13);
      v51[5] = 24542LL;
    }
    else
    {
      v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
             (CVirtualAddressAllocator *)v7,
             v54,
             0,
             -2,
             0LL,
             0LL,
             0,
             (struct VIDMM_ALLOC **)a3);
      if ( v6 >= 0 )
        goto LABEL_65;
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57);
      v51[3] = *((_QWORD *)v40 + 12);
      v52 = *((_QWORD *)v40 + 13);
      v51[5] = 24555LL;
    }
LABEL_64:
    v51[4] = v52;
    WdLogEvent5_WdWarning(v51);
LABEL_65:
    v53 = *((_QWORD *)v40 + 12);
    if ( v3 < v53 )
      v53 = v3;
    v3 = v53;
    if ( v108 <= *((_QWORD *)v40 + 13) )
      v108 = *((_QWORD *)v40 + 13);
    goto LABEL_75;
  }
LABEL_34:
  if ( v6 == -1073741267 )
  {
    *((_DWORD *)P + 9) = v20;
    goto LABEL_141;
  }
  if ( *((_QWORD *)P + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)P + 4), 0, 0LL, 0LL, 0, 0);
    v97 = *((unsigned int *)P + 4);
    v98 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 528LL);
    v119 = *(_QWORD **)(*(_QWORD *)(v98 + 264) + 8 * v97);
    if ( v119 )
    {
      v120 = *((_QWORD *)P + 9);
      v128 = *((_QWORD *)P + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v119, 1u, (__int64)&v120, 0x80000000, &v128) < 0 )
      {
        v101 = WdLogNewEntry5_WdAssertion(v100, v99);
        *(_QWORD *)(v101 + 24) = 24657LL;
LABEL_139:
        WdLogEvent5_WdAssertion(v101);
      }
    }
    else
    {
      PagingContext = VidSchGetPagingContext(v98, v97);
      v113 = (_BYTE *)*((_QWORD *)P + 9);
      v118 = *((_QWORD *)P + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(
                  0LL,
                  0LL,
                  1,
                  &PagingContext,
                  1u,
                  (void **)&v113,
                  0x80000000,
                  (unsigned __int64 *)&v118) < 0 )
      {
        v101 = WdLogNewEntry5_WdAssertion(v103, v102);
        *(_QWORD *)(v101 + 24) = 24685LL;
        goto LABEL_139;
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)P);
LABEL_141:
  v104 = 0;
  if ( !(_BYTE)v126 )
    v104 = v6;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v121);
  if ( v123 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v105, &EventProfilerExit, v106, v121);
  return v104;
}
