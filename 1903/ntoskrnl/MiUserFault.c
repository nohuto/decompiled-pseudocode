/*
 * XREFs of MiUserFault @ 0x1400CADF0
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x140007064 (MiUnlockFaultPageTable.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiCheckVirtualAddress @ 0x14005DBF0 (MiCheckVirtualAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiLockTransitionLeafPage @ 0x1400DD76C (MiLockTransitionLeafPage.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     MiAllowGuardFault @ 0x140115490 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x14011F2F0 (MiCheckFatalAccessViolation.c)
 *     MiIsPdeOrAboveAccessible @ 0x14011F3A0 (MiIsPdeOrAboveAccessible.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiWaitForRotateToComplete @ 0x14013ACE8 (MiWaitForRotateToComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB320 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF738 (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x1402D259C (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406C7DD8 (MiCheckForUserStackOverflow.c)
 */

__int64 __fastcall MiUserFault(_QWORD *a1, __int64 a2, __int64 DeepFreezeStartTime, unsigned __int64 a4)
{
  _KPROCESS *Process; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r10
  LONG *v8; // r12
  unsigned __int8 v9; // al
  LONG *p_LockNV; // rbx
  unsigned __int8 v11; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // ett
  unsigned __int8 CurrentIrql; // dl
  _KPROCESS *v16; // rcx
  _KPROCESS *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rbx
  char v28; // di
  unsigned int v30; // eax
  volatile signed __int32 *PageTableLockBuffer; // r8
  char v32; // r12
  int valid; // r13d
  unsigned __int64 v34; // r9
  __int64 v35; // rbx
  char v36; // dl
  unsigned __int64 v37; // rcx
  signed __int64 v38; // rdx
  bool v39; // zf
  signed __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r9
  __int64 v43; // rbx
  char v44; // dl
  unsigned __int64 v45; // rcx
  signed __int64 v46; // rdx
  signed __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // r13
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // r10d
  unsigned __int64 *v55; // rdx
  unsigned __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // r10d
  __int64 v60; // rdx
  _DWORD *v61; // rcx
  unsigned __int64 v62; // rdi
  __int64 v63; // rcx
  bool v64; // sf
  bool v65; // of
  __int64 v66; // rcx
  int v67; // eax
  int v68; // eax
  unsigned __int64 Address; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  ULONG_PTR v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // r8
  struct _KLOCK_QUEUE_HANDLE *v76; // rcx
  struct _KPRCB *v77; // rcx
  __int64 v78; // r11
  unsigned __int64 v79; // r8
  int v80; // eax
  signed __int32 v81; // eax
  int v82; // edx
  signed __int32 v83; // ett
  unsigned __int64 v84; // r8
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rbx
  __int64 v94; // r11
  unsigned int v95; // edi
  __int64 v96; // rcx
  __int64 v97; // r9
  __int64 v98; // r11
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *v100; // rcx
  __int64 v101; // r11
  unsigned __int64 v102; // r8
  int v103; // eax
  signed __int32 v104; // eax
  int v105; // edx
  signed __int32 v106; // ett
  unsigned __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // r8
  int v110; // [rsp+30h] [rbp-78h] BYREF
  int v111; // [rsp+34h] [rbp-74h] BYREF
  unsigned __int64 *v112; // [rsp+38h] [rbp-70h]
  __int64 v113; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v114; // [rsp+48h] [rbp-60h]
  unsigned __int64 v115[3]; // [rsp+50h] [rbp-58h] BYREF
  char v116; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v117; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v118; // [rsp+C0h] [rbp+18h]
  int v119; // [rsp+C8h] [rbp+20h] BYREF

  v113 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[7] = (char *)Process + 1280;
  if ( LODWORD(Process[2].Affinity.Bitmap[7]) <= 0x10
    || (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
    || (v6 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]), *(_DWORD *)(v6 + 1144))
    && *(_KPROCESS **)(v6 + 1264) == Process )
  {
    if ( !dword_140466828 )
      goto LABEL_9;
LABEL_147:
    v66 = 3LL;
    goto LABEL_148;
  }
  DeepFreezeStartTime = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
  v7 = *(_QWORD *)(v6 + 8448);
  if ( (unsigned __int16)KeNumberNodes <= 1u
    || (v49 = (_QWORD *)(*(_QWORD *)(DeepFreezeStartTime + 16)
                       + 1984LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]),
        a4 = 16LL * (v49[68] + v49[69]) + ((v49[34] + v49[35]) << 9) + ((*v49 + v49[1]) << 18) + v49[220] + v49[221],
        a4 < 0x420)
    && v7 >= a4 >> 4
    || !a4 )
  {
    a4 = *(_QWORD *)(DeepFreezeStartTime + 8064);
  }
  if ( a4 < 0x420 )
  {
    if ( v7 >= 0x4000 || (a4 >>= 4, v7 >= a4) )
    {
      v65 = __OFSUB__(Process->BasePriority, 9);
      v64 = (char)(Process->BasePriority - 9) < 0;
      LODWORD(Process[2].Affinity.Bitmap[7]) = 0;
      v66 = (unsigned int)(v64 == v65) + 1;
LABEL_148:
      MiDelayFaultingThread(v66);
      goto LABEL_9;
    }
  }
  if ( dword_140466828 )
    goto LABEL_147;
