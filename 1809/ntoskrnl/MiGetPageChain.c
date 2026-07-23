/*
 * XREFs of MiGetPageChain @ 0x140049670
 * Callers:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiCreateSharedZeroPages @ 0x140109240 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1402C69AC (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiChangePageAttributeBatch @ 0x1400823E0 (MiChangePageAttributeBatch.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiPerformFinalZeroing @ 0x1402BFEEC (MiPerformFinalZeroing.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
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
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r10
  __int64 CurrentIrql; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int16 v13; // bx
  volatile signed __int32 *p_PageColor; // rcx
  unsigned __int64 v15; // r12
  unsigned int v16; // r13d
  __int64 v17; // rdi
  unsigned __int64 v18; // r15
  __int64 v19; // r14
  int v20; // edx
  int v21; // r8d
  unsigned __int32 v22; // ebx
  ULONG_PTR v23; // rsi
  unsigned int v24; // ebx
  int v25; // ecx
  signed __int64 v26; // rdx
  signed __int64 v27; // r8
  signed __int64 v28; // rdx
  __int64 v29; // r9
  signed __int64 v30; // r8
  LONG *v31; // rax
  struct _KPRCB *v32; // rcx
  __int64 DpcRequestSummary; // rdx
  __int64 DpcTimeCount; // r9
  unsigned int DpcWatchdogCount; // ebx
  __int64 v36; // r8
  _KTHREAD *NextThread; // rax
  unsigned int v38; // ebx
  signed __int64 v40; // rdx
  unsigned __int64 v41; // r9
  signed __int64 v42; // r8
  unsigned int v43; // esi
  char v44; // cl
  unsigned int v45; // eax
  int v46; // r13d
  unsigned __int8 v47; // bl
  int v48; // ebp
  unsigned int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  struct _KPRCB *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r14
  __int64 Page; // rax
  unsigned int v57; // ecx
  signed __int64 v58; // rcx
  signed __int64 v59; // rcx
  signed __int64 v60; // rcx
  signed __int32 v61[8]; // [rsp+0h] [rbp-1D8h] BYREF
  unsigned int v62; // [rsp+20h] [rbp-1B8h]
  unsigned int v63; // [rsp+24h] [rbp-1B4h]
  int v64; // [rsp+28h] [rbp-1B0h]
  int v65; // [rsp+2Ch] [rbp-1ACh]
  unsigned int v66; // [rsp+30h] [rbp-1A8h]
  __int64 v67; // [rsp+38h] [rbp-1A0h]
  __int64 v68; // [rsp+40h] [rbp-198h]
  __int64 v69; // [rsp+48h] [rbp-190h]
  volatile signed __int32 *v70; // [rsp+50h] [rbp-188h]
  __int64 v71; // [rsp+58h] [rbp-180h]
  __int64 v72; // [rsp+60h] [rbp-178h]
  __int64 v73; // [rsp+68h] [rbp-170h]
  unsigned __int64 *v74; // [rsp+70h] [rbp-168h]
  __int64 v75; // [rsp+80h] [rbp-158h] BYREF
  int v76; // [rsp+88h] [rbp-150h]
  _QWORD v77[16]; // [rsp+110h] [rbp-C8h] BYREF

  v74 = a7;
  WORD1(v8) = HIWORD(a3);
  v9 = a2;
  v72 = a2;
  v10 = a1;
  v69 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v68 = CurrentIrql;
  if ( a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    LOWORD(v8) = ((_WORD)a3 - 1) << byte_14043B109;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    LODWORD(v8) = LOWORD(CurrentPrcb->NodeShiftedColor);
  }
  v13 = (1 << byte_14043B10A) - 1;
  v64 = v8;
  v65 = v13;
  if ( v9 && (*(_BYTE *)(v9 + 184) & 7u) < 2 )
    p_PageColor = (volatile signed __int32 *)v9;
  else
    p_PageColor = (volatile signed __int32 *)&CurrentPrcb->PageColor;
  v70 = p_PageColor;
  v62 = 1;
  if ( a4 == 31 )
  {
    v62 = 1;
  }
  else if ( a4 >> 3 == 3 && (a4 & 7) != 0 )
  {
    v62 = 2;
  }
  else if ( a4 >> 3 == 1 )
  {
    v62 = 0;
  }
  v15 = *a7;
  v16 = a5 & 0xFFFFF0FF;
  v17 = 0LL;
  v66 = a5 & 0xFFFFF0FF;
  v18 = 0LL;
  v67 = 0xFFFFFFFFFLL;
  v71 = 0LL;
  v63 = 0;
  if ( a6 == -1 )
  {
    if ( v15 >= 0x10 )
    {
      LOBYTE(v73) = 17;
      v46 = v13;
      v47 = 17;
      v48 = (unsigned __int16)v8;
      v8 = 0xFFFFFFFFFLL;
      v75 = 1LL;
      v76 = 16;
      do
      {
        v49 = v46 & _InterlockedExchangeAdd(p_PageColor, 1u) | v48;
        if ( (unsigned __int8)CurrentIrql < 2u )
        {
          v47 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && v47 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
        }
        v50 = MiGet64KPage(v10, a4, v49, &v75);
        LOBYTE(CurrentIrql) = v68;
        v51 = v50;
        v67 = v50;
        if ( (unsigned __int8)v68 < 2u )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v47 < 2u )
          {
            v53 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v53);
            v51 = v67;
            LOBYTE(CurrentIrql) = v68;
          }
          __writecr8(v47);
        }
        if ( !v51 )
          break;
        v52 = (v51 + 0x58000000000LL) / 48;
        MiSetPfnBlink(48 * v52 - 0x57FFFFFFD30LL, v8, 0LL);
        p_PageColor = v70;
        v18 += 16LL;
        LOBYTE(CurrentIrql) = v68;
        v10 = v69;
        v8 = v52;
        v17 = v67;
      }
      while ( v15 - v18 >= 0x10 );
      v13 = v65;
      v9 = v72;
      v16 = v66;
      v67 = v8;
      LOWORD(v8) = v64;
      if ( HIDWORD(v75) )
      {
        MiNotifyPageHeat(&v75);
        LOBYTE(CurrentIrql) = v68;
      }
      if ( (unsigned __int8)CurrentIrql >= 2u
        && ((unsigned int)MiWorkingSetIsContended(v72) || KeShouldYieldProcessor()) )
      {
        goto LABEL_33;
      }
      v10 = v69;
    }
  }
  else
  {
    v16 = a5 & 0xFFFFB0FF | 0x4000;
  }
  if ( v18 < v15 )
  {
    v19 = a6;
    v20 = v13;
    v21 = (unsigned __int16)v8;
    v65 = v13;
    v64 = (unsigned __int16)v8;
    do
    {
      v22 = v20 & _InterlockedExchangeAdd(v70, 1u) | v21;
      if ( v19 != -1 )
      {
        v54 = 15LL;
        if ( (unsigned int)dword_14043B148 < 0xFuLL )
          v54 = (unsigned int)dword_14043B148;
        v55 = v54 & v19;
        v72 = v54;
        v22 = v55 | v22 & 0xFFFFFFF0;
        Page = MiGetPage(v10, v22, v16);
        v23 = Page;
        if ( Page == -1 )
          v16 &= ~0x4000u;
        v19 = v72 & (v55 + 1);
        if ( Page != -1 )
          goto LABEL_16;
        v10 = v69;
      }
      v23 = MiGetPage(v10, v22, v16);
      if ( v23 == -1LL )
        break;
LABEL_16:
      if ( v19 != -1 )
        v16 |= 0x4000u;
      v24 = v62;
      v17 = 48 * v23 - 0x58000000000LL;
      v25 = *(unsigned __int8 *)(v17 + 34) >> 6;
      if ( v25 != v62 && ((unsigned __int8)((1 << v25) | (1 << v62)) & (unsigned __int8)byte_14043B218) != 0 )
      {
        v57 = v63;
        v77[v63] = v23;
        v63 = v57 + 1;
        if ( v57 == 15 )
        {
          MiPerformFinalZeroing(v77, 16LL, v24);
          v63 = 0;
        }
        goto LABEL_22;
      }
      if ( (*(_DWORD *)(v17 + 16) & 0x3E0LL) != 0 && (a5 & 0x100) != 0 )
      {
        MiZeroPhysicalPage(v23, 1, v62);
        *(_QWORD *)(v17 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        _InterlockedOr(v61, 0);
        v40 = *(_QWORD *)(v17 + 24);
        v41 = (unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56;
        v42 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v17 + 24),
                v41 | v40 & 0xF0FFFFFFFFFFFFFFuLL,
                v40);
        if ( v40 != v42 )
        {
          do
          {
            v58 = v42;
            v42 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v17 + 24),
                    v41 | v42 & 0xF0FFFFFFFFFFFFFFuLL,
                    v42);
          }
          while ( v58 != v42 );
        }
      }
      if ( *(unsigned __int8 *)(v17 + 34) >> 6 == v24 )
        goto LABEL_21;
      if ( v24 == 1 )
      {
        if ( (*(_BYTE *)(v17 + 34) & 0xC0) == 0xC0
          || (v44 = *(_BYTE *)(v17 + 31) & 0xF,
              _InterlockedOr(v61, 0),
              v45 = ((_BYTE)KiTbFlushTimeStamp - v44) & 0xF,
              v45 > 2)
          || (v44 & 1) == 0 && v45 >= 2 )
        {
          MiChangePageAttribute(48 * v23 - 0x58000000000LL, 1LL, 4LL);
LABEL_21:
          v26 = *(_QWORD *)(v17 + 24);
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v26 & 0xF0FFFFFFFFFFFFFFuLL, v26);
          if ( v26 != v27 )
          {
            do
            {
              v59 = v27;
              v27 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v17 + 24),
                      v27 & 0xF0FFFFFFFFFFFFFFuLL,
                      v27);
            }
            while ( v59 != v27 );
          }
          goto LABEL_22;
        }
      }
      if ( (*(_DWORD *)(v17 + 16) & 0x3E0LL) != 0 )
        MiZeroPhysicalPage(v23, 1, v24);
      *(_QWORD *)(v17 + 16) = v71;
      v71 = 48 * v23 - 0x58000000000LL;
LABEL_22:
      v28 = *(_QWORD *)(v17 + 24);
      v29 = v67 & 0xFFFFFFFFFLL;
      v30 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v17 + 24),
              v67 & 0xFFFFFFFFFLL | v28 & 0xFFFFFFF000000000uLL,
              v28);
      if ( v28 != v30 )
      {
        do
        {
          v60 = v30;
          v30 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v17 + 24),
                  v29 | v30 & 0xFFFFFFF000000000uLL,
                  v30);
        }
        while ( v60 != v30 );
      }
      ++v18;
      v67 = v23;
      if ( (unsigned __int8)v68 < 2u )
        goto LABEL_32;
      if ( (*(_BYTE *)(v9 + 184) & 7) == 2 )
        v31 = &dword_14043C7C0;
      else
        v31 = (LONG *)(v9 + 192);
      if ( (*v31 & 0x40000000) != 0 )
        break;
      v32 = KeGetCurrentPrcb();
      DpcRequestSummary = (unsigned int)v32->DpcRequestSummary;
      DpcTimeCount = v32->DpcTimeCount;
      DpcWatchdogCount = v32->DpcWatchdogCount;
      v66 = v32->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v36 = 0LL;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v43 = 2;
          goto LABEL_44;
        }
        if ( v32->QuantumEnd )
        {
          v43 = 3;
          goto LABEL_44;
        }
        NextThread = v32->NextThread;
        if ( NextThread && NextThread != v32->CurrentThread )
        {
          v43 = 4;
          goto LABEL_44;
        }
LABEL_31:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_32;
        if ( !(_DWORD)v36 )
        {
LABEL_80:
          _disable();
          v32->DpcWatchdogCount = 0;
          v32->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler(v32, DpcRequestSummary, v36, DpcTimeCount);
          _enable();
          LODWORD(DpcTimeCount) = v66;
          v43 = 0;
          goto LABEL_44;
        }
        goto LABEL_110;
      }
      v36 = 1LL;
      if ( (unsigned int)DpcTimeCount <= 7 )
        goto LABEL_31;
      if ( v32->QuantumEnd )
      {
        v43 = 1;
        goto LABEL_44;
      }
LABEL_110:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v43 = 5;
      }
      else
      {
        if ( v32->CurrentThread == v32->IdleThread )
          goto LABEL_80;
        v43 = 6;
      }
LABEL_44:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v43, DpcWatchdogCount, (unsigned int)DpcTimeCount);
      if ( v43 )
        break;
LABEL_32:
      v10 = v69;
      v20 = v65;
      v21 = v64;
    }
    while ( v18 < v15 );
  }
LABEL_33:
  v38 = v62;
  *v74 = v18;
  if ( v63 )
    MiPerformFinalZeroing(v77, v63, v38);
  if ( v71 )
    MiChangePageAttributeBatch(v71, v38, ZeroPte);
  return v17;
}
