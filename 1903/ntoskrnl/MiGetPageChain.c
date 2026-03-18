/*
 * XREFs of MiGetPageChain @ 0x1400CF700
 * Callers:
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiGetHardFaultPages @ 0x1400DD9C4 (MiGetHardFaultPages.c)
 *     MiCreateSharedZeroPages @ 0x1400EFE70 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1402E0924 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiChangePageAttributeBatch @ 0x1400B87B0 (MiChangePageAttributeBatch.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140109A48 (KiResetGlobalDpcWatchdogProfiler.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiPerformFinalZeroing @ 0x1402D9624 (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032E3AC (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiGetPageChain(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbp
  __int64 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 NodeShiftedColor; // r9
  int v13; // esi
  volatile signed __int32 *p_PageColor; // r8
  __int64 v15; // rcx
  unsigned int v16; // r13d
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  signed __int32 v20; // eax
  unsigned int v21; // ebx
  ULONG_PTR Page; // r14
  __int64 v23; // rax
  unsigned int v24; // ebx
  int v25; // ecx
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  signed __int64 v28; // rdx
  signed __int64 v29; // r8
  LONG *v30; // rax
  struct _KPRCB *v31; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  int v34; // r8d
  _KTHREAD *NextThread; // rax
  unsigned int v36; // ebx
  signed __int64 v38; // rdx
  unsigned __int64 v39; // r9
  signed __int64 v40; // r8
  char v41; // cl
  unsigned int v42; // eax
  unsigned int v43; // r14d
  unsigned __int8 v44; // r13
  unsigned __int64 v45; // rdx
  int v46; // ebp
  unsigned int v47; // ebx
  __int64 LargePage; // rcx
  __int64 v49; // rdi
  struct _KPRCB *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned int v53; // ecx
  signed __int64 v54; // rcx
  signed __int64 v55; // rcx
  signed __int64 v56; // rcx
  signed __int32 v57[8]; // [rsp+0h] [rbp-1E8h] BYREF
  unsigned int v58; // [rsp+30h] [rbp-1B8h]
  unsigned int v59; // [rsp+34h] [rbp-1B4h]
  unsigned int v60; // [rsp+38h] [rbp-1B0h]
  unsigned int DpcTimeCount; // [rsp+3Ch] [rbp-1ACh]
  __int64 v62; // [rsp+40h] [rbp-1A8h]
  __int64 v63; // [rsp+48h] [rbp-1A0h]
  __int64 v64; // [rsp+50h] [rbp-198h]
  __int64 v65; // [rsp+58h] [rbp-190h]
  volatile signed __int32 *v66; // [rsp+60h] [rbp-188h]
  __int64 v67; // [rsp+68h] [rbp-180h]
  __int64 v68; // [rsp+70h] [rbp-178h]
  unsigned __int64 *v69; // [rsp+78h] [rbp-170h]
  _QWORD v70[18]; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v71[16]; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+218h] [rbp+30h]

  v8 = a2;
  v68 = a2;
  v63 = a1;
  v69 = a7;
  memset(v70, 0, sizeof(v70));
  CurrentIrql = KeGetCurrentIrql();
  v62 = CurrentIrql;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (unsigned int)((a3 - 1) << byte_140465A4D);
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_140465A4E) - 1;
  v60 = NodeShiftedColor;
  if ( v8 && (*(_BYTE *)(v8 + 184) & 7u) < 2 )
    p_PageColor = (volatile signed __int32 *)v8;
  else
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v66 = p_PageColor;
  v58 = 1;
  if ( a4 == 31 )
  {
    v58 = 1;
  }
  else if ( a4 >> 3 == 3 && (a4 & 7) != 0 )
  {
    v58 = 2;
  }
  else if ( a4 >> 3 == 1 )
  {
    v58 = 0;
  }
  v15 = a6;
  v16 = a5 & 0xFFFFF0FF;
  v17 = *a7;
  v18 = 0LL;
  DpcTimeCount = a5 & 0xFFFFF0FF;
  v19 = 0LL;
  v64 = 0xFFFFFFFFFLL;
  v67 = 0LL;
  v59 = 0;
  if ( a6 == -1 )
  {
    if ( v17 >= 0x10 )
    {
      v44 = 17;
      v70[0] = 1LL;
      LODWORD(v70[1]) = 16;
      v45 = v17;
      v46 = 1;
      do
      {
        v47 = v13 & _InterlockedExchangeAdd(p_PageColor, 1u) | NodeShiftedColor;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          v44 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v44 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
        }
        if ( v45 < 0x200 || v46 != 1 || (v65 = MiGetLargePage(v63, 1u, a4, v47, (__int64)v70), (LargePage = v65) == 0) )
        {
          v46 = 2;
          LargePage = MiGetLargePage(v63, 2u, a4, v47, (__int64)v70);
          v65 = LargePage;
        }
        LOBYTE(CurrentIrql) = v62;
        if ( (unsigned __int8)v62 < 2u )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
          {
            v50 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v50);
            LargePage = v65;
            LOBYTE(CurrentIrql) = v62;
          }
          __writecr8(v44);
        }
        if ( !LargePage )
          break;
        v49 = (LargePage + 0x58000000000LL) / 48;
        MiSetPfnBlink(48 * (v49 + MiLargePageSizes[v46]) - 0x58000000030LL, v64, 0LL, 0xFFFFFA8000000000uLL);
        v19 += MiLargePageSizes[v46];
        p_PageColor = v66;
        v45 = v17 - v19;
        NodeShiftedColor = v60;
        LOBYTE(CurrentIrql) = v62;
        v64 = v49;
        v18 = v65;
      }
      while ( v17 - v19 >= 0x10 );
      v8 = v68;
      v16 = DpcTimeCount;
      if ( HIDWORD(v70[0]) )
      {
        MiNotifyPageHeat(v70);
        LOBYTE(CurrentIrql) = v62;
      }
      if ( (unsigned __int8)CurrentIrql >= 2u && (MiWorkingSetIsContended(v68) || KeShouldYieldProcessor()) )
        goto LABEL_33;
      v15 = -1LL;
    }
  }
  else
  {
    v16 = a5 & 0xFFFFB0FF | 0x4000;
  }
  if ( v19 < v17 )
  {
    while ( 1 )
    {
      v20 = v13 & _InterlockedExchangeAdd(v66, 1u);
      v21 = v20 | v60;
      if ( v15 == -1 )
        goto LABEL_14;
      v51 = 15LL;
      if ( (unsigned int)dword_140465AB0 < 0xFuLL )
        v51 = (unsigned int)dword_140465AB0;
      v52 = v51 & v15;
      v68 = v51;
      v21 = v52 | v21 & 0xFFFFFFF0;
      v72 = v52;
      Page = MiGetPage(v63, v21, v16);
      if ( Page == -1LL )
        v16 &= ~0x4000u;
      v23 = v68 & (v72 + 1);
      a6 = v23;
      if ( Page == -1LL )
      {
LABEL_14:
        Page = MiGetPage(v63, v21, v16);
        if ( Page == -1LL )
          goto LABEL_33;
        v23 = a6;
      }
      if ( v23 != -1 )
        v16 |= 0x4000u;
      v24 = v58;
      v18 = 48 * Page - 0x58000000000LL;
      v25 = *(unsigned __int8 *)(v18 + 34) >> 6;
      if ( v25 != v58 && ((unsigned __int8)((1 << v25) | (1 << v58)) & (unsigned __int8)byte_140465B98) != 0 )
      {
        v53 = v59;
        v71[v59] = Page;
        v59 = v53 + 1;
        if ( v53 == 15 )
        {
          MiPerformFinalZeroing(v71, 16LL, v24);
          v59 = 0;
        }
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(v18 + 16) & 0x3E0LL) != 0 && (a5 & 0x100) != 0 )
      {
        MiZeroPhysicalPage(Page, 1, v58);
        *(_QWORD *)(v18 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        _InterlockedOr(v57, 0);
        v38 = *(_QWORD *)(v18 + 24);
        v39 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
        v40 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v18 + 24),
                v39 | v38 & 0xF0FFFFFFFFFFFFFFuLL,
                v38);
        if ( v38 != v40 )
        {
          do
          {
            v54 = v40;
            v40 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v18 + 24),
                    v39 | v40 & 0xF0FFFFFFFFFFFFFFuLL,
                    v40);
          }
          while ( v54 != v40 );
        }
      }
      if ( *(unsigned __int8 *)(v18 + 34) >> 6 == v24 )
        goto LABEL_21;
      if ( v24 == 1 )
      {
        if ( (*(_BYTE *)(v18 + 34) & 0xC0) == 0xC0 )
          break;
        v41 = *(_BYTE *)(v18 + 31) & 0xF;
        _InterlockedOr(v57, 0);
        v42 = ((_BYTE)KiTbFlushTimeStamp - v41) & 0xF;
        if ( v42 > 2 || (v41 & 1) == 0 && v42 >= 2 )
          break;
      }
      if ( (*(_DWORD *)(v18 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(Page, 1, v24);
      *(_QWORD *)(v18 + 16) = v67;
      v67 = 48 * Page - 0x58000000000LL;
LABEL_22:
      v28 = *(_QWORD *)(v18 + 24);
      NodeShiftedColor = v64 & 0xFFFFFFFFFLL;
      v29 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v18 + 24),
              v64 & 0xFFFFFFFFFLL | v28 & 0xFFFFFFF000000000uLL,
              v28);
      if ( v28 != v29 )
      {
        do
        {
          v56 = v29;
          v29 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v18 + 24),
                  NodeShiftedColor | v29 & 0xFFFFFFF000000000uLL,
                  v29);
        }
        while ( v56 != v29 );
      }
      ++v19;
      v64 = Page;
      if ( (unsigned __int8)v62 < 2u )
        goto LABEL_32;
      if ( (*(_BYTE *)(v8 + 184) & 7) == 2 )
        v30 = &dword_140467200;
      else
        v30 = (LONG *)(v8 + 192);
      if ( (*v30 & 0x40000000) != 0 )
        goto LABEL_33;
      v31 = KeGetCurrentPrcb();
      DpcRequestSummary = v31->DpcRequestSummary;
      NodeShiftedColor = v31->DpcTimeCount;
      DpcWatchdogCount = v31->DpcWatchdogCount;
      DpcTimeCount = v31->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v34 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v43 = 2;
          goto LABEL_51;
        }
        if ( v31->QuantumEnd )
        {
          v43 = 3;
          goto LABEL_51;
        }
        NextThread = v31->NextThread;
        if ( NextThread && NextThread != v31->CurrentThread )
        {
          v43 = 4;
          goto LABEL_51;
        }
LABEL_31:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_32;
        if ( !v34 )
        {
LABEL_84:
          _disable();
          v31->DpcWatchdogCount = 0;
          v31->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler(v31);
          _enable();
          NodeShiftedColor = DpcTimeCount;
          v43 = 0;
          goto LABEL_51;
        }
        goto LABEL_114;
      }
      v34 = 1;
      if ( (unsigned int)NodeShiftedColor <= 7 )
        goto LABEL_31;
      if ( v31->QuantumEnd )
      {
        v43 = 1;
        goto LABEL_51;
      }
LABEL_114:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v43 = 5;
      }
      else
      {
        if ( v31->CurrentThread == v31->IdleThread )
          goto LABEL_84;
        v43 = 6;
      }
LABEL_51:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v43, DpcWatchdogCount, (unsigned int)NodeShiftedColor);
      if ( v43 )
        goto LABEL_33;
LABEL_32:
      v15 = a6;
      if ( v19 >= v17 )
        goto LABEL_33;
    }
    MiChangePageAttribute(48 * Page - 0x58000000000LL, 1LL, 4LL);
LABEL_21:
    v26 = *(_QWORD *)(v18 + 24);
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v26 & 0xF0FFFFFFFFFFFFFFuLL, v26);
    if ( v26 != v27 )
    {
      do
      {
        v55 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v27 & 0xF0FFFFFFFFFFFFFFuLL, v27);
      }
      while ( v55 != v27 );
    }
    goto LABEL_22;
  }
LABEL_33:
  v36 = v58;
  *v69 = v19;
  if ( v59 )
    MiPerformFinalZeroing(v71, v59, v36);
  if ( v67 )
    MiChangePageAttributeBatch(v67, v36, ZeroPte, NodeShiftedColor);
  return v18;
}