LABEL_9:
  v8 = &dword_140467200;
  v9 = Process[1].SecureState.SecureHandle & 7;
  if ( v9 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v9 == 2 )
      p_LockNV = &dword_140467200;
    else
      p_LockNV = &Process[2].Header.LockNV;
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(p_LockNV, v11);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
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
      _m_prefetchw(p_LockNV);
      v14 = *p_LockNV & 0x7FFFFFFF;
      if ( v14 != _InterlockedCompareExchange(p_LockNV, v14 + 1, v14) )
      {
        v61 = CurrentPrcb->SchedulerAssist;
        if ( v61 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v68 = v61[5] - 1;
            v61[5] = v68;
            if ( !v68 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(p_LockNV, v11);
      }
    }
    if ( p_LockNV[1] )
      _InterlockedExchange(p_LockNV + 1, 0);
    CurrentIrql = v11;
  }
  *((_BYTE *)a1 + 68) = CurrentIrql;
  v16 = KeGetCurrentThread()->ApcState.Process;
  if ( (v16[1].SecureState.SecureHandle & 7) != 2 )
    v8 = &v16[2].Header.LockNV;
  if ( (*((_BYTE *)&v16[1].SecureState.Flags + 3) & 0x60) == 0x60
    && *((_QWORD *)v8 + 4)
    && (unsigned __int64)a1 < 0xFFFF800000000000uLL
    && ((Address = MiLocateAddress((unsigned __int64)a1)) == 0 || (unsigned int)MiIsVadEligibleForCommitRelease(Address))
    || (unsigned __int64)(*a1 - 0x7FFFFFFF0000LL) <= 0xFFFF00000000FFFFuLL )
  {
    valid = -1073741819;
    goto LABEL_51;
  }
  v17 = KeGetCurrentThread()->ApcState.Process;
  if ( v17[1].Affinity.Bitmap[9] && (unsigned int)MiWaitForRotateToComplete(*a1, a1 + 7) == 1
    || (v18 = *(_QWORD *)&v17[2].Spare2[47]) != 0 && (unsigned int)MiCheckHoldFaultForHotPatch(v18, a1) == 1 )
  {
    valid = 0;
    goto LABEL_51;
  }
  v19 = a1[7];
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    v20 = *a1;
    if ( *a1 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v21 = MiFastLockLeafPageTable(a1[7], v20, 0LL);
      if ( v21 )
      {
        a1[9] = a1[v21 + 3];
        if ( v21 == 1 )
          goto LABEL_29;
        MiUnlockPageTableInternal(v19);
        a1[9] = 0LL;
      }
    }
  }
  valid = 0;
  if ( (*((_BYTE *)a1 + 69) & 1) == 0 )
  {
    a1[9] = 0xFFFFF6FB7DBEDF68uLL;
    MiLockPageTableInternal(v19, 0xFFFFF6FB7DBEDF68uLL, 0LL, a4);
  }
  v54 = 3;
  v55 = a1 + 6;
  v118 = 3;
  v112 = a1 + 6;
  while ( 1 )
  {
    v56 = *v55;
    v114 = v56;
    v57 = *(_QWORD *)v56;
    if ( v56 >= 0xFFFFF6FB7DBED000uLL && v56 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v57 & 1) != 0
        && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v70 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v56 >> 3) & 0x1FF));
          DeepFreezeStartTime = v57 | 0x20;
          if ( (v70 & 0x20) == 0 )
            DeepFreezeStartTime = *(_QWORD *)v56;
          LOBYTE(v57) = DeepFreezeStartTime;
          if ( (v70 & 0x42) != 0 )
            LOBYTE(v57) = DeepFreezeStartTime | 0x42;
        }
      }
      v55 = v112;
    }
    if ( (v57 & 1) != 0 )
      break;
    if ( !(unsigned int)MiIsPdeOrAboveAccessible(v56) )
    {
      MiUnlockFaultPageTable(a1 + 7);
      goto LABEL_178;
    }
    valid = MiInPagePageTable(a1, v59);
    if ( valid < 0 )
      goto LABEL_123;
    v54 = v118 + 1;
    v55 = v112 + 1;
