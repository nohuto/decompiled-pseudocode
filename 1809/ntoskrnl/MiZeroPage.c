/*
 * XREFs of MiZeroPage @ 0x140036A00
 * Callers:
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14018526C (MiZeroLargePages.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiLargePageFreeToZero @ 0x14009B420 (MiLargePageFreeToZero.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiFreeUltraMapping @ 0x14018FD38 (MiFreeUltraMapping.c)
 *     MiSetZeroPageThreadPriority @ 0x14019319C (MiSetZeroPageThreadPriority.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeListPageContentsChanged @ 0x1402BFB50 (MiFreeListPageContentsChanged.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1402BFCA4 (MiFreeZeroPageSlistSufficient.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPage(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v3; // r13
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  int v8; // r11d
  int v9; // esi
  int v10; // r14d
  __int64 v11; // r12
  __int64 v12; // r10
  _BYTE *v13; // r8
  unsigned __int8 CurrentIrql; // al
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned int v18; // r10d
  unsigned __int64 v19; // r8
  char v20; // r11
  __int64 v21; // r14
  unsigned __int64 v22; // rcx
  unsigned __int64 *i; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r11
  __int64 v28; // rsi
  volatile signed __int32 *v29; // rdi
  __int64 *v30; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v32; // rcx
  signed __int32 v33; // edx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  __int64 v36; // rax
  BOOL v37; // r15d
  int v38; // r14d
  unsigned int v39; // edi
  unsigned __int8 OldIrql; // di
  int v41; // eax
  unsigned __int64 *v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // r12
  __int64 v48; // rdi
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // eax
  bool v53; // zf
  signed __int32 v54; // eax
  int v55; // eax
  struct _KPRCB *v56; // rcx
  struct _KPRCB *v57; // rcx
  __int64 v58; // r12
  __int64 v59; // r12
  __int64 v60; // rsi
  unsigned int v61; // [rsp+20h] [rbp-218h]
  int v62; // [rsp+24h] [rbp-214h]
  _BYTE *v63; // [rsp+28h] [rbp-210h]
  char v64; // [rsp+30h] [rbp-208h]
  int v65; // [rsp+34h] [rbp-204h]
  int v66; // [rsp+38h] [rbp-200h]
  unsigned int v67; // [rsp+3Ch] [rbp-1FCh]
  __int64 v68; // [rsp+48h] [rbp-1F0h]
  unsigned __int8 v69; // [rsp+50h] [rbp-1E8h]
  int v70; // [rsp+58h] [rbp-1E0h]
  unsigned int v71; // [rsp+5Ch] [rbp-1DCh]
  int v72; // [rsp+60h] [rbp-1D8h]
  int v73; // [rsp+64h] [rbp-1D4h] BYREF
  __int64 v74; // [rsp+68h] [rbp-1D0h]
  PVOID P; // [rsp+70h] [rbp-1C8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-1C0h]
  __int64 v77; // [rsp+80h] [rbp-1B8h]
  unsigned __int64 v78; // [rsp+88h] [rbp-1B0h]
  _QWORD *v79; // [rsp+90h] [rbp-1A8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-1A0h] BYREF
  unsigned int v81; // [rsp+B0h] [rbp-188h] BYREF
  __int16 v82; // [rsp+B4h] [rbp-184h]
  __int64 v83; // [rsp+B8h] [rbp-180h]
  __int64 v84; // [rsp+C0h] [rbp-178h]
  _QWORD Base[21]; // [rsp+C8h] [rbp-170h] BYREF
  _DWORD v86[4]; // [rsp+170h] [rbp-C8h] BYREF
  __int64 v87; // [rsp+180h] [rbp-B8h]
  void *retaddr; // [rsp+238h] [rbp+0h]

  v74 = a2;
  v2 = a1;
  v79 = a1;
  P = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v68 = 0LL;
  v3 = a1[9];
  CurrentThread = (struct _KTHREAD *)v3;
  v63 = a1;
  v4 = a1[5];
  v5 = *((unsigned int *)v2 + 16);
  v70 = v5;
  if ( (unsigned int)v5 < 3 )
    v6 = MiLargePageSizes[v5];
  else
    v6 = 1LL;
  v77 = v6;
  if ( *((_BYTE *)v2 + 210) )
  {
    v6 = 512LL;
    v77 = 512LL;
    if ( !(_DWORD)v5 )
    {
      v68 = v2[27];
      v4 = *(_QWORD *)(v68 + 176) + ((unsigned __int64)*((unsigned __int16 *)v2 + 104) << 21);
      v63 = (_BYTE *)v68;
    }
  }
  KeZeroPages(v4, v6 << 12);
  v8 = 1;
  v62 = 1;
  v9 = 1;
  v72 = 1;
  v10 = 0;
  v66 = 0;
  v65 = 0;
  v11 = 0LL;
  v67 = 0;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  v12 = v68;
  if ( v68 )
  {
    v10 = 1;
    v3 = *(_QWORD *)(v68 + 168);
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_14043DA10 + 1984LL * *(unsigned int *)(v68 + 184) + 1904),
      &LockHandle);
    v12 = v68;
    v8 = 1;
  }
  v13 = v63;
  if ( (HvlEnlightenments & 0x400000) != 0 && !CurrentThread->Priority && !*((_BYTE *)v2 + 210) && !v63[70] && !v63[69] )
  {
    v65 = 1;
    v67 = MiSetZeroPageThreadPriority(v74, CurrentThread, 1LL);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v74 + 184, 0LL);
    v13 = v63;
    v12 = v68;
    v8 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  v69 = CurrentIrql;
  __writecr8(2uLL);
  SchedulerAssist = (volatile signed __int32 *)(unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    _InterlockedOr(SchedulerAssist, 0x10000u);
  }
  v71 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      v39 = v71 + 1;
      v71 = v39;
      if ( (v39 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SchedulerAssist, v7, v13) )
      {
        HvlNotifyLongSpinWait(v39);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
    v13 = v63;
    v12 = v68;
    v8 = 1;
  }
  if ( v12 )
  {
    v8 = 0;
    v62 = 0;
    v9 = 0;
    if ( v13[69] != 1 )
    {
      if ( ++*(_DWORD *)(v12 + 192) != 512 )
      {
        v72 = 0;
        goto LABEL_10;
      }
      v8 = 1;
      v62 = 1;
    }
    v9 = v8;
    v41 = *(_DWORD *)(v12 + 188);
    if ( v41 == 1 )
    {
      v7 = *(_QWORD *)(v12 + 72);
      v42 = *(unsigned __int64 **)(v12 + 80);
      if ( *(_QWORD *)(v7 + 8) != v12 + 72 || *v42 != v12 + 72 )
        __fastfail(3u);
      *v42 = v7;
      *(_QWORD *)(v7 + 8) = v42;
      v9 = 1;
      P = (PVOID)v12;
    }
    else
    {
      *(_DWORD *)(v12 + 188) = v41 - 1;
    }
  }
LABEL_10:
  v64 = v13[69];
  if ( v9 == 1 )
  {
    if ( v10 == 1 )
    {
      MiFreeUltraMapping(*(_QWORD *)(v2[27] + 176LL));
LABEL_42:
      v13 = v63;
      v8 = v62;
      goto LABEL_43;
    }
    v16 = *((unsigned int *)v2 + 16);
    v17 = v2[4];
    v78 = v17;
    v18 = 0;
    v83 = 20LL;
    v19 = 0LL;
    v81 = 0;
    v20 = 0;
    v82 = 0;
    v84 = 0LL;
    Base[0] = 0LL;
    if ( (unsigned int)v16 <= 1 )
    {
      MiInsertLargeTbFlushEntry(&v81, (unsigned int)(2 - v16), v17);
      v21 = 1LL;
      v18 = HIDWORD(v83);
      v20 = v82;
      v19 = v81;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = v17;
    for ( i = (unsigned __int64 *)0xFFFFF6FFFFFFFFFFLL; v22 >= 0xFFFFF68000000000uLL; v22 = (__int64)(v22 << 25) >> 16 )
    {
      if ( v22 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v7 = qword_14043BD70;
    v24 = (!qword_14043BD70 || v22 < qword_14043BD70 || v22 >= qword_14043BD70 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v16 <= 1;
    v61 = v24;
    if ( !v21 )
    {
      v25 = (__int64)(v17 << 25) >> 16;
      if ( (_DWORD)v16 != 3 )
      {
        if ( (_DWORD)v16 == 2 )
        {
          v21 = 16LL;
          MiInsertTbFlushEntry(&v81, v25, 16LL);
          v24 = v61;
        }
        else
        {
          v46 = v16;
          v47 = MiLargePageSizes[v16];
          if ( v46 <= 1 )
          {
            v48 = 2 - v46;
            do
            {
              MiInsertTbFlushEntry(&v81, v25, v47);
              v25 = (__int64)(v25 << 25) >> 16;
              v47 <<= 9;
              --v48;
            }
            while ( v48 );
            v17 = v78;
            v24 = v61;
          }
          v21 = 512LL;
        }
        goto LABEL_33;
      }
      v21 = 1LL;
      if ( (_DWORD)v19 != 1 && (v20 & 8) == 0 && v25 >= 0xFFFFF68000000000uLL && v25 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v20 |= 8u;
        LOBYTE(v82) = v20;
      }
      if ( !v18 )
      {
LABEL_27:
        if ( v18 >= (unsigned int)v83 )
        {
          HIBYTE(v82) = 1;
        }
        else
        {
          while ( 1 )
          {
            v7 = (unsigned __int64)(v21 - 1) > 0x3FF ? 1024LL : v21;
            v21 -= v7;
            v26 = v25 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v7 - 1) & 0x3FF;
            v25 += v7 << 12;
            Base[v18] = v26;
            v18 = HIDWORD(v83) + 1;
            HIDWORD(v83) = v18;
            v84 += v7;
            if ( v18 == (_DWORD)v83 && (v82 & 4) == 0 )
            {
              qsort(Base, v18, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v81);
              v18 = HIDWORD(v83);
              if ( HIDWORD(v83) == (_DWORD)v83 )
              {
                if ( v21 )
                  break;
              }
            }
            if ( !v21 )
              goto LABEL_32;
          }
          HIBYTE(v82) = 1;
          v84 = HIDWORD(v83);
LABEL_32:
          v21 = 1LL;
          v24 = v61;
        }
        goto LABEL_33;
      }
      if ( (v20 & 4) == 0 )
      {
        i = &Base[v18 - 1];
        v43 = *i;
        if ( (*i & 0xC00) == 0 )
        {
          v19 = *i & 0x3FF;
          v7 = (v43 & 0xFFFFFFFFFFFFF000uLL) + ((v19 + 1) << 12);
          if ( v7 == v25 && v19 + 1 >= v19 && v19 + 1 <= 0x3FF )
          {
            ++v84;
            *i = ((unsigned __int16)v43 ^ (unsigned __int16)(v43 + 1)) & 0x3FF ^ v43;
            v24 = (unsigned int)v24;
            goto LABEL_33;
          }
        }
        v24 = (unsigned int)v24;
      }
      if ( (v20 & 4) != 0 )
        goto LABEL_27;
      v19 = (unsigned __int64)&Base[v18 - 1];
      v44 = *(_QWORD *)v19;
      if ( (*(_QWORD *)v19 & 0xC00LL) != 0
        || (v7 = v44 & 0xFFFFFFFFFFFFF000uLL, (v44 & 0xFFFFFFFFFFFFF000uLL) != v25 + 4096)
        || (v45 = *(_QWORD *)v19 & 0x3FFLL, v7 = v45 + 1, v45 + 1 < v45)
        || v7 > 0x3FF )
      {
        v24 = v61;
        goto LABEL_27;
      }
      ++v84;
      *(_QWORD *)v19 = ((unsigned __int16)(v44 - 4096) ^ (unsigned __int16)(v44 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v44 - 4096);
      v24 = v61;
    }
LABEL_33:
    v27 = v17 + 8 * v21;
    if ( v17 < v27 )
    {
      do
      {
        v7 = 0LL;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v24, 0LL) )
            v7 = 1LL;
        }
        *(_QWORD *)v17 = 0LL;
        if ( (_DWORD)v7 )
          MiWritePteShadow(v17);
        v17 += 8LL;
      }
      while ( v17 < v27 );
      v2 = v79;
      LODWORD(v24) = v61;
    }
    if ( (_DWORD)v24 )
      MiFlushTbList(&v81, v7, v19, i);
    v11 = 0LL;
    goto LABEL_42;
  }
LABEL_43:
  v28 = v68;
  if ( v68 && v72 == 1 )
    v2[27] = 0LL;
  if ( v8 == 1 || P )
  {
    if ( v13[71] )
    {
      v29 = &dword_14043B798;
      v30 = &qword_14043B7A0;
    }
    else
    {
      v29 = &dword_14043B7A8;
      v30 = &qword_14043B7B0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v7) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v29, v7);
      v13 = v63;
    }
    else
    {
      v73 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = CurrentPrcb->SchedulerAssist;
      if ( v32 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v50 = v32[5];
          v32[5] = v50 + 1;
          if ( v50 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v13 = v63;
          }
        }
      }
      if ( _interlockedbittestandset(v29, 0x1Fu) )
      {
        v51 = CurrentPrcb->SchedulerAssist;
        if ( v51 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v52 = v51[5] - 1;
            v51[5] = v52;
            if ( !v52 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v73 = ExpWaitForSpinLockExclusiveAndAcquire(v29, 0xFFu);
        v13 = v63;
      }
      v33 = *v29;
      if ( (*v29 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v33 & 0x40000000) == 0 )
          {
            v54 = _InterlockedCompareExchange(v29, v33 | 0x40000000, v33);
            v53 = v33 == v54;
            v33 = v54;
            if ( !v53 )
              continue;
          }
          KeYieldProcessorEx(&v73);
          v33 = *v29;
        }
        while ( (v33 & 0xBFFFFFFF) != 0x80000000 );
        v13 = v63;
      }
      v28 = v68;
    }
    RtlAvlRemoveNode(v30, v13);
    v13 = v63;
    v63[68] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v29, retaddr);
      v13 = v63;
    }
    else
    {
      *v29 = 0;
    }
    v34 = KeGetCurrentPrcb();
    v35 = v34->SchedulerAssist;
    if ( v35 )
    {
      if ( v34->NestingLevel <= 1u )
      {
        v55 = v35[5] - 1;
        v35[5] = v55;
        if ( !v55 )
        {
          KiRemoveSystemWorkPriorityKick(v34);
          v13 = v63;
        }
      }
    }
  }
  if ( v64 == 1 || v62 != 1 )
    goto LABEL_84;
  v11 = (v3 + 0x58000000000LL) / 48;
  if ( v70 == 3 )
  {
    v2[3] = 0LL;
    *(_BYTE *)(v3 + 34) &= ~8u;
    if ( !v13[70] )
    {
      if ( v65 )
      {
        MiFreeZeroPageSlistSufficient(
          v74,
          dword_14043B148 & (unsigned int)v11 | (((*(_QWORD *)(v3 + 40) >> 36) & 3) << byte_14043B10A) | ((unsigned int)(*(_QWORD *)(v3 + 40) >> 58) << byte_14043B109),
          0LL);
        v66 = 1;
        v28 = v68;
      }
      v36 = 128LL;
      if ( qword_14043B180 )
      {
        if ( (qword_14043B180 & 0x80) != 0 )
          v36 = 144LL;
        else
          v36 = qword_14043B180 | 0x80;
      }
      *(_QWORD *)(v3 + 16) = v36;
      MiUnlinkFreeOrZeroedPage((v3 + 0x58000000000LL) / 48, 0LL, 0LL);
      MiInsertPageInFreeOrZeroedList((v3 + 0x58000000000LL) / 48);
      v37 = v66;
      goto LABEL_65;
    }
    MiFreeListPageContentsChanged((v3 + 0x58000000000LL) / 48);
LABEL_84:
    v37 = 0;
LABEL_65:
    v38 = v65;
    goto LABEL_66;
  }
  v38 = v65;
  v37 = 0;
  if ( v65 )
    v37 = v13[70] == 0;
  MiLargePageFreeToZero((v3 + 0x58000000000LL) / 48);
LABEL_66:
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v69 < 2u )
  {
    v56 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v56->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v56);
  }
  __writecr8(v69);
  if ( v28 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v57 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v57);
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v37 )
  {
    v86[0] = 0;
    v86[1] = 1;
    v86[2] = 16;
    v58 = v11 << 12;
    v87 = v58;
    if ( v77 != 1 )
    {
      if ( v77 == 16 )
      {
        v59 = v58 | 0xF;
      }
      else if ( v77 == 512 )
      {
        v59 = v58 | 0x400;
      }
      else
      {
        v59 = v58 | 0x800;
      }
      v87 = v59;
    }
    MiNotifyPageHeat(v86);
  }
  if ( v38 )
  {
    v60 = v74;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v60 + 184);
    KeAbPostRelease(v60 + 184);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    MiSetZeroPageThreadPriority(v60, CurrentThread, v67);
  }
}
