/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140052B60
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x1402CF68C (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x140603F30 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x1406E0178 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiGetLeafVa @ 0x14005A9F0 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeFlushMultipleRangeTb @ 0x1400B91A0 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     MiCompressTbFlushList @ 0x140114FE0 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUnlockVadCore @ 0x14012545C (MiUnlockVadCore.c)
 *     MiPreUnlockWorkingSetShared @ 0x140129A78 (MiPreUnlockWorkingSetShared.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A27C (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiRewritePteWithLockBit @ 0x1402D8F30 (MiRewritePteWithLockBit.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r12
  unsigned __int64 v8; // r9
  unsigned __int64 DeepFreezeStartTime; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  _KPROCESS *Process; // rcx
  __int64 v15; // r13
  __int64 *i; // rcx
  volatile signed __int32 *v17; // r15
  unsigned __int8 v18; // al
  LONG *v19; // rdi
  unsigned __int8 v20; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v23; // ett
  unsigned __int8 v24; // cl
  __int64 v25; // r15
  int v26; // r12d
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int16 *AnyMultiplexedVm; // rdi
  int v30; // eax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r12
  unsigned int v35; // r10d
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rdi
  unsigned __int8 v42; // cl
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  unsigned __int64 v45; // r14
  unsigned __int64 v46; // rbx
  _BYTE *v47; // r14
  char v48; // al
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  unsigned int v53; // edi
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // r8
  char v57; // r11
  __int64 v58; // rdi
  unsigned int v59; // r9d
  char v60; // r11
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // r8
  __int64 v63; // rdi
  unsigned __int64 v64; // rbx
  unsigned __int8 v65; // dl
  __int64 v66; // rax
  unsigned __int64 v67; // rbx
  __int64 v68; // rcx
  int v69; // eax
  unsigned __int8 v70; // bl
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  __int64 result; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r8
  unsigned __int64 v79; // r9
  _KPROCESS *v80; // rax
  unsigned __int64 SecureHandle; // rax
  unsigned int v82; // eax
  _DWORD *v83; // rcx
  unsigned __int8 CurrentIrql; // cl
  int v85; // eax
  int v86; // eax
  __int64 v87; // r8
  __int64 v88; // rcx
  __int64 LeafVa; // rax
  __int64 v90; // rcx
  unsigned __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // r9
  unsigned __int64 v94; // rcx
  int v95; // eax
  struct _KPRCB *v96; // rcx
  int v98; // [rsp+20h] [rbp-E0h]
  int v99; // [rsp+24h] [rbp-DCh]
  unsigned __int8 v100; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v101; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v102; // [rsp+38h] [rbp-C8h]
  int v103; // [rsp+40h] [rbp-C0h]
  unsigned __int16 *v104; // [rsp+48h] [rbp-B8h]
  int v106; // [rsp+60h] [rbp-A0h] BYREF
  int v107; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned __int64 *v108; // [rsp+68h] [rbp-98h]
  unsigned __int64 v109; // [rsp+70h] [rbp-90h] BYREF
  __int64 v110; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v111; // [rsp+80h] [rbp-80h]
  __int64 v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  _QWORD v114[22]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v115[24]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+258h] [rbp+158h]

  v4 = a3;
  memset(v115, 0, 0xB8uLL);
  DeepFreezeStartTime = 0LL;
  v102 = 0LL;
  v10 = 0LL;
  v99 = 0;
  v11 = 0xFFFFF68000000000uLL;
  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v101 = v13;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = (__int64)&Process[1].IdealNode[6];
  v112 = *(_QWORD *)&Process[1].IdealNode[14];
  v104 = &Process[1].IdealNode[6];
  v103 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *(__int64 **)(v4 + 56); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 4) != 0 )
        break;
    }
    v108 = (unsigned __int64 *)(i + 1);
  }
  else
  {
    v108 = 0LL;
  }
  v115[1] = 20LL;
  v17 = &dword_140467200;
  LODWORD(v115[0]) = 1;
  WORD2(v115[0]) = 0;
  v115[2] = 0LL;
  v115[3] = 0LL;
  v18 = *(_BYTE *)(v15 + 184) & 7;
  if ( v18 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v100 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v18 == 2 )
      v19 = &dword_140467200;
    else
      v19 = (LONG *)(v15 + 192);
    v20 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v19, v20);
      DeepFreezeStartTime = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v85 = SchedulerAssist[5];
          SchedulerAssist[5] = v85 + 1;
          if ( v85 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            DeepFreezeStartTime = 0LL;
          }
        }
      }
      _m_prefetchw(v19);
      v23 = *v19 & 0x7FFFFFFF;
      if ( v23 != _InterlockedCompareExchange(v19, v23 + 1, v23) )
      {
        v83 = CurrentPrcb->SchedulerAssist;
        if ( v83 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v86 = v83[5] - 1;
            v83[5] = v86;
            if ( !v86 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v19, v20);
        DeepFreezeStartTime = 0LL;
      }
      v10 = 0LL;
    }
    if ( v19[1] )
      _InterlockedExchange(v19 + 1, 0);
    v24 = v20;
    v11 = 0xFFFFF68000000000uLL;
    v13 = v101;
    v100 = v24;
  }
  if ( v12 > v13 )
    goto LABEL_94;
  v25 = (__int64)(v13 << 25) >> 16;
  v26 = a4 & 2;
  v113 = v25;
  v98 = v26;
  while ( 2 )
  {
    if ( v10 )
    {
      MiFlushTbList((int *)v115, 0xFFFFF68000000000uLL, DeepFreezeStartTime, v8);
      MiUnlockPageTableInternal(v15);
      v102 = 0LL;
      if ( MiWorkingSetIsContended(v15) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared(v15, v100);
        MiLockWorkingSetShared(v15);
      }
    }
    if ( v26 )
      _InterlockedIncrement64((volatile signed __int64 *)(v112 + 616));
    v110 = 0LL;
    v111 = 0LL;
    memset((char *)v114 + 2, 0, 0xA6uLL);
    LOWORD(v114[0]) = 2273;
    v27 = (__int64)(v12 << 25) >> 16;
    v28 = v27;
    if ( v27 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v28 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v28 = (__int64)(v28 << 25) >> 16;
      }
      while ( v28 >= 0xFFFFF68000000000uLL );
      v15 = (__int64)v104;
    }
    if ( v28 < 0xFFFF800000000000uLL || v28 >= qword_1404675B0 && v28 <= qword_140465EE0 )
      AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
    else
      AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL);
    v30 = MiFastLockLeafPageTable(AnyMultiplexedVm, v27, 0LL);
    if ( v30 )
    {
      DeepFreezeStartTime = (unsigned int)(v30 - 1);
      LODWORD(v110) = v30 - 1;
      v31 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v111 = v31;
    }
    else
    {
      LOWORD(v114[0]) |= 4u;
      v114[20] = &v110;
      v114[1] = 0LL;
      v114[2] = AnyMultiplexedVm;
      BYTE2(v114[0]) = BYTE2(v114[0]) & 0xE3 | 4;
      v114[19] = MiGetNextPageTableTail;
      BYTE6(v114[0]) = v100;
      v114[3] = (__int64)(v12 << 25) >> 16;
      v114[4] = v25;
      MiWalkPageTables((__int16 *)v114);
      DeepFreezeStartTime = (unsigned int)v110;
      v31 = v111;
    }
    v32 = v31;
    v11 = v13;
    if ( v31 )
    {
      v8 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = v31;
      v102 = v8;
      if ( (_DWORD)DeepFreezeStartTime )
      {
        v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v33 = v32;
        v11 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( (unsigned int)DeepFreezeStartTime > 1 )
        {
          v87 = (unsigned int)(DeepFreezeStartTime - 1);
          do
          {
            v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v33 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v87;
          }
          while ( v87 );
        }
        DeepFreezeStartTime = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v102 = DeepFreezeStartTime;
      }
      v34 = (v33 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v34 > v11 )
        v34 = v11;
    }
    else
    {
      v34 = v13;
    }
    if ( !v103 )
      goto LABEL_59;
    v99 = 1;
    if ( v12 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v12 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v12 = (__int64)(v12 << 25) >> 16;
      }
      while ( v12 >= 0xFFFFF68000000000uLL );
      v15 = (__int64)v104;
    }
    v35 = *(_DWORD *)(a3 + 48);
    v8 = *(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32);
    v36 = (v12 >> 12) - v8;
    v37 = (v35 >> 18) & 3;
    DeepFreezeStartTime = MiVadPageSizes[v37];
    if ( DeepFreezeStartTime >= 0x200 || (v35 & 0x400000) != 0 )
      v38 = MiVadPageSizes[v37];
    else
      v38 = 1LL;
    if ( v38 != 1 )
    {
      v11 = v36 % v38;
      v36 /= v38;
    }
    v39 = v34 + 8;
    if ( v34 + 8 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v39 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v39 = (__int64)(v39 << 25) >> 16;
      }
      while ( v39 >= 0xFFFFF68000000000uLL );
      v15 = (__int64)v104;
    }
    if ( v39 > (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) )
    {
      v40 = *v108;
    }
    else
    {
      v40 = (v39 >> 12) - v8;
      if ( DeepFreezeStartTime < 0x200 && (v35 & 0x400000) == 0 )
        DeepFreezeStartTime = 1LL;
      if ( DeepFreezeStartTime != 1 )
      {
        v11 = v40 % DeepFreezeStartTime;
        v40 /= DeepFreezeStartTime;
      }
    }
    v41 = v40 - v36;
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v43 = *(_DWORD *)(a3 + 48);
    do
    {
      while ( (v43 & 1) != 0 )
      {
        if ( (v43 & 2) != 0 )
        {
          v106 = 0;
          do
          {
            KeYieldProcessorEx(&v106);
            v43 = *(_DWORD *)(a3 + 48);
          }
          while ( (v43 & 1) != 0 );
        }
        else
        {
          v43 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 48), v43 | 2, v43);
        }
      }
      v44 = v43;
      v43 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 48), v43 & 0xFFFFFFFC | 1, v43);
    }
    while ( v44 != v43 );
    v13 = v101;
    if ( !v41 )
      goto LABEL_59;
    v11 = (unsigned __int64)v108;
    v45 = v36;
    v46 = v36 & 7;
    v47 = (_BYTE *)(v108[1] + (v45 >> 3));
    if ( v46 + v41 > 8 )
    {
      if ( (_DWORD)v46 )
      {
        *v47++ &= byte_1403821E8[v46];
        v41 -= (unsigned int)(8 - v46);
      }
      if ( v41 > 8 )
      {
        memset(v47, 0, v41 >> 3);
        v47 += v41 >> 3;
        v41 &= 7u;
      }
      if ( !v41 )
        goto LABEL_58;
      v48 = byte_140380E20[v41];
    }
    else
    {
      v48 = ~(byte_1403821E8[v41] << v46);
    }
    *v47 &= v48;