LABEL_102:
    --v54;
    --v55;
    v118 = v54;
    v112 = v55;
    if ( !v54 )
      goto LABEL_103;
  }
  if ( (v57 & 0x80u) == 0LL )
  {
    v58 = a1[9];
    if ( v58 && v56 != v58 )
    {
      MiLockPageTableInternal(v19, v56, 0LL, v56);
      MiUnlockPageTableInternal(v19);
      v54 = v118;
      v55 = v112;
      a1[9] = v114;
    }
    goto LABEL_102;
  }
  v71 = a1[2];
  if ( (v71 & 1) == 0 || *(_BYTE *)(v71 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    v72 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v72 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v72, a1[1], a1[2], 8uLL);
  }
  valid = MiLargePageFault(a1, v56);
  if ( valid >= 0 )
    valid = -1073740748;
LABEL_123:
  MiUnlockFaultPageTable(a1 + 7);
LABEL_103:
  if ( valid == -1073740748 )
  {
    valid = 0;
LABEL_51:
    v34 = a1[9];
    v35 = a1[7];
    if ( v34 )
    {
      if ( *((_WORD *)a1 + 33) )
      {
        MiEmptyDeferredWorkingSetEntries(a1 + 7);
        v34 = a1[9];
      }
      v36 = *(_BYTE *)(v35 + 184) & 7;
      if ( v34 == 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( v36 )
        {
          if ( v36 == 7 )
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            v100 = KeGetCurrentPrcb();
            if ( v36 == 5 )
              SelfmapLockHandle = v100->SelfmapLockHandle;
            else
              SelfmapLockHandle = &v100->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
      }
      else
      {
        v37 = v34;
        if ( v36
          || v34 < 0xFFFFF6FB7DBED000uLL
          || v34 > 0xFFFFF6FB7DBEDFFFuLL
          || (v37 = v34,
              (v101 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) == 0) )
        {
          if ( v36 && v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            DeepFreezeStartTime = MiGetPageTableLockBuffer(v35, v34, &v110);
            v104 = *(_DWORD *)DeepFreezeStartTime;
            v105 = ~(3 << v110);
            do
            {
              v106 = v104;
              v104 = _InterlockedCompareExchange((volatile signed __int32 *)DeepFreezeStartTime, v105 & v104, v104);
            }
            while ( v106 != v104 );
          }
          else
          {
            v38 = *(_QWORD *)v34;
            if ( v37 >= 0xFFFFF6FB7DBED000uLL
              && v37 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v38 & 1) != 0
              && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
            {
              v107 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v107 )
              {
                v108 = *(_QWORD *)(v107 + 8 * ((v34 >> 3) & 0x1FF));
                v109 = v38 | 0x20;
                if ( (v108 & 0x20) == 0 )
                  v109 = *(_QWORD *)v34;
                v38 = v109;
                if ( (v108 & 0x42) != 0 )
                  v38 = v109 | 0x42;
              }
            }
            DeepFreezeStartTime = 0xCFFFFFFFFFFFFFFFuLL;
            do
            {
              v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v34, v38 & 0xCFFFFFFFFFFFFFFFuLL, v38);
              v39 = v38 == v40;
              v38 = v40;
            }
            while ( !v39 );
          }
        }
        else
        {
          v102 = ((unsigned __int64)(unsigned int)v34 >> 3) & 0x1FF;
          v103 = *(_DWORD *)(v101 + 4 * v102);
          if ( (v103 & 0x3FFFFFFF) != 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v101 + 4 * v102));
          }
          else
          {
            if ( v103 >= 0 )
              KeBugCheckEx(0x10u, v101 + 4 * v102, 0x100uLL, 0LL, 0LL);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v101 + 4 * v102));
          }
        }
      }
      *((_BYTE *)a1 + 69) |= 2u;
      a1[9] = 0LL;
    }
    v41 = *((unsigned __int8 *)a1 + 68);
    if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      MiUnlockWorkingSetExclusive(v35, v41, DeepFreezeStartTime, v34);
    else
      MiUnlockWorkingSetShared(v35, v41);
    return (unsigned int)valid;
  }
  if ( valid < 0 )
    goto LABEL_51;
