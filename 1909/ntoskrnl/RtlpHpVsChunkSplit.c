/*
 * XREFs of RtlpHpVsChunkSplit @ 0x140062140
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140061C80 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x140047890 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14005EFAC (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F8C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FC30 (RtlpHpAcquireQueuedLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140061790 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 *     RtlpHpVsChunkComputeCost @ 0x140064C30 (RtlpHpVsChunkComputeCost.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14010B3C0 (RtlpHpVsSubsegmentCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, _QWORD *a6)
{
  unsigned int v9; // esi
  unsigned __int64 Root; // rdi
  unsigned int v12; // r11d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // r12d
  int v20; // eax
  int v21; // r10d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  int v25; // edx
  unsigned __int64 v26; // rdx
  unsigned int i; // r10d
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned __int16 v33; // cx
  unsigned __int64 v34; // r8
  __int64 v35; // rbx
  unsigned __int16 v36; // dx
  __int64 v37; // rbx
  unsigned int v38; // r8d
  unsigned int v39; // edx
  unsigned int v40; // r10d
  unsigned __int64 v41; // rbx
  unsigned int v42; // r12d
  _RTL_RB_TREE *v43; // r12
  __int64 v44; // rcx
  unsigned int v45; // r9d
  unsigned int v46; // r8d
  __int16 v47; // r10
  unsigned int v48; // edx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rcx
  _RTL_BALANCED_NODE *Min; // rcx
  BOOLEAN v52; // al
  unsigned __int64 v53; // rax
  bool v55; // zf
  int v56; // eax
  volatile signed __int64 *v57; // r12
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // rsi
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 *v63; // rcx
  __int64 v64; // rax
  void *v65; // rcx
  __int64 v66; // rbx
  unsigned int v67; // r12d
  __int64 v68; // rax
  __int64 v69; // rbx
  unsigned __int64 v70; // rdx
  __int64 v71; // rax
  __int16 v72; // r8
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdx
  BOOLEAN v75; // al
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  struct _KTHREAD *v79; // rsi
  unsigned int SessionId; // r10d
  unsigned int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rdx
  struct _KTHREAD *CurrentThread; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v88; // [rsp+30h] [rbp-49h]
  struct _KTHREAD *v89; // [rsp+30h] [rbp-49h]
  unsigned int v90; // [rsp+38h] [rbp-41h]
  int v91; // [rsp+3Ch] [rbp-3Dh]
  __int16 v92; // [rsp+40h] [rbp-39h] BYREF
  __int64 v93; // [rsp+48h] [rbp-31h]
  __int64 v94; // [rsp+50h] [rbp-29h]
  __int64 v95; // [rsp+58h] [rbp-21h]
  int v96; // [rsp+60h] [rbp-19h]
  int v97; // [rsp+64h] [rbp-15h]
  unsigned __int64 v98; // [rsp+68h] [rbp-11h]
  unsigned __int64 v99[10]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v100; // [rsp+D0h] [rbp+57h] BYREF
  __int64 v101; // [rsp+D8h] [rbp+5Fh]
  int v102; // [rsp+E0h] [rbp+67h]
  unsigned int v103; // [rsp+E8h] [rbp+6Fh]

  v9 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2);
  RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(a3 + 8));
  Root = 0LL;
  v12 = a3 - a2;
  v13 = (a3 - a2 + 4127) & 0xFFFFF000;
  v14 = ((a3 + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16) - a2) & 0xFFFFF000)
      - v13;
  if ( v13 >= (((_DWORD)a3
              + 16 * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
              - (_DWORD)a2) & 0xFFFFF000) )
    v14 = 0;
  *(_QWORD *)(a1 + 56) -= (v14 >> 12)
                        + (unsigned int)((16
                                        * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16)
                                        + (unsigned __int64)(a3 & 0xFFF)
                                        + 4095) >> 12)
                        - (unsigned int)(((unsigned __int64)(16
                                                           * (((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) >> 16))
                                        + 4095) >> 12)
                        - (unsigned __int16)(a3 ^ RtlpHpHeapGlobals ^ *(_WORD *)a3);
  v15 = v9 - a4;
  if ( v15 && (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v16 = (((a3 + 16LL * a4 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a3 + 16LL * a4)) >> 4;
    v17 = 16 * v16;
    if ( (unsigned int)(16 * v16) < 0x20 )
    {
      a4 += v16;
      v15 -= v16;
    }
    else if ( (v17 & 0xFFFFFFC0) == 0 && v17 != 32 )
    {
      ++a4;
      --v15;
    }
  }
  if ( 16 * v15 < 0x20 )
    a4 += v15;
  v100 = 0x1000000000000LL;
  v18 = 0;
  if ( 16 * v15 >= 0x20 )
    v18 = v15;
  v19 = v18;
  *(_BYTE *)(a3 + 6) = (a3 ^ RtlpHpHeapGlobals ^ 0x1000000000000uLL) >> 48;
  v20 = 16 * a4 + 32;
  v90 = v18;
  v21 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v12 >> 12) ^ a3);
  *(_DWORD *)(a3 + 8) = v21;
  if ( !v18 )
    v20 = 16 * a4;
  v22 = 0xFFFFFFFFFFFFFFFFuLL >> (63 - (unsigned __int8)((v12 - 1 + v20) >> 12));
  v23 = (*(_QWORD *)(a2 + 16) ^ v22 & (-1LL << (v12 >> 12))) & v22 & (-1LL << (v12 >> 12));
  if ( v23 )
  {
    v55 = (a5 & 1) == 0;
    v56 = a5 & 1;
    *(_DWORD *)(a3 + 8) = v21 | 0x200;
    v91 = v56;
    if ( v55 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a6);
    v93 = 0LL;
    v57 = (volatile signed __int64 *)(a2 + 24);
    v94 = a2 + 24;
    v58 = ((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
    _BitScanForward64(&v59, v23);
    v96 = v59;
    v98 = (0x101010101010101LL * ((v58 + (v58 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    _BitScanReverse64(&v60, v23);
    v88 = a2 + (unsigned int)((_DWORD)v59 << 12);
    v97 = v60 - v59 + 1;
    v61 = ((1LL << v97) - 1) << v59;
    v103 = v97 << 12;
    v101 = v61;
    if ( *(_DWORD *)(a1 + 8) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v63 = (volatile signed __int32 *)(a2 + 24);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v63, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v63, CurrentIrql);
      v64 = CurrentIrql;
      v61 = v101;
      v95 = v64;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v93 = 0LL;
      v95 = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    }
    LODWORD(v101) = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
                      a1 ^ *(_QWORD *)(a1 + 128),
                      v88,
                      v103);
    if ( (int)v101 >= 0 )
    {
      *(_QWORD *)(a2 + 16) |= v61;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v98);
      LODWORD(v101) = 0;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v95 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8((unsigned __int8)v95);
LABEL_75:
      v19 = v90;
      if ( (int)v101 < 0 )
      {
        v19 = v90 + a4;
        a4 = 0;
      }
      if ( !v91 )
        RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), a6);
      *(_DWORD *)(a3 + 8) &= ~0x200u;
      goto LABEL_14;
    }
    if ( (_InterlockedExchangeAdd64(v57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 24);
    LODWORD(v100) = 0;
    v79 = KeGetCurrentThread();
    v89 = v79;
    if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v79->ApcState.Process);
    else
      SessionId = -1;
    --v79->SpecialApcDisable;
    ++v79->AbAllocationRegionCount;
    v81 = ((char)v79->AbEntrySummary | (char)v79->AbOrphanedEntrySummary) ^ 0x3F;
    LOBYTE(v103) = v79->AbAllocationRegionCount;
    v55 = !_BitScanReverse((unsigned int *)&v82, v81);
    v102 = v82;
    if ( !v55 )
    {
      while ( 1 )
      {
        v83 = (__int64)&v79->LockEntries[v82];
        v81 &= ~(1 << v82);
        if ( (*(_BYTE *)(v83 + 26) & 1) != 0
          && (*(_DWORD *)(v83 + 32) & 1) == 0
          && (*(_QWORD *)(v83 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v57 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v83 + 40) == SessionId )
        {
          *(_BYTE *)(v83 + 26) &= ~1u;
          if ( *(_QWORD *)(v83 + 32) )
            break;
        }
        v79 = v89;
        v55 = !_BitScanReverse((unsigned int *)&v82, v81);
        v102 = v82;
        if ( v55 )
          goto LABEL_138;
      }
      if ( v83 )
      {
        *(_BYTE *)(v83 + 32) |= 2u;
        if ( *(__int64 *)(v83 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v83);
        LODWORD(v100) = *(_DWORD *)(v83 + 88) & 0x1FFFF;
        *(_DWORD *)(v83 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v83 + 25) &= ~1u;
        *(_QWORD *)(v83 + 32) = 0LL;
        v84 = (unsigned __int128)((v83 - (__int64)v89 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
        v79 = v89;
        v85 = ((unsigned __int64)v84 >> 63) + (v84 >> 4);
        if ( (_BYTE)v103 == 1 )
          v89->AbEntrySummary |= 1 << v85;
        else
          _InterlockedOr8((volatile signed __int8 *)&v89->AbOrphanedEntrySummary, 1 << v85);
LABEL_128:
        --v79->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v79, a2 + 24, &v100);
        v55 = v79->SpecialApcDisable++ == -1;
        if ( v55 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v79->ApcState.ApcListHead[0].Flink != &v79->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        goto LABEL_75;
      }
      v79 = v89;
    }
LABEL_138:
    if ( (*((_DWORD *)&v79->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v79, a2 + 24, SessionId, 0LL);
    goto LABEL_128;
  }
LABEL_14:
  *(_WORD *)(a3 + 2) = WORD1(RtlpHpHeapGlobals) ^ a4 ^ WORD1(a3);
  if ( v19 )
  {
    v24 = a3 + 16LL * a4;
    v100 = 0LL;
    if ( a4 )
      v25 = (unsigned __int16)a4;
    else
      v25 = (unsigned __int16)(WORD2(v24) ^ WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v24));
    HIDWORD(v100) = v25 & 0xFF00FFFF | 0x10000;
    LODWORD(v100) = (v19 << 16) | (unsigned __int16)v100;
    *(_QWORD *)v24 = v100 ^ RtlpHpHeapGlobals ^ v24;
    v26 = v24 + 16LL * v19;
    *(_DWORD *)(v24 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v24 ^ ((unsigned int)(v24 - a2) >> 12));
    if ( v26 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      LODWORD(v100) = 0;
      HIDWORD(v100) = (unsigned __int16)v19;
      *(_WORD *)(v26 + 4) = WORD2(v26) ^ WORD2(RtlpHpHeapGlobals) ^ v19;
    }
    for ( i = 0; ; i = v30 )
    {
      v28 = a2 + 48;
      v103 = i;
      v29 = (RtlpHpHeapGlobals ^ v24 ^ *(_QWORD *)v24) >> 32;
      v30 = ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v24 ^ *(_DWORD *)v24) >> 16;
      LODWORD(v100) = v30;
      *(_BYTE *)(v24 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v24);
      if ( (_WORD)v29 )
      {
        v31 = v24 - 16LL * (unsigned __int16)v29;
        v101 = v31;
        v32 = RtlpHpHeapGlobals ^ *(_QWORD *)v31 ^ v31;
        if ( (v32 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v31);
          v24 = v101;
          v28 = a2 + 48;
          i = v103;
          v30 += WORD1(v32);
        }
      }
      v33 = *(_WORD *)(a2 + 32);
      v34 = v24 + 16LL * v30;
      if ( v34 < v28 + 16 * (unsigned __int64)v33 )
      {
        v35 = RtlpHpHeapGlobals ^ v34 ^ *(_QWORD *)v34;
        if ( (v35 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v34);
          v33 = *(_WORD *)(a2 + 32);
          v28 = a2 + 48;
          i = v103;
          v30 += WORD1(v35);
        }
      }
      v36 = v33;
      if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
      {
        v34 = v24 + 16LL * v30;
        if ( v34 < v28 + 16 * (unsigned __int64)v33 )
        {
          v37 = RtlpHpHeapGlobals ^ v34 ^ *(_QWORD *)v34;
          if ( (v37 & 0xFF000000000000LL) == 0 )
          {
            RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v34);
            v36 = *(_WORD *)(a2 + 32);
            v28 = a2 + 48;
            i = v103;
            v30 += WORD1(v37);
          }
        }
      }
      if ( (_DWORD)v100 != v30 )
      {
        v34 = v24 + 16LL * v30;
        *(_WORD *)(v24 + 2) = WORD1(RtlpHpHeapGlobals) ^ v30 ^ WORD1(v24);
        v36 = *(_WORD *)(a2 + 32);
        if ( v34 < v28 + 16 * (unsigned __int64)v36 )
        {
          LODWORD(v100) = 0;
          HIDWORD(v100) = (unsigned __int16)v30;
          *(_WORD *)(v34 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v34) ^ v30;
          v36 = *(_WORD *)(a2 + 32);
        }
      }
      if ( v30 == v36 )
      {
        RtlpHpVsSubsegmentCleanup(a1, a2, v34, v28);
        return a4;
      }
      if ( v30 <= i )
        break;
      v38 = (v24 - a2 + 4127) & 0xFFFFF000;
      v39 = (v24 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - a2) & 0xFFFFF000;
      if ( v38 < v39 )
      {
        v40 = v39 - v38;
        v41 = *(_QWORD *)(a2 + 16) & (-1LL << (v38 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                      - (unsigned __int8)((unsigned __int64)(v39 - 1) >> 12)));
      }
      else
      {
        v40 = 0;
        v41 = 0LL;
      }
      if ( v40 < 0x1000 )
        break;
      if ( !v41 )
        break;
      v77 = (0x101010101010101LL
           * ((((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v41 - ((v41 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v41 - ((v41 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v101 = v77;
      if ( *(__int16 *)(a2 + 34) < 0 )
        break;
      if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
      {
        v78 = *(_QWORD *)(a1 + 48) >> 7;
        if ( v78 <= 8 )
          v78 = 8LL;
        if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v77 <= v78 )
          break;
      }
      v100 = 0x1000000000000LL;
      *(_BYTE *)(v24 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v24) ^ 1;
      *(_DWORD *)(v24 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v24 ^ ((unsigned int)(v24 - a2) >> 12)) | 0x200;
      v103 = a5 & 1;
      if ( (a5 & 1) == 0 )
      {
        RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a6);
        LODWORD(v77) = v101;
      }
      RtlpHpVsSubsegmentCommitPages(a1, a2, v41, v77, 0);
      if ( !v103 )
        RtlpHpAcquireQueuedLockExclusive((volatile signed __int32 *)a1, *(_DWORD *)(a1 + 8), a6);
      *(_DWORD *)(v24 + 8) &= ~0x200u;
    }
    if ( (*(_DWORD *)(a1 + 176) & 1) != 0
      && ((v24 + 32) & 0xFFF) != 0
      && (v42 = WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2),
          ((v24 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v24 < 16 * (unsigned __int64)v42) )
    {
      v65 = (void *)(((v24 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32);
      v100 = (__int64)v65;
      v66 = (__int64)((__int64)v65 - v24) >> 4;
      v67 = v42 - v66;
      *(_WORD *)(v24 + 2) = WORD1(RtlpHpHeapGlobals) ^ v66 ^ WORD1(v24);
      memset(v65, 0, 0x20uLL);
      v68 = v100;
      *(_WORD *)(v100 + 4) = v66;
      v69 = v68;
      *(_WORD *)(v68 + 2) = v67;
      v70 = v68 + 16LL * v67;
      v71 = v68 ^ *(_QWORD *)v68;
      LOWORD(v103) = v69;
      *(_QWORD *)v69 = RtlpHpHeapGlobals ^ v71;
      if ( v70 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      {
        LODWORD(v100) = 0;
        HIDWORD(v100) = (unsigned __int16)v67;
        LOWORD(v103) = v69;
        *(_WORD *)(v70 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v70) ^ v67;
      }
      v43 = (_RTL_RB_TREE *)(a1 + 16);
      v72 = RtlpHpVsChunkComputeCost(v69, a2, &v92, v99);
      v73 = (0x101010101010101LL
           * ((((v99[0] - ((v99[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v99[0] - ((v99[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v99[0] - ((v99[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v99[0] - ((v99[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      *(_QWORD *)(a1 + 56) += v73;
      *(_WORD *)v69 = RtlpHpHeapGlobals ^ v103 ^ (v92 + v72 - v73);
      v74 = *(_QWORD *)(a1 + 16);
      if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
      {
        if ( v74 )
          v74 ^= (unsigned __int64)v43;
        else
          v74 = 0LL;
      }
      v75 = 0;
      if ( v74 )
      {
        while ( 1 )
        {
          if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v69 ^ *(_DWORD *)v69) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v74 - 8) ^ *(_DWORD *)(v74 - 8)) )
          {
            v76 = *(_QWORD *)v74;
            if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
            {
              if ( !v76 )
                goto LABEL_94;
              v76 ^= v74;
            }
            if ( !v76 )
            {
LABEL_94:
              v75 = 0;
              break;
            }
          }
          else
          {
            v76 = *(_QWORD *)(v74 + 8);
            if ( (*(_QWORD *)(a1 + 24) & 1) != 0 )
            {
              if ( !v76 )
                goto LABEL_107;
              v76 ^= v74;
            }
            if ( !v76 )
            {
LABEL_107:
              v75 = 1;
              break;
            }
          }
          v74 = v76;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)v74, v75, (PRTL_BALANCED_NODE)(v69 + 8));
    }
    else
    {
      v43 = (_RTL_RB_TREE *)(a1 + 16);
    }
    v44 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v24 ^ *(_DWORD *)v24) >> 16));
    v45 = (v24 - a2 + 4127) & 0xFFFFF000;
    v46 = (v24 + v44 - a2) & 0xFFFFF000;
    v47 = ((v44 + (v24 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v44 + 4095) >> 12);
    if ( v45 < v46 )
    {
      v48 = v46 - v45;
      v49 = *(_QWORD *)(a2 + 16) & (-1LL << (v45 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v46 - 1) >> 12)));
    }
    else
    {
      v48 = 0;
      v49 = 0LL;
    }
    v50 = (0x101010101010101LL
         * ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
           + ((((v49 - ((v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v49 - ((v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    *(_QWORD *)(a1 + 56) += v50;
    *(_WORD *)v24 = RtlpHpHeapGlobals ^ v24 ^ (v47 + (v48 >> 12) - v50);
    Min = v43->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( v43->Root )
        Root = (unsigned __int64)v43->Root ^ (unsigned __int64)v43;
    }
    else
    {
      Root = (unsigned __int64)v43->Root;
    }
    v52 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)v24 ^ *(_DWORD *)v24) < (*(_DWORD *)(Root - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8)) )
        {
          v53 = *(_QWORD *)Root;
          if ( ((unsigned __int8)Min & 1) != 0 )
          {
            if ( !v53 )
              goto LABEL_55;
            v53 ^= Root;
          }
          if ( !v53 )
          {
LABEL_55:
            v52 = 0;
            break;
          }
        }
        else
        {
          v53 = *(_QWORD *)(Root + 8);
          if ( ((unsigned __int8)Min & 1) != 0 )
          {
            if ( !v53 )
              goto LABEL_56;
            v53 ^= Root;
          }
          if ( !v53 )
          {
LABEL_56:
            v52 = 1;
            break;
          }
        }
        Root = v53;
      }
    }
    RtlRbInsertNodeEx(v43, (PRTL_BALANCED_NODE)Root, v52, (PRTL_BALANCED_NODE)(v24 + 8));
  }
  return a4;
}
