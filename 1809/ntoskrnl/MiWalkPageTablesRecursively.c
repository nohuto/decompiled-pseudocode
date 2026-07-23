/*
 * XREFs of MiWalkPageTablesRecursively @ 0x14006EE70
 * Callers:
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140070670 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x140070A20 (MiGetNextPageTablePte.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiYieldPageTableWalk @ 0x1401227F8 (MiYieldPageTableWalk.c)
 *     MiPerformSafePdeWrite @ 0x140160618 (MiPerformSafePdeWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1401B4EC4 (MiAdvanceToLastUntrimmableVa.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 *     ExSpinLockIsContended @ 0x14031C1F8 (ExSpinLockIsContended.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiWalkPageTablesRecursively(int *a1, unsigned __int64 Process, unsigned __int64 a3, __int64 a4)
{
  int v4; // r15d
  __int64 v5; // rsi
  unsigned __int64 v6; // r13
  int v7; // r14d
  int *v8; // rdi
  __int64 v9; // r11
  int v10; // r12d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl
  LONG *v18; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *v20; // rsi
  _DWORD *v21; // rcx
  int v22; // eax
  signed __int32 v23; // ett
  _DWORD *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbp
  _KPROCESS *v27; // rcx
  __int64 i; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  LONG *SharedVm; // rbx
  __int64 v32; // rsi
  __int64 v33; // r11
  __int64 v34; // r10
  unsigned __int16 **v35; // r11
  unsigned __int16 *v36; // rax
  __int64 v37; // rbx
  char v38; // al
  int v39; // edx
  __int64 v40; // rbp
  LONG *v41; // rax
  unsigned __int64 v42; // rbx
  char v43; // si
  struct _KPRCB *CurrentPrcb; // rax
  bool v45; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v47; // rdx
  int IsContended; // ecx
  char *PageTableLockBuffer; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  struct _KPRCB *v53; // rcx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // ebp
  unsigned int v56; // ebx
  _KTHREAD *NextThread; // rax
  __int64 (__fastcall *v58)(int *, unsigned __int64, unsigned __int64); // rax
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rsi
  int NextPageTablePte; // eax
  unsigned __int64 v63; // rcx
  __int64 v64; // rbp
  __int64 v65; // r11
  int v66; // r10d
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  __int64 (__fastcall *v72)(int *); // rax
  int v73; // eax
  char v74; // cl
  __int64 v75; // r14
  unsigned __int64 v76; // rbx
  char v77; // si
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  struct _KPRCB *v79; // rbx
  __int64 v80; // rax
  struct _KPRCB *v81; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v83; // eax
  __int64 v84; // rdx
  volatile signed __int32 *v85; // r8
  int v86; // r9d
  signed __int32 v87; // eax
  volatile signed __int32 v88; // ett
  signed __int32 v89; // edx
  signed __int64 v90; // rdx
  unsigned __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // r8
  signed __int64 v94; // rax
  signed __int64 v95; // r8
  int v96; // ebx
  int v97; // eax
  unsigned __int64 v98; // rax
  int v99; // eax
  unsigned __int64 v100; // r10
  __int64 v101; // r8
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rsi
  char v104; // bl
  struct _KPRCB *v105; // rcx
  __int64 v106; // rdx
  int v107; // r9d
  signed __int32 v108; // eax
  signed __int32 v109; // ett
  signed __int32 v110; // edx
  signed __int64 v111; // rdx
  unsigned __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // r8
  signed __int64 v115; // rax
  signed __int64 v116; // rdx
  __int64 LeafVa; // rax
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rax
  int v123; // eax
  __int64 v124; // r9
  LONG *v125; // rbx
  __int64 (__fastcall *v126)(int *); // rdx
  int v127; // r14d
  unsigned __int64 v128; // rbx
  char v129; // si
  _KLOCK_QUEUE_HANDLE *v130; // rbx
  struct _KPRCB *v131; // rbx
  __int64 v132; // rax
  struct _KPRCB *v133; // rcx
  _DWORD *v134; // rdx
  int v135; // eax
  unsigned __int64 v136; // rdx
  unsigned __int64 v137; // r9
  unsigned __int64 v138; // r8
  unsigned __int64 v139; // rcx
  unsigned __int64 v140; // r10
  __int64 CurrentProcess; // rax
  __int64 v142; // rax
  volatile signed __int32 *v143; // r8
  int v144; // r9d
  signed __int32 v145; // eax
  volatile signed __int32 v146; // ett
  signed __int32 v147; // edx
  signed __int64 v148; // rdx
  unsigned __int64 v149; // r8
  __int64 v150; // rax
  __int64 v151; // r8
  signed __int64 v152; // rax
  signed __int64 v153; // rdx
  __int64 (__fastcall *v155)(int *, unsigned __int64, unsigned __int64); // rax
  __int64 v156; // [rsp+20h] [rbp-A8h]
  __int64 v157; // [rsp+28h] [rbp-A0h]
  int v158; // [rsp+30h] [rbp-98h] BYREF
  int v159; // [rsp+34h] [rbp-94h] BYREF
  int v160; // [rsp+38h] [rbp-90h] BYREF
  __int64 v161; // [rsp+40h] [rbp-88h]
  unsigned __int64 v162; // [rsp+48h] [rbp-80h]
  __int64 v163; // [rsp+50h] [rbp-78h]
  __int64 (__fastcall *v164)(int *, unsigned __int64, _QWORD); // [rsp+58h] [rbp-70h]
  unsigned __int64 v165; // [rsp+60h] [rbp-68h]
  unsigned __int64 v166; // [rsp+68h] [rbp-60h]
  unsigned __int64 v167; // [rsp+70h] [rbp-58h]
  __int64 v168; // [rsp+78h] [rbp-50h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int v171; // [rsp+D8h] [rbp+10h]
  int v172; // [rsp+E0h] [rbp+18h]
  int v173; // [rsp+E8h] [rbp+20h] BYREF

  v172 = a3;
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v6 = Process;
  v7 = a3;
  v8 = a1;
  v164 = (__int64 (__fastcall *)(int *, unsigned __int64, _QWORD))*((_QWORD *)a1 + 19);
  v9 = 4LL * (int)a3;
  v10 = 0;
  v156 = v5;
  v161 = (int)a3;
  v157 = v9 * 4;
  if ( Process < *(_QWORD *)&a1[v9 + 20] )
    v6 = *(_QWORD *)&a1[v9 + 20];
  if ( (_DWORD)a3 == 3 )
  {
    v11 = *((_QWORD *)a1 + 17);
  }
  else
  {
    v12 = *(_QWORD *)&a1[v9 + 22];
    v11 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v11 > v12 )
      v11 = *(_QWORD *)&v8[v9 + 22];
  }
  v162 = v11;
  v13 = 0;
  v171 = 0;
  if ( v6 <= v11 )
  {
    while ( 1 )
    {
      Process = 0xFFFFF68000000000uLL;
      a3 = 2LL;
      if ( v13 )
      {
        v171 = 0;
        if ( v10 >= 3 )
          goto LABEL_74;
        if ( *((_BYTE *)v8 + 8) == 1 )
          break;
      }
LABEL_65:
      v32 = ++*((_QWORD *)v8 + 18);
      if ( (*v8 & 8) != 0 && (v32 & 0xF) == 0 )
      {
        v33 = *((_QWORD *)v8 + 9);
        a3 = *(_QWORD *)(v33 + 7296);
        if ( a3 < 0x420 )
        {
          a4 = (unsigned int)dword_14043B14C;
          v34 = 0LL;
          v35 = (unsigned __int16 **)(v33 + 4136);
          while ( 1 )
          {
            v36 = *v35;
            v37 = v34;
            Process = 0LL;
            if ( dword_14043B14C )
              break;
LABEL_72:
            ++v34;
            ++v35;
            if ( v37 >= 1 )
            {
              v10 = 4;
              goto LABEL_74;
            }
          }
          while ( 1 )
          {
            a3 += *v36;
            if ( a3 >= 0x420 )
              break;
            Process = (unsigned int)(Process + 1);
            v36 += 8;
            if ( (unsigned int)Process >= dword_14043B14C )
              goto LABEL_72;
          }
        }
      }
      if ( (*v8 & 2) == 0 )
        goto LABEL_161;
      v40 = *((_QWORD *)v8 + 3);
      if ( ((unsigned __int8)v32 & *((_BYTE *)v8 + 6)) == 0 )
      {
        v41 = &dword_14043C7C0;
        if ( (*(_BYTE *)(v40 + 184) & 7) != 2 )
          v41 = (LONG *)(v40 + 192);
        if ( (*v41 & 0x40000000) != 0 )
        {
LABEL_144:
          v58 = (__int64 (__fastcall *)(int *, unsigned __int64, unsigned __int64))*((_QWORD *)v8 + 20);
          *((_BYTE *)v8 + 5) = 1;
          if ( v58 )
          {
            v59 = v58(v8, Process, a3);
            goto LABEL_146;
          }
          v59 = 0;
          if ( *((_BYTE *)v8 + 4) == 17 )
          {
            *((_BYTE *)v8 + 5) = 0;
LABEL_346:
            v13 = 1;
            v171 = 1;
            goto LABEL_347;
          }
LABEL_146:
          v45 = *((_BYTE *)v8 + 8) == 1;
          *((_BYTE *)v8 + 5) = 0;
          if ( v45 )
          {
LABEL_158:
            if ( v59 < 3 )
              goto LABEL_346;
          }
          else if ( v59 < 3 )
          {
            v60 = *((_QWORD *)v8 + 6);
            v61 = *((_QWORD *)v8 + 3);
            if ( v60 )
            {
              MiUnlockPageTableInternal(*((_QWORD *)v8 + 3), v60);
              *((_QWORD *)v8 + 6) = 0LL;
            }
            if ( (*v8 & 4) != 0 )
            {
              MiUnlockWorkingSetShared(v61, *((_BYTE *)v8 + 4));
            }
            else
            {
              if ( (*v8 & 0x400) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043B5A4);
              MiUnlockWorkingSetExclusive(v61, *((_BYTE *)v8 + 4), a3, a4);
            }
            *((_BYTE *)v8 + 8) = 1;
            goto LABEL_158;
          }
          v10 = v59;
          goto LABEL_346;
        }
        if ( (*v8 & 4) == 0 )
          goto LABEL_120;
        v42 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v43 = *(_BYTE *)(v40 + 184) & 7;
        if ( ((v6 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v43 )
          {
            if ( v43 == 7 )
            {
              v45 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
            }
            else
            {
              if ( v43 == 5 )
                Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
              else
                Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
              v45 = Next == 0LL;
            }
          }
          else
          {
            v45 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
          }
          goto LABEL_119;
        }
        Process = 0xFFFFF6FB7DBED000uLL;
        if ( !v43 && v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          v47 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBEDFFFuLL, 0xFFFFF6FB7DBED000uLL) + 1296) + 552LL);
          if ( v47 )
          {
            IsContended = ExSpinLockIsContended(v47 + 4 * ((((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
LABEL_118:
            v45 = IsContended == 0;
LABEL_119:
            if ( !v45 )
              goto LABEL_144;
            goto LABEL_120;
          }
          Process = 0xFFFFF6FB7DBED000uLL;
        }
        if ( !v43 || v42 < 0xFFFFF6FB7DBED000uLL || v42 > 0xFFFFF6FB7DBEDFFFuLL )
        {
          v50 = *(_QWORD *)v42;
          if ( v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 640) != 1 && (v50 & 1) != 0 && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v51 = *(_QWORD *)(Process + 1544);
              if ( v51 )
              {
                a3 = v50 | 0x20;
                v52 = *(_QWORD *)(v51 + 8 * ((v42 >> 3) & 0x1FF));
                Process = (unsigned __int8)v52;
                LOBYTE(Process) = v52 & 0x20;
                if ( (v52 & 0x20) == 0 )
                  a3 = *(_QWORD *)v42;
                v50 = a3;
                if ( (v52 & 0x42) != 0 )
                  v50 = a3 | 0x42;
              }
            }
          }
          IsContended = (v50 >> 60) & 2;
          goto LABEL_118;
        }
        PageTableLockBuffer = MiGetPageTableLockBuffer(v40, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v173);
        Process = (unsigned int)(*(_DWORD *)PageTableLockBuffer >> v173);
        if ( (Process & 2) != 0 )
          goto LABEL_144;
LABEL_120:
        if ( (*v8 & 0x400) != 0 && (dword_14043B5A4 & 0x40000000) != 0 )
          goto LABEL_144;
      }
      if ( *((_BYTE *)v8 + 4) >= 2u )
        goto LABEL_161;
      v53 = KeGetCurrentPrcb();
      Process = (unsigned int)v53->DpcRequestSummary;
      DpcWatchdogCount = v53->DpcWatchdogCount;
      DpcTimeCount = v53->DpcTimeCount;
      if ( (Process & 1) == 0 )
      {
        a3 = 0LL;
        if ( (Process & 0x1E) != 0 )
        {
          v56 = 2;
          goto LABEL_141;
        }
        if ( v53->QuantumEnd )
        {
          v56 = 3;
          goto LABEL_141;
        }
        NextThread = v53->NextThread;
        if ( NextThread && NextThread != v53->CurrentThread )
        {
          v56 = 4;
          goto LABEL_141;
        }
LABEL_134:
        if ( DpcWatchdogCount <= 7 )
          goto LABEL_161;
        if ( !(_DWORD)a3 )
          goto LABEL_140;
        goto LABEL_136;
      }
      a3 = 1LL;
      if ( DpcTimeCount <= 7 )
        goto LABEL_134;
      if ( v53->QuantumEnd )
      {
        v56 = 1;
        goto LABEL_141;
      }
LABEL_136:
      if ( (Process & 0x1E) != 0 )
      {
        v56 = 5;
        goto LABEL_141;
      }
      if ( v53->CurrentThread != v53->IdleThread )
      {
        v56 = 6;
        goto LABEL_141;
      }
LABEL_140:
      _disable();
      v53->DpcWatchdogCount = 0;
      v53->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(v53, Process, a3, a4);
      _enable();
      v56 = 0;
LABEL_141:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v56, DpcWatchdogCount, DpcTimeCount);
      if ( v56 )
        goto LABEL_144;
LABEL_161:
      if ( (*v8 & 0x20) != 0 )
      {
        NextPageTablePte = MiGetNextPageTablePte(v8, v6, (unsigned int)v7);
        if ( NextPageTablePte == 3 )
        {
          v10 = 3;
          goto LABEL_346;
        }
        if ( *((_BYTE *)v8 + 8) == 1 )
          goto LABEL_346;
        v63 = *((_QWORD *)v8 + 8);
        if ( v63 && v63 == v6 )
        {
          *((_QWORD *)v8 + 8) = 0LL;
LABEL_168:
          v64 = v156;
          goto LABEL_169;
        }
      }
      else
      {
        NextPageTablePte = MiComputePxeWalkAction(v8, v6, (unsigned int)v7);
      }
      if ( !NextPageTablePte )
        goto LABEL_186;
      if ( NextPageTablePte == 1 || v7 <= *((unsigned __int8 *)v8 + 10) )
        goto LABEL_168;
      v72 = (__int64 (__fastcall *)(int *))*((_QWORD *)v8 + 20);
      *((_BYTE *)v8 + 5) = 1;
      if ( v72 )
      {
        v73 = v72(v8);
      }
      else
      {
        v73 = 0;
        if ( *((_BYTE *)v8 + 4) == 17 )
        {
          v74 = *((_BYTE *)v8 + 8);
          *((_BYTE *)v8 + 5) = 0;
          goto LABEL_197;
        }
      }
      v74 = *((_BYTE *)v8 + 8);
      *((_BYTE *)v8 + 5) = 0;
      if ( v73 >= 3 )
        goto LABEL_308;
LABEL_197:
      if ( v74 == 1 )
        goto LABEL_308;
      v75 = 4 * v161;
      v63 = (__int64)(v6 << 25) >> 16;
      if ( v63 < *(_QWORD *)&v8[4 * v161 + 16] )
        v63 = *(_QWORD *)&v8[4 * v161 + 16];
      if ( v63 > *(_QWORD *)&v8[v75 + 18] )
      {
        v7 = v172;
        v64 = v156;
        goto LABEL_169;
      }
      if ( (*v8 & 4) == 0 )
        goto LABEL_248;
      MiLockPageTableInternal(v156, v6, 0);
      v76 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v77 = *(_BYTE *)(v156 + 184) & 7;
      if ( ((v6 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
      {
        if ( v77 )
        {
          if ( v77 == 7 )
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            v79 = KeGetCurrentPrcb();
            if ( v77 == 5 )
              SelfmapLockHandle = v79->SelfmapLockHandle;
            else
              SelfmapLockHandle = &v79->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
LABEL_218:
          v81 = KeGetCurrentPrcb();
          SchedulerAssist = v81->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v81->NestingLevel <= 1u )
            {
              v83 = SchedulerAssist[5] - 1;
              SchedulerAssist[5] = v83;
              if ( !v83 )
              {
                KiRemoveSystemWorkPriorityKick(v81);
                *((_QWORD *)v8 + 6) = v6;
                goto LABEL_248;
              }
            }
          }
          goto LABEL_247;
        }
        _m_prefetchw(SelfmapLockHandle);
        v80 = (__int64)SelfmapLockHandle->LockQueue.Next;
        if ( !SelfmapLockHandle->LockQueue.Next )
        {
          if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                             (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                             0LL,
                                                             (signed __int64)SelfmapLockHandle) )
            goto LABEL_218;
          v80 = KxWaitForLockChainValid((__int64 *)SelfmapLockHandle);
        }
        SelfmapLockHandle->LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v80 + 8), 1uLL);
        goto LABEL_218;
      }
      if ( !v77 && v76 >= 0xFFFFF6FB7DBED000uLL && v76 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v84 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBEDFFFuLL) + 1296) + 552LL);
        if ( v84 )
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v84 + 4 * ((((v6 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          *((_QWORD *)v8 + 6) = v6;
          goto LABEL_248;
        }
      }
      if ( !v77 || v76 < 0xFFFFF6FB7DBED000uLL || v76 > 0xFFFFF6FB7DBEDFFFuLL )
      {
        v90 = *(_QWORD *)v76;
        if ( v76 >= 0xFFFFF6FB7DBED000uLL
          && v76 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v90 & 1) != 0
          && ((v90 & 0x20) == 0 || (v90 & 0x42) == 0) )
        {
          v91 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v91 )
          {
            v92 = *(_QWORD *)(v91 + 8 * ((v76 >> 3) & 0x1FF));
            v93 = v90 | 0x20;
            if ( (v92 & 0x20) == 0 )
              v93 = *(_QWORD *)v76;
            v90 = v93;
            if ( (v92 & 0x42) != 0 )
              v90 = v93 | 0x42;
          }
        }
        v94 = _InterlockedCompareExchange64((volatile signed __int64 *)v76, v90 & 0xCFFFFFFFFFFFFFFFuLL, v90);
        if ( v90 != v94 )
        {
          do
          {
            v95 = v94;
            v94 = _InterlockedCompareExchange64((volatile signed __int64 *)v76, v94 & 0xCFFFFFFFFFFFFFFFuLL, v94);
          }
          while ( v94 != v95 );
        }
LABEL_247:
        *((_QWORD *)v8 + 6) = v6;
        goto LABEL_248;
      }
      v85 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v156, v76, &v158);
      v86 = ~(3 << v158);
      v88 = *v85;
      v87 = _InterlockedCompareExchange(v85, *v85 & v86, *v85);
      if ( v88 == v87 )
        goto LABEL_247;
      do
      {
        v89 = v87;
        v87 = _InterlockedCompareExchange(v85, v87 & v86, v87);
      }
      while ( v87 != v89 );
      *((_QWORD *)v8 + 6) = v6;
LABEL_248:
      v96 = 0;
      v97 = MiWalkPageTablesRecursively(v8, (__int64)(v6 << 25) >> 16, (unsigned int)(v172 - 1));
      v65 = v157;
      v10 = v97;
      v98 = *(_QWORD *)((char *)v8 + v157 + 80);
      if ( v98 != v6 )
      {
        LOBYTE(v96) = (*(_QWORD *)((_BYTE *)v8 + v157 + 80) & 0xFFFLL) == 0;
        Process = *v8 & 0x4000;
        if ( (*v8 & 0x4000) != 0 && v6 < v98 )
        {
          if ( !*((_BYTE *)v8 + 8) )
          {
            v99 = MiYieldPageTableWalk(v8, 1LL, a3, a4);
            v65 = v157;
            if ( v99 == 4 )
              v10 = 4;
          }
          v6 = *(_QWORD *)((char *)v8 + v65 + 80);
          goto LABEL_346;
        }
        *((_QWORD *)v8 + 8) = v6;
        v63 = v6;
        if ( !(_DWORD)Process || (Process = (unsigned __int64)v8 + v157 + 80, a4 = Process, v6 > *(_QWORD *)Process) )
        {
          Process = (unsigned __int64)v8 + v157 + 80;
          a4 = Process;
          *(_QWORD *)Process = v6;
        }
        v100 = v161;
        if ( v161 < 3 )
        {
          Process += 16LL;
          v101 = 3 - v161;
          do
          {
            v63 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            *(_QWORD *)Process = v63;
            Process += 16LL;
            --v101;
          }
          while ( v101 );
          v65 = v157;
          a4 = (__int64)&v8[v75 + 20];
        }
        v102 = v6;
        a3 = v100;
        if ( v100 )
        {
          v63 = a4 - 16;
          do
          {
            Process = (__int64)(v102 << 25) >> 16;
            if ( (*v8 & 0x4000) == 0 || (v102 = *(_QWORD *)v63, Process > *(_QWORD *)v63) )
            {
              v102 = Process;
              *(_QWORD *)v63 = Process;
            }
            v63 -= 16LL;
            --a3;
          }
          while ( a3 );
        }
      }
      if ( v10 >= 3 || *((_BYTE *)v8 + 8) )
        goto LABEL_346;
      if ( (*v8 & 4) == 0 )
      {
        v7 = v172;
        v64 = v156;
        goto LABEL_170;
      }
      if ( v96
        || (v64 = v156,
            v103 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            !(unsigned int)MiLockPageTableInternal(v156, v103, 1)) )
      {
        v73 = MiYieldPageTableWalk(v8, 1LL, a3, a4);
LABEL_308:
        v45 = v73 == 4;
        v13 = 1;
        if ( v45 )
          v10 = 4;
        v171 = 1;
        goto LABEL_347;
      }
      v104 = *(_BYTE *)(v156 + 184) & 7;
      if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( v104 )
        {
          if ( v104 == 7 )
          {
            KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[1]);
            v7 = v172;
            *((_QWORD *)v8 + 6) = v103;
          }
          else
          {
            v105 = KeGetCurrentPrcb();
            if ( v104 == 5 )
              KxReleaseQueuedSpinLock(v105->SelfmapLockHandle);
            else
              KxReleaseQueuedSpinLock(&v105->SelfmapLockHandle[3]);
            v7 = v172;
            *((_QWORD *)v8 + 6) = v103;
          }
        }
        else
        {
          KxReleaseQueuedSpinLock(&KeGetCurrentPrcb()->SelfmapLockHandle[2]);
          v7 = v172;
          *((_QWORD *)v8 + 6) = v103;
        }
      }
      else if ( v104
             || v6 < 0xFFFFF6FB7DBED000uLL
             || v6 > 0xFFFFF6FB7DBEDFFFuLL
             || (v106 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBEDFFFuLL) + 1296)
                                  + 552LL)) == 0 )
      {
        if ( v104 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          a3 = (unsigned __int64)MiGetPageTableLockBuffer(v156, v6, &v159);
          v107 = ~(3 << v159);
          v63 = (unsigned int)v107 & *(_DWORD *)a3;
          v109 = *(_DWORD *)a3;
          v108 = _InterlockedCompareExchange((volatile signed __int32 *)a3, v63, *(_DWORD *)a3);
          if ( v109 != v108 )
          {
            do
            {
              v110 = v108;
              v63 = v107 & (unsigned int)v108;
              v108 = _InterlockedCompareExchange((volatile signed __int32 *)a3, v63, v108);
            }
            while ( v108 != v110 );
            v7 = v172;
            *((_QWORD *)v8 + 6) = v103;
            goto LABEL_169;
          }
        }
        else
        {
          v111 = *(_QWORD *)v6;
          if ( v6 >= 0xFFFFF6FB7DBED000uLL
            && v6 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v111)
            && (v111 & 1) != 0
            && ((v111 & 0x20) == 0 || (v111 & 0x42) == 0) )
          {
            v112 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v112 )
            {
              v113 = *(_QWORD *)(v112 + 8 * ((v6 >> 3) & 0x1FF));
              v114 = v111 | 0x20;
              if ( (v113 & 0x20) == 0 )
                v114 = v111;
              v111 = v114;
              if ( (v113 & 0x42) != 0 )
                v111 = v114 | 0x42;
            }
          }
          a3 = 0xCFFFFFFFFFFFFFFFuLL;
          v63 = v111 & 0xCFFFFFFFFFFFFFFFuLL;
          v115 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v111 & 0xCFFFFFFFFFFFFFFFuLL, v111);
          if ( v111 != v115 )
          {
            do
            {
              v116 = v115;
              v63 = v115 & 0xCFFFFFFFFFFFFFFFuLL;
              v115 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v115 & 0xCFFFFFFFFFFFFFFFuLL, v115);
            }
            while ( v115 != v116 );
          }
        }
        v7 = v172;
        *((_QWORD *)v8 + 6) = v103;
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v106 + 4LL * (((unsigned int)v6 >> 3) & 0x1FF));
        v7 = v172;
        *((_QWORD *)v8 + 6) = v103;
      }
LABEL_169:
      v65 = v157;
LABEL_170:
      v66 = *v8;
      a4 = *v8 & 1;
      if ( (*v8 & 1) == 0 && !v7 )
      {
        a3 = (((unsigned __int64)((__int64)(v6 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v67 = *(_QWORD *)a3;
        if ( a3 >= 0xFFFFF6FB7DBED000uLL
          && a3 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v63, v67)
          && (v67 & 1) != 0
          && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
        {
          v68 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v68 )
          {
            v69 = *(_QWORD *)(v68 + 8 * ((a3 >> 3) & 0x1FF));
            a3 = v67 | 0x20;
            if ( (v69 & 0x20) == 0 )
              a3 = v67;
            HIBYTE(v67) = HIBYTE(a3);
            if ( (v69 & 0x42) != 0 )
              HIBYTE(v67) = HIBYTE(a3);
          }
        }
        LOBYTE(v67) = HIBYTE(v67) & 0xF;
        if ( (HIBYTE(v67) & 0xF) == 9 || (_BYTE)v67 == 10 )
        {
          if ( (*(_BYTE *)(v64 + 184) & 7) == 0 )
          {
            LeafVa = MiGetLeafVa(v6);
            v118 = (((unsigned __int64)MiAdvanceToLastUntrimmableVa(LeafVa) >> 9) & 0x7FFFFFFFF8LL)
                 - 0x98000000000LL
                 - v6;
            v119 = -1;
            v120 = v118 >> 3;
            if ( v120 <= 0xFFFFFFFFLL )
              v119 = v120;
            v8[3] = v119;
          }
LABEL_186:
          v10 = 0;
LABEL_187:
          v70 = (unsigned int)v8[3];
          v8[3] = 0;
          v71 = v6 + 8 * v70 + 8;
          Process = (v6 >> 9) & 0x7FFFFFFFF8LL;
          v6 = v71;
          if ( v7 || ((v71 >> 9) & 0x7FFFFFFFF8LL) != Process )
          {
            Process = v71;
            if ( (*v8 & 0x4000) == 0 || (a3 = (unsigned __int64)v8 + v157 + 80, v71 > *(_QWORD *)a3) )
            {
              a3 = (unsigned __int64)v8 + v157 + 80;
              *(_QWORD *)a3 = v71;
            }
            if ( v7 < 3LL )
            {
              a3 += 16LL;
              v124 = 3LL - v7;
              do
              {
                Process = ((Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                *(_QWORD *)a3 = Process;
                a3 += 16LL;
                --v124;
              }
              while ( v124 );
            }
            a4 = v7;
            if ( v7 )
            {
              Process = (unsigned __int64)&v8[4 * v7 + 16];
              do
              {
                a3 = (__int64)(v71 << 25) >> 16;
                if ( (*v8 & 0x4000) == 0 || (v71 = *(_QWORD *)Process, a3 > *(_QWORD *)Process) )
                {
                  v71 = a3;
                  *(_QWORD *)Process = a3;
                }
                Process -= 16LL;
                --a4;
              }
              while ( a4 );
            }
          }
          else
          {
            *((_QWORD *)v8 + 10) = v71;
          }
LABEL_343:
          v13 = v171;
          goto LABEL_344;
        }
        if ( (_BYTE)v67 == 8 )
          goto LABEL_186;
      }
      v121 = *((_QWORD *)v8 + 8);
      if ( v121 && v121 == *(_QWORD *)((char *)v8 + v65 + 80) )
        *((_QWORD *)v8 + 8) = 0LL;
      v122 = *((_QWORD *)v8 + 7);
      if ( v122 && v122 == *(_QWORD *)((char *)v8 + v65 + 80) )
        *((_QWORD *)v8 + 7) = 0LL;
      if ( (v66 & 0x40) != 0 || v7 >= 1 && !(_DWORD)a4 && (*(_BYTE *)(v64 + 184) & 7) != 0 )
        goto LABEL_186;
      v123 = v164(v8, v6, (unsigned int)v7);
      v10 = v123;
      if ( v123 == 1 )
      {
        v10 = 0;
        goto LABEL_343;
      }
      if ( v123 != 2 )
        goto LABEL_187;
      v10 = 0;
      MiYieldPageTableWalk(v8, 1LL, a3, a4);
      MiWaitForFreePage(*((_QWORD *)v8 + 9));
      v13 = 1;
      v171 = 1;
LABEL_344:
      if ( *((_BYTE *)v8 + 8) == 1 || v10 >= 3 )
        goto LABEL_346;
LABEL_347:
      v4 = 0;
      if ( v6 > v162 )
      {
LABEL_74:
        v5 = v156;
        goto LABEL_75;
      }
      v7 = v172;
    }
    if ( v7 != 3 )
      goto LABEL_403;
    v14 = *((_QWORD *)v8 + 3);
    if ( (*v8 & 4) != 0 )
    {
      v15 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = *(_BYTE *)(v14 + 184) & 7;
      v163 = v15;
      if ( v16 < 6u )
      {
        v18 = &dword_14043C7C0;
        if ( v16 != 2 )
          v18 = (LONG *)(v14 + 192);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, CurrentIrql);
        }
        else
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          if ( v21 )
          {
            if ( v20->NestingLevel <= 1u )
            {
              v22 = v21[5];
              v21[5] = v22 + 1;
              if ( v22 == -1 )
                KiRemoveSystemWorkPriorityKick(v20);
            }
          }
          _m_prefetchw(v18);
          v23 = *v18 & 0x7FFFFFFF;
          if ( v23 != _InterlockedCompareExchange(v18, v23 + 1, v23) )
          {
            v24 = v20->SchedulerAssist;
            if ( v24 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v25 = v24[5] - 1;
                v24[5] = v25;
                if ( !v25 )
                  KiRemoveSystemWorkPriorityKick(v20);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(v18, CurrentIrql);
          }
        }
        if ( v18[1] )
          _InterlockedExchange(v18 + 1, 0);
      }
      else
      {
        v17 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
      v165 = (((unsigned __int64)(v15 << 25 >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v166 = ((v165 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v167 = ((v166 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v168 = ((v167 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = 0xFFFFF6FB7DBEDF68uLL;
      MiLockPageTableInternal(v14, 0xFFFFF6FB7DBEDF68uLL, 0);
      for ( i = 2LL; ; --i )
      {
        v29 = *(&v165 + i);
        a3 = *(_QWORD *)v29;
        if ( v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v27, Process) )
        {
          if ( (a3 & 1) == 0 )
            break;
          if ( (a3 & 0x20) == 0 || (a3 & 0x42) == 0 )
          {
            v27 = KeGetCurrentThread()->ApcState.Process;
            Process = v27[2].Affinity.Bitmap[0];
            if ( Process )
            {
              v30 = *(_QWORD *)(Process + 8 * ((v29 >> 3) & 0x1FF));
              Process = a3 | 0x20;
              v27 = (_KPROCESS *)(unsigned __int8)v30;
              LOBYTE(v27) = v30 & 0x20;
              if ( (v30 & 0x20) == 0 )
                Process = a3;
              a3 = Process;
              if ( (v30 & 0x42) != 0 )
                a3 = Process | 0x42;
            }
          }
        }
        if ( (a3 & 1) == 0 || (a3 & 0x80u) != 0LL )
          break;
        if ( (a3 & 0x20) == 0 )
          MiPerformSafePdeWrite(v27, v29, a3, 1LL);
        if ( v29 != v26 )
        {
          MiLockPageTableInternal(v14, v29, 0);
          MiUnlockPageTableInternal(v14, v26);
          v26 = v29;
        }
        if ( !i )
          break;
      }
      v8 = a1;
      if ( v26 != v163 )
      {
        MiUnlockPageTableInternal(v14, v26);
        MiUnlockWorkingSetShared(*((_QWORD *)a1 + 3), *((_BYTE *)a1 + 4));
        v4 = 0;
LABEL_64:
        v7 = v172;
        goto LABEL_65;
      }
      *((_QWORD *)a1 + 6) = v163;
      v4 = 0;
    }
    else
    {
      SharedVm = MiGetSharedVm(*((_QWORD *)v8 + 3));
      ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      if ( (*v8 & 0x400) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043B5A4);
    }
    *((_BYTE *)v8 + 8) = 0;
    goto LABEL_64;
  }
LABEL_75:
  if ( v172 != 3 )
  {
LABEL_403:
    if ( *((_BYTE *)v8 + 8) )
      return (unsigned int)v10;
    v155 = (__int64 (__fastcall *)(int *, unsigned __int64, unsigned __int64))*((_QWORD *)v8 + 20);
    *((_BYTE *)v8 + 5) = 1;
    if ( v155 )
    {
      v4 = v155(v8, Process, a3);
    }
    else if ( *((_BYTE *)v8 + 4) == 17 )
    {
LABEL_409:
      *((_BYTE *)v8 + 5) = 0;
      return (unsigned int)v10;
    }
    if ( v4 == 4 )
      v10 = 4;
    goto LABEL_409;
  }
  v38 = *((_BYTE *)v8 + 8);
  v39 = *v8;
  if ( v38 )
  {
    if ( (v39 & 4) != 0 )
    {
      MiLockWorkingSetShared(v5);
      *((_BYTE *)v8 + 8) = 0;
    }
    else
    {
      v125 = MiGetSharedVm(v5);
      ExAcquireSpinLockExclusive(v125);
      v125[1] = 0;
      if ( (*v8 & 0x400) != 0 )
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_14043B5A4);
      *((_BYTE *)v8 + 8) = 0;
    }
    return (unsigned int)v10;
  }
  if ( (v39 & 0x40) == 0 || v10 != 3 )
  {
    v126 = (__int64 (__fastcall *)(int *))*((_QWORD *)v8 + 20);
    *((_BYTE *)v8 + 5) = 1;
    if ( v126 )
      v127 = v126(v8);
    else
      v127 = 0;
    v128 = *((_QWORD *)v8 + 6);
    *((_BYTE *)v8 + 5) = 0;
    if ( !v128 )
    {
LABEL_401:
      if ( v127 == 4 )
        return 4LL;
      return (unsigned int)v10;
    }
    v129 = *(_BYTE *)(v5 + 184) & 7;
    if ( v128 != 0xFFFFF6FB7DBEDF68uLL )
    {
      v136 = v128;
      v137 = v128;
      v138 = v128;
      v139 = v128;
      v140 = v128;
      if ( v129
        || v128 < 0xFFFFF6FB7DBED000uLL
        || v128 > 0xFFFFF6FB7DBEDFFFuLL
        || (CurrentProcess = PsGetCurrentProcess(v128, v128),
            v136 = v128,
            v137 = v128,
            v138 = v128,
            v140 = v128,
            v142 = *(_QWORD *)(*(_QWORD *)(CurrentProcess + 1296) + 552LL),
            v139 = v128,
            !v142) )
      {
        if ( v129 && (v139 = v138, v136 >= 0xFFFFF6FB7DBED000uLL) && (v139 = v140, v137 <= 0xFFFFF6FB7DBEDFFFuLL) )
        {
          v143 = (volatile signed __int32 *)MiGetPageTableLockBuffer(v156, v128, &v160);
          v144 = ~(3 << v160);
          v146 = *v143;
          v145 = _InterlockedCompareExchange(v143, v144 & *v143, *v143);
          if ( v146 != v145 )
          {
            do
            {
              v147 = v145;
              v145 = _InterlockedCompareExchange(v143, v145 & v144, v145);
            }
            while ( v145 != v147 );
          }
        }
        else
        {
          v148 = *(_QWORD *)v128;
          if ( v139 >= 0xFFFFF6FB7DBED000uLL
            && v139 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v139, v148)
            && (v148 & 1) != 0
            && ((v148 & 0x20) == 0 || (v148 & 0x42) == 0) )
          {
            v149 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v149 )
            {
              v150 = *(_QWORD *)(v149 + 8 * ((v128 >> 3) & 0x1FF));
              v151 = v148 | 0x20;
              if ( (v150 & 0x20) == 0 )
                v151 = v148;
              v148 = v151;
              if ( (v150 & 0x42) != 0 )
                v148 = v151 | 0x42;
            }
          }
          v152 = _InterlockedCompareExchange64((volatile signed __int64 *)v128, v148 & 0xCFFFFFFFFFFFFFFFuLL, v148);
          if ( v148 != v152 )
          {
            do
            {
              v153 = v152;
              v152 = _InterlockedCompareExchange64((volatile signed __int64 *)v128, v152 & 0xCFFFFFFFFFFFFFFFuLL, v152);
            }
            while ( v152 != v153 );
          }
        }
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v142 + 4LL * (((unsigned int)v128 >> 3) & 0x1FF));
      }
      goto LABEL_400;
    }
    if ( v129 )
    {
      if ( v129 == 7 )
      {
        v130 = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        v131 = KeGetCurrentPrcb();
        if ( v129 == 5 )
          v130 = v131->SelfmapLockHandle;
        else
          v130 = &v131->SelfmapLockHandle[3];
      }
    }
    else
    {
      v130 = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v130, retaddr);
LABEL_372:
      v133 = KeGetCurrentPrcb();
      v134 = v133->SchedulerAssist;
      if ( v134 )
      {
        if ( v133->NestingLevel <= 1u )
        {
          v135 = v134[5] - 1;
          v134[5] = v135;
          if ( !v135 )
            KiRemoveSystemWorkPriorityKick(v133);
        }
      }
LABEL_400:
      *((_QWORD *)v8 + 6) = 0LL;
      *((_BYTE *)v8 + 8) = 1;
      goto LABEL_401;
    }
    _m_prefetchw(v130);
    v132 = (__int64)v130->LockQueue.Next;
    if ( !v130->LockQueue.Next )
    {
      if ( v130 == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)v130->LockQueue.Lock,
                                            0LL,
                                            (signed __int64)v130) )
        goto LABEL_372;
      v132 = KxWaitForLockChainValid((__int64 *)v130);
    }
    v130->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v132 + 8), 1uLL);
    goto LABEL_372;
  }
  return (unsigned int)v10;
}