LABEL_29:
  v22 = a1[3];
  v23 = *(_QWORD *)v22;
  DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
  if ( v22 < 0xFFFFF6FB7DBED000uLL
    || v22 > 0xFFFFF6FB7DBED7F8uLL
    || (MiFlags & 0xC00000) == 0
    || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
  {
LABEL_30:
    if ( (v23 & 1) == 0 )
      goto LABEL_31;
    valid = MiValidFault((__int64)a1, v23);
    goto LABEL_51;
  }
  if ( (v23 & 1) != 0 )
  {
    if ( (v23 & 0x20) == 0 || (v23 & 0x42) == 0 )
    {
      v73 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v73 )
      {
        v74 = *(_QWORD *)(v73 + 8 * ((v22 >> 3) & 0x1FF));
        v75 = v23 | 0x20;
        if ( (v74 & 0x20) == 0 )
          v75 = *(_QWORD *)v22;
        v23 = v75;
        DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
        if ( (v74 & 0x42) != 0 )
          v23 |= 0x42uLL;
      }
      else
      {
        DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
      }
    }
    goto LABEL_30;
  }
LABEL_31:
  v24 = a1[1];
  if ( (v24 & 2) != 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && *a1 < 0xFFFF800000000000uLL )
    a1[1] = v24 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v23 )
  {
    v117 = (v23 >> 5) & 0x1F;
    if ( (v23 & 0x400) != 0 )
    {
      v50 = *(_QWORD *)v22;
      if ( v22 >= 0xFFFFF6FB7DBED000uLL
        && v22 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v87 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v22 >> 3) & 0x1FF));
          DeepFreezeStartTime = v50 | 0x20;
          if ( (v87 & 0x20) == 0 )
            DeepFreezeStartTime = *(_QWORD *)v22;
          v50 = DeepFreezeStartTime;
          if ( (v87 & 0x42) != 0 )
            v50 = DeepFreezeStartTime | 0x42;
        }
      }
      v51 = (v50 >> 5) & 0x1F;
      if ( (v50 & 0x400) == 0 )
        goto LABEL_113;
      v52 = v50;
      if ( qword_140465B00 && (v50 & 0x10) == 0 )
        v52 = v50 & ~qword_140465B00;
      if ( HIDWORD(v52) == 0xFFFFFFFF )
      {
        v53 = MiCheckVirtualAddress((__int64)(v22 << 25) >> 16, &v111, v115);
      }
      else
      {
LABEL_113:
        v60 = v50;
        if ( qword_140465B00 && (v50 & 0x10) == 0 )
          v60 = v50 & ~qword_140465B00;
        v53 = v60 >> 16;
        LODWORD(v51) = 256;
        if ( (v50 & 8) != 0 )
          LODWORD(v51) = 1;
      }
      v117 = v51;
      v113 = v53;
      if ( !v53 )
      {
LABEL_178:
        valid = -1073741819;
        goto LABEL_51;
      }
    }
