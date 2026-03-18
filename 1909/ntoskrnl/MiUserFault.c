/*
 * XREFs of MiUserFault @ 0x1400AAC70
 * Callers:
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 * Callees:
 *     MiUnlockFaultPageTable @ 0x1400070F4 (MiUnlockFaultPageTable.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInPagePageTable @ 0x14005D7D0 (MiInPagePageTable.c)
 *     MiCheckVirtualAddress @ 0x14005DC90 (MiCheckVirtualAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiZeroFault @ 0x1400A9860 (MiZeroFault.c)
 *     MiFastLockLeafPageTable @ 0x1400AB5F0 (MiFastLockLeafPageTable.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiLockTransitionLeafPage @ 0x1400BD5EC (MiLockTransitionLeafPage.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14010027C (MiGetPageTableLockBuffer.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiAllowGuardFault @ 0x140116B00 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x140120040 (MiCheckFatalAccessViolation.c)
 *     MiIsPdeOrAboveAccessible @ 0x1401200F0 (MiIsPdeOrAboveAccessible.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012AC6C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiWaitForRotateToComplete @ 0x14013B138 (MiWaitForRotateToComplete.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1402BB080 (MiIsVadEligibleForCommitRelease.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402CF498 (MiCheckHoldFaultForHotPatch.c)
 *     MiDelayFaultingThread @ 0x1402D22FC (MiDelayFaultingThread.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1406C610C (MiCheckForUserStackOverflow.c)
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
  __int64 v63; // rdx
  __int64 v64; // rcx
  bool v65; // sf
  bool v66; // of
  __int64 v67; // rcx
  int v68; // eax
  int v69; // eax
  unsigned __int64 Address; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  ULONG_PTR v73; // rdx
  unsigned __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // r8
  struct _KLOCK_QUEUE_HANDLE *v77; // rcx
  struct _KPRCB *v78; // rcx
  __int64 v79; // r11
  unsigned __int64 v80; // r8
  int v81; // eax
  signed __int32 v82; // eax
  int v83; // edx
  signed __int32 v84; // ett
  unsigned __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rbx
  __int64 v95; // r11
  unsigned int v96; // edi
  __int64 v97; // rcx
  __int64 v98; // r9
  __int64 v99; // r11
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *v101; // rcx
  __int64 v102; // r11
  unsigned __int64 v103; // r8
  int v104; // eax
  signed __int32 v105; // eax
  int v106; // edx
  signed __int32 v107; // ett
  unsigned __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  int v111; // [rsp+30h] [rbp-78h] BYREF
  int v112; // [rsp+34h] [rbp-74h] BYREF
  unsigned __int64 *v113; // [rsp+38h] [rbp-70h]
  __int64 v114; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v115; // [rsp+48h] [rbp-60h]
  unsigned __int64 v116[3]; // [rsp+50h] [rbp-58h] BYREF
  char v117; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v118; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v119; // [rsp+C0h] [rbp+18h]
  int v120; // [rsp+C8h] [rbp+20h] BYREF

  v114 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  a1[7] = (char *)Process + 1280;
  if ( LODWORD(Process[2].Affinity.Bitmap[7]) <= 0x10
    || (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
    || (v6 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]), *(_DWORD *)(v6 + 1144))
    && *(_KPROCESS **)(v6 + 1264) == Process )
  {
    if ( !dword_140466528 )
      goto LABEL_9;
LABEL_147:
    v67 = 3LL;
    goto LABEL_148;
  }
  DeepFreezeStartTime = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)&Process[1].Spare2[69]);
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
      v66 = __OFSUB__(Process->BasePriority, 9);
      v65 = (char)(Process->BasePriority - 9) < 0;
      LODWORD(Process[2].Affinity.Bitmap[7]) = 0;
      v67 = (unsigned int)(v65 == v66) + 1;
LABEL_148:
      MiDelayFaultingThread(v67);
      goto LABEL_9;
    }
  }
  if ( dword_140466528 )
    goto LABEL_147;
LABEL_9:
  v8 = &dword_140466F00;
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
      p_LockNV = &dword_140466F00;
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
          v68 = SchedulerAssist[5];
          SchedulerAssist[5] = v68 + 1;
          if ( v68 == -1 )
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
            v69 = v61[5] - 1;
            v61[5] = v69;
            if ( !v69 )
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
  v119 = 3;
  v113 = a1 + 6;
  while ( 1 )
  {
    v56 = *v55;
    v115 = v56;
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
          v71 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v56 >> 3) & 0x1FF));
          DeepFreezeStartTime = v57 | 0x20;
          if ( (v71 & 0x20) == 0 )
            DeepFreezeStartTime = *(_QWORD *)v56;
          LOBYTE(v57) = DeepFreezeStartTime;
          if ( (v71 & 0x42) != 0 )
            LOBYTE(v57) = DeepFreezeStartTime | 0x42;
        }
      }
      v55 = v113;
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
    v54 = v119 + 1;
    v55 = v113 + 1;
LABEL_102:
    --v54;
    --v55;
    v119 = v54;
    v113 = v55;
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
      v54 = v119;
      v55 = v113;
      a1[9] = v115;
    }
    goto LABEL_102;
  }
  v72 = a1[2];
  if ( (v72 & 1) == 0 || *(_BYTE *)(v72 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
  {
    v73 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v73 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v73, a1[1], a1[2], 8uLL);
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
            v101 = KeGetCurrentPrcb();
            if ( v36 == 5 )
              SelfmapLockHandle = v101->SelfmapLockHandle;
            else
              SelfmapLockHandle = &v101->SelfmapLockHandle[3];
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
              (v102 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) == 0) )
        {
          if ( v36 && v37 >= 0xFFFFF6FB7DBED000uLL && v37 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            DeepFreezeStartTime = MiGetPageTableLockBuffer(v35, v34, &v111);
            v105 = *(_DWORD *)DeepFreezeStartTime;
            v106 = ~(3 << v111);
            do
            {
              v107 = v105;
              v105 = _InterlockedCompareExchange((volatile signed __int32 *)DeepFreezeStartTime, v106 & v105, v105);
            }
            while ( v107 != v105 );
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
              v108 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v108 )
              {
                v109 = *(_QWORD *)(v108 + 8 * ((v34 >> 3) & 0x1FF));
                v110 = v38 | 0x20;
                if ( (v109 & 0x20) == 0 )
                  v110 = *(_QWORD *)v34;
                v38 = v110;
                if ( (v109 & 0x42) != 0 )
                  v38 = v110 | 0x42;
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
          v103 = ((unsigned __int64)(unsigned int)v34 >> 3) & 0x1FF;
          v104 = *(_DWORD *)(v102 + 4 * v103);
          if ( (v104 & 0x3FFFFFFF) != 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v102 + 4 * v103));
          }
          else
          {
            if ( v104 >= 0 )
              KeBugCheckEx(0x10u, v102 + 4 * v103, 0x100uLL, 0LL, 0LL);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v102 + 4 * v103));
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
      v74 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v74 )
      {
        v75 = *(_QWORD *)(v74 + 8 * ((v22 >> 3) & 0x1FF));
        v76 = v23 | 0x20;
        if ( (v75 & 0x20) == 0 )
          v76 = *(_QWORD *)v22;
        v23 = v76;
        DeepFreezeStartTime = 0xFFFFF6FB7DBED7F8uLL;
        if ( (v75 & 0x42) != 0 )
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
    v118 = (v23 >> 5) & 0x1F;
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
          v88 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v22 >> 3) & 0x1FF));
          DeepFreezeStartTime = v50 | 0x20;
          if ( (v88 & 0x20) == 0 )
            DeepFreezeStartTime = *(_QWORD *)v22;
          v50 = DeepFreezeStartTime;
          if ( (v88 & 0x42) != 0 )
            v50 = DeepFreezeStartTime | 0x42;
        }
      }
      v51 = (v50 >> 5) & 0x1F;
      if ( (v50 & 0x400) == 0 )
        goto LABEL_113;
      v52 = v50;
      if ( qword_140465800 && (v50 & 0x10) == 0 )
        v52 = v50 & ~qword_140465800;
      if ( HIDWORD(v52) == 0xFFFFFFFF )
      {
        v53 = MiCheckVirtualAddress((__int64)(v22 << 25) >> 16, &v112, v116);
      }
      else
      {
LABEL_113:
        v60 = v50;
        if ( qword_140465800 && (v50 & 0x10) == 0 )
          v60 = v50 & ~qword_140465800;
        v53 = v60 >> 16;
        LODWORD(v51) = 256;
        if ( (v50 & 8) != 0 )
          LODWORD(v51) = 1;
      }
      v118 = v51;
      v114 = v53;
      if ( !v53 )
      {
LABEL_178:
        valid = -1073741819;
        goto LABEL_51;
      }
    }
LABEL_35:
    if ( v118 != 256 )
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
        v89 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v89 )
        {
          v90 = *(_QWORD *)(v89 + 8 * ((v22 >> 3) & 0x1FF));
          v91 = v27 | 0x20;
          if ( (v90 & 0x20) == 0 )
            v91 = *(_QWORD *)v22;
          v27 = v91;
          if ( (v90 & 0x42) != 0 )
            v27 = v91 | 0x42;
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
        v28 = v118;
        if ( (a1[1] & 2) != 0 )
          v25 = 1;
        if ( MiReadWrite[v118 & 7] - v25 < 10 )
          goto LABEL_256;
        if ( (v118 & 0xFFFFFFF8) == 0x10 && ((v26 & 1) == 0 || *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
        {
          if ( (unsigned int)MiAllowGuardFault(a1[2]) )
          {
            if ( (v27 & 0x800) == 0 || (v27 & 0x400) != 0 )
            {
              v62 = v27 & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (v28 & 0xF));
              if ( MiPteInShadowRange(v22) )
              {
                if ( (unsigned int)MiPteHasShadow(v64) )
                {
                  if ( !HIBYTE(word_1404658EC) && (v62 & 1) != 0 )
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
            v96 = v28 & 0xF;
            if ( v95 )
              *(_QWORD *)(v95 + 16) = *(_QWORD *)(v95 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * v96);
            if ( MiPteInShadowRange(v22) )
            {
              if ( (unsigned int)MiPteHasShadow(v97) )
              {
                if ( !HIBYTE(word_1404658EC) && (v98 & 1) != 0 )
                  v98 |= 0x8000000000000000uLL;
                *(_QWORD *)v22 = v98;
                MiWritePteShadow(v22, v98);
LABEL_273:
                if ( v99 )
                  _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_131:
                valid = -2147483647;
LABEL_132:
                LOBYTE(v63) = 17;
                MiReleaseFaultState(a1 + 7, v63, 0LL);
                if ( valid == -2147483647 )
                  return MiCheckForUserStackOverflow(*a1, 0LL);
                return (unsigned int)valid;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v98 & 1) != 0 )
              {
                v98 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v22 = v98;
            goto LABEL_273;
          }
LABEL_256:
          v92 = *a1;
          if ( *a1 >= 0xFFFF800000000000uLL )
          {
            v94 = 0LL;
          }
          else
          {
            v93 = MiLocateAddress(v92);
            v92 = *a1;
            v94 = v93;
          }
          MiCheckFatalAccessViolation(v92);
          a1[11] = v94;
          valid = -1073741819;
          goto LABEL_132;
        }
      }
    }
    a1[12] = v114;
    return 3221225494LL;
  }
  v30 = MiZeroFault((__int64)a1, &v117, &v118, &v114);
  v32 = v117;
  v119 = v30;
  if ( !v117 )
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
          v77 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          v78 = KeGetCurrentPrcb();
          if ( v44 == 5 )
            v77 = v78->SelfmapLockHandle;
          else
            v77 = &v78->SelfmapLockHandle[3];
        }
      }
      else
      {
        v77 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v77);
    }
    else
    {
      v45 = v42;
      if ( v44
        || v42 < 0xFFFFF6FB7DBED000uLL
        || v42 > 0xFFFFF6FB7DBEDFFFuLL
        || (v45 = v42,
            (v79 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) == 0) )
      {
        if ( v44 && v45 >= 0xFFFFF6FB7DBED000uLL && v45 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v43, v42, &v120);
          v82 = *PageTableLockBuffer;
          v83 = ~(3 << v120);
          do
          {
            v84 = v82;
            v82 = _InterlockedCompareExchange(PageTableLockBuffer, v82 & v83, v82);
          }
          while ( v84 != v82 );
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
            v85 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v85 )
            {
              v86 = *(_QWORD *)(v85 + 8 * ((v42 >> 3) & 0x1FF));
              v87 = v46 | 0x20;
              if ( (v86 & 0x20) == 0 )
                v87 = *(_QWORD *)v42;
              v46 = v87;
              if ( (v86 & 0x42) != 0 )
                v46 = v87 | 0x42;
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
        v80 = ((unsigned __int64)(unsigned int)v42 >> 3) & 0x1FF;
        v81 = *(_DWORD *)(v79 + 4 * v80);
        if ( (v81 & 0x3FFFFFFF) != 0 )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v79 + 4 * v80));
        }
        else
        {
          if ( v81 >= 0 )
            KeBugCheckEx(0x10u, v79 + 4 * v80, 0x100uLL, 0LL, 0LL);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v79 + 4 * v80));
        }
      }
    }
    *((_BYTE *)a1 + 69) |= 2u;
    v32 = v117;
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
    return v119;
}