LABEL_58:
    v13 = v101;
LABEL_59:
    if ( !v31 )
      break;
    if ( v32 > v34 )
      goto LABEL_85;
    v8 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      v49 = *(_QWORD *)v32;
      if ( v32 >= v8
        && v32 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v49 & 1) != 0 )
      {
        if ( (v49 & 0x20) != 0 )
        {
          v50 = (v49 & 0x42) == 0;
          if ( (v49 & 0x42) != 0 )
            goto LABEL_64;
        }
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v88 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v32 >> 3) & 0x1FF));
          if ( (v88 & 0x20) != 0 )
            v49 |= 0x20uLL;
          if ( (v88 & 0x42) != 0 )
            v49 |= 0x42uLL;
        }
      }
      v50 = (v49 & 0x42) == 0;
LABEL_64:
      if ( v50 || (v49 & 1) == 0 )
        goto LABEL_83;
      if ( !v103 )
      {
        if ( v98 && v49 < 0 )
          goto LABEL_83;
        LeafVa = MiGetLeafVa(v32);
        if ( (MiGetWsleContents(v90, LeafVa) & 0xF) == 9 )
          goto LABEL_83;
      }
      v51 = *(_QWORD *)v32;
      if ( v32 >= v8
        && v32 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v51 & 1) != 0
        && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
      {
        v91 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v91 )
        {
          v92 = *(_QWORD *)(v91 + 8 * ((v32 >> 3) & 0x1FF));
          if ( (v92 & 0x20) != 0 )
            v51 |= 0x20uLL;
          if ( (v92 & 0x42) != 0 )
            v51 |= 0x42uLL;
        }
        v8 = 0xFFFFF6FB7DBED000uLL;
      }
      v109 = v51 & 0xFFFFFFFFFFFFFFBDuLL;
      v52 = (__int64)(v32 << 25) >> 16;
      v53 = 0;
      if ( v52 >= 0xFFFFF68000000000uLL )
      {
        do
        {
          if ( v52 > 0xFFFFF6FFFFFFFFFFuLL )
            break;
          ++v53;
          v52 = (__int64)(v52 << 25) >> 16;
        }
        while ( v52 >= 0xFFFFF68000000000uLL );
        if ( v53 )
        {
          MiRewritePteWithLockBit(&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], v32, v109, v8);
          MiInsertLargeTbFlushEntry(v115, v53, v32, v93);
          goto LABEL_78;
        }
      }
      if ( MiPteInShadowRange(v32) )
      {
        if ( (unsigned int)MiPteHasShadow(v55) )
        {
          if ( !HIBYTE(word_140465BEC) && (v54 & 1) != 0 )
            v54 |= 0x8000000000000000uLL;
          *(_QWORD *)v32 = v54;
          MiWritePteShadow(v32, v54);
          v56 = 0xFFFFF68000000000uLL;
          goto LABEL_70;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v54 & 1) != 0 )
        {
          v54 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v32 = v54;
LABEL_70:
      v57 = BYTE4(v115[0]);
      v58 = 1LL;
      if ( LODWORD(v115[0]) != 1 && (v115[0] & 0x800000000LL) == 0 && v52 >= v56 && v52 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v57 = BYTE4(v115[0]) | 8;
        BYTE4(v115[0]) |= 8u;
      }
      v59 = HIDWORD(v115[1]);
      if ( !HIDWORD(v115[1]) )
      {
LABEL_114:
        if ( HIDWORD(v115[1]) >= LODWORD(v115[1]) )
        {
          BYTE5(v115[0]) = 1;
        }
        else
        {
          while ( 1 )
          {
            v75 = (unsigned __int64)(v58 - 1) > 0x3FF ? 1024LL : v58;
            v76 = v52 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v75 - 1) & 0x3FF;
            v58 -= v75;
            v52 += v75 << 12;
            v115[v59 + 3] = v76;
            v115[2] += v75;
            v59 = HIDWORD(v115[1]) + 1;
            HIDWORD(v115[1]) = v59;
            if ( v59 == LODWORD(v115[1]) && (v115[0] & 0x400000000LL) == 0 )
            {
              qsort(&v115[3], v59, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(v115);
              v59 = HIDWORD(v115[1]);
              if ( HIDWORD(v115[1]) == LODWORD(v115[1]) )
                break;
            }
            if ( !v58 )
              goto LABEL_78;
          }
          if ( v58 )
          {
            BYTE5(v115[0]) = 1;
            v115[2] = HIDWORD(v115[1]);
          }
        }
        goto LABEL_78;
      }
      v60 = v57 & 4;
      if ( v60
        || (v61 = v115[(unsigned int)(HIDWORD(v115[1]) - 1) + 3], (v61 & 0xC00) != 0)
        || (v62 = v115[(unsigned int)(HIDWORD(v115[1]) - 1) + 3] & 0x3FFLL,
            (v61 & 0xFFFFFFFFFFFFF000uLL) + ((v62 + 1) << 12) != v52)
        || v62 + 1 < v62
        || v62 + 1 > 0x3FF )
      {
        if ( v60 )
          goto LABEL_114;
        v74 = v115[(unsigned int)(HIDWORD(v115[1]) - 1) + 3];
        if ( (v74 & 0xC00) != 0 )
          goto LABEL_114;
        if ( (v74 & 0xFFFFFFFFFFFFF000uLL) != v52 + 4096 )
          goto LABEL_114;
        v94 = v115[(unsigned int)(HIDWORD(v115[1]) - 1) + 3] & 0x3FFLL;
        if ( v94 + 1 < v94 || v94 + 1 > 0x3FF )
          goto LABEL_114;
        ++v115[2];
        v115[(unsigned int)(HIDWORD(v115[1]) - 1) + 3] = ((unsigned __int16)(v74 - 4096) ^ (unsigned __int16)(v74 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v74 - 4096);
      }
      else
      {
        ++v115[2];
        v115[(unsigned int)(HIDWORD(v115[1]) - 1) + 3] = ((unsigned __int16)v61 ^ (unsigned __int16)(v61 + 1)) & 0x3FF ^ v61;
      }
LABEL_78:
      v63 = 0LL;
      v64 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v109) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v107 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v107);
        while ( *(__int64 *)(v64 + 24) < 0 );
      }
      v65 = *(_BYTE *)(v64 + 34);
      v66 = 0LL;
      if ( (v65 & 0x10) == 0 )
      {
        if ( (!_bittest64((const signed __int64 *)(v64 + 16), 0xAu) & (unsigned __int8)~(v65 >> 3)) != 0 )
          v66 = MiCapturePageFileInfoInline(v64 + 16, 1LL);
        *(_BYTE *)(v64 + 34) |= 0x10u;
        if ( v66 )
          v63 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v64 + 40) >> 40) & 0x3FFLL));
      }
      _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v66 )
        MiReleasePageFileInfo(v63, v66, 1LL);
      v8 = 0xFFFFF6FB7DBED000uLL;
