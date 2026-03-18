/*
 * XREFs of ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD464
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066E20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0010914 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0012BB8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0018C04 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0018C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C00257CC (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     VidSchGetPagingContext @ 0x1C00325D8 (VidSchGetPagingContext.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00592E4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00635D4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0067ED0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FCE8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00735B0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0073AE0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00B4428 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00B64F8 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00B667C (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *a2,
        GUID *a3)
{
  unsigned __int64 v3; // r12
  VIDMM_GLOBAL *v5; // rsi
  int v6; // edi
  struct _KTHREAD **v7; // r15
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r14
  struct _LIST_ENTRY **v18; // rax
  struct _LIST_ENTRY *v19; // rcx
  struct _LIST_ENTRY *v20; // r14
  VIDMM_GLOBAL *v21; // r10
  unsigned int v22; // ecx
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v23; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  _QWORD **v25; // r14
  volatile signed __int32 *v26; // r13
  volatile signed __int32 *v27; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rcx
  unsigned __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  char *v40; // r14
  struct _LIST_ENTRY *v41; // rdx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v44; // r13
  struct _LIST_ENTRY *Blink; // rcx
  int v46; // eax
  int v47; // edi
  struct _MDL *FullMDL; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  unsigned __int64 v53; // rax
  struct VIDMM_MAPPED_VA_RANGE *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  struct _LIST_ENTRY *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  volatile signed __int32 *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  volatile signed __int32 *v66; // rax
  __int64 v67; // rcx
  bool v68; // zf
  struct VIDMM_ALLOC *v69; // r8
  _QWORD *v70; // r11
  int v71; // eax
  struct _MDL *v72; // r10
  unsigned __int64 AllocationOffsetInBytes; // r9
  int v74; // r13d
  __int64 v75; // rcx
  int v76; // eax
  struct _MDL *v77; // rax
  __int64 v78; // rax
  unsigned int v79; // ecx
  struct VIDMM_MAPPED_VA_RANGE *v80; // rsi
  struct VIDMM_MAPPED_VA_RANGE *v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct _LIST_ENTRY *v84; // rdx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  unsigned __int64 v89; // rax
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v90; // rdx
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **v91; // rax
  struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *v92; // rcx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned int v107; // ebx
  __int64 v108; // rcx
  const GUID *v109; // r8
  unsigned __int64 v111; // [rsp+40h] [rbp-79h]
  struct _LIST_ENTRY *v112; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v113; // [rsp+50h] [rbp-69h]
  struct VIDMM_ALLOC *PagingContext; // [rsp+58h] [rbp-61h] BYREF
  _DWORD *v115; // [rsp+60h] [rbp-59h] BYREF
  struct _LIST_ENTRY *v116; // [rsp+68h] [rbp-51h] BYREF
  struct _LIST_ENTRY **v117; // [rsp+70h] [rbp-49h]
  unsigned __int64 v118; // [rsp+78h] [rbp-41h]
  struct _MDL *v119; // [rsp+80h] [rbp-39h]
  __int64 v120; // [rsp+88h] [rbp-31h] BYREF
  _QWORD *v121; // [rsp+90h] [rbp-29h] BYREF
  __int64 v122; // [rsp+98h] [rbp-21h] BYREF
  int v123; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v124; // [rsp+A8h] [rbp-11h]
  char v125; // [rsp+B0h] [rbp-9h]
  _BYTE v126[88]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v128; // [rsp+128h] [rbp+6Fh]
  unsigned __int64 v130; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = -1LL;
  v5 = this;
  v123 = -1;
  v124 = 0LL;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v125 = 1;
    v123 = 8011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8011);
  }
  else
  {
    v125 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v6 = 0;
  LOBYTE(v128) = 0;
  v7 = (struct _KTHREAD **)**((_QWORD **)a2 + 11);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v126, v7 + 7);
  if ( !*((_QWORD *)a2 + 14) )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    WdLogEvent5_WdEvent(v10);
    v6 = -1073741823;
    LOBYTE(v128) = 1;
  }
  VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, (struct _LIST_ENTRY *)a2 + 8);
  if ( *((_BYTE *)a2 + 176) )
  {
    if ( !*((_QWORD *)a2 + 15) )
    {
      v13 = WdLogNewEntry5_WdEvent(v12, v11);
      WdLogEvent5_WdEvent(v13);
      v6 = -1073741823;
      LOBYTE(v128) = 1;
    }
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v12, (struct _LIST_ENTRY *)((char *)a2 + 152));
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v126);
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 16LL) + 32LL);
  if ( *(_BYTE *)(v14 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 200), 0, 0) )
    v6 = -1073741823;
  if ( v6 < 0 )
  {
    v22 = v128;
    goto LABEL_35;
  }
  v15 = 0LL;
  v16 = *((unsigned int *)a2 + 4);
  v122 = v16;
  v111 = 0LL;
  v17 = *((_QWORD *)a2 + 14);
  v120 = 3 * (v16 + 4);
  v18 = (struct _LIST_ENTRY **)(v17 + 24 * (v16 + 4));
  v19 = *v18;
  v117 = v18;
  if ( v19 == (struct _LIST_ENTRY *)v18 )
  {
    v20 = (struct _LIST_ENTRY *)(v17 + 24 * (v122 + 4));
  }
  else
  {
    v20 = *(struct _LIST_ENTRY **)(v17 + 24 * v16 + 112);
    if ( !v20 )
      v20 = v19;
  }
  v21 = this;
  v112 = v20;
  if ( *((_QWORD *)this + 5115) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      0,
      v7[11],
      *(struct _VIDSCH_CONTEXT **)a2,
      *((_DWORD *)a2 + 5),
      *((struct _VIDSCH_SYNC_OBJECT **)a2 + 9),
      *((_QWORD *)a2 + 10));
    v21 = this;
  }
  v22 = *((_DWORD *)a2 + 9);
  LODWORD(v130) = v22;
  if ( v22 >= *((_DWORD *)a2 + 5) )
    goto LABEL_34;
  while ( 2 )
  {
    v23 = (struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)(*((_QWORD *)a2 + 3) + ((unsigned __int64)v22 << 6));
    OperationType = v23->OperationType;
    if ( v23->OperationType && OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
      {
        if ( *((_QWORD *)v21 + 5115) )
          VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v21, v7[11], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v23);
        v25 = (_QWORD **)((char *)a2 + 96);
        v26 = (volatile signed __int32 *)*((_QWORD *)a2 + 12);
        v27 = v26 - 2;
        v28 = (struct VIDMM_MAPPED_VA_RANGE *)(v26 - 2);
        if ( (v26[20] & 8) != 0 )
        {
          v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v7,
                 v28,
                 (struct VIDMM_ALLOC **)a3,
                 0);
          if ( v6 < 0 )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29);
            v31[3] = *((_QWORD *)v27 + 12);
            v31[4] = *((_QWORD *)v27 + 13);
            v31[5] = 24177LL;
LABEL_30:
            WdLogEvent5_WdWarning(v31);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v26 - 2, v7);
            break;
          }
        }
        else
        {
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v7,
                 v28,
                 0,
                 -2,
                 0LL,
                 0LL,
                 0,
                 (struct VIDMM_ALLOC **)a3);
          if ( v6 < 0 )
          {
            v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32);
            v31[3] = *((_QWORD *)v27 + 12);
            v31[4] = *((_QWORD *)v27 + 13);
            v31[5] = 24191LL;
            goto LABEL_30;
          }
        }
        v34 = *((_QWORD *)v27 + 12);
        v35 = *v25;
        if ( v3 < v34 )
          v34 = v3;
        v3 = v34;
        v36 = *((_QWORD *)v27 + 13);
        if ( v111 > v36 )
          v36 = v111;
        v111 = v36;
        if ( (_QWORD **)v35[1] != v25 || (v37 = (_QWORD *)*v35, *(_QWORD **)(*v35 + 8LL) != v35) )
LABEL_133:
          __fastfail(3u);
        *v25 = v37;
        v37[1] = v25;
        *(_QWORD *)v26 = 0LL;
        *((_QWORD *)v27 + 2) = 0LL;
        v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               v7,
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               0LL,
               (struct VIDMM_MAPPED_VA_RANGE *)(v26 - 2));
        if ( v6 >= 0 )
        {
          v20 = *v117;
          v112 = *v117;
          goto LABEL_126;
        }
        v99 = WdLogNewEntry5_WdWarning(v39, v38);
        WdLogEvent5_WdWarning(v99);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v26 - 2, v7);
        break;
      }
      if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
        goto LABEL_128;
      if ( *((_QWORD *)v21 + 5115) )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v21, v7[11], *(struct _VIDSCH_CONTEXT **)a2, 0LL, v23);
      v40 = (char *)a2 + 48;
      if ( *(char **)v40 == v40 )
        v6 = CVirtualAddressAllocator::BuildVaRangeList(
               (CVirtualAddressAllocator *)v7,
               *((struct VIDMM_VAD **)a2 + 15),
               *((struct VIDMM_VAD **)a2 + 14),
               *((_DWORD *)a2 + 4),
               (struct _LIST_ENTRY *)a2 + 3,
               v23->Map.BaseAddress,
               v23->Map.BaseAddress + v23->Map.SizeInBytes,
               v23->Unmap.Protection.Value);
      if ( v6 < 0 )
      {
LABEL_82:
        if ( v6 != -1073741267 )
        {
          while ( 1 )
          {
            v66 = *(volatile signed __int32 **)v40;
            if ( *(char **)v40 == v40 )
              break;
            if ( *((char **)v66 + 1) != v40 )
              goto LABEL_133;
            v67 = *(_QWORD *)v66;
            if ( *(volatile signed __int32 **)(*(_QWORD *)v66 + 8LL) != v66 )
              goto LABEL_133;
            *(_QWORD *)v40 = v67;
            *(_QWORD *)(v67 + 8) = v40;
            *((_QWORD *)v66 + 1) = 0LL;
            *(_QWORD *)v66 = 0LL;
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v66 - 2, v7);
          }
        }
        v20 = *v117;
        v112 = *v117;
        goto LABEL_127;
      }
      v116 = *(struct _LIST_ENTRY **)(*((_QWORD *)a2 + 14) + 8 * v120);
      while ( 1 )
      {
        v41 = *(struct _LIST_ENTRY **)v40;
        v112 = v41;
        if ( v41 == (struct _LIST_ENTRY *)v40 || v6 < 0 )
          goto LABEL_82;
        p_Blink = &v41[-1].Blink;
        Flink = v41[3].Flink;
        if ( !Flink )
          break;
        v44 = Flink->Flink->Flink;
        if ( (HIDWORD(Flink[1].Blink) & 3) == 2 )
        {
          Blink = v44[8].Blink;
          v46 = (int)Blink[5].Flink;
          if ( (v46 & 0x1001) != 0 )
          {
            v47 = 0;
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v44, 0LL);
            v49 = (unsigned __int64)p_Blink[9];
          }
          else
          {
            if ( (v46 & 0x1000) != 0 )
              v47 = 0;
            else
              v47 = LODWORD(Blink[1].Flink) + 1;
            FullMDL = 0LL;
            v49 = (unsigned __int64)p_Blink[9] + (unsigned __int64)v44[9].Flink;
          }
          v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                 (CVirtualAddressAllocator *)v7,
                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                 HIDWORD(v44[4].Blink) & 0x3F,
                 v47,
                 v49,
                 FullMDL,
                 0,
                 (struct VIDMM_ALLOC **)a3);
          if ( v6 < 0 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50);
            v52[3] = p_Blink[12];
            v52[4] = p_Blink[13];
            v52[5] = 24281LL;
            WdLogEvent5_WdWarning(v52);
          }
          v15 = v111;
          goto LABEL_66;
        }
        v15 = v111;
LABEL_77:
        if ( v6 >= 0 )
        {
          v61 = *(volatile signed __int32 **)v40;
          if ( *(char **)(*(_QWORD *)v40 + 8LL) != v40 )
            goto LABEL_133;
          v62 = *(_QWORD *)v61;
          if ( *(volatile signed __int32 **)(*(_QWORD *)v61 + 8LL) != v61 )
            goto LABEL_133;
          *(_QWORD *)v40 = v62;
          *(_QWORD *)(v62 + 8) = v40;
          v41->Flink = 0LL;
          p_Blink[2] = 0LL;
          v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                 v7,
                 *((struct VIDMM_VAD **)a2 + 14),
                 *((_DWORD *)a2 + 4),
                 &v116,
                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink);
          if ( v6 < 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v63);
            v65[3] = p_Blink[12];
            v65[4] = p_Blink[13];
            v65[5] = 24321LL;
            WdLogEvent5_WdWarning(v65);
            VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)p_Blink, v7);
          }
        }
      }
      v54 = (struct VIDMM_MAPPED_VA_RANGE *)&v41[-1].Blink;
      if ( ((_BYTE)p_Blink[11] & 8) != 0 )
      {
        v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
               (CVirtualAddressAllocator *)v7,
               v54,
               (struct VIDMM_ALLOC **)a3,
               0);
        if ( v6 < 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55);
          v57[3] = p_Blink[12];
          v58 = p_Blink[13];
          v57[5] = 24294LL;
LABEL_75:
          v57[4] = v58;
          WdLogEvent5_WdWarning(v57);
        }
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
        if ( v6 < 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v60, v59);
          v57[3] = p_Blink[12];
          v58 = p_Blink[13];
          v57[5] = 24307LL;
          goto LABEL_75;
        }
      }
LABEL_66:
      v53 = (unsigned __int64)p_Blink[12];
      v41 = v112;
      if ( v3 < v53 )
        v53 = v3;
      v3 = v53;
      if ( v15 <= (unsigned __int64)p_Blink[13] )
      {
        v15 = (unsigned __int64)p_Blink[13];
        v111 = v15;
      }
      goto LABEL_77;
    }
    v68 = *((_QWORD *)v21 + 5115) == 0LL;
    v69 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a2 + 8) + 8LL * v23->Map.hAllocation);
    PagingContext = v69;
    v70 = **(_QWORD ***)v69;
    v115 = v70;
    if ( !v68 )
    {
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(v21, v7[11], *(struct _VIDSCH_CONTEXT **)a2, v69, v23);
      v69 = PagingContext;
      v70 = v115;
    }
    v71 = *((_DWORD *)v69 + 7);
    v72 = 0LL;
    AllocationOffsetInBytes = 0LL;
    v119 = 0LL;
    v118 = 0LL;
    v74 = 0;
    if ( (v71 & 3) == 2 )
    {
      v75 = v70[17];
      v76 = *(_DWORD *)(v75 + 80);
      if ( (v76 & 0x1001) != 0 )
      {
        v77 = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v70, 0LL);
        AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes;
        v72 = v77;
        v69 = PagingContext;
        v119 = v77;
      }
      else
      {
        if ( (v76 & 0x1000) == 0 )
          v74 = *(_DWORD *)(v75 + 16) + 1;
        AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes + v70[18];
        v119 = 0LL;
      }
      v118 = AllocationOffsetInBytes;
    }
    if ( (*((_BYTE *)this + 40873) & 4) != 0 )
      v78 = 1LL;
    else
      v78 = v23->Map.SizeInBytes / v23->Map.AllocationSizeInBytes;
    v79 = *((_DWORD *)a2 + 10);
    v116 = (struct _LIST_ENTRY *)v78;
    v113 = v79;
    if ( v79 >= (unsigned int)v78 )
      goto LABEL_126;
    while ( 1 )
    {
      v121 = (_QWORD *)*((_QWORD *)a2 + 12);
      v80 = (struct VIDMM_MAPPED_VA_RANGE *)(v121 - 1);
      v81 = (struct VIDMM_MAPPED_VA_RANGE *)(v121 - 1);
      if ( (*((_DWORD *)v69 + 7) & 3) == 2 )
        break;
      v6 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
             (CVirtualAddressAllocator *)v7,
             v81,
             (struct VIDMM_ALLOC **)a3,
             0);
      if ( v6 < 0 )
      {
        v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82);
        v96[3] = *((_QWORD *)v80 + 12);
        v97 = *((_QWORD *)v80 + 13);
        goto LABEL_125;
      }
      v84 = (struct _LIST_ENTRY *)*((_QWORD *)v80 + 12);
      v85 = *((_QWORD *)v80 + 13);
      v86 = (unsigned __int64)v84;
      if ( v3 < (unsigned __int64)v84 )
        v86 = v3;
      v3 = v86;
      if ( v111 > v85 )
        v85 = v111;
      v111 = v85;
LABEL_113:
      if ( *v117 != (struct _LIST_ENTRY *)v117 )
      {
        if ( v84 < v20[5].Blink )
          v20 = *v117;
        v112 = v20;
      }
      v90 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)((char *)a2 + 96);
      v91 = (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)*((_QWORD *)a2 + 12);
      if ( v91[1] != (struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA *)((char *)a2 + 96) )
        goto LABEL_133;
      v92 = *v91;
      if ( *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA ***)*v91 + 1) != v91 )
        goto LABEL_133;
      v93 = v121;
      *v90 = v92;
      *((_QWORD *)v92 + 1) = v90;
      *((_QWORD *)v80 + 2) = 0LL;
      *v93 = 0LL;
      v6 = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
             v7,
             *((struct VIDMM_VAD **)a2 + 14),
             *((_DWORD *)a2 + 4),
             &v112,
             v80);
      if ( v6 < 0 )
      {
        v98 = WdLogNewEntry5_WdWarning(v95, v94);
        WdLogEvent5_WdWarning(v98);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe((volatile signed __int32 *)v80, v7);
        v20 = v112;
        goto LABEL_126;
      }
      v20 = v112->Blink;
      v112 = v20;
      *(_QWORD *)(*((_QWORD *)a2 + 14) + 24 * v122 + 112) = v20;
      if ( ++v113 >= (unsigned int)v116 )
        goto LABEL_126;
      AllocationOffsetInBytes = v118;
      v72 = v119;
      v69 = PagingContext;
    }
    v6 = CVirtualAddressAllocator::CommitVirtualAddressRange(
           (CVirtualAddressAllocator *)v7,
           v81,
           v115[19] & 0x3F,
           v74,
           AllocationOffsetInBytes,
           v72,
           0,
           (struct VIDMM_ALLOC **)a3);
    if ( v6 >= 0 )
    {
      v84 = (struct _LIST_ENTRY *)*((_QWORD *)v80 + 12);
      v89 = (unsigned __int64)v84;
      if ( v3 < (unsigned __int64)v84 )
        v89 = v3;
      v3 = v89;
      if ( v111 <= *((_QWORD *)v80 + 13) )
        v111 = *((_QWORD *)v80 + 13);
      goto LABEL_113;
    }
    v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v88, v87);
    v96[3] = *((_QWORD *)v80 + 12);
    v97 = *((_QWORD *)v80 + 13);
    v96[5] = 24113LL;
LABEL_125:
    v96[4] = v97;
    WdLogEvent5_WdWarning(v96);
LABEL_126:
    v15 = v111;
LABEL_127:
    v22 = v130;
LABEL_128:
    if ( v6 >= 0 )
    {
      *((_DWORD *)a2 + 10) = 0;
      LODWORD(v130) = ++v22;
      if ( v22 < *((_DWORD *)a2 + 5) )
      {
        v21 = this;
        continue;
      }
    }
    break;
  }
  if ( v3 < v111 )
    CVirtualAddressAllocator::FlushGpuVaTlb((CVirtualAddressAllocator *)v7, *((_DWORD *)a2 + 4), v3, v111);
  v22 = v130;
LABEL_34:
  v5 = this;
LABEL_35:
  if ( v6 == -1073741267 )
  {
    *((_DWORD *)a2 + 9) = v22;
    goto LABEL_144;
  }
  if ( *((_QWORD *)a2 + 9) )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v5, *((_DWORD *)a2 + 4), 0, 0LL, 0LL, 0, 0);
    v100 = *((unsigned int *)a2 + 4);
    v101 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 528LL);
    v121 = *(_QWORD **)(*(_QWORD *)(v101 + 264) + 8 * v100);
    if ( v121 )
    {
      v122 = *((_QWORD *)a2 + 9);
      v130 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSubmitSignalToHwQueue(1u, (__int64)&v121, 1u, (__int64)&v122, 0x80000000, &v130) < 0 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v103, v102);
        *(_QWORD *)(v104 + 24) = 24409LL;
        goto LABEL_142;
      }
    }
    else
    {
      PagingContext = (struct VIDMM_ALLOC *)VidSchGetPagingContext(v101, v100);
      v115 = (_DWORD *)*((_QWORD *)a2 + 9);
      v120 = *((_QWORD *)a2 + 10);
      if ( (int)VidSchSignalSyncObjectsFromGpu(
                  0LL,
                  0LL,
                  1uLL,
                  (__int64 *)&PagingContext,
                  1u,
                  (void **)&v115,
                  0x80000000,
                  (unsigned __int64 *)&v120) < 0 )
      {
        v104 = WdLogNewEntry5_WdAssertion(v106, v105);
        *(_QWORD *)(v104 + 24) = 24437LL;
LABEL_142:
        WdLogEvent5_WdAssertion(v104);
      }
    }
  }
  VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(a2);
LABEL_144:
  v107 = 0;
  if ( !(_BYTE)v128 )
    v107 = v6;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v123);
  if ( v125 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v108, &EventProfilerExit, v109, v123);
  return v107;
}
