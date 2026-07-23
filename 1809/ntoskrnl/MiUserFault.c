/*
 * XREFs of MiUserFault @ 0x140044870
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x14001BC3C (MiUnlockFaultPageTable.c)
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVadSequential @ 0x140042460 (MiCheckVadSequential.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiResolveSharedZeroFault @ 0x1400429B0 (MiResolveSharedZeroFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiCheckFatalAccessViolation @ 0x1400962EC (MiCheckFatalAccessViolation.c)
 *     MiShouldLockPteDirectly @ 0x140098600 (MiShouldLockPteDirectly.c)
 *     MiInPagePageTable @ 0x140098720 (MiInPagePageTable.c)
 *     MiCheckProtoAccess @ 0x140098B50 (MiCheckProtoAccess.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiUpdatePageTableUseCount @ 0x14010FC78 (MiUpdatePageTableUseCount.c)
 *     MiAllowGuardFault @ 0x140117D28 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiWaitForRotateToComplete @ 0x140139D0C (MiWaitForRotateToComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402A4120 (MiIsVadEligibleForCommitRelease.c)
 *     MiPrefetchJumpVad @ 0x1402AF3B4 (MiPrefetchJumpVad.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402B945C (MiCheckHoldFaultForHotPatch.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 *     MiWaitForAvailablePages @ 0x1402CB588 (MiWaitForAvailablePages.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406A4CAC (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r15
  _KPROCESS *Process; // rdi
  __int64 v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // rdx
  bool v10; // sf
  bool v11; // of
  int v12; // ecx
  _KPROCESS *v13; // rdx
  LONG *v14; // r14
  unsigned __int8 v15; // al
  unsigned __int8 CurrentIrql; // si
  LONG *p_Blink; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v20; // eax
  signed __int32 v21; // ett
  _DWORD *v22; // rcx
  int v23; // eax
  _KPROCESS *v24; // rcx
  __int64 Address; // rax
  __int64 v26; // rdx
  _KPROCESS *v27; // rbx
  __int64 v28; // rcx
  unsigned int valid; // edi
  bool v30; // zf
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // ebx
  unsigned __int64 *v36; // r14
  unsigned __int64 v37; // rsi
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  ULONG_PTR v41; // r9
  ULONG_PTR v42; // rdx
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  int v49; // r10d
  unsigned int v50; // esi
  __int64 v51; // rdx
  _KPROCESS *v52; // r9
  __int64 v53; // rax
  _BYTE *v54; // rax
  unsigned __int64 v55; // r8
  ULONG_PTR v56; // r15
  unsigned __int64 v57; // rcx
  _QWORD *v58; // r8
  ULONG_PTR v59; // rcx
  char v60; // si
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // edi
  __int64 v65; // rdx
  __int64 v66; // rbx
  __int64 v67; // rdx
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  __int64 **VadEvent; // rcx
  int v71; // eax
  int v72; // ecx
  int v73; // eax
  unsigned int v74; // r10d
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r11
  int v80; // r8d
  __int64 v81; // r10
  unsigned __int64 v82; // r9
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  ULONG_PTR v85; // rcx
  __int64 v86; // rax
  unsigned __int64 v87; // rbx
  __int64 v88; // rsi
  __int64 v89; // rcx
  struct _KPRCB *v90; // rax
  char v91; // bl
  __int64 v92; // r9
  __int64 v93; // r11
  unsigned int v94; // ebx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r9
  __int64 v98; // r11
  unsigned __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  signed __int64 v109; // rdx
  volatile signed __int32 *PageTableLockBuffer; // r8
  int v111; // r9d
  signed __int32 v112; // eax
  volatile signed __int32 v113; // ett
  signed __int32 v114; // edx
  __int64 v115; // rdx
  _KPROCESS *v116; // [rsp+30h] [rbp-69h]
  unsigned int v117; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v118; // [rsp+48h] [rbp-51h]
  ULONG_PTR v119; // [rsp+50h] [rbp-49h]
  __int64 v120; // [rsp+58h] [rbp-41h]
  int v121; // [rsp+60h] [rbp-39h]
  int v122; // [rsp+64h] [rbp-35h]
  int v123; // [rsp+70h] [rbp-29h]
  unsigned __int64 v124; // [rsp+78h] [rbp-21h]
  __int64 v125; // [rsp+80h] [rbp-19h]
  __int64 v126; // [rsp+88h] [rbp-11h]
  _KPROCESS *v127; // [rsp+90h] [rbp-9h]
  ULONG_PTR v128; // [rsp+98h] [rbp-1h]
  __int64 v129[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v130; // [rsp+100h] [rbp+67h] BYREF
  int v131; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 ProtoPteAddress; // [rsp+110h] [rbp+77h]
  unsigned __int64 v133; // [rsp+118h] [rbp+7Fh]

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v116 = Process;
  ProtoPteAddress = 0LL;
  *(_QWORD *)(a1 + 56) = (char *)Process + 1280;
  if ( LODWORD(Process[2].Affinity.Bitmap[3]) <= 0x10 )
    goto LABEL_14;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    goto LABEL_14;
  v7 = *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  if ( *(_DWORD *)(v7 + 1144) )
  {
    if ( *(_KPROCESS **)(v7 + 1264) == Process )
      goto LABEL_14;
  }
  v8 = *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&Process[1].SecureState.Flags + 3));
  a4 = *(_QWORD *)(v7 + 7680);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v9 = (_QWORD *)(*(_QWORD *)(v8 + 16) + 1984LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]),
        a3 = 16LL * (v9[68] + v9[69]) + ((v9[34] + v9[35]) << 9) + ((*v9 + v9[1]) << 18) + v9[220] + v9[221],
        a3 < 0x420)
    && a4 >= a3 >> 4
    || !a3 )
  {
    a3 = *(_QWORD *)(v8 + 7296);
  }
  if ( a3 >= 0x420 || a4 < 0x4000 && (a3 >>= 4, a4 < a3) )
  {
LABEL_14:
    if ( !dword_14043BE68 )
      goto LABEL_21;
    v12 = 3;
  }
  else
  {
    v11 = __OFSUB__(Process->BasePriority, 9);
    v10 = (char)(Process->BasePriority - 9) < 0;
    LODWORD(Process[2].Affinity.Bitmap[3]) = 0;
    v12 = (v10 == v11) + 1;
  }
  v13 = KeGetCurrentThread()->ApcState.Process;
  if ( v12 == 1 )
  {
    MiWaitForAvailablePages(
      *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&v13[1].SecureState.Flags + 3)),
      &MiHalfSecond);
  }
  else if ( v12 == 2 )
  {
    MiWaitForAvailablePages(
      *(_QWORD *)(qword_14043B808 + 8LL * *((unsigned __int16 *)&v13[1].SecureState.Flags + 3)),
      &Mi30Milliseconds);
  }
  else
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
  }
LABEL_21:
  v14 = &dword_14043C7C0;
  v15 = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  if ( v15 < 6u )
  {
    if ( v15 == 2 )
      p_Blink = &dword_14043C7C0;
    else
      p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(p_Blink, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = SchedulerAssist[5];
          SchedulerAssist[5] = v20 + 1;
          if ( v20 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(p_Blink);
      v21 = *p_Blink & 0x7FFFFFFF;
      if ( v21 != _InterlockedCompareExchange(p_Blink, v21 + 1, v21) )
      {
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = v22[5] - 1;
            v22[5] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(p_Blink, CurrentIrql);
      }
    }
    if ( p_Blink[1] )
      _InterlockedExchange(p_Blink + 1, 0);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  v24 = KeGetCurrentThread()->ApcState.Process;
  if ( ((__int64)v24[2].Header.WaitListHead.Flink & 7) != 2 )
    v14 = (LONG *)&v24[2].Header.WaitListHead.Blink;
  if ( (BYTE3(v24[2].Header.WaitListHead.Flink) & 0x60) == 0x60 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      if ( a1 < 0xFFFF800000000000uLL )
      {
        Address = MiLocateAddress(a1);
        if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
          goto LABEL_273;
      }
    }
  }
  v26 = 0xFFFF00000000FFFFuLL;
  if ( (unsigned __int64)(*(_QWORD *)a1 - 0x7FFFFFFF0000LL) <= 0xFFFF00000000FFFFuLL )
    goto LABEL_273;
  v27 = KeGetCurrentThread()->ApcState.Process;
  if ( v27[1].Affinity.Bitmap[9] && (unsigned int)MiWaitForRotateToComplete(*(_QWORD *)a1, a1 + 56) == 1
    || (v28 = *(_QWORD *)&v27[2].Spare2[23]) != 0 && (unsigned int)MiCheckHoldFaultForHotPatch(v28, a1) == 1 )
  {
    valid = 0;
    goto LABEL_274;
  }
  v30 = (*(_BYTE *)(a1 + 69) & 1) == 0;
  v31 = *(_QWORD *)(a1 + 56);
  v133 = v31;
  if ( !v30 )
    goto LABEL_68;
  v32 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v33 = MiFastLockLeafPageTable(v31, v32, 0LL);
    if ( v33 )
    {
      v34 = *(_QWORD *)(a1 + 8LL * v33 + 24);
      *(_QWORD *)(a1 + 72) = v34;
      if ( v33 != 1 )
      {
        MiUnlockPageTableInternal(v31, v34);
        *(_QWORD *)(a1 + 72) = 0LL;
        goto LABEL_66;
      }
LABEL_100:
      v43 = *(_QWORD *)(a1 + 24);
      v44 = *(_QWORD *)v43;
      if ( v43 >= 0xFFFFF6FB7DBED000uLL
        && v43 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v44 & 1) == 0 )
        {
LABEL_114:
          v48 = *(_QWORD *)(a1 + 8);
          if ( (v48 & 2) != 0
            && (v116[1].DirectoryTableBase & 0x1000000000LL) != 0
            && *(_QWORD *)a1 < 0xFFFF800000000000uLL )
          {
            *(_QWORD *)(a1 + 8) = v48 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          v49 = 1;
          if ( !v44 )
          {
            v50 = 0;
            v51 = *(_QWORD *)(a1 + 16);
            v126 = 0LL;
            v52 = KeGetCurrentThread()->ApcState.Process;
            v53 = *(_QWORD *)(a1 + 56);
            v127 = v52;
            if ( (*(_BYTE *)(v53 + 184) & 7) == 0 )
              v50 = 64;
            v54 = (_BYTE *)(v51 & 0xFFFFFFFFFFFFFFFEuLL);
            v117 = v50;
            if ( (v51 & 1) != 0 )
            {
              if ( *v54 == 2 )
              {
                v50 |= 1u;
                goto LABEL_130;
              }
              if ( *v54 == 1 )
              {
                v50 |= 2u;
                goto LABEL_130;
              }
            }
            else
            {
              v54 = (_BYTE *)(v51 & 0xFFFFFFFFFFFFFFFEuLL);
            }
            if ( (v51 & 1) == 0 || *v54 != 5 )
            {
LABEL_131:
              v55 = v51 & 0xFFFFFFFFFFFFFFFEuLL;
              v133 = v51 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (v51 & 1) != 0 && *(_BYTE *)v55 == 4 || (v133 = v51 & 0xFFFFFFFFFFFFFFFEuLL, (v50 & 0xB) != 0) )
              {
                if ( (v51 & 1) != 0 && *(_BYTE *)v55 == 4 )
                  v126 = *(_QWORD *)(v55 + 40);
                if ( (v50 & 2) != 0 && (*(_DWORD *)(v55 + 80) & 0x4000) != 0 )
                {
                  v50 |= 4u;
                  v117 = v50;
                }
                if ( (v50 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v55 + 8) + 8LL) > 0x1000uLL )
                {
                  v50 |= 0x10u;
                  v117 = v50;
                }
              }
              else
              {
                v55 = 0LL;
                v133 = 0LL;
              }
              v56 = *(_QWORD *)a1;
              v57 = *(_QWORD *)a1;
              v124 = v55;
              v118 = a1;
              v58 = (_QWORD *)0xFFFFF68000000000LL;
              v59 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v128 = v59;
              if ( v56 >= 0xFFFF800000000000uLL )
              {
                if ( (v50 & 2) != 0 )
                {
                  v60 = 1;
                  valid = 0;
                  goto LABEL_164;
                }
                if ( v56 >= 0xFFFFF68000000000uLL && v56 <= 0xFFFFF6FFFFFFFFFFuLL && v51 )
                  KeBugCheckEx(0x50u, v56, *(_QWORD *)(a1 + 8), v59, 6uLL);
              }
              v58 = 0LL;
              v61 = 0LL;
              if ( v56 > 0x7FFFFFFEFFFFLL )
              {
                if ( v56 >= 0xFFFFF68000000000uLL && v56 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  v64 = 4;
                  v63 = 0LL;
                  goto LABEL_218;
                }
LABEL_159:
                MiCheckFatalAccessViolation(v56);
                if ( (v50 & 2) != 0 && v61 )
                  MiPrefetchJumpVad(v133, v61, v56);
                goto LABEL_162;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
              {
                v62 = v56 & 0x7FFFFFFFF000LL;
                if ( (v56 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
                {
                  v63 = qword_14043B0B8;
                  v64 = 1;
                  LOBYTE(v50) = v117;
LABEL_218:
                  ProtoPteAddress = v63;
LABEL_219:
                  if ( (v64 & 0xFFFFFFF8) == 0x10 )
                  {
                    if ( (v50 & 2) != 0 )
                    {
                      valid = 0;
                      goto LABEL_163;
                    }
                    if ( (unsigned int)MiAllowGuardFault(*(_QWORD *)(a1 + 16)) )
                    {
                      MiUpdatePageTableUseCount(v56, v74);
                      v75 = v64 & 0xF;
                      if ( ProtoPteAddress )
                        v75 |= 0xFFFFFFFFF8000020uLL;
                      MiSwizzleInvalidPte(32 * v75);
                      if ( MiPteInShadowRange(v128) )
                      {
                        if ( (unsigned int)MiPteHasShadow(v77, v76) )
                        {
                          if ( !HIBYTE(word_14043B26C) && (v76 & 1) != 0 )
                            v76 |= 0x8000000000000000uLL;
                          *v58 = v76;
                          MiWritePteShadow(v58);
                          v60 = 2;
                          valid = 0;
                          goto LABEL_164;
                        }
                        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                          && (v76 & 1) != 0 )
                        {
                          v76 |= 0x8000000000000000uLL;
                        }
                      }
                      *v58 = v76;
                      valid = 0;
                      v60 = 2;
LABEL_164:
                      v65 = *(_QWORD *)(a1 + 72);
                      v66 = *(_QWORD *)(a1 + 56);
                      if ( v65 )
                      {
                        if ( *(_WORD *)(a1 + 66) )
                        {
                          MiEmptyDeferredWorkingSetEntries(a1 + 56, v65, v58);
                          v65 = *(_QWORD *)(a1 + 72);
                        }
                        MiUnlockPageTableInternal(v66, v65);
                        *(_BYTE *)(a1 + 69) |= 2u;
                        *(_QWORD *)(a1 + 72) = 0LL;
                      }
                      v67 = *(unsigned __int8 *)(a1 + 68);
                      if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
                        MiUnlockWorkingSetExclusive(v66, v67);
                      else
                        MiUnlockWorkingSetShared(v66, v67);
                      if ( v60 == 2 )
                        return (unsigned int)MiCheckForUserStackOverflow(*(_QWORD *)a1, 1LL);
                      return valid;
                    }
LABEL_162:
                    valid = -1073741819;
LABEL_163:
                    v60 = 1;
                    goto LABEL_164;
                  }
                  v78 = *(_QWORD *)(a1 + 8) >> 57;
                  v119 = v56;
                  v4 = 0LL;
                  v121 = v64;
                  v123 = v78;
                  v120 = v63;
                  v125 = v61;
                  v122 = 0;
                  if ( !v63 )
                  {
                    valid = MiResolvePrivateZeroFault(&v117, v51, v58, v52);
                    goto LABEL_163;
                  }
                  if ( (v50 & 2) == 0
                    && v61
                    && *(__int64 *)(v61 + 120) >= 0
                    && (unsigned int)MiCheckVadSequential((__int64)&v117) == -1073741280 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v61 + 36));
                    *(_DWORD *)(a1 + 80) |= 1u;
                    *(_QWORD *)(a1 + 88) = v61;
                  }
                  v130 = v64;
                  MiResolveSharedZeroFault(&v117);
                  goto LABEL_243;
                }
                if ( v62 == qword_14043B0C8 && v62 )
                {
                  v63 = qword_14043B0C0;
                  v64 = 1;
                  LOBYTE(v50) = v117;
                  goto LABEL_218;
                }
              }
              v51 = (__int64)KeGetCurrentThread()->ApcState.Process;
              v61 = *(_QWORD *)(v51 + 1584);
              if ( !v61 )
                goto LABEL_158;
              v68 = v56 >> 12;
              if ( v56 >> 12 < (*(unsigned int *)(v61 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 32) << 32))
                || v68 > (*(unsigned int *)(v61 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 33) << 32)) )
              {
                v61 = *(_QWORD *)(v51 + 1576);
                while ( v61 )
                {
                  if ( v68 > (*(unsigned int *)(v61 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 33) << 32)) )
                  {
                    v61 = *(_QWORD *)(v61 + 8);
                  }
                  else
                  {
                    if ( v68 >= (*(unsigned int *)(v61 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 32) << 32)) )
                    {
                      *(_QWORD *)(v51 + 1584) = v61;
                      goto LABEL_180;
                    }
                    v61 = *(_QWORD *)v61;
                  }
                }
LABEL_158:
                v61 = 0LL;
                LOBYTE(v50) = v117;
                goto LABEL_159;
              }
LABEL_180:
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
                goto LABEL_189;
              v69 = v56 & 0x7FFFFFFFF000LL;
              if ( (v56 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
              {
                v63 = qword_14043B0B8;
                v64 = 1;
                ProtoPteAddress = qword_14043B0B8;
                goto LABEL_213;
              }
              if ( v69 == qword_14043B0C8 && v69 )
              {
                v63 = qword_14043B0C0;
                v64 = 1;
                ProtoPteAddress = qword_14043B0C0;
              }
              else
              {
LABEL_189:
                if ( (*(_DWORD *)(v61 + 48) & 7) == 2
                  && (*(_DWORD *)(v61 + 64) & 0x10000000) != 0
                  && (VadEvent = MiLocateVadEvent(v61, 32)) != 0LL
                  && VadEvent[1] != (__int64 *)KeGetCurrentThread() )
                {
                  v63 = (__int64)v58;
                  v64 = v51 - 8;
                  ProtoPteAddress = (__int64)v58;
                }
                else
                {
                  v71 = *(_DWORD *)(v61 + 48);
                  if ( (v71 & 0x20000000) != 0 )
                  {
                    v63 = (__int64)v58;
                    v64 = 24;
                    ProtoPteAddress = (__int64)v58;
                  }
                  else
                  {
                    v72 = *(_DWORD *)(v61 + 48) & 7;
                    if ( v72 == v49 )
                    {
                      v63 = (__int64)v58;
                      v64 = 24;
                      ProtoPteAddress = (__int64)v58;
                    }
                    else if ( (v71 & 0x4000) != 0 )
                    {
                      v64 = 24;
                      if ( v72 != 3 && v72 != 5 )
                      {
                        v73 = (unsigned __int8)v71 >> 3;
                        if ( *(_DWORD *)(v61 + 52) < (int)v58 )
                          v64 = v73;
                      }
                      v63 = (__int64)v58;
                      ProtoPteAddress = (__int64)v58;
                    }
                    else if ( (*(_DWORD *)(v61 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v61 + 48) & 7) == 7 )
                    {
                      ProtoPteAddress = MiGetProtoPteAddress(v61, v56 >> 12, 4, v129);
                      v63 = ProtoPteAddress;
                      v51 = 24LL;
                      if ( ProtoPteAddress )
                      {
                        v64 = (*(_DWORD *)(v61 + 48) >> 3) & 0x1F;
                        if ( (*(_DWORD *)(v61 + 48) & 7) == 2 && v64 == 7 )
                          v64 = 256;
                      }
                      else
                      {
                        v64 = 24;
                      }
                      v58 = *(_QWORD **)(v61 + 120);
                      if ( (__int64)v58 < 0 )
                      {
                        v63 = ProtoPteAddress;
                        if ( v68
                           - (*(unsigned int *)(v61 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 32) << 32)) > (unsigned __int64)(*v58 - 1LL) >> 12 )
                          v64 = 24;
                      }
                      v52 = v127;
                    }
                    else
                    {
                      v63 = (__int64)v58;
                      v64 = 24;
                      ProtoPteAddress = (__int64)v58;
                    }
                  }
                }
              }
LABEL_213:
              LOBYTE(v50) = v117;
              if ( v64 != 24 )
                goto LABEL_219;
              goto LABEL_159;
            }
            v50 |= 8u;
LABEL_130:
            v117 = v50;
            goto LABEL_131;
          }
          v130 = (v44 >> 5) & 0x1F;
          if ( (v44 & 0x400) == 0 )
          {
LABEL_243:
            v79 = ProtoPteAddress;
            goto LABEL_244;
          }
          v79 = MiCheckProtoAccess(v43, &v130);
          if ( v79 )
          {
LABEL_244:
            if ( v130 == 256 )
              goto LABEL_314;
            v80 = *(_DWORD *)(a1 + 8) & 2;
            v81 = *(_QWORD *)(a1 + 16);
            if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 && (v43 > 0xFFFFF6BFFFFFFF78uLL || v43 < 0xFFFFF68000000000uLL) )
              goto LABEL_263;
            v82 = *(_QWORD *)v43;
            if ( v43 >= 0xFFFFF6FB7DBED000uLL
              && v43 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
            {
              if ( (v82 & 1) == 0 )
                goto LABEL_280;
              if ( (v82 & 0x20) == 0 || (v82 & 0x42) == 0 )
              {
                v83 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v83 )
                {
                  v84 = *(_QWORD *)(v83 + 8 * ((v43 >> 3) & 0x1FF));
                  LOWORD(v83) = v82 | 0x20;
                  if ( (v84 & 0x20) == 0 )
                    v83 = *(_QWORD *)v43;
                  LOWORD(v82) = v83;
                  if ( (v84 & 0x42) != 0 )
                    LOWORD(v82) = v83 | 0x42;
                }
              }
            }
            if ( (v82 & 1) != 0 )
            {
              if ( (*(_DWORD *)(a1 + 8) & 2) != 0 && (v82 & 0xA00) == 0 )
                goto LABEL_263;
LABEL_314:
              *(_QWORD *)(a1 + 96) = v79;
              return 3221225494LL;
            }
LABEL_280:
            v91 = v130;
            if ( (*(_DWORD *)(a1 + 8) & 2) != 0 )
              v80 = 1;
            if ( MiReadWrite[v130 & 7] - v80 < 10 )
              goto LABEL_263;
            if ( (v130 & 0xFFFFFFF8) != 0x10 || (v81 & 1) != 0 && *(_BYTE *)(v81 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
              goto LABEL_314;
            if ( !(unsigned int)MiAllowGuardFault(*(_QWORD *)(a1 + 16)) )
            {
LABEL_263:
              v85 = *(_QWORD *)a1;
              if ( *(_QWORD *)a1 < 0xFFFF800000000000uLL )
              {
                v86 = MiLocateAddress(v85);
                v85 = *(_QWORD *)a1;
                v4 = v86;
              }
              MiCheckFatalAccessViolation(v85);
              *(_QWORD *)(a1 + 88) = v4;
              valid = -1073741819;
              goto LABEL_266;
            }
            if ( (v92 & 0x800) == 0 || (v92 & 0x400) != 0 )
            {
              v99 = v92 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v91 & 0xF));
              if ( MiPteInShadowRange(v43) )
              {
                if ( (unsigned int)MiPteHasShadow(v101, v100) )
                {
                  if ( !HIBYTE(word_14043B26C) && (v99 & 1) != 0 )
                    v99 |= 0x8000000000000000uLL;
                  *(_QWORD *)v43 = v99;
                  MiWritePteShadow(v43);
                  valid = -2147483647;
                  goto LABEL_266;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v99 & 1) != 0 )
                {
                  v99 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v43 = v99;
              goto LABEL_313;
            }
            MiLockTransitionLeafPage(v43);
            MI_READ_PTE_LOCK_FREE(v43);
            v94 = v91 & 0xF;
            if ( v93 )
              *(_QWORD *)(v93 + 16) = *(_QWORD *)(v93 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * v94);
            if ( MiPteInShadowRange(v43) )
            {
              if ( (unsigned int)MiPteHasShadow(v96, v95) )
              {
                if ( !HIBYTE(word_14043B26C) && (v97 & 1) != 0 )
                  v97 |= 0x8000000000000000uLL;
                *(_QWORD *)v43 = v97;
                MiWritePteShadow(v43);
LABEL_301:
                if ( v98 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  valid = -2147483647;
                  goto LABEL_266;
                }
LABEL_313:
                valid = -2147483647;
LABEL_266:
                MiReleaseFaultState((__int64 *)(a1 + 56), 17, 0LL);
                if ( valid == -2147483647 )
                  return (unsigned int)MiCheckForUserStackOverflow(*(_QWORD *)a1, 0LL);
                return valid;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                && (v97 & 1) != 0 )
              {
                v97 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v43 = v97;
            goto LABEL_301;
          }
LABEL_273:
          valid = -1073741819;
          goto LABEL_274;
        }
        if ( (v44 & 0x20) == 0 || (v44 & 0x42) == 0 )
        {
          v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 8 * ((v43 >> 3) & 0x1FF));
            v47 = v44 | 0x20;
            if ( (v46 & 0x20) == 0 )
              v47 = *(_QWORD *)v43;
            v44 = v47;
            if ( (v46 & 0x42) != 0 )
              v44 = v47 | 0x42;
          }
        }
      }
      if ( (v44 & 1) != 0 )
      {
        valid = MiValidFault(a1, v44);
        goto LABEL_274;
      }
      goto LABEL_114;
    }
  }
LABEL_66:
  if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
  {
    *(_QWORD *)(a1 + 72) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v31, 0xFFFFF6FB7DBEDF68uLL, 0LL, a4);
  }
LABEL_68:
  v35 = 3;
  v36 = (unsigned __int64 *)(a1 + 48);
  while ( 1 )
  {
    v37 = *v36;
    if ( !MiPteInShadowRange(*v36)
      || (MiFlags & 0xC00000) == 0
      || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    {
      break;
    }
    if ( (v26 & 1) != 0 )
    {
      if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
      {
        a3 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( a3 )
        {
          v39 = *(_QWORD *)(a3 + 8 * ((v37 >> 3) & 0x1FF));
          a3 = v26 | 0x20;
          if ( (v39 & 0x20) == 0 )
            a3 = v26;
          v26 = a3;
          if ( (v39 & 0x42) != 0 )
            v26 = a3 | 0x42;
        }
      }
      break;
    }
LABEL_81:
    LODWORD(v4) = MiInPagePageTable(a1, v35);
    if ( (int)v4 < 0 )
      goto LABEL_95;
    ++v35;
    ++v36;
LABEL_87:
    --v36;
    if ( !--v35 )
      goto LABEL_96;
  }
  if ( (v26 & 1) == 0 )
    goto LABEL_81;
  if ( (v26 & 0x80u) == 0LL )
  {
    v40 = *(_QWORD *)(a1 + 72);
    if ( v40 && v37 != v40 )
    {
      MiLockPageTableInternal(v133, v37, 0LL, v38);
      MiUnlockPageTableInternal(v133, *(_QWORD *)(a1 + 72));
      *(_QWORD *)(a1 + 72) = v37;
    }
    goto LABEL_87;
  }
  v41 = *(_QWORD *)(a1 + 16);
  if ( (v41 & 1) == 0 || *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    v42 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 >= 0xFFFFF68000000000uLL && v42 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v42, *(_QWORD *)(a1 + 8), v41, 8uLL);
  }
  LODWORD(v4) = MiLargePageFault(a1, v37);
  if ( (int)v4 >= 0 )
    LODWORD(v4) = -1073740748;
LABEL_95:
  MiUnlockFaultPageTable((__int64 *)(a1 + 56));
LABEL_96:
  valid = v4;
  if ( (_DWORD)v4 == -1073740748 )
  {
    valid = 0;
    goto LABEL_274;
  }
  if ( (int)v4 >= 0 )
  {
    v4 = 0LL;
    goto LABEL_100;
  }
LABEL_274:
  v87 = *(_QWORD *)(a1 + 72);
  v88 = *(_QWORD *)(a1 + 56);
  if ( v87 )
  {
    if ( *(_WORD *)(a1 + 66) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 56, v26, a3);
      v87 = *(_QWORD *)(a1 + 72);
    }
    v89 = *(unsigned __int8 *)(v88 + 184);
    LOBYTE(v89) = v89 & 7;
    if ( v87 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v90 = KeGetCurrentPrcb();
      if ( (_BYTE)v89 )
      {
        if ( (_BYTE)v89 == 7 )
        {
          KxReleaseQueuedSpinLock(&v90->SelfmapLockHandle[1]);
        }
        else
        {
          v30 = (_BYTE)v89 == 5;
          SelfmapLockHandle = v90->SelfmapLockHandle;
          if ( !v30 )
            SelfmapLockHandle = &v90->SelfmapLockHandle[3];
          KxReleaseQueuedSpinLock(SelfmapLockHandle);
        }
      }
      else
      {
        KxReleaseQueuedSpinLock(&v90->SelfmapLockHandle[2]);
      }
    }
    else if ( (_BYTE)v89
           || v87 < 0xFFFFF6FB7DBED000uLL
           || v87 > 0xFFFFF6FB7DBEDFFFuLL
           || (v104 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(v89, v26) + 1296) + 552LL)) == 0 )
    {
      if ( (unsigned int)MiShouldLockPteDirectly(v88, v87) )
      {
        v108 = MI_READ_PTE_LOCK_FREE(v87);
        v107 = _InterlockedCompareExchange64((volatile signed __int64 *)v87, v108 & 0xCFFFFFFFFFFFFFFFuLL, v108);
        if ( v108 != v107 )
        {
          do
          {
            v109 = v107;
            v107 = _InterlockedCompareExchange64((volatile signed __int64 *)v87, v107 & 0xCFFFFFFFFFFFFFFFuLL, v107);
          }
          while ( v107 != v109 );
        }
      }
      else
      {
        PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v106, v105, &v131);
        v111 = ~(3 << v131);
        v113 = *PageTableLockBuffer;
        v112 = _InterlockedCompareExchange(PageTableLockBuffer, *PageTableLockBuffer & v111, *PageTableLockBuffer);
        if ( v113 != v112 )
        {
          do
          {
            v114 = v112;
            v112 = _InterlockedCompareExchange(PageTableLockBuffer, v112 & v111, v112);
          }
          while ( v112 != v114 );
        }
      }
    }
    else
    {
      ExReleaseSpinLockRegardlessFromDpcLevel(v104 + 4 * ((v87 >> 3) & 0x1FF));
    }
    *(_BYTE *)(a1 + 69) |= 2u;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v115 = *(unsigned __int8 *)(a1 + 68);
  if ( (*(_BYTE *)(a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v88, v115);
  else
    MiUnlockWorkingSetShared(v88, v115);
  return valid;
}
