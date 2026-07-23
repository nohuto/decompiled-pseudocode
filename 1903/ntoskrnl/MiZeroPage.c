/*
 * XREFs of MiZeroPage @ 0x140029010
 * Callers:
 *     MiZeroPageThread @ 0x140185170 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14018FA6C (MiZeroLargePages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiLargePageFreeToZero @ 0x14009FA50 (MiLargePageFreeToZero.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCompressTbFlushList @ 0x140114FE0 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiSetZeroPageThreadPriority @ 0x140185264 (MiSetZeroPageThreadPriority.c)
 *     MiFreeUltraMapping @ 0x140199C4C (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x1401C7A10 (KeZeroPages.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFreeListPageContentsChanged @ 0x1402D9250 (MiFreeListPageContentsChanged.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1402D93B4 (MiFreeZeroPageSlistSufficient.c)
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPage(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // edi
  int v9; // esi
  __int64 v10; // r12
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // al
  _BYTE *v14; // r8
  __int64 v15; // r12
  unsigned __int64 v16; // rdi
  unsigned int v17; // r10d
  __int64 *v18; // r9
  char v19; // r11
  __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 *i; // r8
  BOOL v23; // esi
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int64 v26; // r11
  __int64 v27; // rsi
  volatile signed __int32 *v28; // rdi
  __int64 *v29; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v32; // edx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // rax
  BOOL v36; // r13d
  int v37; // r14d
  int v38; // eax
  unsigned __int8 OldIrql; // di
  _DWORD *v40; // rcx
  int v41; // eax
  __int64 v42; // r14
  __int64 *v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r12
  int v47; // eax
  int v48; // eax
  bool v49; // zf
  signed __int32 v50; // eax
  int v51; // eax
  struct _KPRCB *v52; // rcx
  struct _KPRCB *v53; // rcx
  __int64 v54; // r12
  __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  BOOL v60; // [rsp+20h] [rbp-248h]
  char v61; // [rsp+24h] [rbp-244h]
  int v62; // [rsp+28h] [rbp-240h]
  int v63; // [rsp+2Ch] [rbp-23Ch]
  _BYTE *v64; // [rsp+30h] [rbp-238h]
  int v65; // [rsp+38h] [rbp-230h]
  _BYTE v66[12]; // [rsp+3Ch] [rbp-22Ch]
  unsigned __int8 v67; // [rsp+48h] [rbp-220h]
  int v68; // [rsp+54h] [rbp-214h]
  int v69; // [rsp+60h] [rbp-208h]
  int v70; // [rsp+64h] [rbp-204h] BYREF
  __int64 v71; // [rsp+68h] [rbp-200h]
  PVOID P; // [rsp+70h] [rbp-1F8h]
  struct _KTHREAD *v73; // [rsp+78h] [rbp-1F0h]
  __int64 v74; // [rsp+80h] [rbp-1E8h]
  __int64 v75; // [rsp+88h] [rbp-1E0h]
  int v76; // [rsp+90h] [rbp-1D8h] BYREF
  unsigned int v77; // [rsp+94h] [rbp-1D4h]
  __int64 v78; // [rsp+98h] [rbp-1D0h]
  __int64 v79; // [rsp+A0h] [rbp-1C8h]
  unsigned __int64 v80; // [rsp+A8h] [rbp-1C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-1B8h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-1A0h]
  __int64 v83; // [rsp+D0h] [rbp-198h]
  unsigned int v84; // [rsp+E0h] [rbp-188h] BYREF
  __int16 v85; // [rsp+E4h] [rbp-184h]
  __int16 v86; // [rsp+E6h] [rbp-182h]
  __int64 v87; // [rsp+E8h] [rbp-180h]
  __int64 v88; // [rsp+F0h] [rbp-178h]
  _QWORD Base[21]; // [rsp+F8h] [rbp-170h] BYREF
  _QWORD v90[18]; // [rsp+1A0h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+268h] [rbp+0h]

  v75 = a2;
  P = (PVOID)a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_DWORD *)&v66[8] = 0;
  memset(v90, 0, sizeof(v90));
  v3 = *(_QWORD *)(a1 + 72);
  v73 = (struct _KTHREAD *)v3;
  v64 = (_BYTE *)a1;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(unsigned int *)(a1 + 64);
  v68 = v5;
  *(_QWORD *)v66 = v5;
  if ( (unsigned int)v5 < 3 )
    v6 = MiLargePageSizes[v5];
  else
    v6 = 1LL;
  v74 = v6;
  if ( *(_BYTE *)(a1 + 210) )
  {
    v6 = 512LL;
    v74 = 512LL;
    if ( !(_DWORD)v5 )
    {
      *(_QWORD *)&v66[4] = *(_QWORD *)(a1 + 216);
      v4 = *(_QWORD *)(*(_QWORD *)&v66[4] + 176LL) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 208) << 21);
      v64 = *(_BYTE **)&v66[4];
    }
  }
  KeZeroPages(v4, v6 << 12);
  v65 = 1;
  v8 = 1;
  v69 = 1;
  v9 = 0;
  v63 = 0;
  v62 = 0;
  v10 = 0LL;
  *(_DWORD *)v66 = 0;
  CurrentThread = KeGetCurrentThread();
  v73 = CurrentThread;
  P = 0LL;
  v12 = *(_QWORD *)&v66[4];
  if ( *(_QWORD *)&v66[4] )
  {
    v9 = 1;
    v3 = *(_QWORD *)(*(_QWORD *)&v66[4] + 168LL);
    v77 = *(_DWORD *)(*(_QWORD *)&v66[4] + 184LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(qword_140468490 + 1984LL * v77 + 1928), &LockHandle);
    v12 = *(_QWORD *)&v66[4];
    CurrentThread = v73;
  }
  v71 = v3;
  if ( (HvlEnlightenments & 0x400000) != 0 && !CurrentThread->Priority && !*(_BYTE *)(a1 + 210) && !v64[70] && !v64[69] )
  {
    v62 = 1;
    v42 = v75;
    *(_DWORD *)v66 = MiSetZeroPageThreadPriority(v75, CurrentThread, 1LL);
    --v73->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v42 + 184, 0LL);
    v12 = *(_QWORD *)&v66[4];
  }
  CurrentIrql = KeGetCurrentIrql();
  v67 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v76 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v76);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
    v12 = *(_QWORD *)&v66[4];
  }
  v14 = v64;
  if ( v12 )
  {
    v38 = 0;
    v65 = 0;
    v8 = 0;
    if ( v64[69] != 1 )
    {
      if ( ++*(_DWORD *)(v12 + 192) != 512 )
      {
        v69 = 0;
        goto LABEL_10;
      }
      v38 = 1;
      v65 = 1;
    }
    v8 = v38;
    v41 = *(_DWORD *)(v12 + 188);
    if ( v41 == 1 )
    {
      v7 = *(_QWORD *)(v12 + 72);
      v43 = *(__int64 **)(v12 + 80);
      if ( *(_QWORD *)(v7 + 8) != v12 + 72 || *v43 != v12 + 72 )
        __fastfail(3u);
      *v43 = v7;
      *(_QWORD *)(v7 + 8) = v43;
      v8 = 1;
      P = (PVOID)v12;
    }
    else
    {
      *(_DWORD *)(v12 + 188) = v41 - 1;
    }
  }
LABEL_10:
  v61 = v64[69];
  if ( v8 == 1 )
  {
    if ( v9 == 1 )
    {
      MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
    }
    else
    {
      v15 = *(unsigned int *)(a1 + 64);
      v16 = *(_QWORD *)(a1 + 32);
      v86 = 0;
      memset(&Base[1], 0, 0x98uLL);
      v17 = 0;
      v87 = 20LL;
      v18 = 0LL;
      v84 = 0;
      v19 = 0;
      v85 = 0;
      v88 = 0LL;
      Base[0] = 0LL;
      if ( (unsigned int)v15 <= 1 )
      {
        MiInsertLargeTbFlushEntry(&v84, (unsigned int)(2 - v15), v16, 0LL);
        v20 = 1LL;
        v17 = HIDWORD(v87);
        v19 = v85;
        v18 = (__int64 *)v84;
      }
      else
      {
        v20 = 0LL;
      }
      v21 = v16;
      for ( i = (__int64 *)0xFFFFF6FFFFFFFFFFLL; v21 >= 0xFFFFF68000000000uLL; v21 = (__int64)(v21 << 25) >> 16 )
      {
        if ( v21 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
      }
      v7 = qword_140466738;
      v23 = (!qword_140466738 || v21 < qword_140466738 || v21 >= qword_140466738 + (BitMapHeader.SizeOfBitMap << 30))
         && (unsigned int)v15 <= 1;
      v60 = v23;
      if ( !v20 )
      {
        v24 = (__int64)(v16 << 25) >> 16;
        if ( (_DWORD)v15 == 3 )
        {
          v20 = 1LL;
          v80 = 0LL;
          if ( (_DWORD)v18 != 1 && (v19 & 8) == 0 && v24 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v19 |= 8u;
            LOBYTE(v85) = v19;
          }
          v78 = 0LL;
          if ( !v17
            || (v19 & 4) != 0
            || (v18 = &Base[v17 - 1], v7 = *v18, v78 = v7, (v7 & 0xC00) != 0)
            || (i = (__int64 *)(v7 & 0x3FF), (v7 & 0xFFFFFFFFFFFFF000uLL) + (((_QWORD)i + 1) << 12) != v24)
            || (__int64 *)((char *)i + 1) < i
            || (unsigned __int64)i + 1 > 0x3FF )
          {
            v79 = 0LL;
            if ( !v17
              || (v19 & 4) != 0
              || (i = &Base[v17 - 1], v7 = *i, v79 = v7, (v7 & 0xC00) != 0)
              || (v7 & 0xFFFFFFFFFFFFF000uLL) != v24 + 4096
              || (v44 = v7 & 0x3FF, v44 + 1 < v44)
              || v44 + 1 > 0x3FF )
            {
              if ( v17 >= (unsigned int)v87 )
              {
                HIBYTE(v85) = 1;
              }
              else
              {
                while ( 1 )
                {
                  v7 = (unsigned __int64)(v20 - 1) > 0x3FF ? 1024LL : v20;
                  v20 -= v7;
                  v80 = v24 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v7 - 1) & 0x3FF;
                  v24 += v7 << 12;
                  Base[v17] = v80;
                  v17 = HIDWORD(v87) + 1;
                  HIDWORD(v87) = v17;
                  v88 += v7;
                  if ( v17 == (_DWORD)v87 && (v85 & 4) == 0 )
                  {
                    qsort(Base, v17, 8uLL, MiTbFlushSort);
                    MiCompressTbFlushList(&v84);
                    v17 = HIDWORD(v87);
                    if ( HIDWORD(v87) == (_DWORD)v87 )
                    {
                      if ( v20 )
                        break;
                    }
                  }
                  if ( !v20 )
                    goto LABEL_33;
                }
                HIBYTE(v85) = 1;
                v88 = HIDWORD(v87);
LABEL_33:
                v20 = 1LL;
              }
            }
            else
            {
              v83 = (v7 - 4096) ^ ((unsigned __int16)(v7 - 4096) ^ (unsigned __int16)(v7 - 4096 + 1)) & 0x3FF;
              ++v88;
              *i = v83;
            }
          }
          else
          {
            v82 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(v7 + 1)) & 0x3FF;
            ++v88;
            *v18 = v82;
          }
        }
        else if ( (_DWORD)v15 == 2 )
        {
          v20 = 16LL;
          MiInsertTbFlushEntry(&v84, (__int64)(v16 << 25) >> 16, 16LL);
        }
        else
        {
          v45 = MiLargePageSizes[v15];
          if ( (unsigned int)v15 <= 1 )
          {
            v46 = (unsigned int)(2 - v15);
            do
            {
              MiInsertTbFlushEntry(&v84, v24, v45);
              v24 = (__int64)(v24 << 25) >> 16;
              v45 <<= 9;
              --v46;
            }
            while ( v46 );
          }
          v20 = 512LL;
          v3 = v71;
        }
        v23 = v60;
      }
      if ( v16 < v16 + 8 * v20 )
      {
        do
        {
          if ( (unsigned int)MiPteInShadowRange(v16, 0LL, i, v18) && (unsigned int)MiPteHasShadow(v25) )
            v7 = 1LL;
          *(_QWORD *)v16 = 0LL;
          if ( (_DWORD)v7 )
            MiWritePteShadow(v16, 0LL);
          v16 += 8LL;
        }
        while ( v16 < v26 );
        v3 = v71;
      }
      if ( v23 )
        MiFlushTbList(&v84, v7, i, v18);
      v10 = 0LL;
    }
    v14 = v64;
  }
  v27 = *(_QWORD *)&v66[4];
  if ( *(_QWORD *)&v66[4] && v69 == 1 )
    *(_QWORD *)(a1 + 216) = 0LL;
  if ( v65 == 1 || P )
  {
    if ( v14[71] )
    {
      v28 = &dword_1404660E0;
      v29 = &qword_1404660E8;
    }
    else
    {
      v28 = &dword_1404660F0;
      v29 = &qword_1404660F8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v7) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v28, v7);
      v14 = v64;
    }
    else
    {
      v70 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = SchedulerAssist[5];
          SchedulerAssist[5] = v47 + 1;
          if ( v47 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v14 = v64;
          }
        }
      }
      if ( _interlockedbittestandset(v28, 0x1Fu) )
      {
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v48 = v40[5] - 1;
            v40[5] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(v7) = -1;
        v70 = ExpWaitForSpinLockExclusiveAndAcquire(v28, v7);
        v14 = v64;
      }
      v32 = *v28;
      if ( (*v28 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v32 & 0x40000000) == 0 )
          {
            v50 = _InterlockedCompareExchange(v28, v32 | 0x40000000, v32);
            v49 = v32 == v50;
            v32 = v50;
            if ( !v49 )
              continue;
          }
          KeYieldProcessorEx(&v70);
          v32 = *v28;
        }
        while ( (v32 & 0xBFFFFFFF) != 0x80000000 );
        v14 = v64;
      }
      v27 = *(_QWORD *)&v66[4];
    }
    RtlAvlRemoveNode(v29, v14);
    v14 = v64;
    v64[68] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
      v14 = v64;
    }
    else
    {
      *v28 = 0;
    }
    v33 = KeGetCurrentPrcb();
    v34 = v33->SchedulerAssist;
    if ( v34 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v51 = v34[5] - 1;
        v34[5] = v51;
        if ( !v51 )
        {
          KiRemoveSystemWorkPriorityKick(v33);
          v14 = v64;
        }
      }
    }
  }
  if ( v65 != 1 || v61 == 1 )
    goto LABEL_84;
  v10 = (v3 + 0x58000000000LL) / 48;
  if ( v68 == 3 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(v3 + 34) &= ~8u;
    v35 = 128LL;
    if ( qword_140465B00 )
    {
      if ( (qword_140465B00 & 0x80) != 0 )
        v35 = 144LL;
      else
        v35 = qword_140465B00 | 0x80;
    }
    *(_QWORD *)(v3 + 16) = v35;
    if ( !v14[70] )
    {
      if ( v62 )
      {
        MiFreeZeroPageSlistSufficient(
          v75,
          dword_140465AB0 & (unsigned int)v10 | (*(_QWORD *)(v3 + 40) >> 58 << byte_140465A4D) | (((unsigned int)(*(_QWORD *)(v3 + 40) >> 36) & 3) << byte_140465A4E),
          0LL);
        v63 = 1;
        v27 = *(_QWORD *)&v66[4];
      }
      MiUnlinkFreeOrZeroedPage((v3 + 0x58000000000LL) / 48, 0LL, 0LL);
      MiInsertPageInFreeOrZeroedList((v3 + 0x58000000000LL) / 48);
      v36 = v63;
      goto LABEL_67;
    }
    MiFreeListPageContentsChanged((v3 + 0x58000000000LL) / 48);
LABEL_84:
    v36 = 0;
LABEL_67:
    v37 = v62;
    goto LABEL_68;
  }
  v37 = v62;
  v36 = 0;
  if ( v62 )
    v36 = v14[70] == 0;
  MiLargePageFreeToZero((v3 + 0x58000000000LL) / 48);
LABEL_68:
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v67 < 2u )
  {
    v52 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v52);
  }
  __writecr8(v67);
  if ( v27 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v53 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v53->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v53);
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v36 )
  {
    v90[0] = 0x100000000LL;
    LODWORD(v90[1]) = 16;
    v54 = v10 << 12;
    v90[2] = v54;
    if ( v74 != 1 )
    {
      if ( v74 == 16 )
      {
        v55 = v54 | 0xF;
      }
      else if ( v74 == 512 )
      {
        v55 = v54 | 0x400;
      }
      else
      {
        v55 = v54 | 0x800;
      }
      v90[2] = v55;
    }
    MiNotifyPageHeat(v90);
  }
  if ( v37 )
  {
    v56 = v75;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v56 + 184);
    KeAbPostRelease(v56 + 184);
    KiLeaveGuardedRegionUnsafe(v73, v57, v58, v59);
    MiSetZeroPageThreadPriority(v56, v73, *(unsigned int *)v66);
  }
}
