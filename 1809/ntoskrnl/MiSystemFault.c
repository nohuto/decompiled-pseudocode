/*
 * XREFs of MiSystemFault @ 0x1400E8980
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiUpdatePfnPriorityByPte @ 0x14003DA70 (MiUpdatePfnPriorityByPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiCheckSystemPageTables @ 0x1400E93A0 (MiCheckSystemPageTables.c)
 *     MiNoFaultFound @ 0x1400E9414 (MiNoFaultFound.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiCheckSystemNxFault @ 0x1400E9508 (MiCheckSystemNxFault.c)
 *     MiIsWorkingSetTrimThread @ 0x1400E9540 (MiIsWorkingSetTrimThread.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGenerateAccessViolation @ 0x1402BC210 (MiGenerateAccessViolation.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiTransientPageListWriter @ 0x1402CDA84 (MiTransientPageListWriter.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSystemFault(__int64 a1)
{
  int v1; // eax
  ULONG_PTR v3; // rdx
  unsigned __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  int v6; // eax
  ULONG_PTR v7; // r14
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  _BYTE *v12; // rax
  __int16 v13; // ax
  void *v14; // rax
  char v15; // r12
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  int v18; // edx
  char *SessionVm; // r14
  unsigned __int64 v20; // r9
  char v21; // al
  unsigned __int8 v22; // al
  LONG *v23; // rbx
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *v25; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v27; // ett
  unsigned __int8 v28; // dl
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r13
  int v31; // eax
  unsigned __int64 Process; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  int v38; // r12d
  int v39; // eax
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  ULONG_PTR v42; // r9
  __int64 v43; // xmm1_8
  unsigned __int64 v44; // rsi
  ULONG_PTR v45; // rbx
  char v46; // cl
  __int64 v48; // r15
  unsigned __int64 v49; // r10
  __int64 v50; // r9
  __int64 v51; // rbx
  __int64 SystemCacheReverseMap; // rax
  unsigned __int64 v53; // rcx
  char *AnyMultiplexedVm; // rax
  _BYTE *v55; // r14
  __int64 v56; // rax
  _BYTE *v57; // rax
  __int64 v58; // rax
  KIRQL v59; // al
  _QWORD *v60; // r12
  KIRQL v61; // r13
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // xmm1_8
  _DWORD *v65; // rcx
  int v66; // ebx
  unsigned __int64 valid; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v69; // eax
  int v70; // eax
  __int64 v71; // r10
  __int64 v72; // r11
  __int64 v73; // rax
  __int64 v74; // rax
  _BYTE *v75; // rax
  _BYTE *v76; // rax
  _BYTE *v77; // rax
  char v78; // [rsp+30h] [rbp-D0h]
  char v79; // [rsp+31h] [rbp-CFh]
  unsigned __int64 v80; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v81; // [rsp+40h] [rbp-C0h] BYREF
  int v82; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v83; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v84; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v85; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v86; // [rsp+68h] [rbp-98h]
  unsigned __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v88[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(a1 + 80);
  if ( (v1 & 0x40) != 0 )
    return 3221225477LL;
  v3 = *(_QWORD *)a1;
  if ( (v1 & 0x20) != 0 )
    KeBugCheckEx(0x50u, v3, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0xEuLL);
  v4 = *(_QWORD *)a1;
  if ( v3 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v4 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v4 = (__int64)(v4 << 25) >> 16;
    }
    while ( v4 >= 0xFFFFF68000000000uLL );
  }
  if ( v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL && v4 >= qword_14043CB80 && v4 <= qword_14043B5F0 )
    *(_QWORD *)(a1 + 8) |= 2uLL;
  v78 = 0;
  if ( (*(_QWORD *)(a1 + 8) & 0x100000000000000LL) != 0 )
  {
    if ( v3 < 0xFFFFF68000000000uLL
      || v3 > 0xFFFFF6FFFFFFFFFFuLL
      || v4 > 0x7FFFFFFEFFFFLL && (v4 < qword_14043CB80 || v4 > qword_14043B5F0) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v4 < 0xFFFF800000000000uLL || v4 >= qword_14043B5E8 && v4 < qword_14043B5E8 + 276840448 )
    return 192LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v6 & 0x400) != 0
    || (v6 & 0x100) != 0
    && (unsigned int)MiTransientPageListWriter(CurrentThread, v3, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL) == 1 )
  {
    return 3221225477LL;
  }
  v7 = *(_QWORD *)a1;
  v8 = 0LL;
  if ( !dword_14043B784 )
    goto LABEL_12;
  v59 = ExAcquireSpinLockShared(&dword_14043B780);
  v60 = (_QWORD *)qword_14043B788;
  v61 = v59;
  if ( !qword_14043B788 )
    goto LABEL_142;
  while ( 1 )
  {
    v62 = v60[3];
    if ( (unsigned __int64)CurrentThread <= v62 )
      break;
    v60 = (_QWORD *)v60[1];
LABEL_140:
    if ( !v60 )
      goto LABEL_141;
  }
  if ( (unsigned __int64)CurrentThread < v62 )
  {
    v60 = (_QWORD *)*v60;
    goto LABEL_140;
  }
LABEL_141:
  if ( v60 && v60[5] != ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    v60 = 0LL;
LABEL_142:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14043B780);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v61 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v61);
  if ( v60 )
    return 3221225477LL;
LABEL_12:
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v9;
  v11 = v9 & 1;
  if ( (v9 & 1) != 0 )
  {
    if ( *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v12 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v9 & 1) != 0 )
    {
      if ( *v12 != 3 )
        goto LABEL_18;
    }
    else
    {
      if ( !v9 )
        goto LABEL_18;
      v13 = *(_WORD *)(v9 + 368);
      if ( v13 == 16 )
      {
        v14 = &ExpInterlockedPopEntrySListFault;
        goto LABEL_17;
      }
      if ( v13 != 51 )
        goto LABEL_18;
      v14 = (void *)KeUserPopEntrySListFault;
LABEL_17:
      if ( *(void **)(v9 + 360) != v14 )
      {
LABEL_18:
        v15 = 0;
        goto LABEL_19;
      }
    }
  }
  v15 = 1;
LABEL_19:
  v79 = v15;
  memset(v88, 0, sizeof(v88));
  HIDWORD(v88[0]) = 1;
  v17 = ((v4 >> 39) & 0x1FF) - 256;
  v18 = (unsigned __int8)byte_14043CA10[v17];
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    if ( (unsigned int)(v18 - 6) > 1 )
      return 3221225477LL;
  }
  else if ( ((v9 & 1) == 0 || *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) != 1) && !v15 )
  {
    HIDWORD(v88[0]) = 3;
  }
  if ( v18 == 8 )
  {
    SessionVm = (char *)&unk_14043F700;
    goto LABEL_27;
  }
  if ( v18 == 1 )
  {
    SessionVm = (char *)MiGetSessionVm(v17);
    if ( SessionVm )
    {
      v78 = 1;
      goto LABEL_27;
    }
    goto LABEL_250;
  }
  if ( (unsigned int)(v18 - 6) <= 1 )
  {
    SessionVm = (char *)&unk_14043C360;
    goto LABEL_27;
  }
  if ( v18 == 12 )
  {
    SessionVm = (char *)&unk_14043C250;
    goto LABEL_27;
  }
  if ( v18 == 15 )
  {
    v55 = (_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v11 && (*v55 == 1 || *v55 == 4) )
    {
      SessionVm = (char *)&unk_14043C580;
      goto LABEL_27;
    }
    goto LABEL_250;
  }
  if ( v18 != 9 )
    goto LABEL_250;
  SessionVm = MiGetAnyMultiplexedVm(3);
LABEL_27:
  v20 = *(_QWORD *)a1;
  v80 = *(_QWORD *)a1;
  if ( !(_BYTE)v18 )
  {
LABEL_250:
    if ( (v88[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 2uLL);
    return 3221225477LL;
  }
  v21 = SessionVm[184];
  BYTE5(v88[4]) &= ~1u;
  v22 = v21 & 7;
  LODWORD(v88[2]) = 0;
  v88[3] = SessionVm;
  if ( v22 < 6u )
  {
    if ( v22 == 2 )
      v23 = &dword_14043C7C0;
    else
      v23 = (LONG *)(SessionVm + 192);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v23, CurrentIrql);
    }
    else
    {
      v25 = KeGetCurrentPrcb();
      SchedulerAssist = v25->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v69 = SchedulerAssist[5];
          SchedulerAssist[5] = v69 + 1;
          if ( v69 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v25);
            v20 = v80;
          }
        }
      }
      _m_prefetchw(v23);
      v27 = *v23 & 0x7FFFFFFF;
      if ( v27 == _InterlockedCompareExchange(v23, v27 + 1, v27) )
      {
LABEL_35:
        if ( v23[1] )
          _InterlockedExchange(v23 + 1, 0);
        v28 = CurrentIrql;
        goto LABEL_38;
      }
      v65 = v25->SchedulerAssist;
      if ( v65 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v70 = v65[5] - 1;
          v65[5] = v70;
          if ( !v70 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(v23, CurrentIrql, v16);
    }
    v20 = v80;
    goto LABEL_35;
  }
  v28 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
LABEL_38:
  BYTE4(v88[4]) = v28;
  v81 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = MiFastLockLeafPageTable((__int64)SessionVm, v20, 0);
  v34 = v80;
  v35 = v31;
  v36 = v80 >> 9;
  if ( v31 )
  {
    v83 = (v36 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v84 = ((v83 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v85 = ((v84 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    Process = ((v85 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v86 = Process;
    v29 = *(&v83 + v31);
    v33 = v31 - 1;
    v30 = *(&v83 + v33);
    v81 = v30;
  }
  v37 = (v36 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v29 )
  {
    valid = MiLockLowestValidPageTable((__int64)SessionVm, v37, &v81, v80);
    v34 = v80;
    v29 = valid;
    v30 = v81;
  }
  v88[5] = v29;
  if ( v30 != v37 )
  {
    if ( (v88[0] & 0x400000000LL) != 0 && (MI_READ_PTE_LOCK_FREE(v30) & 0x81) == 0x81 )
    {
      LODWORD(v33) = 0;
      do
      {
        v37 = v71 + (v72 & (v37 >> 9));
        v33 = (unsigned int)(v33 + 1);
      }
      while ( v37 != v30 );
      LODWORD(v88[2]) = v33;
      goto LABEL_44;
    }
    goto LABEL_249;
  }
  if ( (SessionVm[184] & 7) != 2 )
    goto LABEL_44;
  if ( LODWORD(v88[6]) != 3 )
  {
    SystemCacheReverseMap = MiGetSystemCacheReverseMap(v34);
    if ( SystemCacheReverseMap && *(_QWORD *)(SystemCacheReverseMap + 16) )
    {
      Process = *(_QWORD *)(MiGetSystemCacheReverseMap(v80) + 24);
      v53 = Process & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (Process & 1) == 0 )
        v53 = Process;
      v33 = *(_WORD *)(*(_QWORD *)v53 + 60LL) & 0x3FF;
      AnyMultiplexedVm = (char *)(*(_QWORD *)(qword_14043B808 + 8 * v33) + 7424LL);
      goto LABEL_101;
    }
    goto LABEL_249;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
LABEL_101:
  v88[3] = AnyMultiplexedVm;
LABEL_44:
  v38 = BYTE4(v88[0]) & 2;
  if ( (v88[0] & 0x200000000LL) == 0
    && (Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process, (*(_DWORD *)(Process + 1740) & 0x1000) != 0)
    && !(unsigned int)MiIsWorkingSetTrimThread(v33, Process, v35)
    && (unsigned int)MiGetSystemRegionType(v4) == 1
    || (v39 = MiCheckSystemPageTables(a1, Process, v35), v39 == 2) )
  {
LABEL_249:
    MiUnlockSystemVa(v88);
    goto LABEL_250;
  }
  if ( v39 == 1 )
  {
    MiUnlockSystemVa(v88);
    return 0LL;
  }
  v43 = v88[5];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v88[3];
  *(_QWORD *)(a1 + 72) = v43;
  v44 = *(_QWORD *)(a1 + 24);
  v45 = *(_QWORD *)v44;
  if ( v44 < 0xFFFFF6FB7DBED000uLL
    || v44 > 0xFFFFF6FB7DBED7F8uLL
    || (MiFlags & 0xC00000) == 0
    || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
  {
    goto LABEL_48;
  }
  if ( (v45 & 1) != 0 )
  {
    if ( (v45 & 0x20) == 0 || (v45 & 0x42) == 0 )
    {
      v40 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v40 )
      {
        v73 = *(_QWORD *)(v40 + 8 * ((v44 >> 3) & 0x1FF));
        v40 = v45 | 0x20;
        if ( (v73 & 0x20) == 0 )
          v40 = *(_QWORD *)v44;
        v45 = v40;
        if ( (v73 & 0x42) != 0 )
          v45 = v40 | 0x42;
      }
    }
LABEL_48:
    if ( (v45 & 1) != 0 )
    {
      if ( (v45 & 0x80u) != 0LL )
      {
        v40 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v40 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( v38 )
            KeBugCheckEx(0x50u, v40, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 8uLL);
          goto LABEL_129;
        }
      }
      v50 = *(_QWORD *)(a1 + 16);
      if ( (v50 & 1) != 0 && *(_BYTE *)(v50 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      {
        MiUpdatePfnPriorityByPte(*(_QWORD *)(a1 + 24), *(_DWORD *)((v50 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7);
        goto LABEL_85;
      }
      if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
      {
        if ( (v45 & 0x800) == 0 )
        {
          if ( (v45 & 0x200) == 0 && (*(_DWORD *)(a1 + 80) & 8) == 0 )
          {
            if ( !(unsigned int)MiGenerateAccessViolation(a1) )
              KeBugCheckEx(0xBEu, *(_QWORD *)a1, v45, *(_QWORD *)(a1 + 16), 0xBuLL);
            goto LABEL_129;
          }
          v66 = MiCopyOnWrite(*(_QWORD *)a1, *(_QWORD *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL, 0);
          MiUnlockSystemVa(v88);
          if ( v66 < 0 )
            MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v66);
          return 0LL;
        }
      }
      else
      {
        MiCheckSystemNxFault(a1, v45, 2LL);
        v50 = *(_QWORD *)(a1 + 16);
      }
      MiNoFaultFound(a1, v44, *(_QWORD *)a1, v50, 1);
      goto LABEL_85;
    }
  }
  if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v79 )
    {
      v42 = *(_QWORD *)(a1 + 16);
      if ( (v42 & 1) == 0 || *(_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), v42, 9uLL);
      goto LABEL_85;
    }
    goto LABEL_129;
  }
  if ( (v45 & 0x400) == 0 )
  {
    if ( (v45 & 0x3E0) == 0 && (v45 & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 80) & 8) == 0 )
      {
        v40 = *(_QWORD *)(a1 + 16);
        v76 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v40 & 1) != 0 )
        {
          if ( *v76 == 1 || *v76 == 3 )
            goto LABEL_129;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16), v40, v41, v42) == 1 )
        {
          goto LABEL_129;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 0LL);
      }
LABEL_129:
      LODWORD(v8) = -1073741819;
      goto LABEL_85;
    }
    if ( (v45 & 0x3E0) == 0x300
      || (v45 & 0x3E0) == 0x3E0
      && ((v56 = *(_QWORD *)(a1 + 16), (v56 & 1) == 0) || *(_BYTE *)(v56 & 0xFFFFFFFFFFFFFFFEuLL) != 4) )
    {
      if ( (*(_DWORD *)(a1 + 80) & 8) == 0 )
      {
        v40 = *(_QWORD *)(a1 + 16);
        v57 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v40 & 1) != 0 )
        {
          if ( *v57 != 1 && *v57 != 3 )
            goto LABEL_238;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16), v40, v41, v42) != 1 )
        {
LABEL_238:
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), 1uLL);
        }
      }
      if ( (v45 & 0x3E0) == 0x300 )
        goto LABEL_129;
      v58 = *(_QWORD *)(a1 + 16);
      if ( (v58 & 1) == 0 || *(_BYTE *)(v58 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        goto LABEL_129;
    }
LABEL_54:
    v46 = v78;
LABEL_55:
    if ( (*(_BYTE *)(a1 + 8) & 2) == 0 || v8 || v46 || ((v45 >> 5) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 96) = v8;
      return 3221225494LL;
    }
    if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
      goto LABEL_129;
    v40 = *(_QWORD *)(a1 + 16);
    v77 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v40 & 1) != 0 )
    {
      if ( *v77 == 1 || *v77 == 3 )
        goto LABEL_129;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16), v40, v41, v42) == 1 )
    {
      goto LABEL_129;
    }
    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0xBEu, *(_QWORD *)a1, v45, *(_QWORD *)(a1 + 16), 0xEuLL);
    goto LABEL_129;
  }
  if ( (v45 & 2) != 0 )
  {
    v63 = *(_QWORD *)(a1 + 16);
    if ( (v63 & 1) == 0 || *(_BYTE *)(v63 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      LODWORD(v8) = MiResolveDemandZeroFault((unsigned __int64 *)a1, *(_QWORD *)(a1 + 24), 0LL, 0);
      v64 = *(_QWORD *)(a1 + 72);
      *(_OWORD *)&v88[3] = *(_OWORD *)(a1 + 56);
      v88[5] = v64;
    }
LABEL_85:
    v51 = v88[3];
    if ( v88[3] )
    {
      if ( v88[5] )
      {
        if ( WORD1(v88[4]) )
          MiEmptyDeferredWorkingSetEntries(&v88[3], v40, v41);
        MiUnlockPageTableInternal(v51, v88[5]);
        BYTE5(v88[4]) |= 2u;
      }
      if ( (v88[4] & 0x10000000000LL) != 0 )
        MiUnlockWorkingSetExclusive(v51, BYTE4(v88[4]), v41, v42);
      else
        MiUnlockWorkingSetShared(v51, BYTE4(v88[4]));
    }
    return (unsigned int)v8;
  }
  else
  {
    v48 = v45;
    if ( qword_14043B180 && (v45 & 0x10) == 0 )
      v48 = v45 & ~qword_14043B180;
    v46 = v78;
    v8 = v48 >> 16;
    if ( !v78 )
      goto LABEL_55;
    if ( !MiIsPrototypePteVadLookup(v45) )
      goto LABEL_54;
    v74 = MiCheckVirtualAddress(v49, &v82, &v87);
    v8 = v74;
    if ( v74 )
      goto LABEL_54;
    v40 = *(_QWORD *)(a1 + 16);
    v75 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v40 & 1) != 0 )
    {
      if ( *v75 == 1 || *v75 == 3 )
        goto LABEL_129;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(*(_QWORD *)(a1 + 16), v40, v41, v42) == 1 )
    {
      goto LABEL_129;
    }
    if ( (unsigned int)MiGenerateAccessViolation(a1) )
      goto LABEL_129;
    MiUnlockSystemVa(v88);
    return 3489660934LL;
  }
}
