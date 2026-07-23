/*
 * XREFs of MiAddWorkingSetEntries @ 0x140048CE0
 * Callers:
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     MmLockLoadedModuleListShared @ 0x14009B76C (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetStandbyRepurposed @ 0x1400EF3CC (MiGetStandbyRepurposed.c)
 *     MiCountWslesInPageTable @ 0x1400F82B0 (MiCountWslesInPageTable.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  char v5; // al
  unsigned __int64 v7; // rsi
  volatile signed __int32 *v9; // r14
  _QWORD *v10; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v13; // edx
  int v14; // edx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  _QWORD *v18; // r13
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r12
  char v21; // al
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rcx
  char v24; // r9
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r9
  int v27; // r15d
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  unsigned __int64 *v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rax
  LONG *v37; // rcx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned __int64 *v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r14
  __int64 *v47; // r12
  __int64 *v48; // r13
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned __int64 v51; // r10
  struct _KPRCB *v52; // rcx
  _DWORD *v53; // rdx
  __int64 v54; // rax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  unsigned __int8 v57; // cl
  int v58; // edx
  unsigned __int64 v59; // r14
  _QWORD *v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int8 v62; // cl
  _DWORD *v63; // rcx
  __int64 v64; // rax
  __int64 **v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  bool v69; // zf
  signed __int32 v70; // eax
  __int64 v71; // rcx
  int StandbyRepurposed; // eax
  __int64 v73; // r11
  int v74; // r10d
  struct _KPRCB *v75; // rcx
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  char v78; // r8^7
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r8
  unsigned __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // r8
  int v85; // eax
  int v86; // eax
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  unsigned __int64 v90; // r8
  __int64 v91; // rax
  __int64 v92; // r8
  char v94[8]; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v95; // [rsp+28h] [rbp-41h]
  int v96; // [rsp+30h] [rbp-39h] BYREF
  __int64 v97; // [rsp+38h] [rbp-31h] BYREF
  volatile signed __int64 *v98; // [rsp+40h] [rbp-29h]
  unsigned __int64 v99; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v100; // [rsp+58h] [rbp-11h] BYREF
  __int64 v101; // [rsp+60h] [rbp-9h]
  _DWORD v102[8]; // [rsp+68h] [rbp-1h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = *(_BYTE *)(a1 + 184) & 7;
  v95 = a2;
  v7 = a2;
  if ( v5 == 2 )
    v9 = &dword_14043C7E8;
  else
    v9 = (volatile signed __int32 *)(a1 + 232);
  v10 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v96 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v67 = SchedulerAssist[5];
        SchedulerAssist[5] = v67 + 1;
        if ( v67 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(v9, 0x1Fu) )
    {
      v63 = CurrentPrcb->SchedulerAssist;
      if ( v63 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v68 = v63[5] - 1;
          v63[5] = v68;
          if ( !v68 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v96 = ExpWaitForSpinLockExclusiveAndAcquire(v9, 0xFFu);
    }
    v13 = *v9;
    while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v13 & 0x40000000) == 0 )
      {
        v70 = _InterlockedCompareExchange(v9, v13 | 0x40000000, v13);
        v69 = v13 == v70;
        v13 = v70;
        if ( !v69 )
          continue;
      }
      KeYieldProcessorEx(&v96);
      v13 = *v9;
    }
  }
  v14 = 1;
  if ( (a4 & 1) == 0 )
    goto LABEL_16;
  v15 = a3 + *(_QWORD *)(a1 + 120);
  if ( v15 <= *(_QWORD *)(a1 + 112) || (*(_BYTE *)(a1 + 187) & 8) != 0 )
    goto LABEL_16;
  v16 = *(_QWORD *)(a1 + 136);
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v16 <= v17 )
  {
LABEL_15:
    if ( (*(_BYTE *)(a1 + 184) & 0x40) == 0 || v15 <= *(_QWORD *)(a1 + 152) )
      goto LABEL_16;
    goto LABEL_85;
  }
  v18 = *(_QWORD **)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v19 = v18[890];
  if ( (v16 & 0x3F) != 0 )
  {
    v20 = -1LL;
  }
  else
  {
    v20 = v18[912];
    if ( v20 < v19 / 0x14 )
    {
      v14 = 1;
      if ( v16 >= v19 / 0x14 )
        goto LABEL_149;
    }
    else
    {
      v14 = 1;
    }
  }
  if ( v16 - v17 < 3 * (v19 >> 2) )
  {
LABEL_14:
    v10 = 0LL;
    goto LABEL_15;
  }
  v71 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v101 = v18[878];
  StandbyRepurposed = MiGetStandbyRepurposed(v71);
  if ( StandbyRepurposed == v74 )
  {
    v14 = 1;
    goto LABEL_14;
  }
  if ( v73 )
    v20 = v18[912];
  v14 = 1;
  if ( v20 >= 10LL * *(_QWORD *)(v101 + 2392) )
    goto LABEL_14;
LABEL_149:
  v10 = 0LL;
LABEL_85:
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) | 8;
LABEL_16:
  v21 = *(_BYTE *)(a1 + 184);
  *(_DWORD *)(a1 + 4) += a3;
  if ( (v21 & 7) == 2 )
    dword_14043C840 += a3;
  __addgsdword(0x2E90u, a3);
  *(_QWORD *)(a1 + 136) += a3;
  v22 = 0xFFFFF68000000000uLL;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 120) += a3;
  else
    v14 = 0;
  v23 = a3 + *(_QWORD *)(a1 + 120);
  if ( v23 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v23;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_14043C848 += a3;
    if ( v14 == 1 )
      qword_14043C850 += a3;
    if ( qword_14043C850 > (unsigned __int64)qword_14043C858 )
      qword_14043C858 = qword_14043C850;
  }
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 144) += a3;
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) += a3;
  }
  v24 = *(_BYTE *)(a1 + 184);
  if ( (v24 & 7u) < 2 )
    goto LABEL_27;
  v49 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v50 = (v24 & 7u) - 2;
  v51 = *(_QWORD *)(v49 + 4288) + *(_QWORD *)(a1 + 136);
  if ( v51 > *(_QWORD *)(v49 + 8 * v50 + 4296) )
  {
    *(_QWORD *)(v49 + 8 * v50 + 4296) = v51;
    v24 = *(_BYTE *)(a1 + 184);
  }
  if ( (v24 & 7) != 4 )
    goto LABEL_27;
  if ( PsNtosImageBase
    && (v7 < PsNtosImageEnd && v7 >= (unsigned __int64)PsNtosImageBase
     || v7 < PsHalImageEnd && v7 >= (unsigned __int64)PsHalImageBase) )
  {
    LODWORD(xmmword_140439FE0) = a3 + xmmword_140439FE0;
    goto LABEL_27;
  }
  if ( (unsigned int)MiGetSystemRegionType(v7) != 12 )
    goto LABEL_27;
  v94[0] = 17;
  v59 = (__int64)(((v22 + ((v7 >> 9) & 0x7FFFFFFFF8LL)) << 25) - (v22 << 25)) >> 16;
  MmLockLoadedModuleListShared(v94);
  v60 = (_QWORD *)BugCheckParameter3;
  if ( !BugCheckParameter3 )
    goto LABEL_116;
  while ( 1 )
  {
    v61 = *(v60 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v59 > *((unsigned int *)v60 - 42) + v61 - 1 )
    {
      v60 = (_QWORD *)v60[1];
      goto LABEL_115;
    }
    if ( v59 >= v61 )
      break;
    v60 = (_QWORD *)*v60;
LABEL_115:
    if ( !v60 )
      goto LABEL_116;
  }
  if ( v60 )
    v10 = v60 - 29;
LABEL_116:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  v62 = v94[0];
  if ( v94[0] < 0xFu )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v94[0] < 2u )
    {
      v75 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v75->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v75);
      v62 = v94[0];
    }
    __writecr8(v62);
  }
  v22 = 0xFFFFF68000000000uLL;
  if ( v10 )
    DWORD1(xmmword_140439FE0) += a3;
LABEL_27:
  v25 = 0xFFFFF6FB7DBED000uLL;
  v26 = 0xFFFFF6FB40000000uLL;
  v27 = a4 & 4;
  if ( v27 && a3 )
  {
    while ( 2 )
    {
      if ( v7 < v22 || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v28 = v22 + ((v7 >> 9) & 0x7FFFFFFFF8LL);
        v29 = *(_QWORD *)v28;
        if ( v28 >= v25
          && v28 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v29 & 1) != 0
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v76 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v76 )
          {
            v77 = *(_QWORD *)(v76 + 8 * ((v28 >> 3) & 0x1FF));
            v78 = HIBYTE(*(_QWORD *)v28);
            if ( (v77 & 0x20) == 0 )
              v78 = HIBYTE(v29);
            HIBYTE(v29) = v78;
            if ( (v77 & 0x42) != 0 )
              HIBYTE(v29) = v78;
          }
        }
        v30 = HIBYTE(v29) & 0xF;
      }
      else
      {
        v30 = (*(_BYTE *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v22 + ((v7 >> 9) & 0x7FFFFFFFF8LL)) >> 12) & 0xFFFFFFFFFLL)
                        - 0x58000000000LL) >> 1) & 7;
      }
      if ( v7 < v22 || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v31 = v26 + ((v7 >> 18) & 0x3FFFFFF8);
        v32 = *(_QWORD *)v31;
        if ( v31 >= v25
          && v31 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v32 & 1) != 0
          && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
        {
          v79 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v79 )
          {
            v80 = *(_QWORD *)(v79 + 8 * ((v31 >> 3) & 0x1FF));
            v81 = v32 | 0x20;
            if ( (v80 & 0x20) == 0 )
              v81 = v32;
            v32 = v81;
            if ( (v80 & 0x42) != 0 )
              v32 = v81 | 0x42;
          }
        }
        v99 = v32;
        if ( (unsigned __int64)&v99 >= v25
          && (unsigned __int64)&v99 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v32 & 1) != 0
          && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
        {
          v82 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v82 )
          {
            v83 = *(_QWORD *)(v82 + 8 * (((unsigned __int64)&v99 >> 3) & 0x1FF));
            v84 = v32 | 0x20;
            if ( (v83 & 0x20) == 0 )
              v84 = v32;
            v32 = v84;
            if ( (v83 & 0x42) != 0 )
              v32 = v84 | 0x42;
          }
        }
        v33 = (unsigned __int64 *)(48 * ((v32 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        v34 = *v33;
        v35 = (*v33 >> 14) & 7;
        if ( ((*v33 >> 4) & 0x3FF) != 0 )
        {
          if ( v30 == v35 )
          {
            *v33 = v34 ^ ((unsigned __int16)v34 ^ (unsigned __int16)(16 * (((*v33 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v30 > v35 )
          {
            *v33 = v34 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v30 & 7) << 14) | 0x10;
          }
        }
      }
      ++*(_QWORD *)(a1 + 8LL * v30 + 40);
      if ( v30 != 7
        || (v45 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)),
            v46 = *(_QWORD *)(v45 + 7024),
            *(_QWORD *)(a1 + 96) < *(_QWORD *)(v46 + 64))
        || (v47 = (__int64 *)(a1 + 24), !*(_QWORD *)(a1 + 24))
        || (v48 = (__int64 *)(v45 + 7032), *(__int64 **)(v45 + 7032) == v47) )
      {
LABEL_40:
        v7 += 4096LL;
        v26 = 0xFFFFF6FB40000000uLL;
        if ( !--a3 )
          goto LABEL_41;
        continue;
      }
      break;
    }
    v98 = (volatile signed __int64 *)&qword_14043BF40;
    v97 = 0LL;
    v52 = KeGetCurrentPrcb();
    v53 = v52->SchedulerAssist;
    if ( v53 )
    {
      if ( v52->NestingLevel <= 1u )
      {
        v85 = v53[5];
        v53[5] = v85 + 1;
        if ( v85 == -1 )
          KiRemoveSystemWorkPriorityKick(v52);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v97, &qword_14043BF40);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&qword_14043BF40, (__int64)&v97) )
    {
      KxWaitForLockOwnerShip(&v97);
    }
    if ( *(_BYTE *)(v46 + 53) || (v64 = *v47) == 0 )
    {
      *(_BYTE *)(v46 + 54) = 1;
    }
    else
    {
      v65 = *(__int64 ***)(a1 + 32);
      if ( *(__int64 **)(v64 + 8) != v47
        || *v65 != v47
        || (*v65 = (__int64 *)v64, *(_QWORD *)(v64 + 8) = v65, v66 = *v48, *(__int64 **)(*v48 + 8) != v48) )
      {
        __fastfail(3u);
      }
      *v47 = v66;
      *(_QWORD *)(a1 + 32) = v48;
      *(_QWORD *)(v66 + 8) = v47;
      *v48 = (__int64)v47;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v97, retaddr);
    }
    else
    {
      _m_prefetchw(&v97);
      v54 = v97;
      if ( !v97 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v98, 0LL, (signed __int64)&v97) == &v97 )
          goto LABEL_95;
        v54 = KxWaitForLockChainValid(&v97);
      }
      v97 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v54 + 8), 1uLL);
    }
LABEL_95:
    v55 = KeGetCurrentPrcb();
    v56 = v55->SchedulerAssist;
    if ( v56 )
    {
      if ( v55->NestingLevel <= 1u )
      {
        v86 = v56[5] - 1;
        v56[5] = v86;
        if ( !v86 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    v22 = 0xFFFFF68000000000uLL;
    v25 = 0xFFFFF6FB7DBED000uLL;
    goto LABEL_40;
  }
LABEL_41:
  LOBYTE(v36) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v36 == 2 )
    v37 = &dword_14043C7E8;
  else
    v37 = (LONG *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LOBYTE(v36) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v37, retaddr);
    v22 = 0xFFFFF68000000000uLL;
    v25 = 0xFFFFF6FB7DBED000uLL;
  }
  else
  {
    *v37 = 0;
  }
  v38 = KeGetCurrentPrcb();
  v39 = v38->SchedulerAssist;
  if ( v39 )
  {
    if ( v38->NestingLevel <= 1u )
    {
      LODWORD(v36) = v39[5] - 1;
      v39[5] = v36;
      if ( !(_DWORD)v36 )
      {
        LOBYTE(v36) = KiRemoveSystemWorkPriorityKick(v38);
        v22 = 0xFFFFF68000000000uLL;
        v25 = 0xFFFFF6FB7DBED000uLL;
      }
    }
  }
  if ( v27 )
  {
    v40 = v95;
    if ( v95 < v22 || (LOBYTE(v36) = -1, v95 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v41 = ((v95 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v42 = *(_QWORD *)v41;
      if ( v41 >= v25 && v41 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
          || (v42 & 1) == 0
          || (v42 & 0x20) != 0 && (v42 & 0x42) != 0
          || (v87 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0]) == 0 )
        {
          v40 = v95;
        }
        else
        {
          v88 = *(_QWORD *)(v87 + 8 * ((v41 >> 3) & 0x1FF));
          v89 = v42 | 0x20;
          v40 = v95;
          if ( (v88 & 0x20) == 0 )
            v89 = v42;
          v42 = v89;
          if ( (v88 & 0x42) != 0 )
            v42 = v89 | 0x42;
        }
      }
      v100 = v42;
      if ( (unsigned __int64)&v100 >= v25
        && (unsigned __int64)&v100 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v42 & 1) != 0
          && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
        {
          v90 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v90 )
          {
            v91 = *(_QWORD *)(v90 + 8 * (((unsigned __int64)&v100 >> 3) & 0x1FF));
            v92 = v42 | 0x20;
            if ( (v91 & 0x20) == 0 )
              v92 = v42;
            v42 = v92;
            if ( (v91 & 0x42) != 0 )
              v42 = v92 | 0x42;
          }
        }
        v40 = v95;
      }
      v43 = (v42 >> 12) & 0xFFFFFFFFFLL;
      v44 = (unsigned __int64 *)(48 * v43 - 0x58000000000LL);
      v36 = (unsigned __int64)*(unsigned int *)v44 >> 4;
      if ( (v36 & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(v43, v40, v102, 0xFFFFF6FB7DBED7F8uLL);
        v57 = 8;
        while ( 1 )
        {
          LOBYTE(v36) = --v57;
          v58 = v102[v57];
          if ( v58 )
            break;
          if ( !v57 )
            return v36;
        }
        v36 = *v44 & 0xFFFFFFFFFFFE000FuLL;
        *v44 = v36 | (16 * (v58 & 0x3FF | ((unsigned __int64)(v57 & 7) << 10)));
      }
    }
  }
  return v36;
}