LABEL_83:
      v32 += 8LL;
    }
    while ( v32 <= v34 );
    v15 = (__int64)v104;
    v13 = v101;
LABEL_85:
    if ( v99 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a3 + 48), 0xFFFFFFFC);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        KeGetCurrentIrql();
      __writecr8(2uLL);
      v99 = 0;
    }
    v67 = v32;
    v11 = 0xFFFFF68000000000uLL;
    if ( v32 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v67 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v67 = (__int64)(v67 << 25) >> 16;
      }
      while ( v67 >= 0xFFFFF68000000000uLL );
      v15 = (__int64)v104;
      v13 = v101;
    }
    v12 = ((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v25 = v113;
    v26 = v98;
    if ( v12 <= v13 )
    {
      v10 = v102;
      continue;
    }
    break;
  }
  v4 = a3;
  v17 = &dword_140467200;
LABEL_94:
  v68 = HIDWORD(v115[1]);
  if ( HIDWORD(v115[1]) )
  {
    v77 = BYTE4(v115[0]);
    v78 = LODWORD(v115[0]);
    v79 = qword_140465B50;
    if ( LODWORD(v115[0]) == 1 )
    {
      if ( (v115[0] & 0x200000000LL) == 0 )
      {
        v80 = KeGetCurrentThread()->ApcState.Process;
        if ( v80[2].ActiveProcessors.Bitmap[19] )
          goto LABEL_249;
        SecureHandle = v80->SecureState.SecureHandle;
        if ( SecureHandle )
          LOBYTE(SecureHandle) = 1;
        if ( (_BYTE)SecureHandle )
LABEL_249:
          v79 = -1LL;
        v78 = LODWORD(v115[0]);
        v77 = BYTE4(v115[0]);
        v68 = HIDWORD(v115[1]);
      }
      v82 = 0;
    }
    else
    {
      v82 = ((v115[0] & 0x800000000LL) != 0) + 1;
    }
    if ( v115[2] > v79 || BYTE5(v115[0]) )
    {
      if ( (v77 & 1) != 0 )
        KeFlushCurrentTbOnly((unsigned int)v78, v77, v78, v79);
      else
        KeFlushTb((unsigned int)v78, v82);
      BYTE5(v115[0]) = 0;
    }
    else if ( (v77 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v68, &v115[3], v78, v79);
    }
    else
    {
      KeFlushMultipleRangeTb(v68, &v115[3], v78, v82);
    }
    BYTE4(v115[0]) &= ~8u;
    HIDWORD(v115[1]) = 0;
    v115[2] = 0LL;
  }
  if ( v99 )
  {
    LOBYTE(v11) = 2;
    MiUnlockVadCore(v4, v11);
  }
  if ( v102 )
    MiUnlockPageTableInternal(v15);
  if ( (*(_BYTE *)(v15 + 184) & 7u) >= 6 )
  {
    v70 = v100;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v100 < 2u )
      goto LABEL_266;
  }
  else
  {
    v69 = HIBYTE(*(_DWORD *)(v15 + 184));
    if ( (*(_DWORD *)(v15 + 184) & 0x8000000) != 0 || (v69 & 4) != 0 || (v69 & 0x10) != 0 )
    {
      v70 = v100;
      MiPreUnlockWorkingSetShared(v15, v100);
    }
    else
    {
      v70 = v100;
    }
    if ( (*(_BYTE *)(v15 + 184) & 7) != 2 )
      v17 = (volatile signed __int32 *)(v15 + 192);
    MiCheckProcessShadow(v15, 1LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v17, retaddr);
    }
    else
    {
      _InterlockedAnd(v17, 0xBFFFFFFF);
      _InterlockedDecrement(v17);
    }
    v71 = KeGetCurrentPrcb();
    v72 = v71->SchedulerAssist;
    if ( v72 )
    {
      if ( v71->NestingLevel <= 1u )
      {
        v95 = v72[5] - 1;
        v72[5] = v95;
        if ( !v95 )
          KiRemoveSystemWorkPriorityKick(v71);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v70 < 2u )
    {
LABEL_266:
      v96 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v96->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v96);
    }
  }
  result = v70;
  __writecr8(v70);
  return result;
}
