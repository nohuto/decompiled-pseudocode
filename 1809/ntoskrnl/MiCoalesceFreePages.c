/*
 * XREFs of MiCoalesceFreePages @ 0x1400390D0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     ExfTryAcquirePushLockShared @ 0x140103CD0 (ExfTryAcquirePushLockShared.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  int v2; // r12d
  unsigned __int64 v3; // r14
  __int64 v4; // r11
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  _QWORD *v9; // r9
  unsigned int v10; // eax
  __int64 *v11; // rcx
  ULONG_PTR v12; // r15
  unsigned __int64 v13; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  _KLOCK_ENTRY *v15; // rdi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v18; // rax
  int SessionId; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  _QWORD *v27; // rdi
  __int64 v28; // r14
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  unsigned int v41; // r14d
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdx
  char v46; // r8
  char v47; // r8
  __int64 v48; // [rsp+20h] [rbp-58h]
  __int64 v49[10]; // [rsp+28h] [rbp-50h] BYREF
  ULONG_PTR v50; // [rsp+80h] [rbp+8h]
  int v51; // [rsp+88h] [rbp+10h] BYREF
  int v52; // [rsp+90h] [rbp+18h]
  __int64 v53; // [rsp+98h] [rbp+20h]

  if ( MmPhysicalMemoryBlock )
  {
    v1 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
    v48 = 48 * a1 - 0x58000000000LL;
    v50 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
    v2 = *(_BYTE *)(v48 + 34) & 7;
    v3 = 6 * (a1 & 0xFFFFFFFFFFFFFFF0uLL);
    v4 = *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v48 + 40) >> 40) & 0x3FFLL));
    v53 = v4;
    v5 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x58000000000LL;
    v6 = v5 + 768;
    v7 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = v5 + 34;
    v9 = (_QWORD *)(48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL) - 0x57FFFFFFFD8LL);
    while ( 2 )
    {
      if ( v7 <= 0xFFFFFFFFFLL
        && ((*v9 >> 53) & 1) != 0
        && *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v8 + 6) >> 40) & 0x3FFLL)) == v4
        && (*(_BYTE *)v8 & 7u) <= 1 )
      {
        v10 = 0;
        v11 = MiLargePageContainingFrames;
        do
        {
          if ( (*(_QWORD *)(v8 + 6) & 0xFFFFFFFFFLL) == *v11 )
            return 0LL;
          ++v10;
          ++v11;
        }
        while ( v10 < 3 );
        v8 += 48LL;
        ++v7;
        v9 += 6;
        if ( v8 - 34 != v6 )
          continue;
        v12 = v4 + 184;
        v49[0] = ZeroPte;
        v13 = v1;
        v51 = 0;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          v15 = 0LL;
LABEL_27:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(CurrentThread, v12, &v51);
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v20);
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL)
            && !(unsigned __int8)ExfTryAcquirePushLockShared(v12) )
          {
            if ( v15 )
              KeAbPostReleaseEx(v12, v15);
            return 0LL;
          }
          if ( v15 )
            v15->AcquiredByte |= 1u;
          v25 = v5;
          v26 = 1LL;
          if ( v5 != v6 )
          {
            v27 = (_QWORD *)(8 * v3 - 0x57FFFFFFFD8LL);
            v28 = v53;
            while ( v25 == v48 )
            {
              v29 = (_QWORD *)(v25 + 16);
              if ( (*(_BYTE *)(v25 + 34) & 7) != 0 )
              {
                MiSetOriginalPtePfnFromFreeList(v29, v26, v21, v22);
LABEL_56:
                v26 = 1LL;
              }
              else
              {
                *v29 &= 0xFFFFFFFFFFFFFC1FuLL;
              }
              if ( v2 != 1 && MiPfnZeroingNeeded(v25, v26) )
                v2 = v26;
              v25 += 48LL;
              ++v13;
              v27 += 6;
              if ( v25 == v6 )
                goto LABEL_61;
            }
            if ( v13 <= 0xFFFFFFFFFLL
              && ((*v27 >> 53) & 1) != 0
              && *(_QWORD *)(qword_14043B808 + 8 * ((*(_QWORD *)(v25 + 40) >> 40) & 0x3FFLL)) == v28
              && (*(_BYTE *)(v25 + 34) & 7u) <= 1
              && !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
            {
              if ( (*(_BYTE *)(v25 + 34) & 7u) <= 1 )
              {
                v30 = *(_QWORD *)(v25 + 40);
                if ( *(_QWORD *)(qword_14043B808 + 8 * ((v30 >> 40) & 0x3FF)) == v28 )
                {
                  v31 = v30 & 0xFFFFFFFFFLL;
                  v32 = MiLargePageContainingFrames;
                  v33 = 0;
                  while ( v31 != *v32 )
                  {
                    ++v33;
                    ++v32;
                    if ( v33 >= 3 )
                    {
                      if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v13, 0LL, 0LL) )
                        goto LABEL_56;
                      MiReturnFreeZeroPage(v25, 512LL);
                      break;
                    }
                  }
                }
              }
              _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
LABEL_61:
          v34 = 0LL;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v12);
          KeAbPostRelease(v12);
          if ( v25 != v6 )
          {
            if ( v5 < v25 )
            {
              v38 = v48;
              do
              {
                if ( v5 != v38 )
                {
                  MiReturnFreeZeroPage(v5, 512LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v38 = v48;
                }
                v5 += 48LL;
              }
              while ( v5 < v25 );
            }
            return 0LL;
          }
          if ( v2 == 1 )
            MiSetOriginalPtePfnFromFreeList(v49, v35, v36, v37);
          v39 = v49[0];
          v40 = v5 + 720;
          v41 = 0;
          v42 = 0xFFFFFFFFCLL;
          do
          {
            v43 = *(_QWORD *)(v40 + 16);
            if ( qword_14043B180 && (v43 & 0x10) == 0 )
              v43 &= ~qword_14043B180;
            *(_QWORD *)(v40 + 16) = v39;
            if ( HIDWORD(v43) == 4294967293 )
              *(_QWORD *)(v40 + 16) = MiUpdatePageFileHighInPte(v39, 4294967293LL);
            if ( (*(_BYTE *)(v40 + 34) & 0xC0) != 0x40 )
            {
              MiChangePageAttribute(v40, 1LL, 1LL);
              v42 = 0xFFFFFFFFCLL;
            }
            v44 = v50 - v34 + 15;
            v45 = 48 * v44 - 0x58000000000LL;
            *(_QWORD *)(v45 + 24) &= 0xC000000000000000uLL;
            *(_QWORD *)(v45 + 40) &= ~0x200000000000000uLL;
            v46 = *(_BYTE *)(v45 + 34);
            *(_BYTE *)(v45 + 35) &= 0xF8u;
            v47 = v46 & 0xEF;
            *(_BYTE *)(v45 + 34) = v47;
            *(_QWORD *)(v45 + 8) = 0LL;
            if ( (v44 & 0xF) != 0 )
            {
              *(_QWORD *)(v45 + 40) = v42 | *(_QWORD *)(v45 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
              *(_BYTE *)(v45 + 34) = v47 ^ (v2 ^ v47) & 7;
            }
            if ( v40 == v5 )
            {
              *(_QWORD *)(v40 + 40) = v42 | *(_QWORD *)(v40 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
              *(_BYTE *)(v40 + 34) ^= (*(_BYTE *)(v40 + 34) ^ v2) & 7;
              MiInsertLargePageInNodeListHelper(v50);
            }
            if ( v40 != v48 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v39 = v49[0];
            }
            ++v41;
            v40 -= 48LL;
            v34 = v41;
            v42 = 0xFFFFFFFFCLL;
          }
          while ( v41 < 0x10uLL );
          return 1LL;
        }
        AbEntrySummary = CurrentThread->AbEntrySummary;
        if ( !AbEntrySummary )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            v15 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4 + 184);
            goto LABEL_19;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          AbEntrySummary = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
          CurrentThread->AbEntrySummary = AbEntrySummary;
        }
        _BitScanForward((unsigned int *)&v18, AbEntrySummary);
        v52 = v18;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v18);
        v15 = &CurrentThread->LockEntries[v18];
LABEL_19:
        if ( v15 )
        {
          if ( (unsigned int)MiGetSystemRegionType(v12) == 1 )
            SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = -1;
          v15->LockState.SessionId = SessionId;
          v15->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(v12 & 0x7FFFFFFFFFFFFFFCLL);
        }
        else
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        }
        goto LABEL_27;
      }
      break;
    }
  }
  return 0LL;
}
