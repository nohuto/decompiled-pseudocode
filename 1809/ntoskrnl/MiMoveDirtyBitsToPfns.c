/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x140074A30
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x1402B93B0 (MiBeginHoldingDirtyFaults.c)
 *     NtResetWriteWatch @ 0x1405EF780 (NtResetWriteWatch.c)
 *     MiProcessVaRangesInfoClass @ 0x1406BDED8 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140075BA0 (KeFlushMultipleRangeTb.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCompressTbFlushList @ 0x140113B10 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiUnlockVadCore @ 0x140125838 (MiUnlockVadCore.c)
 *     MiPreUnlockWorkingSetShared @ 0x140130D18 (MiPreUnlockWorkingSetShared.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140173D9C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x140173F00 (KeFlushCurrentTbOnly.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 *v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int16 *v10; // r13
  __int64 **i; // rcx
  volatile signed __int32 *v12; // r15
  unsigned __int8 v13; // al
  LONG *v14; // rdi
  unsigned __int8 v15; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v18; // ett
  unsigned __int8 CurrentIrql; // di
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  char *AnyMultiplexedVm; // rsi
  int v24; // eax
  unsigned __int64 v25; // r15
  unsigned __int8 v26; // cl
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rdi
  _BYTE *v34; // r14
  char v35; // al
  unsigned __int64 v36; // r12
  __int64 v37; // r13
  unsigned __int64 v38; // r11
  __int64 v39; // rcx
  int v40; // eax
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  char v43; // al
  unsigned __int8 v44; // bl
  __int64 result; // rax
  unsigned __int64 v46; // r10
  unsigned __int64 Process; // rcx
  __int64 v48; // r10
  unsigned __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rdi
  unsigned __int64 v52; // rdx
  char v53; // r10
  __int64 v54; // r14
  unsigned int v55; // r11d
  char v56; // r10
  unsigned __int64 v57; // rax
  struct _KEVENT *v58; // rsi
  unsigned __int8 v59; // cl
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  char v63; // al
  unsigned __int64 v64; // r9
  __int64 v65; // r8
  _KPROCESS *v66; // rax
  unsigned __int64 SecureHandle; // rax
  __int64 v68; // rdx
  _DWORD *v69; // rcx
  int v70; // eax
  int v71; // eax
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  char WsleContents; // al
  unsigned __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // r8
  unsigned __int64 v81; // rcx
  struct _KPRCB *v82; // rcx
  int v83; // eax
  unsigned __int8 v84; // [rsp+28h] [rbp-E0h]
  int v85; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v86; // [rsp+38h] [rbp-D0h]
  __int64 v87; // [rsp+40h] [rbp-C8h]
  int v89; // [rsp+50h] [rbp-B8h] BYREF
  int v90; // [rsp+54h] [rbp-B4h]
  __int64 v91; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v92; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+68h] [rbp-A0h]
  __int64 v94; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v95; // [rsp+78h] [rbp-90h]
  __int64 v96; // [rsp+80h] [rbp-88h]
  unsigned __int16 *v97; // [rsp+88h] [rbp-80h]
  __int64 v98; // [rsp+90h] [rbp-78h]
  _QWORD v99[22]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v100; // [rsp+148h] [rbp+40h] BYREF
  __int16 v101; // [rsp+14Ch] [rbp+44h]
  __int64 v102; // [rsp+150h] [rbp+48h]
  unsigned __int64 v103; // [rsp+158h] [rbp+50h]
  _QWORD Base[21]; // [rsp+160h] [rbp+58h] BYREF
  void *retaddr; // [rsp+250h] [rbp+148h]

  v4 = 0LL;
  v5 = a3;
  v6 = 0LL;
  v87 = 0LL;
  v85 = 0;
  v7 = (__int64 *)0xFFFFF68000000000LL;
  v90 = a4;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v86 = v9;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v97 = v10;
  if ( v5 )
  {
    for ( i = *(__int64 ***)(v5 + 56); i; i = (__int64 **)*i )
    {
      if ( ((_DWORD)i[8] & 4) != 0 )
        break;
    }
    v96 = (__int64)(i + 2);
  }
  else
  {
    v96 = 8LL;
  }
  v102 = 20LL;
  v12 = &dword_14043C7C0;
  v100 = 1;
  v101 = 0;
  v103 = 0LL;
  Base[0] = 0LL;
  v13 = v10[92] & 7;
  if ( v13 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v84 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v13 == 2 )
      v14 = &dword_14043C7C0;
    else
      v14 = (LONG *)(v10 + 96);
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v14, v15);
      v9 = v86;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v70 = SchedulerAssist[5];
          SchedulerAssist[5] = v70 + 1;
          if ( v70 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v9 = v86;
          }
        }
      }
      _m_prefetchw(v14);
      v18 = *v14 & 0x7FFFFFFF;
      if ( v18 != _InterlockedCompareExchange(v14, v18 + 1, v18) )
      {
        v69 = CurrentPrcb->SchedulerAssist;
        if ( v69 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v71 = v69[5] - 1;
            v69[5] = v71;
            if ( !v71 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v14, v15);
        v9 = v86;
      }
      v6 = 0LL;
    }
    if ( v14[1] )
      _InterlockedExchange(v14 + 1, 0);
    CurrentIrql = v15;
    v7 = (__int64 *)0xFFFFF68000000000LL;
    v5 = a3;
    v84 = CurrentIrql;
  }
  if ( v8 > v9 )
    goto LABEL_54;
  v20 = 0LL;
  v93 = 0LL;
  v98 = (__int64)(v9 << 25) >> 16;
  while ( 1 )
  {
    if ( v6 )
    {
      MiFlushTbList((int *)&v100, v9, 0xFFFFF68000000000uLL, a4);
      MiUnlockPageTableInternal(v10, v6);
      if ( (unsigned int)MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetShared((__int64)v10, CurrentIrql);
        MiLockWorkingSetShared(v10);
      }
    }
    else
    {
      v4 = v87;
    }
    v94 = 0LL;
    v95 = 0LL;
    memset(v99, 0, sizeof(v99));
    LODWORD(v99[0]) = 2273;
    v21 = (__int64)((v8 << 25) - v20) >> 16;
    v22 = v21;
    if ( v21 >= 0xFFFFF68000000000uLL )
    {
      do
      {
        if ( v22 > 0xFFFFF6FFFFFFFFFFuLL )
          break;
        v22 = (__int64)((v22 << 25) - v20) >> 16;
      }
      while ( v22 >= 0xFFFFF68000000000uLL );
      v10 = v97;
    }
    if ( v22 < 0xFFFF800000000000uLL || v22 >= qword_14043CB80 && v22 <= qword_14043B5F0 )
      AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
    else
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v24 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, (__int64)((v8 << 25) - v20) >> 16, 0);
    if ( v24 )
    {
      LODWORD(v94) = v24 - 1;
      v25 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v95 = v25;
    }
    else
    {
      LODWORD(v99[0]) |= 4u;
      v99[21] = &v94;
      v99[2] = 0LL;
      v99[20] = MiGetNextPageTableTail;
      BYTE4(v99[0]) = v84;
      v99[5] = v98;
      BYTE2(v99[1]) = 1;
      v99[3] = AnyMultiplexedVm;
      v99[4] = (__int64)((v8 << 25) - v20) >> 16;
      MiWalkPageTables((int *)v99);
      v25 = v95;
    }
    if ( v5 )
    {
      v85 = 1;
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v27 = *(_DWORD *)(v5 + 48);
      do
      {
        while ( v27 < 0 )
        {
          if ( (v27 & 0x40000000) != 0 )
          {
            v89 = 0;
            do
            {
              KeYieldProcessorEx(&v89, v9, (__int64)v7);
              v27 = *(_DWORD *)(v5 + 48);
            }
            while ( v27 < 0 );
          }
          else
          {
            v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), v27 | 0x40000000, v27);
          }
        }
        v28 = v27;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), v27 & 0x3FFFFFFF | 0x80000000, v27);
      }
      while ( v28 != v27 );
      if ( v95 )
      {
        v29 = (unsigned __int64)((__int64)((v95 << 25) - v93) >> 16) >> 12;
        v30 = ((__int64)(v86 - v95) >> 3) + 1;
        if ( v30 > 0x200 )
          v30 = 512LL;
      }
      else
      {
        v29 = v21 >> 12;
        v30 = ((__int64)(v86 - v8) >> 3) + 1;
      }
      v31 = v29 - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32));
      if ( v30 )
      {
        v32 = v31;
        v33 = v31 & 7;
        v34 = (_BYTE *)(*(_QWORD *)v96 + (v32 >> 3));
        if ( v33 + v30 > 8 )
        {
          if ( (_DWORD)v33 )
          {
            *v34++ &= byte_1403630E8[v33];
            v30 -= (unsigned int)(8 - v33);
          }
          if ( v30 > 8 )
          {
            memset(v34, 0, v30 >> 3);
            v34 += v30 >> 3;
            v30 &= 7u;
          }
          if ( !v30 )
            goto LABEL_37;
          v35 = byte_140361CC8[v30];
        }
        else
        {
          v35 = ~(byte_1403630E8[v30] << v33);
        }
        *v34 &= v35;
LABEL_37:
        v5 = a3;
      }
    }
    if ( !v25 )
      goto LABEL_53;
    v7 = (__int64 *)0xFFFFF68000000000LL;
    v8 = v25;
    v9 = v86;
    v6 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v87 = v6;
    v36 = v86;
    if ( (v25 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v86 )
      v36 = (v25 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v25 <= v36 )
    {
      v37 = v93;
      v38 = 0xFFFFF6FB7DBED000uLL;
      while ( 2 )
      {
        a4 = *(_QWORD *)v8;
        if ( v8 >= v38
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (a4 & 1) != 0
          && ((a4 & 0x20) == 0 || (a4 & 0x42) == 0) )
        {
          v72 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v72 )
          {
            v73 = *(_QWORD *)(v72 + 8 * ((v8 >> 3) & 0x1FF));
            v74 = a4 | 0x20;
            if ( (v73 & 0x20) == 0 )
              v74 = *(_QWORD *)v8;
            a4 = v74;
            if ( (v73 & 0x42) != 0 )
              a4 = v74 | 0x42;
          }
        }
        v92 = a4;
        if ( (a4 & 1) == 0 || (a4 & 0x42) == 0 )
          goto LABEL_46;
        v46 = a4;
        Process = (unsigned __int64)&v92;
        if ( (unsigned __int64)&v92 >= v38 )
        {
          Process = (unsigned __int64)&v92;
          if ( (unsigned __int64)&v92 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 640) != 1 && (a4 & 0x20) == 0 )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v75 = *(_QWORD *)(Process + 1544);
              if ( v75 )
              {
                v46 = a4 | 0x20;
                v76 = *(_QWORD *)(v75 + 8 * (((unsigned __int64)&v92 >> 3) & 0x1FF));
                Process = (unsigned __int8)v76;
                LOBYTE(Process) = v76 & 0x20;
                if ( (v76 & 0x20) == 0 )
                  v46 = a4;
                if ( (v76 & 0x42) != 0 )
                  v46 |= 0x42uLL;
              }
            }
          }
        }
        v48 = (v46 >> 12) & 0xFFFFFFFFFLL;
        v49 = (__int64)((v8 << 25) - v37) >> 16;
        if ( !v5 )
        {
          if ( v90 && a4 < 0 )
            goto LABEL_46;
          WsleContents = MiGetWsleContents(Process, (__int64)((v8 << 25) - v37) >> 16);
          v7 = (__int64 *)0xFFFFF68000000000LL;
          if ( (WsleContents & 0xF) == 9 )
            goto LABEL_46;
        }
        v50 = *(_QWORD *)v8;
        v51 = 48 * v48 - 0x58000000000LL;
        if ( v8 >= v38
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v50 & 1) != 0
          && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
        {
          v78 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v78 )
          {
            v79 = *(_QWORD *)(v78 + 8 * ((v8 >> 3) & 0x1FF));
            v80 = v50 | 0x20;
            if ( (v79 & 0x20) == 0 )
              v80 = *(_QWORD *)v8;
            v50 = v80;
            if ( (v79 & 0x42) != 0 )
              v50 = v80 | 0x42;
          }
          v7 = (__int64 *)0xFFFFF68000000000LL;
        }
        a4 &= 0xF0FFFFFFFFFFFFBDuLL;
        v52 = (a4 | v50 & 0xF00000000000000LL) ^ ((a4 | v50 & 0xF00000000000000LL) ^ v50) & 0x7000000000000000LL;
        if ( v8 >= v38 && v8 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(0x7000000000000000LL, v52) )
          {
            if ( !HIBYTE(word_14043B26C) && (v52 & 1) != 0 )
              v52 |= 0x8000000000000000uLL;
            *(_QWORD *)v8 = v52;
            MiWritePteShadow(v8);
            v7 = (__int64 *)0xFFFFF68000000000LL;
LABEL_76:
            v53 = v101;
            v54 = 1LL;
            if ( v100 != 1 && (v101 & 8) == 0 && v49 >= (unsigned __int64)v7 && v49 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
              v53 = v101 | 8;
              LOBYTE(v101) = v101 | 8;
            }
            v55 = HIDWORD(v102);
            if ( !HIDWORD(v102) )
              goto LABEL_92;
            v56 = v53 & 4;
            if ( !v56 )
            {
              a4 = (__int64)&Base[HIDWORD(v102) - 1];
              v57 = *(_QWORD *)a4;
              if ( (*(_QWORD *)a4 & 0xC00LL) == 0 )
              {
                v7 = (__int64 *)(Base[HIDWORD(v102) - 1] & 0x3FFLL);
                v52 = (v57 & 0xFFFFFFFFFFFFF000uLL) + (((_QWORD)v7 + 1) << 12);
                if ( v52 == v49 && (__int64 *)((char *)v7 + 1) >= v7 && (unsigned __int64)v7 + 1 <= 0x3FF )
                {
                  ++v103;
                  *(_QWORD *)a4 = ((unsigned __int16)v57 ^ (unsigned __int16)(v57 + 1)) & 0x3FF ^ v57;
                  goto LABEL_84;
                }
              }
            }
            if ( v56
              || (v7 = &Base[HIDWORD(v102) - 1], v61 = *v7, (*v7 & 0xC00) != 0)
              || (v52 = v61 & 0xFFFFFFFFFFFFF000uLL, (v61 & 0xFFFFFFFFFFFFF000uLL) != v49 + 4096)
              || (v81 = *v7 & 0x3FF, v52 = v81 + 1, v81 + 1 < v81)
              || v52 > 0x3FF )
            {
LABEL_92:
              if ( HIDWORD(v102) >= (unsigned int)v102 )
              {
                HIBYTE(v101) = 1;
              }
              else
              {
                while ( 1 )
                {
                  v52 = (unsigned __int64)(v54 - 1) > 0x3FF ? 1024LL : v54;
                  v62 = v49 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v52 - 1) & 0x3FF;
                  v54 -= v52;
                  v49 += v52 << 12;
                  Base[v55] = v62;
                  v103 += v52;
                  v55 = HIDWORD(v102) + 1;
                  HIDWORD(v102) = v55;
                  if ( v55 == (_DWORD)v102 && (v101 & 4) == 0 )
                  {
                    qsort(Base, v55, 8uLL, MiTbFlushSort);
                    MiCompressTbFlushList(&v100);
                    v55 = HIDWORD(v102);
                    if ( HIDWORD(v102) == (_DWORD)v102 )
                      break;
                  }
                  if ( !v54 )
                    goto LABEL_84;
                }
                if ( v54 )
                {
                  HIBYTE(v101) = 1;
                  v103 = HIDWORD(v102);
                }
              }
            }
            else
            {
              ++v103;
              *v7 = ((unsigned __int16)(v61 - 4096) ^ (unsigned __int16)(v61 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v61 - 4096);
            }
LABEL_84:
            v58 = 0LL;
            LODWORD(v91) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v91, v52, (__int64)v7);
              while ( *(__int64 *)(v51 + 24) < 0 );
            }
            v59 = *(_BYTE *)(v51 + 34);
            v60 = 0LL;
            if ( (v59 & 0x10) == 0 )
            {
              if ( (!_bittest64((const signed __int64 *)(v51 + 16), 0xAu) & (unsigned __int8)~(v59 >> 3)) != 0 )
              {
                v60 = MiCapturePageFileInfoInline(v51 + 16, 1LL);
                v59 = *(_BYTE *)(v51 + 34);
              }
              *(_BYTE *)(v51 + 34) = v59 | 0x10;
              if ( v60 )
                v58 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v51 + 40) >> 40) & 0x3FFLL));
            }
            _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v60 )
              MiReleasePageFileInfo(v58, v60, 1);
            v7 = (__int64 *)0xFFFFF68000000000LL;
            v38 = 0xFFFFF6FB7DBED000uLL;