LABEL_35:
    if ( v117 != 256 )
    {
      v25 = a1[1] & 2;
      v26 = a1[2];
      if ( (a1[10] & 0x40) != 0 && (v22 > 0xFFFFF6BFFFFFFF78uLL || v22 < 0xFFFFF68000000000uLL) )
        goto LABEL_256;
      v27 = *(_QWORD *)v22;
      if ( v22 < 0xFFFFF6FB7DBED000uLL
        || v22 > 0xFFFFF6FB7DBED7F8uLL
        || (MiFlags & 0xC00000) == 0
        || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
      {
        goto LABEL_40;
      }
      if ( (v27 & 1) == 0 )
        goto LABEL_41;
      if ( (v27 & 0x20) == 0 || (v27 & 0x42) == 0 )
      {
        v88 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v88 )
        {
          v89 = *(_QWORD *)(v88 + 8 * ((v22 >> 3) & 0x1FF));
          v90 = v27 | 0x20;
          if ( (v89 & 0x20) == 0 )
            v90 = *(_QWORD *)v22;
          v27 = v90;
          if ( (v89 & 0x42) != 0 )
            v27 = v90 | 0x42;
        }
      }
LABEL_40:
      if ( (v27 & 1) != 0 )
      {
        if ( (a1[1] & 2) != 0 && (v27 & 0xA00) == 0 )
          goto LABEL_256;
      }
      else
      {
LABEL_41:
        v28 = v117;
        if ( (a1[1] & 2) != 0 )
          v25 = 1;
        if ( MiReadWrite[v117 & 7] - v25 < 10 )
          goto LABEL_256;
        if ( (v117 & 0xFFFFFFF8) == 0x10 && ((v26 & 1) == 0 || *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
        {
          if ( (unsigned int)MiAllowGuardFault(a1[2]) )
          {
            if ( (v27 & 0x800) == 0 || (v27 & 0x400) != 0 )
            {
              v62 = v27 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v28 & 0xF));
              if ( MiPteInShadowRange(v22) )
              {
                if ( (unsigned int)MiPteHasShadow(v63) )
                {
                  if ( !HIBYTE(word_140465BEC) && (v62 & 1) != 0 )
                    v62 |= 0x8000000000000000uLL;
                  *(_QWORD *)v22 = v62;
                  MiWritePteShadow(v22, v62);
                  goto LABEL_131;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v62 & 1) != 0 )
                {
                  v62 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v22 = v62;
              goto LABEL_131;
            }
            MiLockTransitionLeafPage(v22);
            MI_READ_PTE_LOCK_FREE(v22);
            v95 = v28 & 0xF;
            if ( v94 )
              *(_QWORD *)(v94 + 16) = *(_QWORD *)(v94 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * v95);
            if ( MiPteInShadowRange(v22) )
            {
              if ( (unsigned int)MiPteHasShadow(v96) )
              {
                if ( !HIBYTE(word_140465BEC) && (v97 & 1) != 0 )
                  v97 |= 0x8000000000000000uLL;
                *(_QWORD *)v22 = v97;
                MiWritePteShadow(v22, v97);
LABEL_273:
                if ( v98 )
                  _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_131:
                valid = -2147483647;
LABEL_132:
                MiReleaseFaultState((__int64)(a1 + 7), 17, 0LL);
                if ( valid == -2147483647 )
                  return MiCheckForUserStackOverflow(*a1, 0LL);
                return (unsigned int)valid;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v97 & 1) != 0 )
              {
                v97 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v22 = v97;
            goto LABEL_273;
          }
LABEL_256:
          v91 = *a1;
          if ( *a1 >= 0xFFFF800000000000uLL )
          {
            v93 = 0LL;
          }
          else
          {
            v92 = MiLocateAddress(v91);
            v91 = *a1;
            v93 = v92;
          }
          MiCheckFatalAccessViolation(v91);
          a1[11] = v93;
          valid = -1073741819;
          goto LABEL_132;
        }
      }
    }
    a1[12] = v113;
    return 3221225494LL;
  }
  v30 = MiZeroFault((__int64)a1, &v116, &v117, &v113);
  v32 = v116;
  v118 = v30;
  if ( !v116 )
    goto LABEL_35;
  v42 = a1[9];
  v43 = a1[7];
  if ( v42 )
  {
    if ( *((_WORD *)a1 + 33) )
    {
      MiEmptyDeferredWorkingSetEntries(a1 + 7);
      v42 = a1[9];
    }
    v44 = *(_BYTE *)(v43 + 184) & 7;
    if ( v42 == 0xFFFFF6FB7DBEDF68uLL )
    {
      if ( v44 )
      {
        if ( v44 == 7 )
        {
          v76 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          v77 = KeGetCurrentPrcb();
          if ( v44 == 5 )
            v76 = v77->SelfmapLockHandle;
          else
            v76 = &v77->SelfmapLockHandle[3];
        }
      }
      else
      {
        v76 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v76);
    }
    else
    {
      v45 = v42;
      if ( v44
        || v42 < 0xFFFFF6FB7DBED000uLL
        || v42 > 0xFFFFF6FB7DBEDFFFuLL
        || (v45 = v42,
            (v78 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) == 0) )
      {
        if ( v44 && v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v43, v42, &v119);
          v81 = *PageTableLockBuffer;
          v82 = ~(3 << v119);
          do
          {
            v83 = v81;
            v81 = _InterlockedCompareExchange(PageTableLockBuffer, v81 & v82, v81);
          }
          while ( v83 != v81 );
        }
        else
        {
          v46 = *(_QWORD *)v42;
          if ( v45 >= 0xFFFFF6FB7DBED000uLL
            && v45 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v46 & 1) != 0
            && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
          {
            v84 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v84 )
            {
              v85 = *(_QWORD *)(v84 + 8 * ((v42 >> 3) & 0x1FF));
              v86 = v46 | 0x20;
              if ( (v85 & 0x20) == 0 )
                v86 = *(_QWORD *)v42;
              v46 = v86;
              if ( (v85 & 0x42) != 0 )
                v46 = v86 | 0x42;
            }
          }
          PageTableLockBuffer = (volatile signed __int32 *)0xCFFFFFFFFFFFFFFFLL;
          do
          {
            v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v42, v46 & 0xCFFFFFFFFFFFFFFFuLL, v46);
            v39 = v46 == v47;
            v46 = v47;
          }
          while ( !v39 );
        }
      }
      else
      {
        v79 = ((unsigned __int64)(unsigned int)v42 >> 3) & 0x1FF;
        v80 = *(_DWORD *)(v78 + 4 * v79);
        if ( (v80 & 0x3FFFFFFF) != 0 )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v78 + 4 * v79));
        }
        else
        {
          if ( v80 >= 0 )
            KeBugCheckEx(0x10u, v78 + 4 * v79, 0x100uLL, 0LL, 0LL);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v78 + 4 * v79));
        }
      }
    }
    *((_BYTE *)a1 + 69) |= 2u;
    v32 = v116;
    a1[9] = 0LL;
  }
  v48 = *((unsigned __int8 *)a1 + 68);
  if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
    MiUnlockWorkingSetExclusive(v43, v48, (__int64)PageTableLockBuffer, v42);
  else
    MiUnlockWorkingSetShared(v43, v48);
  if ( v32 == 2 )
    return MiCheckForUserStackOverflow(*a1, 1LL);
  else
    return v118;
}
