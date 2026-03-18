/*
 * XREFs of MiCoalesceFreePages @ 0x14002B760
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryAcquirePushLockShared @ 0x14009DCF0 (ExfTryAcquirePushLockShared.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnFreeZeroPage @ 0x1400A1788 (MiReturnFreeZeroPage.c)
 *     MiPfnZeroingNeeded @ 0x1400A452C (MiPfnZeroingNeeded.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall MiCoalesceFreePages(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // r13
  __int64 *v10; // rax
  unsigned int i; // ecx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // rax
  char v16; // cl
  int SessionId; // eax
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // r9
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // r9
  __int64 v33; // rbx
  unsigned __int64 v34; // rbp
  unsigned int v35; // r15d
  __int64 v36; // r12
  __int64 v37; // r10
  unsigned __int64 v38; // rax
  unsigned int v39; // r11d
  __int64 v40; // rcx
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  volatile signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h] BYREF
  __int64 v46; // [rsp+30h] [rbp-48h]
  unsigned int v47; // [rsp+88h] [rbp+10h]
  int v48; // [rsp+90h] [rbp+18h] BYREF
  int v49; // [rsp+98h] [rbp+20h]

  if ( MmPhysicalMemoryBlock )
  {
    v1 = 48 * a1 - 0x58000000000LL;
    v2 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
    v47 = *(_BYTE *)(v1 + 34) & 7;
    v3 = 48 * (a1 & 0xFFFFFFFFFFFFFFF0uLL);
    v4 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v1 + 40) >> 40) & 0x3FFLL));
    v46 = v4;
    v5 = v3 - 0x58000000000LL;
    v6 = a1 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = v3 - 0x58000000000LL + 34;
    v8 = (_QWORD *)(v3 - 0x57FFFFFFFD8LL);
    v9 = 0LL;
    while ( 2 )
    {
      if ( v6 <= 0xFFFFFFFFFLL
        && ((*v8 >> 53) & 1) != 0
        && *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v7 + 6) >> 40) & 0x3FFLL)) == v4
        && (*(_BYTE *)v7 & 7u) <= 1 )
      {
        v10 = MiLargePageContainingFrames;
        for ( i = 0; i < 3; ++i )
        {
          if ( (*(_QWORD *)(v7 + 6) & 0xFFFFFFFFFLL) == *v10 )
            return 0LL;
          ++v10;
        }
        v7 += 48LL;
        ++v6;
        v8 += 6;
        if ( v7 - 34 != v5 + 768 )
          continue;
        v12 = v4 + 184;
        v48 = 0;
        v13 = v2;
        CurrentThread = KeGetCurrentThread();
        v45 = ZeroPte;
        BugCheckParameter2 = (volatile signed __int64 *)v12;
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
          goto LABEL_21;
        LOBYTE(v15) = CurrentThread->AbEntrySummary;
        if ( !(_BYTE)v15 )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
            {
LABEL_15:
              if ( v9 )
              {
                if ( v12 >= 0xFFFF800000000000uLL && byte_140467440[((v12 >> 39) & 0x1FF) - 256] == 1 )
                {
                  SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
                  v12 = (unsigned __int64)BugCheckParameter2;
                }
                else
                {
                  SessionId = -1;
                }
                *(_DWORD *)(v9 + 40) = SessionId;
                *(_QWORD *)(v9 + 32) = v12 & 0x7FFFFFFFFFFFFFFCLL;
                goto LABEL_22;
              }
LABEL_21:
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_22:
              --CurrentThread->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts(CurrentThread, v12, &v48);
              v20 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v20
                && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery();
              }
              if ( _InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
                && !(unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
              {
                if ( v9 )
                  KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2);
                return 0LL;
              }
              if ( v9 )
                *(_BYTE *)(v9 + 26) |= 1u;
              v21 = v5 + 768;
              v22 = 48 * v2 - 0x58000000000LL;
              v23 = 1LL;
              v24 = v47;
              v25 = (_QWORD *)(v3 - 0x57FFFFFFFD8LL);
              while ( v22 == v1 )
              {
                v42 = (_QWORD *)(v22 + 16);
                if ( (*(_BYTE *)(v22 + 34) & 7) != 0 )
                {
                  MiSetOriginalPtePfnFromFreeList(v42, v23, v19, v24);
LABEL_42:
                  v23 = 1LL;
                }
                else
                {
                  *v42 &= 0xFFFFFFFFFFFFFC1FuLL;
                }
                if ( (_DWORD)v24 != 1 )
                {
                  if ( (unsigned int)MiPfnZeroingNeeded(v22, v23) )
                    v24 = (unsigned int)v23;
                  v47 = v24;
                }
                v22 += 48LL;
                ++v13;
                v25 += 6;
                if ( v22 == v21 )
                  goto LABEL_45;
              }
              if ( v13 <= 0xFFFFFFFFFLL
                && (*v25 & 0x20000000000000LL) != 0
                && *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v22 + 40) >> 40) & 0x3FFLL)) == v46
                && (*(_BYTE *)(v22 + 34) & 7u) <= 1
                && !_interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
              {
                if ( (*(_BYTE *)(v22 + 34) & 7u) <= 1 )
                {
                  v26 = *(_QWORD *)(v22 + 40);
                  if ( *(_QWORD *)(qword_140466188 + 8 * ((v26 >> 40) & 0x3FF)) == v46 )
                  {
                    v27 = v26 & 0xFFFFFFFFFLL;
                    v28 = MiLargePageContainingFrames;
                    v29 = 0;
                    while ( v27 != *v28 )
                    {
                      ++v29;
                      ++v28;
                      if ( v29 >= 3 )
                      {
                        if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v13, 0LL, 0LL) )
                        {
                          v24 = v47;
                          goto LABEL_42;
                        }
                        MiReturnFreeZeroPage(v22, 512LL);
                        break;
                      }
                    }
                  }
                }
                _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
LABEL_45:
              if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared(BugCheckParameter2);
              KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
              if ( v22 == v21 )
              {
                v32 = v47;
                if ( v47 == 1 )
                  MiSetOriginalPtePfnFromFreeList(&v45, v30, v31, 1LL);
                v33 = v45;
                v34 = v5 + 720;
                v35 = 0;
                v36 = 0LL;
                v37 = 0xFFFFFFFFCLL;
                do
                {
                  v38 = *(_QWORD *)(v34 + 16);
                  if ( qword_140465B00 && (v38 & 0x10) == 0 )
                    v38 &= ~qword_140465B00;
                  *(_QWORD *)(v34 + 16) = v33;
                  v39 = 1;
                  if ( HIDWORD(v38) == 4294967293 )
                    *(_QWORD *)(v34 + 16) = MiUpdatePageFileHighInPte(v33, 4294967293LL, v31);
                  if ( (*(_BYTE *)(v34 + 34) & 0xC0) != 0x40 )
                  {
                    MiChangePageAttribute(v34, v39, v39);
                    v32 = v47;
                    v37 = 0xFFFFFFFFCLL;
                  }
                  v40 = v2 - v36 + 15;
                  v41 = 48 * v40 - 0x58000000000LL;
                  *(_QWORD *)(v41 + 24) &= 0xC000000000000000uLL;
                  v31 = *(unsigned __int8 *)(v41 + 34);
                  *(_QWORD *)(v41 + 40) &= ~0x200000000000000uLL;
                  LOBYTE(v31) = v31 & 0xEF;
                  *(_BYTE *)(v41 + 35) &= 0xF8u;
                  *(_BYTE *)(v41 + 34) = v31;
                  *(_QWORD *)(v41 + 8) = 0LL;
                  if ( (v40 & 0xF) != 0 )
                  {
                    *(_QWORD *)(v41 + 40) = v37 | *(_QWORD *)(v41 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
                    *(_BYTE *)(v41 + 34) = v31 ^ (v32 ^ v31) & 7;
                  }
                  if ( v34 == v5 )
                  {
                    *(_QWORD *)(v34 + 40) = v37 | *(_QWORD *)(v34 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
                    *(_BYTE *)(v34 + 34) ^= (*(_BYTE *)(v34 + 34) ^ v32) & 7;
                    MiInsertLargePageInNodeList(v2);
                  }
                  if ( v34 != v1 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v33 = v45;
                  }
                  v32 = v47;
                  v36 = ++v35;
                  v34 -= 48LL;
                  v37 = 0xFFFFFFFFCLL;
                }
                while ( v35 < 0x10uLL );
                return 1LL;
              }
              for ( ; v5 < v22; v5 += 48LL )
              {
                if ( v5 != v1 )
                {
                  MiReturnFreeZeroPage(v5, 512LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
              }
              return 0LL;
            }
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v12, v7);
LABEL_14:
            v12 = (unsigned __int64)BugCheckParameter2;
            goto LABEL_15;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          LOBYTE(v15) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
        }
        v16 = v15;
        _BitScanForward((unsigned int *)&v15, (unsigned __int8)v15);
        v49 = v15;
        CurrentThread->AbEntrySummary = v16 & ~(1 << v15);
        v9 = (__int64)&CurrentThread->LockEntries[v15];
        goto LABEL_14;
      }
      break;
    }
  }
  return 0LL;
}