LABEL_46:
            v5 = a3;
            v8 += 8LL;
            if ( v8 > v36 )
            {
              v10 = v97;
              v6 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v9 = v86;
              goto LABEL_48;
            }
            continue;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v52 & 1) != 0 )
          {
            v52 |= 0x8000000000000000uLL;
          }
        }
        break;
      }
      *(_QWORD *)v8 = v52;
      goto LABEL_76;
    }
LABEL_48:
    if ( v5 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v5 + 48), 0x3FFFFFFFu);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
        KeGetCurrentIrql();
      __writecr8(2uLL);
      v4 = 0LL;
      v85 = 0;
    }
    else
    {
      v4 = 0LL;
    }
    v20 = v93;
    if ( v8 > v9 )
      break;
    CurrentIrql = v84;
  }
  v4 = v87;
LABEL_53:
  v12 = &dword_14043C7C0;
LABEL_54:
  v39 = HIDWORD(v102);
  if ( HIDWORD(v102) )
  {
    v63 = v101;
    v64 = qword_14043B1D0;
    v65 = v100;
    if ( (v101 & 2) != 0 )
    {
      if ( v100 == 1 )
      {
LABEL_105:
        v68 = 0LL;
        goto LABEL_106;
      }
    }
    else if ( v100 == 1 )
    {
      v66 = KeGetCurrentThread()->ApcState.Process;
      if ( v66[2].ActiveProcessors.Bitmap[15] )
        goto LABEL_229;
      SecureHandle = v66->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
      {
LABEL_229:
        v39 = HIDWORD(v102);
        v64 = -1LL;
        v63 = v101;
        v65 = v100;
      }
      else
      {
        v39 = HIDWORD(v102);
        v63 = v101;
        v65 = v100;
      }
      goto LABEL_105;
    }
    v68 = (unsigned int)((v101 & 8) != 0) + 1;
LABEL_106:
    if ( v103 > v64 || HIBYTE(v101) )
    {
      if ( (v63 & 1) != 0 )
        KeFlushCurrentTbOnly((unsigned int)v65, v68);
      else
        KeFlushTb((unsigned int)v65, v68, v65, v64);
      HIBYTE(v101) = 0;
    }
    else if ( (v63 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v39, Base, v65);
    }
    else
    {
      KeFlushMultipleRangeTb(v39, Base, v65, (unsigned int)v68);
    }
    LOBYTE(v101) = v101 & 0xF7;
    HIDWORD(v102) = 0;
    v103 = 0LL;
  }
  if ( v85 == 1 )
  {
    LOBYTE(v9) = 2;
    MiUnlockVadCore(v5, v9, v7);
  }
  if ( v4 )
    MiUnlockPageTableInternal(v10, v4);
  if ( (v10[92] & 7u) >= 6 )
  {
    v43 = KiIrqlFlags;
    if ( !KiIrqlFlags )
      goto LABEL_69;
  }
  else
  {
    v40 = *((_DWORD *)v10 + 46);
    if ( (v40 & 0x8000000) != 0 || (v40 & 0x4000000) != 0 || (v40 & 0x10000000) != 0 )
    {
      MiPreUnlockWorkingSetShared(v10, v84);
      LOBYTE(v40) = *((_BYTE *)v10 + 184);
    }
    if ( (v40 & 7) != 2 )
      v12 = (volatile signed __int32 *)(v10 + 96);
    MiCheckProcessShadow((__int64)v10, 1u, (__int64)v7, a4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    }
    else
    {
      _InterlockedAnd(v12, 0xBFFFFFFF);
      _InterlockedDecrement(v12);
    }
    v41 = KeGetCurrentPrcb();
    v42 = v41->SchedulerAssist;
    if ( v42 )
    {
      if ( v41->NestingLevel <= 1u )
      {
        v83 = v42[5] - 1;
        v42[5] = v83;
        if ( !v83 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
    v43 = KiIrqlFlags;
    if ( !KiIrqlFlags )
    {
LABEL_69:
      v44 = v84;
      goto LABEL_70;
    }
  }
  v44 = v84;
  if ( (v43 & 1) != 0 && KeGetCurrentIrql() >= 2u && v84 < 2u )
  {
    v82 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v82->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v82);
  }
LABEL_70:
  result = v44;
  __writecr8(v44);
  return result;
}
