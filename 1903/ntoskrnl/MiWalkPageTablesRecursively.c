/*
 * XREFs of MiWalkPageTablesRecursively @ 0x1400494A0
 * Callers:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14004A690 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140109A48 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiYieldPageTableWalk @ 0x1401199E4 (MiYieldPageTableWalk.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x14032E3AC (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(unsigned __int16 *a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rbp
  int v5; // r14d
  __int64 v6; // r13
  unsigned __int16 *v7; // rbx
  int v8; // r12d
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  int NextPageTablePte; // ecx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int16 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 *v22; // r10
  unsigned __int64 *v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r10
  LONG *v34; // rax
  unsigned __int64 v35; // r9
  char v36; // dl
  unsigned __int64 v37; // rcx
  int v38; // ecx
  bool v39; // zf
  struct _KPRCB *v40; // rcx
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r14d
  unsigned int v44; // ebp
  int v45; // r8d
  _KTHREAD *NextThread; // rax
  char v47; // cl
  __int64 (__fastcall *v48)(unsigned __int16 *); // rax
  char v49; // cl
  int v50; // eax
  __int64 (__fastcall *v52)(unsigned __int16 *); // rax
  char v53; // cl
  int v54; // eax
  char v55; // cl
  unsigned __int64 v56; // rcx
  __int64 v57; // rdi
  unsigned __int64 v58; // r9
  char v59; // dl
  signed __int64 v60; // rdx
  signed __int64 v61; // rax
  int v62; // edi
  int v63; // eax
  unsigned __int64 *v64; // r9
  unsigned __int64 *v65; // rbp
  __int64 v66; // rbp
  char v67; // dl
  signed __int64 v68; // rdx
  signed __int64 v69; // rax
  _KLOCK_QUEUE_HANDLE *v70; // rdi
  __int64 Next; // rax
  struct _KPRCB *v72; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  char v76; // al
  __int64 v77; // rdx
  __int64 (__fastcall *v78)(unsigned __int16 *); // rdx
  char v79; // al
  int v80; // edi
  char v81; // al
  int v82; // eax
  unsigned __int64 v83; // r9
  char v84; // dl
  unsigned __int64 v85; // rcx
  signed __int64 v86; // rdx
  signed __int64 v87; // rax
  __int16 v88; // dx
  __int64 v89; // rax
  unsigned __int64 v90; // rcx
  __int64 v91; // r10
  __int64 v92; // rdx
  unsigned __int64 *v93; // r8
  unsigned __int64 v94; // rax
  __int64 v95; // r8
  unsigned __int64 *v96; // rcx
  unsigned __int64 v97; // rdx
  _DWORD *PageTableLockBuffer; // rax
  __int64 v99; // rbp
  __int64 v100; // rdi
  struct _KPRCB *CurrentPrcb; // rax
  _KLOCK_QUEUE_HANDLE *v102; // rax
  _KLOCK_QUEUE_HANDLE *v103; // rsi
  __int64 v104; // rax
  struct _KPRCB *v105; // rcx
  _DWORD *v106; // rdx
  __int64 v107; // rcx
  volatile signed __int32 *v108; // r8
  signed __int32 v109; // eax
  int v110; // edx
  signed __int32 v111; // ett
  int v112; // eax
  struct _KPRCB *v113; // rdi
  volatile signed __int32 *v114; // r8
  signed __int32 v115; // eax
  int v116; // edx
  signed __int32 v117; // ett
  struct _KPRCB *v118; // rsi
  __int64 v119; // r10
  __int64 SharedVm; // rdi
  unsigned __int16 **v121; // rdi
  __int64 v122; // r11
  unsigned __int16 *v123; // r9
  unsigned int v124; // r10d
  __int64 v125; // r14
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v127; // r8
  __int64 v128; // rax
  int v129; // eax
  unsigned __int64 v130; // r9
  int v131; // eax
  unsigned __int64 v132; // r8
  __int64 v133; // rax
  __int64 v134; // r8
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *v136; // rcx
  int *v137; // rdx
  unsigned __int64 v138; // r8
  __int64 v139; // rax
  __int64 v140; // r8
  unsigned __int64 v141; // rax
  __int64 v142; // rax
  char v143; // r8^7
  __int64 v144; // rdi
  int v145; // eax
  unsigned __int64 v146; // r8
  int v147; // eax
  volatile signed __int32 *v148; // r8
  signed __int32 v149; // eax
  int v150; // r15d
  signed __int32 v151; // ett
  unsigned __int64 v152; // r8
  __int64 v153; // rax
  __int64 v154; // r8
  int v155; // [rsp+30h] [rbp-88h] BYREF
  int v156; // [rsp+34h] [rbp-84h] BYREF
  __int64 v157; // [rsp+38h] [rbp-80h]
  __int64 v158; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v159; // [rsp+48h] [rbp-70h]
  unsigned __int64 v160; // [rsp+50h] [rbp-68h]
  __int64 (__fastcall *v161)(unsigned __int16 *, unsigned __int64, _QWORD); // [rsp+58h] [rbp-60h]
  char v162[24]; // [rsp+60h] [rbp-58h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v165; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v166; // [rsp+D0h] [rbp+18h]
  int v167; // [rsp+D8h] [rbp+20h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v161 = (__int64 (__fastcall *)(unsigned __int16 *, unsigned __int64, _QWORD))*((_QWORD *)a1 + 18);
  v5 = 0;
  v6 = a3;
  v7 = a1;
  v157 = v4;
  v8 = 0;
  v9 = (unsigned __int64 *)&a1[8 * a3 + 36];
  v158 = 16LL * a3;
  v159 = v9;
  if ( a2 < *v9 )
    a2 = *v9;
  if ( a3 == 3 )
  {
    v10 = *((_QWORD *)a1 + 16);
  }
  else
  {
    v10 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v10 > v9[1] )
      v10 = v9[1];
  }
  v160 = v10;
  v11 = 0LL;
  v166 = 0;
  if ( a2 <= v10 )
  {
    while ( 1 )
    {
      if ( (_DWORD)v11 )
      {
        v166 = 0;
        if ( v8 >= 3 )
        {
LABEL_79:
          v4 = v157;
          break;
        }
        if ( (v7[1] & 1) != 0 )
        {
          if ( (_DWORD)v6 != 3 )
            goto LABEL_81;
          v99 = *((_QWORD *)v7 + 2);
          if ( (*(_BYTE *)v7 & 4) != 0 )
          {
            v100 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            MiLockWorkingSetShared(*((_QWORD *)v7 + 2));
            if ( MiLockLowestValidPageTable(v99, v100 << 25 >> 16, v162) != v100 )
            {
              MiUnlockPageTableInternal(v99);
              MiUnlockWorkingSetShared(*((_QWORD *)v7 + 2), *((unsigned __int8 *)v7 + 6));
              goto LABEL_8;
            }
            *((_QWORD *)v7 + 5) = v100;
          }
          else
          {
            SharedVm = MiGetSharedVm(*((_QWORD *)v7 + 2), v11);
            ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
            *(_DWORD *)(SharedVm + 4) = 0;
            if ( (*v7 & 0x400) != 0 )
              ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140465E94);
          }
          *((_BYTE *)v7 + 2) &= ~1u;
        }
      }
LABEL_8:
      v12 = ++*((_QWORD *)v7 + 17);
      if ( (v12 & 0xF) == 0 && (*v7 & 8) != 0 )
      {
        v16 = *((_QWORD *)v7 + 8);
        v17 = *(_QWORD *)(v16 + 8064);
        if ( v17 < 0x420 )
        {
          v121 = (unsigned __int16 **)(v16 + 4136);
          v122 = 0LL;
          while ( 1 )
          {
            v123 = *v121;
            v124 = 0;
            v125 = v122;
            if ( dword_140465AB4 )
              break;
LABEL_300:
            ++v122;
            ++v121;
            if ( v125 >= 1 )
            {
              v8 = 4;
              v5 = 0;
              goto LABEL_79;
            }
          }
          while ( 1 )
          {
            v17 += *v123;
            if ( v17 >= 0x420 )
              break;
            ++v124;
            v123 += 8;
            if ( v124 >= dword_140465AB4 )
              goto LABEL_300;
          }
        }
      }
      if ( (*v7 & 2) == 0 || ((unsigned __int8)v12 & *((_BYTE *)v7 + 5)) != 0 )
        goto LABEL_11;
      v33 = *((_QWORD *)v7 + 2);
      if ( (*(_BYTE *)(v33 + 184) & 7) == 2 )
        v34 = &dword_140467200;
      else
        v34 = (LONG *)(v33 + 192);
      if ( (*v34 & 0x40000000) != 0 )
        goto LABEL_223;
      if ( (*(_BYTE *)v7 & 4) != 0 )
      {
        v35 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v36 = *(_BYTE *)(v33 + 184) & 7;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v36 )
          {
            if ( v36 == 7 )
            {
              v102 = &CurrentPrcb->SelfmapLockHandle[1];
            }
            else
            {
              if ( v36 == 5 )
              {
                v39 = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next == 0LL;
                goto LABEL_67;
              }
              v102 = &CurrentPrcb->SelfmapLockHandle[3];
            }
          }
          else
          {
            v102 = &CurrentPrcb->SelfmapLockHandle[2];
          }
          v39 = v102->LockQueue.Next == 0LL;
          goto LABEL_67;
        }
        if ( !v36 )
        {
          if ( v35 >= 0xFFFFF6FB7DBED000uLL
            && v35 <= 0xFFFFF6FB7DBEDFFFuLL
            && (v75 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) != 0 )
          {
            v38 = (*(_DWORD *)(v75 + 4 * ((((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) >> 30) & 1;
          }
          else
          {
LABEL_64:
            v37 = *(_QWORD *)v35;
            if ( v35 >= 0xFFFFF6FB7DBED000uLL
              && v35 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v37 & 1) != 0
              && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
            {
              DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( DeepFreezeStartTime )
              {
                v127 = v37 | 0x20;
                v128 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v35 >> 3) & 0x1FF));
                if ( (v128 & 0x20) == 0 )
                  v127 = *(_QWORD *)v35;
                v37 = v127;
                if ( (v128 & 0x42) != 0 )
                  v37 = v127 | 0x42;
              }
            }
            v38 = (v37 >> 60) & 2;
          }
          v39 = v38 == 0;
LABEL_67:
          if ( !v39 )
            goto LABEL_223;
          goto LABEL_68;
        }
        if ( v35 < 0xFFFFF6FB7DBED000uLL || v35 > 0xFFFFF6FB7DBEDFFFuLL )
          goto LABEL_64;
        PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(
                                          *((_QWORD *)v7 + 2),
                                          ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                          &v165);
        if ( ((*PageTableLockBuffer >> v165) & 2) != 0 )
          goto LABEL_223;
      }
LABEL_68:
      if ( (*v7 & 0x400) != 0 && (dword_140465E94 & 0x40000000) != 0 )
        goto LABEL_223;
      if ( *((_BYTE *)v7 + 6) >= 2u )
        goto LABEL_11;
      v40 = KeGetCurrentPrcb();
      DpcRequestSummary = v40->DpcRequestSummary;
      DpcWatchdogCount = v40->DpcWatchdogCount;
      DpcTimeCount = v40->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
      {
        v44 = 0;
        v45 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v44 = 2;
          goto LABEL_220;
        }
        if ( v40->QuantumEnd )
        {
          v44 = 3;
          goto LABEL_220;
        }
        NextThread = v40->NextThread;
        if ( NextThread && NextThread != v40->CurrentThread )
        {
          v44 = 4;
          goto LABEL_220;
        }
        goto LABEL_74;
      }
      v45 = 1;
      if ( DpcTimeCount <= 7 )
      {
        v44 = 0;
LABEL_74:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_11;
        if ( !v45 )
        {
LABEL_270:
          _disable();
          v40->DpcWatchdogCount = 0;
          v40->DpcTimeCount = 0;
          KiResetGlobalDpcWatchdogProfiler(v40);
          _enable();
          goto LABEL_220;
        }
        goto LABEL_316;
      }
      if ( v40->QuantumEnd )
      {
        v44 = 1;
        goto LABEL_220;
      }
      v44 = 0;
LABEL_316:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v44 = 5;
      }
      else
      {
        if ( v40->CurrentThread == v40->IdleThread )
          goto LABEL_270;
        v44 = 6;
      }
LABEL_220:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v44, DpcWatchdogCount, DpcTimeCount);
      if ( v44 )
      {
LABEL_223:
        v112 = MiYieldPageTableWalk(v7, 1LL);
        if ( v112 >= 3 )
          v8 = v112;
        goto LABEL_104;
      }
LABEL_11:
      if ( (*(_BYTE *)v7 & 0x20) == 0 )
      {
        NextPageTablePte = MiComputePxeWalkAction(v7, a2, (unsigned int)v6);
        goto LABEL_13;
      }
      NextPageTablePte = MiGetNextPageTablePte(v7, a2, (unsigned int)v6);
      if ( NextPageTablePte == 3 )
      {
        v11 = 1LL;
        v8 = 3;
        v166 = 1;
        goto LABEL_21;
      }
      if ( (v7[1] & 1) == 0 )
      {
        v30 = *((_QWORD *)v7 + 7);
        if ( v30 && v30 == a2 )
        {
          *((_QWORD *)v7 + 7) = 0LL;
          goto LABEL_26;
        }
LABEL_13:
        if ( !NextPageTablePte )
          goto LABEL_14;
        if ( NextPageTablePte == 1 || (int)v6 <= ((*((unsigned __int8 *)v7 + 2) >> 2) & 7) )
          goto LABEL_26;
        v52 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)v7 + 19);
        v53 = *((_BYTE *)v7 + 2) | 2;
        *((_BYTE *)v7 + 2) = v53;
        if ( v52 )
        {
          v54 = v52(v7);
          v53 = *((_BYTE *)v7 + 2);
          goto LABEL_89;
        }
        v54 = 0;
        if ( *((_BYTE *)v7 + 6) != 17 )
        {
LABEL_89:
          v55 = v53 & 0xFD;
          *((_BYTE *)v7 + 2) = v55;
          if ( v54 < 3 )
            goto LABEL_90;
          goto LABEL_260;
        }
        v55 = v53 & 0xFD;
        *((_BYTE *)v7 + 2) = v55;
LABEL_90:
        if ( (v55 & 1) != 0 )
        {
LABEL_260:
          if ( v54 == 4 )
            v8 = 4;
          goto LABEL_104;
        }
        v56 = (__int64)(a2 << 25) >> 16;
        if ( v56 < *(_QWORD *)&v7[8 * v6 + 28] )
          v56 = *(_QWORD *)&v7[8 * v6 + 28];
        if ( v56 > *(_QWORD *)&v7[8 * v6 + 32] )
          goto LABEL_26;
        if ( (*(_BYTE *)v7 & 4) == 0 )
          goto LABEL_102;
        v57 = v157;
        MiLockPageTableInternal(v157, a2, 0LL, v14);
        v58 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v59 = *(_BYTE *)(v57 + 184) & 7;
        if ( ((a2 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
        {
          if ( v59 )
          {
            if ( v58 >= 0xFFFFF6FB7DBED000uLL && v58 <= 0xFFFFF6FB7DBEDFFFuLL )
            {
              v108 = (volatile signed __int32 *)MiGetPageTableLockBuffer(
                                                  v57,
                                                  ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                                                  &v167);
              v109 = *v108;
              v110 = ~(3 << v167);
              do
              {
                v111 = v109;
                v109 = _InterlockedCompareExchange(v108, v110 & v109, v109);
              }
              while ( v111 != v109 );
              goto LABEL_101;
            }
          }
          else if ( v58 >= 0xFFFFF6FB7DBED000uLL && v58 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v74 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
            if ( v74 )
            {
              v130 = (((a2 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
              v131 = *(_DWORD *)(v74 + 4 * v130);
              if ( (v131 & 0x3FFFFFFF) != 0 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v74 + 4 * v130));
              }
              else
              {
                if ( v131 >= 0 )
                  KeBugCheckEx(0x10u, v74 + 4 * v130, 0x100uLL, 0LL, 0LL);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v74 + 4 * v130));
              }
              goto LABEL_101;
            }
          }
          v60 = *(_QWORD *)v58;
          if ( v58 >= 0xFFFFF6FB7DBED000uLL
            && v58 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v60 & 1) != 0
            && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
          {
            v132 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v132 )
            {
              v133 = *(_QWORD *)(v132 + 8 * ((v58 >> 3) & 0x1FF));
              v134 = v60 | 0x20;
              if ( (v133 & 0x20) == 0 )
                v134 = *(_QWORD *)v58;
              v60 = v134;
              if ( (v133 & 0x42) != 0 )
                v60 = v134 | 0x42;
            }
          }
          do
          {
            v61 = _InterlockedCompareExchange64((volatile signed __int64 *)v58, v60 & 0xCFFFFFFFFFFFFFFFuLL, v60);
            v39 = v60 == v61;
            v60 = v61;
          }
          while ( !v39 );
          v7 = a1;
LABEL_101:
          *((_QWORD *)v7 + 5) = a2;
LABEL_102:
          v62 = 0;
          v63 = MiWalkPageTablesRecursively(v7, (__int64)(a2 << 25) >> 16, (unsigned int)(v6 - 1));
          v65 = v159;
          v8 = v63;
          if ( *v159 != a2 )
          {
            LOBYTE(v62) = (*v159 & 0xFFF) == 0;
            v88 = *v7 & 0x4000;
            if ( v88 && a2 < *v159 )
            {
              if ( (v7[1] & 1) == 0 && (unsigned int)MiYieldPageTableWalk(v7, 1LL) == 4 )
                v8 = 4;
              a2 = *v65;
              v11 = 1LL;
              v166 = 1;
              goto LABEL_21;
            }
            v89 = v158;
            v90 = a2;
            *((_QWORD *)v7 + 7) = a2;
            if ( !v88 || (v64 = (unsigned __int64 *)((char *)v7 + v89 + 72), a2 > *v64) )
            {
              v64 = (unsigned __int64 *)((char *)v7 + v89 + 72);
              *v64 = a2;
            }
            v91 = v6;
            if ( v6 < 3 )
            {
              v92 = 3 - v6;
              v93 = v64 + 2;
              do
              {
                v90 = ((v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *v93 = v90;
                v93 += 2;
                --v92;
              }
              while ( v92 );
              v91 = v6;
            }
            v94 = a2;
            v95 = v91;
            if ( v91 )
            {
              v96 = v64 - 2;
              do
              {
                v97 = (__int64)(v94 << 25) >> 16;
                if ( (*v7 & 0x4000) == 0 || (v94 = *v96, v97 > *v96) )
                {
                  v94 = v97;
                  *v96 = v97;
                }
                v96 -= 2;
                --v95;
              }
              while ( v95 );
            }
          }
          if ( v8 >= 3 || (v7[1] & 1) != 0 )
            goto LABEL_104;
          if ( (*(_BYTE *)v7 & 4) == 0 )
            goto LABEL_26;
          if ( !v62 )
          {
            v66 = v157;
            if ( (unsigned int)MiLockPageTableInternal(v157, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, v64) )
            {
              v67 = *(_BYTE *)(v66 + 184) & 7;
              if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
              {
                if ( v67 )
                {
                  if ( v67 == 7 )
                  {
                    SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
                  }
                  else
                  {
                    v136 = KeGetCurrentPrcb();
                    if ( v67 == 5 )
                      SelfmapLockHandle = v136->SelfmapLockHandle;
                    else
                      SelfmapLockHandle = &v136->SelfmapLockHandle[3];
                  }
                }
                else
                {
                  SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
                goto LABEL_117;
              }
              if ( v67 )
              {
                if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
                {
                  v114 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v66, a2, &v155);
                  v115 = *v114;
                  v116 = ~(3 << v155);
                  do
                  {
                    v117 = v115;
                    v115 = _InterlockedCompareExchange(v114, v116 & v115, v115);
                  }
                  while ( v117 != v115 );
                  goto LABEL_117;
                }
              }
              else if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
              {
                v107 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
                if ( v107 )
                {
                  v137 = (int *)(v107 + 4LL * (((unsigned int)a2 >> 3) & 0x1FF));
                  if ( (*v137 & 0x3FFFFFFF) != 0 )
                  {
                    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v107 + 4LL * (((unsigned int)a2 >> 3) & 0x1FF)));
                  }
                  else
                  {
                    if ( *v137 >= 0 )
                      KeBugCheckEx(0x10u, (ULONG_PTR)v137, 0x100uLL, 0LL, 0LL);
                    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v107 + 4LL
                                                                                * (((unsigned int)a2 >> 3) & 0x1FF)));
                  }
                  goto LABEL_117;
                }
              }
              v68 = *(_QWORD *)a2;
              if ( a2 >= 0xFFFFF6FB7DBED000uLL
                && a2 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v68 & 1) != 0
                && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
              {
                v138 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v138 )
                {
                  v139 = *(_QWORD *)(v138 + 8 * ((a2 >> 3) & 0x1FF));
                  v140 = v68 | 0x20;
                  if ( (v139 & 0x20) == 0 )
                    v140 = *(_QWORD *)a2;
                  v68 = v140;
                  if ( (v139 & 0x42) != 0 )
                    v68 = v140 | 0x42;
                }
              }
              do
              {
                v69 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v68 & 0xCFFFFFFFFFFFFFFFuLL, v68);
                v39 = v68 == v69;
                v68 = v69;
              }
              while ( !v39 );
              v7 = a1;
LABEL_117:
              *((_QWORD *)v7 + 5) = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_26:
              v18 = *v7;
              if ( (*v7 & 1) != 0 || (_DWORD)v6 )
                goto LABEL_27;
              v31 = (((unsigned __int64)((__int64)(a2 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v32 = *(_QWORD *)v31;
              if ( v31 >= 0xFFFFF6FB7DBED000uLL
                && v31 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v32 & 1) != 0
                && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
              {
                v141 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
                if ( v141 )
                {
                  v142 = *(_QWORD *)(v141 + 8 * ((v31 >> 3) & 0x1FF));
                  v143 = HIBYTE(*(_QWORD *)v31);
                  if ( (v142 & 0x20) == 0 )
                    v143 = HIBYTE(v32);
                  HIBYTE(v32) = v143;
                  if ( (v142 & 0x42) != 0 )
                    HIBYTE(v32) = v143;
                }
              }
              LOBYTE(v32) = HIBYTE(v32) & 0xF;
              if ( (HIBYTE(v32) & 0xF) == 0xA )
              {
                v8 = 0;
              }
              else if ( (_BYTE)v32 == 9 )
              {
                v8 = 0;
              }
              else
              {
                if ( (_BYTE)v32 == 8 && v18 >= 0 )
                {
                  v8 = 0;
                  goto LABEL_15;
                }
LABEL_27:
                v19 = *((_QWORD *)v7 + 7);
                if ( v19 && v19 == *v159 )
                  *((_QWORD *)v7 + 7) = 0LL;
                v20 = *((_QWORD *)v7 + 6);
                if ( v20 && v20 == *v159 )
                  *((_QWORD *)v7 + 6) = 0LL;
                if ( (int)v6 >= 1 && (*(_BYTE *)(v157 + 184) & 7) != 0 && (v18 & 1) == 0 )
                {
LABEL_14:
                  v8 = 0;
                  goto LABEL_15;
                }
                if ( (v18 & 0x40) == 0 )
                {
                  v21 = v161(v7, a2, (unsigned int)v6);
                  v8 = v21;
                  if ( v21 != 1 )
                  {
                    if ( v21 != 2 )
                      goto LABEL_15;
                    v8 = 0;
                    MiYieldPageTableWalk(v7, 1LL);
                    MiWaitForFreePage(*((_QWORD *)v7 + 8));
                    v11 = 1LL;
                    v166 = 1;
LABEL_19:
                    if ( (v7[1] & 1) == 0 && v8 < 3 )
                      goto LABEL_21;
                    goto LABEL_104;
                  }
                  v8 = 0;
LABEL_18:
                  v11 = v166;
                  goto LABEL_19;
                }
                v8 = 0;
              }
LABEL_15:
              v15 = *((unsigned __int8 *)v7 + 3);
              *((_BYTE *)v7 + 3) = 0;
              a2 += 8 * v15 + 8;
              if ( (_DWORD)v6 || (a2 & 0xFFF) == 0 )
              {
                if ( (*v7 & 0x4000) == 0 || (v22 = (unsigned __int64 *)&v7[(unsigned __int64)v158 / 2 + 36], a2 > *v22) )
                {
                  v22 = (unsigned __int64 *)&v7[(unsigned __int64)v158 / 2 + 36];
                  *v22 = a2;
                }
                if ( v6 < 3 )
                {
                  v23 = v22 + 2;
                  v24 = 3 - v6;
                  v25 = a2;
                  do
                  {
                    v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    *v23 = v25;
                    v23 += 2;
                    --v24;
                  }
                  while ( v24 );
                }
                v26 = a2;
                v27 = v6;
                if ( (_DWORD)v6 )
                {
                  v28 = v22 - 2;
                  do
                  {
                    v29 = (__int64)(v26 << 25) >> 16;
                    if ( (*v7 & 0x4000) == 0 || (v26 = *v28, v29 > *v28) )
                    {
                      v26 = v29;
                      *v28 = v29;
                    }
                    v28 -= 2;
                    --v27;
                  }
                  while ( v27 );
                }
              }
              else
              {
                *((_QWORD *)v7 + 9) = a2;
              }
              goto LABEL_18;
            }
          }
          v54 = MiYieldPageTableWalk(v7, 1LL);
          goto LABEL_260;
        }
        if ( v59 )
        {
          if ( v59 == 7 )
          {
            v70 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            v113 = KeGetCurrentPrcb();
            if ( v59 == 5 )
              v70 = v113->SelfmapLockHandle;
            else
              v70 = &v113->SelfmapLockHandle[3];
          }
        }
        else
        {
          v70 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v70, retaddr);
          goto LABEL_139;
        }
        _m_prefetchw(v70);
        Next = (__int64)v70->LockQueue.Next;
        if ( !v70->LockQueue.Next )
        {
          if ( v70 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v70->LockQueue.Lock,
                                               0LL,
                                               (signed __int64)v70) )
          {
LABEL_139:
            v72 = KeGetCurrentPrcb();
            SchedulerAssist = v72->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v72->NestingLevel <= 1u )
              {
                v129 = SchedulerAssist[5] - 1;
                SchedulerAssist[5] = v129;
                if ( !v129 )
                  KiRemoveSystemWorkPriorityKick(v72);
              }
            }
            goto LABEL_101;
          }
          Next = KxWaitForLockChainValid(v70);
        }
        v70->LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_139;
      }
LABEL_104:
      v11 = 1LL;
      v166 = 1;
LABEL_21:
      v5 = 0;
      if ( a2 > v160 )
        goto LABEL_79;
    }
  }
  if ( (_DWORD)v6 == 3 )
  {
    v76 = *((_BYTE *)v7 + 2);
    v77 = *v7;
    if ( (v76 & 1) != 0 )
    {
      if ( (v77 & 4) != 0 )
      {
        MiLockWorkingSetShared(v4);
      }
      else
      {
        v144 = MiGetSharedVm(v4, v77);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v144);
        *(_DWORD *)(v144 + 4) = 0;
        if ( (*v7 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140465E94);
      }
      *((_BYTE *)v7 + 2) &= ~1u;
      return (unsigned int)v8;
    }
    if ( (v77 & 0x40) != 0 && v8 == 3 )
      return (unsigned int)v8;
    v78 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)v7 + 19);
    v79 = v76 | 2;
    *((_BYTE *)v7 + 2) = v79;
    if ( v78 )
    {
      v80 = v78(v7);
      v79 = *((_BYTE *)v7 + 2);
    }
    else
    {
      v80 = 0;
      if ( *((_BYTE *)v7 + 6) == 17 )
      {
        *((_BYTE *)v7 + 2) = v79 & 0xFD;
        goto LABEL_156;
      }
    }
    v81 = v79 & 0xFD;
    *((_BYTE *)v7 + 2) = v81;
    if ( (v81 & 1) == 0 )
    {
      v82 = v80;
      if ( v80 >= 3 )
        v82 = v80;
      v80 = v82;
    }
LABEL_156:
    v83 = *((_QWORD *)v7 + 5);
    if ( !v83 )
      goto LABEL_165;
    v84 = *(_BYTE *)(v4 + 184) & 7;
    if ( v83 != 0xFFFFF6FB7DBEDF68uLL )
    {
      v85 = *((_QWORD *)v7 + 5);
      if ( !v84
        && v83 >= 0xFFFFF6FB7DBED000uLL
        && v83 <= 0xFFFFF6FB7DBEDFFFuLL
        && (v85 = *((_QWORD *)v7 + 5),
            (v119 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) != 0) )
      {
        v146 = ((unsigned __int64)(unsigned int)v83 >> 3) & 0x1FF;
        v147 = *(_DWORD *)(v119 + 4 * v146);
        if ( (v147 & 0x3FFFFFFF) != 0 )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v119 + 4 * v146));
        }
        else
        {
          if ( v147 >= 0 )
            KeBugCheckEx(0x10u, v119 + 4 * v146, 0x100uLL, 0LL, 0LL);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v119 + 4 * v146));
        }
      }
      else if ( v84 && v85 >= 0xFFFFF6FB7DBED000uLL && v85 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v148 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v4, *((_QWORD *)v7 + 5), &v156);
        v149 = *v148;
        v150 = ~(3 << v156);
        do
        {
          v151 = v149;
          v149 = _InterlockedCompareExchange(v148, v150 & v149, v149);
        }
        while ( v151 != v149 );
      }
      else
      {
        v86 = *(_QWORD *)v83;
        if ( v85 >= 0xFFFFF6FB7DBED000uLL
          && v85 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v86 & 1) != 0
          && ((v86 & 0x20) == 0 || (v86 & 0x42) == 0) )
        {
          v152 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v152 )
          {
            v153 = *(_QWORD *)(v152 + 8 * ((v83 >> 3) & 0x1FF));
            v154 = v86 | 0x20;
            if ( (v153 & 0x20) == 0 )
              v154 = *(_QWORD *)v83;
            v86 = v154;
            if ( (v153 & 0x42) != 0 )
              v86 = v154 | 0x42;
          }
        }
        do
        {
          v87 = _InterlockedCompareExchange64((volatile signed __int64 *)v83, v86 & 0xCFFFFFFFFFFFFFFFuLL, v86);
          v39 = v86 == v87;
          v86 = v87;
        }
        while ( !v39 );
        v7 = a1;
      }
LABEL_164:
      *((_BYTE *)v7 + 2) |= 1u;
      *((_QWORD *)v7 + 5) = 0LL;
LABEL_165:
      if ( v80 != 4 )
        return (unsigned int)v8;
      return 4;
    }
    if ( v84 )
    {
      if ( v84 == 7 )
      {
        v103 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        v118 = KeGetCurrentPrcb();
        if ( v84 == 5 )
          v103 = v118->SelfmapLockHandle;
        else
          v103 = &v118->SelfmapLockHandle[3];
      }
    }
    else
    {
      v103 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v103, retaddr);
      goto LABEL_208;
    }
    _m_prefetchw(v103);
    v104 = (__int64)v103->LockQueue.Next;
    if ( !v103->LockQueue.Next )
    {
      if ( v103 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)v103->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)v103) )
      {
LABEL_208:
        v105 = KeGetCurrentPrcb();
        v106 = v105->SchedulerAssist;
        if ( v106 )
        {
          if ( v105->NestingLevel <= 1u )
          {
            v145 = v106[5] - 1;
            v106[5] = v145;
            if ( !v145 )
              KiRemoveSystemWorkPriorityKick(v105);
          }
        }
        goto LABEL_164;
      }
      v104 = KxWaitForLockChainValid(v103);
    }
    v103->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v104 + 8), 1uLL);
    goto LABEL_208;
  }
LABEL_81:
  v47 = *((_BYTE *)v7 + 2);
  if ( (v47 & 1) == 0 )
  {
    v48 = (__int64 (__fastcall *)(unsigned __int16 *))*((_QWORD *)v7 + 19);
    v49 = v47 | 2;
    *((_BYTE *)v7 + 2) = v49;
    if ( v48 )
    {
      v50 = v48(v7);
      v49 = *((_BYTE *)v7 + 2);
      v5 = v50;
    }
    else if ( *((_BYTE *)v7 + 6) == 17 )
    {
      *((_BYTE *)v7 + 2) = v49 & 0xFD;
      return (unsigned int)v8;
    }
    *((_BYTE *)v7 + 2) = v49 & 0xFD;
    if ( v5 == 4 )
      return 4;
  }
  return (unsigned int)v8;
}
