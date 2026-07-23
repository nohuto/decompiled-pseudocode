/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x140038A80
 * Callers:
 *     ExAllocateHeapPool @ 0x1400378E0 (ExAllocateHeapPool.c)
 *     RtlpHpLfhBucketAllocate @ 0x14016F170 (RtlpHpLfhBucketAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x14001D7C0 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140111840 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140111FE4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140119FA4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1401201B4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14012044C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhSlotAddSubsegment @ 0x140120720 (RtlpHpLfhSlotAddSubsegment.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x14012693C (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentSetUnusedBytes @ 0x14016F264 (RtlpHpLfhSubsegmentSetUnusedBytes.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpLfhIncrementDataSlot @ 0x1401BFA44 (RtlpLfhIncrementDataSlot.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // r10d
  unsigned int v9; // edi
  signed __int64 v10; // rsi
  signed __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  unsigned __int16 v19; // ax
  volatile signed __int64 *v20; // rdi
  volatile signed __int64 *v21; // r12
  signed __int64 v22; // r10
  signed __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  int v27; // ecx
  unsigned __int64 v28; // rdx
  bool v29; // zf
  signed __int64 v30; // rax
  unsigned int v31; // r13d
  unsigned int v32; // edi
  int v33; // r14d
  __int64 v34; // r14
  char v35; // cl
  unsigned int v36; // r10d
  unsigned __int64 v37; // r12
  __int64 v38; // r8
  int v39; // edx
  signed __int16 *v40; // r12
  unsigned __int64 v41; // r13
  signed __int16 v42; // ax
  signed __int16 v43; // tt
  __int64 v44; // r8
  int v45; // r11d
  __int64 v46; // r14
  __int64 Subsegment; // rsi
  __int64 v49; // rsi
  __int64 v50; // r9
  __int64 v51; // rdx
  unsigned __int16 v52; // ax
  unsigned __int16 v53; // r12
  unsigned __int16 v54; // cx
  unsigned int v55; // r8d
  __int64 *v56; // r10
  _QWORD *v57; // r8
  __int64 **v58; // rcx
  __int64 v59; // rdx
  __int64 *v60; // rax
  __int64 *v61; // rax
  __int64 v62; // r12
  KIRQL v63; // r13
  __int64 v64; // r12
  unsigned __int64 v65; // r14
  __int64 v66; // rax
  unsigned __int64 v67; // r13
  unsigned int v68; // r15d
  unsigned int v69; // ecx
  bool v70; // cf
  __int64 v71; // rax
  unsigned int v72; // r8d
  volatile signed __int64 *v73; // rdi
  volatile signed __int64 *v74; // r12
  signed __int64 v75; // r10
  signed __int64 v76; // r9
  __int64 v77; // rax
  unsigned __int64 v78; // r9
  unsigned __int64 v79; // rcx
  int v80; // ecx
  signed __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdi
  int v84; // r15d
  unsigned int v85; // r15d
  char v86; // cl
  __int64 v87; // r14
  char v88; // r11
  __int64 v89; // r8
  __int64 v90; // r12
  __int64 v91; // rdx
  signed __int16 *v92; // r14
  signed __int16 *v93; // r13
  signed __int16 v94; // ax
  signed __int16 v95; // tt
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r10
  int v99; // edi
  KIRQL v100; // al
  unsigned __int64 v101; // rdx
  __int64 v102; // rax
  char v103; // cl
  struct _KTHREAD *v104; // r12
  ULONG_PTR v105; // r9
  KIRQL v106; // al
  struct _KPRCB *v107; // rcx
  unsigned __int64 v108; // rdx
  volatile signed __int64 *v109; // r12
  struct _KTHREAD *v110; // rdi
  ULONG_PTR v111; // r9
  unsigned int v112; // edx
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rcx
  _KLOCK_ENTRY *v116; // r13
  unsigned __int8 v117; // al
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  char v121; // cl
  int (__fastcall *v122)(_QWORD, unsigned __int64, _QWORD); // rax
  int v123; // r12d
  struct _KPRCB *v124; // rcx
  ULONG_PTR v125; // r10
  unsigned int v126; // edx
  __int64 v127; // rcx
  int v128; // eax
  __int64 v129; // rcx
  ULONG_PTR v130; // rdi
  unsigned __int8 v131; // al
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdi
  KIRQL v136; // si
  __int64 v137; // rax
  KIRQL v138; // al
  struct _KTHREAD *v139; // rsi
  unsigned int v140; // r8d
  int v141; // kr00_4
  KIRQL v142; // di
  struct _KPRCB *v143; // rcx
  struct _KTHREAD *v144; // rbx
  ULONG_PTR v145; // r9
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  char v148; // cl
  __int64 v149; // rdx
  __int64 v150; // rax
  unsigned int v151; // r14d
  __int64 v152; // rcx
  unsigned int v153; // r13d
  __int16 v154; // r13
  struct _KPRCB *v155; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v157; // edx
  __int64 v158; // rcx
  int v159; // eax
  __int64 v160; // rcx
  _KLOCK_ENTRY *v161; // r13
  unsigned __int8 v162; // al
  __int64 v163; // rdx
  __int64 v164; // r8
  __int64 v165; // r9
  unsigned __int8 v166; // r12
  unsigned int v167; // edx
  __int64 v168; // rcx
  int v169; // eax
  __int64 v170; // rcx
  _KLOCK_ENTRY *v171; // rdi
  unsigned __int8 v172; // r13
  __int64 v173; // rdx
  __int64 v174; // r8
  __int64 v175; // r9
  unsigned __int8 v176; // r13
  unsigned int v177; // edx
  __int64 v178; // rcx
  int v179; // eax
  __int64 v180; // rcx
  _KLOCK_ENTRY *v181; // r14
  unsigned __int8 v182; // al
  __int64 v183; // rdx
  __int64 v184; // r8
  __int64 v185; // r9
  KIRQL v186; // al
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // r9
  KIRQL v191; // al
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rdx
  __int64 v196; // r8
  __int64 v197; // r9
  volatile signed __int64 *v198; // r12
  struct _KTHREAD *v199; // r14
  unsigned int v200; // r8d
  unsigned int v201; // edx
  __int64 v202; // rcx
  int v203; // eax
  __int64 v204; // rcx
  _KLOCK_ENTRY *v205; // r13
  unsigned __int8 v206; // al
  __int64 v207; // rdx
  __int64 v208; // r8
  __int64 v209; // r9
  struct _KPRCB *v210; // rcx
  ULONG_PTR v211; // r15
  struct _KTHREAD *v212; // rbx
  ULONG_PTR v213; // r9
  unsigned __int8 v214; // si
  unsigned int v215; // edx
  __int64 v216; // rcx
  int v217; // eax
  __int64 v218; // rcx
  _KLOCK_ENTRY *v219; // rdi
  __int64 v220; // rdx
  __int64 v221; // rdx
  __int64 v222; // r8
  __int64 v223; // r9
  struct _KPRCB *v224; // rcx
  __int64 v225; // rdx
  __int64 v226; // r8
  __int64 v227; // r9
  struct _KTHREAD *v228; // rbx
  ULONG_PTR v229; // r9
  unsigned __int8 v230; // r12
  unsigned int v231; // edx
  __int64 v232; // rcx
  int v233; // eax
  __int64 v234; // rcx
  _KLOCK_ENTRY *v235; // r14
  unsigned __int8 v236; // r13
  __int64 v237; // rdx
  __int64 v238; // r8
  __int64 v239; // r9
  struct _KPRCB *v240; // rcx
  KIRQL v241; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v242; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v243; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v244; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v245; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v246; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v247; // [rsp+41h] [rbp-BFh]
  int v248; // [rsp+44h] [rbp-BCh]
  int v249; // [rsp+44h] [rbp-BCh]
  int v250; // [rsp+44h] [rbp-BCh]
  unsigned int v251; // [rsp+44h] [rbp-BCh]
  int v252; // [rsp+44h] [rbp-BCh]
  int v253; // [rsp+44h] [rbp-BCh]
  int v254; // [rsp+48h] [rbp-B8h]
  int v255; // [rsp+4Ch] [rbp-B4h]
  unsigned int v256; // [rsp+4Ch] [rbp-B4h]
  unsigned int v257; // [rsp+4Ch] [rbp-B4h]
  char v258; // [rsp+50h] [rbp-B0h] BYREF
  char v259[7]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v260; // [rsp+58h] [rbp-A8h]
  unsigned int v261; // [rsp+60h] [rbp-A0h]
  __int64 v262; // [rsp+68h] [rbp-98h]
  __int64 v263; // [rsp+70h] [rbp-90h]
  int v264; // [rsp+78h] [rbp-88h]
  __int64 v265; // [rsp+80h] [rbp-80h]
  int v266; // [rsp+88h] [rbp-78h] BYREF
  int v267; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v268; // [rsp+90h] [rbp-70h]
  int v269; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v270; // [rsp+9Ch] [rbp-64h]
  int v271; // [rsp+A0h] [rbp-60h] BYREF
  int v272; // [rsp+A4h] [rbp-5Ch] BYREF
  int v273; // [rsp+A8h] [rbp-58h] BYREF
  int v274; // [rsp+ACh] [rbp-54h] BYREF
  int v275; // [rsp+B0h] [rbp-50h] BYREF
  int v276; // [rsp+B4h] [rbp-4Ch]
  int v277; // [rsp+B8h] [rbp-48h]
  int v278; // [rsp+BCh] [rbp-44h]
  int v279; // [rsp+C0h] [rbp-40h]
  int v280; // [rsp+C4h] [rbp-3Ch] BYREF
  int v281; // [rsp+C8h] [rbp-38h]
  int v282; // [rsp+CCh] [rbp-34h]
  int v283; // [rsp+D0h] [rbp-30h]
  int v284; // [rsp+D4h] [rbp-2Ch]
  int v285; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v286; // [rsp+E0h] [rbp-20h]
  volatile signed __int64 *v287; // [rsp+E8h] [rbp-18h]
  __int64 v288; // [rsp+F0h] [rbp-10h]
  volatile signed __int64 *v289; // [rsp+F8h] [rbp-8h]
  int v290; // [rsp+100h] [rbp+0h]
  int v291; // [rsp+104h] [rbp+4h]
  unsigned int v295; // [rsp+178h] [rbp+78h]

  v295 = a4;
  v5 = a3;
  v6 = 0LL;
  v7 = a1;
  v241 = -1;
  v8 = 0;
  v254 = 0;
  v264 = 0;
  v9 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v265 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(v5 + 56));
          v10 = *(_QWORD *)(v5 + 56);
          if ( (v10 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 56), v10 - 1, v10);
              if ( v10 == v11 )
                break;
              v264 = 1;
              v10 = v11;
              if ( (v11 & 0xFFF) == 0 )
                goto LABEL_43;
            }
            v12 = v10 & 0xFFFFFFFFFFFFF000uLL;
            if ( v12 )
              break;
          }
LABEL_43:
          if ( v8 == 2 )
            goto LABEL_44;
          v254 = 2;
          v100 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), *(unsigned __int8 *)(v7 + 57));
          v8 = 2;
          v7 = a1;
          v241 = v100;
        }
        if ( v8 )
        {
          if ( *(_BYTE *)(v7 + 57) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
            if ( KiIrqlFlags )
            {
              v142 = v241;
              if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v241 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                __writecr8(v241);
                LODWORD(v13) = 0;
                v254 = 0;
                goto LABEL_8;
              }
            }
            else
            {
              v142 = v241;
            }
            __writecr8(v142);
            LODWORD(v13) = 0;
            v254 = 0;
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5 + 16);
            v269 = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v5 + 16, v7, v6, a4) == 1 )
              SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            v176 = ++CurrentThread->AbAllocationRegionCount;
            v177 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            v29 = !_BitScanReverse((unsigned int *)&v178, v177);
            v283 = v178;
            if ( v29 )
              goto LABEL_291;
            while ( 1 )
            {
              v179 = 1 << v178;
              v180 = v178;
              v181 = &CurrentThread->LockEntries[v180];
              v177 &= ~v179;
              if ( (v181->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v181->LockState.0 & 1) == 0
                && (*(_QWORD *)&v181->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
                && v181->LockState.SessionId == SessionId )
              {
                v181->AcquiredByte &= ~1u;
                if ( v181->LockState.0 )
                  break;
              }
              v29 = !_BitScanReverse((unsigned int *)&v178, v177);
              v283 = v178;
              if ( v29 )
                goto LABEL_291;
            }
            if ( !v181 )
            {
LABEL_291:
              if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5 + 16, SessionId, 0LL);
            }
            else
            {
              v181->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v181->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v180].TreeNode);
              v269 = v181->BoostBitmap.AllFields & 0x1FFFF;
              v181->BoostBitmap.AllFields &= 0xFFFE0000;
              v181->ThreadLocalFlags &= ~1u;
              v181->LockState.0 = 0LL;
              v182 = 1 << (((char *)v181 - (char *)CurrentThread - 800) / 96);
              if ( v176 == 1 )
                CurrentThread->AbEntrySummary |= v182;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v182);
            }
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(CurrentThread, v5 + 16, &v269);
            v29 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v29
              && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v183, v184, v185);
            LODWORD(v13) = 0;
            v254 = 0;
          }
        }
        else
        {
          LODWORD(v13) = 0;
        }
LABEL_8:
        v14 = v12 + 48;
        v15 = *(unsigned __int16 *)(v12 + 34) + (unsigned __int64)*(unsigned __int8 *)(v12 + 39);
        v287 = (volatile signed __int64 *)(v12 + 48);
        v16 = 3LL;
        v17 = 2 * v15;
        v18 = RtlpSearchWidth[*(unsigned __int8 *)(v5 + 1)];
        v261 = (unsigned int)v12 >> 12;
        v255 = qword_1404367A8 ^ *(_DWORD *)(v12 + 40) ^ ((unsigned int)v12 >> 12);
        v270 = (unsigned __int16)v255;
        if ( v295 >= (unsigned __int16)v255 )
          v16 = 1LL;
        v286 = 2 * v15;
        v248 = v18;
        v262 = v16;
        if ( (*(_BYTE *)(a1 + 62) & 2) == 0 )
        {
          v19 = RtlpLfhIncrementDataSlot(v18, v16, 0LL);
          v16 = v262;
          LODWORD(v13) = RtlpLowFragHeapRandomData[v19];
          LODWORD(v18) = v248;
        }
        v20 = (volatile signed __int64 *)(v14 + 8 * ((2 * (unsigned __int64)*(unsigned __int16 *)(v12 + 36)) >> 6));
        v21 = (volatile signed __int64 *)(v14 + 8 * ((2 * v15 - 1) >> 6));
LABEL_13:
        if ( v17 < 0x40 )
        {
          if ( (unsigned int)v17 < (unsigned int)v18 )
            LODWORD(v18) = v17;
          v22 = *v20;
        }
        else
        {
          while ( 1 )
          {
            v22 = *v20;
            if ( (*v20 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            if ( v20 == v21 )
              v20 = v287;
            else
              ++v20;
          }
          if ( v20 == v21 && (v286 & 0x3F) != 0 && ((unsigned __int8)v286 & 0x3Fu) < (unsigned __int64)(unsigned int)v18 )
            LODWORD(v18) = v286 & 0x3F;
        }
        v249 = v18;
        v13 = ((unsigned int)(v18 * v13) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v23 = ~v22;
          if ( (unsigned int)v18 < 0x40 )
          {
            _BitScanForward64(&v101, v23 & 0x5555555555555555LL);
            v102 = 1LL << v18;
            v13 = (unsigned int)(v101 + v13);
            v103 = v101;
            v16 = v262;
            v24 = ((v102 - 1) << v103) & 0x5555555555555555LL;
          }
          else
          {
            v24 = 0x5555555555555555LL;
          }
          v25 = __ROR8__(v24 & v23, v13);
          _BitScanForward64(&v26, v25);
          v27 = ((_BYTE)v13 + (_BYTE)v26) & 0x3F;
          v28 = v22 | (v16 << v27);
          v291 = v27;
          v30 = _InterlockedCompareExchange64(v20, v28, v22);
          v29 = v22 == v30;
          v22 = v30;
          if ( v29 )
            break;
          LODWORD(v18) = v249;
          v16 = v262;
          if ( (v30 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v17 = v286;
            if ( ++v20 > v21 )
              v20 = v287;
            goto LABEL_13;
          }
        }
        v31 = v270;
        v32 = (v27 + ((unsigned int)(v20 - v287) << 6)) >> 1;
        v33 = v32 * v270;
        *(_WORD *)(v12 + 36) = v32;
        v34 = (unsigned int)HIWORD(v255) + v33;
        if ( *(_BYTE *)(v12 + 45) > 1u )
        {
          v35 = *(_BYTE *)(v12 + 44);
          v25 = 0LL;
          v36 = 0;
          v37 = v12 + *(unsigned __int16 *)(v12 + 46);
          v38 = (unsigned int)v34 >> v35;
          LODWORD(v262) = (unsigned __int16)qword_1404367A8 ^ (unsigned __int16)v261 ^ *(unsigned __int16 *)(v12 + 40);
          v258 = -1;
          v39 = ((unsigned int)(v34 + v262 - 1) >> v35) - v38;
          v242 = -1;
          v13 = 2 * v38;
          v40 = (signed __int16 *)(v13 + v37);
          v260 = v13;
          _m_prefetchw(v40);
          v28 = (unsigned __int64)&v40[v39 + 1];
          v256 = 0;
          v250 = -1;
          v263 = 0LL;
          if ( (unsigned __int64)v40 < v28 )
          {
            v41 = v28;
            do
            {
              while ( 1 )
              {
                v42 = *v40;
                while ( v42 > 0 )
                {
                  v43 = v42;
                  v42 = _InterlockedCompareExchange16(v40, v42 + 1, v42);
                  if ( v43 == v42 )
                  {
                    v44 = v260;
                    v25 = v256;
                    v45 = v250;
                    goto LABEL_27;
                  }
                }
                if ( v36 )
                  break;
                v268 = 1;
                v106 = RtlpHpAcquireLockExclusive((volatile LONG *)(v12 + 24), *(unsigned __int8 *)(a1 + 57));
                v36 = v268;
                v242 = v106;
              }
              v44 = v260;
              v45 = v250;
              if ( v42 )
              {
                v25 = ++v256;
                v263 = v260 >> 1;
                if ( v250 == -1 )
                {
                  v45 = v260 >> 1;
                  v250 = v45;
                }
              }
              else
              {
                v25 = --v256;
              }
              *v40 = v42 + 1;
LABEL_27:
              v13 = v44 + 2;
              ++v40;
              v260 = v13;
            }
            while ( (unsigned __int64)v40 < v41 );
            v5 = a3;
            v31 = v270;
            if ( (_DWORD)v25 )
            {
              v25 = (unsigned int)((_DWORD)v25 << *(_BYTE *)(v12 + 44));
              v28 = ((int)v25 >> 31) & 0xFFF;
              if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
              {
                v28 = a1;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), (int)v25 / 4096);
              }
            }
            if ( v45 == -1 )
            {
              if ( v36 )
              {
                v109 = (volatile signed __int64 *)(v12 + 24);
                if ( *(_BYTE *)(a1 + 57) )
                {
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v242 < 2u )
                  {
                    v124 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v124->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(v124);
                  }
                  __writecr8(v242);
                }
                else
                {
                  if ( (_InterlockedExchangeAdd64(v109, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v12 + 24);
                  v272 = 0;
                  v110 = KeGetCurrentThread();
                  v260 = (__int64)v110;
                  if ( (unsigned int)MiGetSystemRegionType(v12 + 24, v28, v13, v25) == 1 )
                    v111 = (unsigned int)MmGetSessionIdEx(v110->ApcState.Process);
                  else
                    v111 = 0xFFFFFFFFLL;
                  --v110->SpecialApcDisable;
                  v125 = (ULONG_PTR)v110;
                  v245 = ++v110->AbAllocationRegionCount;
                  v126 = ((char)v110->AbEntrySummary | (char)v110->AbOrphanedEntrySummary) ^ 0x3F;
                  v29 = !_BitScanReverse((unsigned int *)&v127, v126);
                  v278 = v127;
                  if ( v29 )
                    goto LABEL_175;
                  while ( 1 )
                  {
                    v128 = 1 << v127;
                    v129 = 96 * v127;
                    v130 = v129 + v125 + 800;
                    v126 &= ~v128;
                    if ( (*(_BYTE *)(v130 + 26) & 1) != 0
                      && (*(_DWORD *)(v130 + 32) & 1) == 0
                      && (*(_QWORD *)(v130 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v109 & 0x7FFFFFFFFFFFFFFCLL)
                      && *(_DWORD *)(v130 + 40) == (_DWORD)v111 )
                    {
                      *(_BYTE *)(v130 + 26) &= ~1u;
                      if ( *(_QWORD *)(v130 + 32) )
                        break;
                    }
                    v29 = !_BitScanReverse((unsigned int *)&v127, v126);
                    v278 = v127;
                    if ( v29 )
                      goto LABEL_175;
                  }
                  if ( !v130 )
                  {
LABEL_175:
                    if ( (*(_DWORD *)(v125 + 120) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, v125, v12 + 24, v111, 0LL);
                  }
                  else
                  {
                    *(_BYTE *)(v130 + 32) |= 2u;
                    if ( *(__int64 *)(v130 + 32) < 0 )
                    {
                      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)(v129 + v125 + 800));
                      v125 = v260;
                    }
                    v272 = *(_DWORD *)(v130 + 88) & 0x1FFFF;
                    *(_DWORD *)(v130 + 88) &= 0xFFFE0000;
                    *(_BYTE *)(v130 + 25) &= ~1u;
                    *(_QWORD *)(v130 + 32) = 0LL;
                    v131 = 1 << ((__int64)(v130 - v125 - 800) / 96);
                    if ( v245 == 1 )
                      *(_BYTE *)(v125 + 792) |= v131;
                    else
                      _InterlockedOr8((volatile signed __int8 *)(v125 + 1422), v131);
                  }
                  --*(_BYTE *)(v125 + 794);
                  KiAbThreadRemoveBoosts(v125, v12 + 24, &v272);
                  v135 = v260;
                  v29 = (*(_WORD *)(v260 + 486))++ == 0xFFFF;
                  if ( v29 && *(_QWORD *)(v135 + 152) != v135 + 152 )
                    KiCheckForKernelApcDelivery();
                  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v132, v133, v134);
                }
              }
            }
            else
            {
              v121 = *(_BYTE *)(v12 + 44);
              v258 = v242;
              v122 = (int (__fastcall *)(_QWORD, unsigned __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24));
              v285 = v263 - v45 + 1;
              v123 = v285 << v121;
              v252 = v45 << v121;
              if ( v122(*(_QWORD *)a1, v12 + (unsigned int)(v45 << v121), (unsigned int)(v285 << v121)) < 0 )
              {
                RtlpHpLfhSubsegmentDecBlockCounts(a1, v12, (unsigned int)v34, (unsigned int)v262);
                v198 = (volatile signed __int64 *)(v12 + 24);
                if ( *(_BYTE *)(a1 + 57) )
                {
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 24));
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v242 < 2u )
                  {
                    v210 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v210->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(v210);
                  }
                  __writecr8(v242);
                }
                else
                {
                  if ( (_InterlockedExchangeAdd64(v198, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v12 + 24);
                  v271 = 0;
                  v199 = KeGetCurrentThread();
                  if ( (unsigned int)MiGetSystemRegionType(v12 + 24, v195, v196, v197) == 1 )
                    v200 = MmGetSessionIdEx(v199->ApcState.Process);
                  else
                    v200 = -1;
                  --v199->SpecialApcDisable;
                  v247 = ++v199->AbAllocationRegionCount;
                  v201 = ((char)v199->AbEntrySummary | (char)v199->AbOrphanedEntrySummary) ^ 0x3F;
                  v29 = !_BitScanReverse((unsigned int *)&v202, v201);
                  v277 = v202;
                  if ( v29 )
                    goto LABEL_368;
                  while ( 1 )
                  {
                    v203 = 1 << v202;
                    v204 = v202;
                    v205 = &v199->LockEntries[v204];
                    v201 &= ~v203;
                    if ( (v205->AcquiredByte & 1) != 0
                      && (*(_DWORD *)&v205->LockState.0 & 1) == 0
                      && (*(_QWORD *)&v205->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v198 & 0x7FFFFFFFFFFFFFFCLL)
                      && v205->LockState.SessionId == v200 )
                    {
                      v205->AcquiredByte &= ~1u;
                      if ( v205->LockState.0 )
                        break;
                    }
                    v29 = !_BitScanReverse((unsigned int *)&v202, v201);
                    v277 = v202;
                    if ( v29 )
                      goto LABEL_368;
                  }
                  if ( !v205 )
                  {
LABEL_368:
                    if ( (*((_DWORD *)&v199->0 + 1) & 0x10000) == 0 )
                      KeBugCheckEx(0x162u, (ULONG_PTR)v199, v12 + 24, v200, 0LL);
                  }
                  else
                  {
                    v205->CrossThreadReleasableAndBusyByte |= 2u;
                    if ( (__int64)v205->LockState.LockState < 0 )
                      KiAbEntryRemoveFromTree(&v199->LockEntries[v204].TreeNode);
                    v271 = v205->BoostBitmap.AllFields & 0x1FFFF;
                    v205->BoostBitmap.AllFields &= 0xFFFE0000;
                    v205->ThreadLocalFlags &= ~1u;
                    v205->LockState.0 = 0LL;
                    v206 = 1 << ((char)((_BYTE)v205 - (_BYTE)v199 - 32) / 96);
                    if ( v247 == 1 )
                      v199->AbEntrySummary |= v206;
                    else
                      _InterlockedOr8((volatile signed __int8 *)&v199->AbOrphanedEntrySummary, v206);
                  }
                  --v199->AbAllocationRegionCount;
                  KiAbThreadRemoveBoosts(v199, v12 + 24, &v271);
                  v29 = v199->SpecialApcDisable++ == -1;
                  if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v199->ApcState.ApcListHead[0].Flink != &v199->152 )
                    KiCheckForKernelApcDelivery();
                  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v207, v208, v209);
                }
                v46 = 0LL;
                v28 = ~(3LL << ((2 * v32) & 0x3F));
                _InterlockedAnd64((volatile signed __int64 *)(v12 + 8 * ((unsigned __int64)(2 * v32) >> 6) + 48), v28);
                goto LABEL_32;
              }
              RtlpHpLfhSubsegmentIncBlockCounts(a1, v12, v252, v123, (__int64)&v285, 1, (__int64)&v258);
            }
          }
        }
        v46 = v12 + v34;
        if ( v295 < v31 )
        {
          v153 = v31 - v295;
          if ( v153 == 1 )
            v154 = 0x8000;
          else
            v154 = v153 & 0x3FFF;
          *(_WORD *)(((unsigned __int16)qword_1404367A8 ^ (unsigned __int16)v261 ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 40))
                   + v46
                   - 2) = v154;
        }
LABEL_32:
        if ( !v46 )
          RtlpHpLfhSubsegmentFreeBlock(a1, v12, 0LL, a5);
        if ( v254 )
        {
          v211 = v5 + 16;
          if ( *(_BYTE *)(a1 + 57) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v211);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v241 < 2u )
            {
              v224 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v224->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v224);
            }
            __writecr8(v241);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v211, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v211);
            v273 = 0;
            v212 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v211, v28, v13, v25) == 1 )
              v213 = (unsigned int)MmGetSessionIdEx(v212->ApcState.Process);
            else
              v213 = 0xFFFFFFFFLL;
            --v212->SpecialApcDisable;
            v214 = ++v212->AbAllocationRegionCount;
            v215 = ((char)v212->AbEntrySummary | (char)v212->AbOrphanedEntrySummary) ^ 0x3F;
            v29 = !_BitScanReverse((unsigned int *)&v216, v215);
            v279 = v216;
            if ( v29 )
              goto LABEL_405;
            while ( 1 )
            {
              v217 = 1 << v216;
              v218 = v216;
              v219 = &v212->LockEntries[v218];
              v215 &= ~v217;
              if ( (v219->AcquiredByte & 1) != 0
                && (*(_DWORD *)&v219->LockState.0 & 1) == 0
                && (*(_QWORD *)&v219->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v211 & 0x7FFFFFFFFFFFFFFCLL)
                && v219->LockState.SessionId == (_DWORD)v213 )
              {
                v219->AcquiredByte &= ~1u;
                if ( v219->LockState.0 )
                  break;
              }
              v29 = !_BitScanReverse((unsigned int *)&v216, v215);
              v279 = v216;
              if ( v29 )
                goto LABEL_405;
            }
            if ( !v219 )
            {
LABEL_405:
              if ( (*((_DWORD *)&v212->0 + 1) & 0x10000) == 0 )
                KeBugCheckEx(0x162u, (ULONG_PTR)v212, v211, v213, 0LL);
            }
            else
            {
              v219->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v219->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&v212->LockEntries[v218].TreeNode);
              v273 = v219->BoostBitmap.AllFields & 0x1FFFF;
              v219->BoostBitmap.AllFields &= 0xFFFE0000;
              v219->ThreadLocalFlags &= ~1u;
              v219->LockState.0 = 0LL;
              v220 = ((char *)v219 - (char *)v212 - 800) / 96;
              if ( v214 == 1 )
                v212->AbEntrySummary |= 1 << v220;
              else
                _InterlockedOr8((volatile signed __int8 *)&v212->AbOrphanedEntrySummary, 1 << v220);
            }
            --v212->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts(v212, v211, &v273);
            v29 = v212->SpecialApcDisable++ == -1;
            if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v212->ApcState.ApcListHead[0].Flink != &v212->152 )
              KiCheckForKernelApcDelivery();
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v221, v222, v223);
          }
        }
        goto LABEL_35;
      }
      if ( !v8 )
      {
        v254 = 1;
        v186 = RtlpHpAcquireLockShared((volatile LONG *)(v5 + 16), *(unsigned __int8 *)(v7 + 57));
        v7 = a1;
        v8 = 1;
        v241 = v186;
LABEL_44:
        v6 = 0LL;
      }
      if ( *(_QWORD *)(v5 + 8) )
        break;
      if ( v8 == 2 )
      {
        if ( *(_BYTE *)(v7 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
          if ( !KiIrqlFlags )
          {
LABEL_193:
            v136 = v241;
LABEL_194:
            __writecr8(v136);
            goto LABEL_195;
          }
          v136 = v241;
          if ( (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
            goto LABEL_194;
LABEL_224:
          if ( v136 < 2u )
          {
            v143 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v143->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v143);
          }
          goto LABEL_194;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5 + 16);
        v267 = 0;
        v139 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v5 + 16, v7, 0LL, a4) == 1 )
          v140 = MmGetSessionIdEx(v139->ApcState.Process);
        else
          v140 = -1;
        --v139->SpecialApcDisable;
        v246 = ++v139->AbAllocationRegionCount;
        v157 = ((char)v139->AbEntrySummary | (char)v139->AbOrphanedEntrySummary) ^ 0x3F;
        v29 = !_BitScanReverse((unsigned int *)&v158, v157);
        v276 = v158;
        if ( v29 )
          goto LABEL_253;
        while ( 1 )
        {
          v159 = 1 << v158;
          v160 = v158;
          v161 = &v139->LockEntries[v160];
          v157 &= ~v159;
          if ( (v161->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v161->LockState.0 & 1) == 0
            && (*(_QWORD *)&v161->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
            && v161->LockState.SessionId == v140 )
          {
            v161->AcquiredByte &= ~1u;
            if ( v161->LockState.0 )
              break;
          }
          v29 = !_BitScanReverse((unsigned int *)&v158, v157);
          v276 = v158;
          if ( v29 )
            goto LABEL_253;
        }
        if ( !v161 )
        {
LABEL_253:
          if ( (*((_DWORD *)&v139->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v139, v5 + 16, v140, 0LL);
        }
        else
        {
          v161->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v161->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v139->LockEntries[v160].TreeNode);
          v267 = 0;
          v267 = v161->BoostBitmap.AllFields & 0x1FFFF;
          v161->BoostBitmap.AllFields &= 0xFFFE0000;
          v161->ThreadLocalFlags &= ~1u;
          v161->LockState.0 = 0LL;
          v162 = 1 << ((char)((_BYTE)v161 - (_BYTE)v139 - 32) / 96);
          if ( v246 == 1 )
            v139->AbEntrySummary |= v162;
          else
            _InterlockedOr8((volatile signed __int8 *)&v139->AbOrphanedEntrySummary, v162);
        }
        --v139->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(v139, v5 + 16, &v267);
        v29 = v139->SpecialApcDisable++ == -1;
        if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v139->ApcState.ApcListHead[0].Flink != &v139->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v163, v164, v165);
      }
      else
      {
        if ( *(_BYTE *)(v7 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
            goto LABEL_193;
          v136 = v241;
          goto LABEL_224;
        }
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v5 + 16);
        KeAbPostRelease(v5 + 16);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v192, v193, v194);
      }
LABEL_195:
      Subsegment = RtlpHpLfhBucketGetSubsegment(a2, *(unsigned __int8 *)(a1 + 57));
      if ( !Subsegment )
      {
        Subsegment = RtlpHpLfhSubsegmentCreate(a1);
        if ( !Subsegment )
        {
          v46 = 0LL;
          goto LABEL_36;
        }
      }
      v254 = 2;
      v241 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), *(unsigned __int8 *)(a1 + 57));
      v137 = RtlpHpLfhSlotAddSubsegment(v5, Subsegment);
      v8 = 2;
      v6 = 0LL;
      v7 = a1;
      v265 = v137;
    }
    v49 = *(_QWORD *)(v5 + 24);
    v50 = v5 + 24;
    v51 = 1LL;
    if ( v9 )
      LOWORD(v51) = 4096;
    if ( v49 == v50 )
    {
LABEL_321:
      v49 = 0LL;
      goto LABEL_71;
    }
LABEL_49:
    v52 = *(_WORD *)(v49 + 32);
    v264 = 0;
    while ( 1 )
    {
      if ( (unsigned __int16)v51 < v52 )
      {
        v53 = v51;
      }
      else
      {
        v53 = v52;
        if ( v8 == 1 )
        {
          v49 = *(_QWORD *)v49;
          v6 = 0LL;
          if ( v49 == v50 )
            goto LABEL_321;
          goto LABEL_49;
        }
      }
      v54 = v52 - v53;
      v52 = _InterlockedCompareExchange16((volatile signed __int16 *)(v49 + 32), v52 - v53, v52);
      v55 = v53 + v54;
      if ( v52 == v55 )
        break;
      if ( v52 < v55 )
        v264 = 1;
    }
    if ( *(_WORD *)(v49 + 32) )
      goto LABEL_68;
    v56 = (__int64 *)v49;
    switch ( *(_BYTE *)(v49 + 38) )
    {
      case 0:
        v57 = (_QWORD *)(v5 + 8);
        goto LABEL_56;
      case 1:
        v50 = v5 + 40;
        v57 = 0LL;
LABEL_56:
        v58 = (__int64 **)(v5 + 40);
        if ( v50 )
        {
          v59 = *(_QWORD *)v49;
          v60 = *(__int64 **)(v49 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) == v49 && *v60 == v49 )
          {
            *v60 = v59;
            *(_QWORD *)(v59 + 8) = v60;
            if ( v57 )
              --*v57;
            goto LABEL_61;
          }
LABEL_414:
          __fastfail(3u);
        }
LABEL_61:
        *(_BYTE *)(v49 + 38) = 1;
        if ( v5 == -40 )
        {
          v51 = 0LL;
        }
        else
        {
          v61 = *(__int64 **)(v5 + 48);
          if ( (__int64 **)*v61 != v58 )
            goto LABEL_414;
          *(_QWORD *)v49 = v58;
          v51 = 0LL;
          *(_QWORD *)(v49 + 8) = v61;
          v56 = 0LL;
          *v61 = v49;
          *(_QWORD *)(v5 + 48) = v49;
        }
        if ( (*(_BYTE *)v5 & 1) == 0 && *(_QWORD *)(v5 + 8) > 8uLL )
        {
          v56 = *v58;
          v187 = **v58;
          if ( (__int64 **)(*v58)[1] != v58 || *(__int64 **)(v187 + 8) != v56 )
            goto LABEL_414;
          *v58 = (__int64 *)v187;
          *(_QWORD *)(v187 + 8) = v58;
          --MEMORY[0];
          *((_BYTE *)v56 + 38) = 2;
        }
        if ( v56 && *((_BYTE *)v56 + 38) == 2 )
          v56[2] = 0LL;
        break;
      case 2:
        v50 = 0LL;
        v57 = 0LL;
        goto LABEL_56;
    }
    v8 = v254;
LABEL_68:
    if ( v53 > 1u )
      *(_QWORD *)(v5 + 56) = v49 ^ ((unsigned __int16)(v53 - 1) ^ (unsigned __int16)v49) & 0xFFF;
    v6 = 0LL;
LABEL_71:
    v62 = a1;
    if ( v8 == 2 )
    {
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
        if ( !KiIrqlFlags )
          goto LABEL_74;
        v63 = v241;
        if ( (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
LABEL_119:
          if ( v63 < 2u )
          {
            v107 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v107->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v107);
          }
        }
        goto LABEL_75;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5 + 16);
      v266 = 0;
      v104 = KeGetCurrentThread();
      v105 = (unsigned int)MiGetSystemRegionType(v5 + 16, v51, v6, v50) == 1
           ? (unsigned int)MmGetSessionIdEx(v104->ApcState.Process)
           : 0xFFFFFFFFLL;
      --v104->SpecialApcDisable;
      v244 = ++v104->AbAllocationRegionCount;
      v112 = ((char)v104->AbEntrySummary | (char)v104->AbOrphanedEntrySummary) ^ 0x3F;
      v29 = !_BitScanReverse((unsigned int *)&v113, v112);
      v284 = v113;
      if ( v29 )
        goto LABEL_156;
      while ( 1 )
      {
        v114 = 1 << v113;
        v115 = v113;
        v116 = &v104->LockEntries[v115];
        v112 &= ~v114;
        if ( (v116->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v116->LockState.0 & 1) == 0
          && (*(_QWORD *)&v116->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v5 + 16) & 0x7FFFFFFFFFFFFFFCLL)
          && v116->LockState.SessionId == (_DWORD)v105 )
        {
          v116->AcquiredByte &= ~1u;
          if ( v116->LockState.0 )
            break;
        }
        v29 = !_BitScanReverse((unsigned int *)&v113, v112);
        v284 = v113;
        if ( v29 )
          goto LABEL_156;
      }
      if ( !v116 )
      {
LABEL_156:
        if ( (*((_DWORD *)&v104->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v104, v5 + 16, v105, 0LL);
      }
      else
      {
        v116->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v116->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v104->LockEntries[v115].TreeNode);
        v266 = 0;
        v266 = v116->BoostBitmap.AllFields & 0x1FFFF;
        v116->BoostBitmap.AllFields &= 0xFFFE0000;
        v116->ThreadLocalFlags &= ~1u;
        v116->LockState.0 = 0LL;
        v117 = 1 << (((char *)v116 - (char *)v104 - 800) / 96);
        if ( v244 == 1 )
          v104->AbEntrySummary |= v117;
        else
          _InterlockedOr8((volatile signed __int8 *)&v104->AbOrphanedEntrySummary, v117);
      }
      --v104->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v104, v5 + 16, &v266);
      v29 = v104->SpecialApcDisable++ == -1;
      if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v104->ApcState.ApcListHead[0].Flink != &v104->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v118, v119, v120);
      v62 = a1;
    }
    else if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 16));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v63 = v241;
        goto LABEL_119;
      }
LABEL_74:
      v63 = v241;
LABEL_75:
      __writecr8(v63);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v5 + 16);
      KeAbPostRelease(v5 + 16);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v188, v189, v190);
    }
    if ( v49 )
      break;
    v254 = 2;
    v191 = RtlpHpAcquireLockExclusive((volatile LONG *)(v5 + 16), *(unsigned __int8 *)(v62 + 57));
    v8 = 2;
    v6 = 0LL;
    v7 = a1;
    v241 = v191;
  }
  v64 = v49 + 48;
  v65 = *(unsigned __int16 *)(v49 + 34) + (unsigned __int64)*(unsigned __int8 *)(v49 + 39);
  v289 = (volatile signed __int64 *)(v49 + 48);
  v66 = *(unsigned __int8 *)(v5 + 1);
  v268 = (unsigned int)v49 >> 12;
  v67 = 2 * v65;
  v68 = RtlpSearchWidth[v66];
  LODWORD(v66) = ((unsigned int)v49 >> 12) ^ *(_DWORD *)(v49 + 40);
  v288 = 2 * v65;
  LODWORD(v66) = qword_1404367A8 ^ v66;
  v69 = (unsigned __int16)v66;
  v70 = v295 < (unsigned __int16)v66;
  LODWORD(v262) = v66;
  v71 = 3LL;
  v261 = v69;
  if ( !v70 )
    v71 = 1LL;
  v263 = v71;
  if ( (*(_BYTE *)(a1 + 62) & 2) != 0 )
    v72 = 0;
  else
    v72 = RtlpLowFragHeapRandomData[(unsigned __int16)((__int64 (*)(void))RtlpLfhIncrementDataSlot)()];
  v73 = (volatile signed __int64 *)(v64 + 8 * ((2 * (unsigned __int64)*(unsigned __int16 *)(v49 + 36)) >> 6));
  v74 = (volatile signed __int64 *)(v64 + 8 * ((2 * v65 - 1) >> 6));
LABEL_82:
  if ( v67 < 0x40 )
  {
    if ( (unsigned int)v67 < v68 )
      v68 = v67;
    v75 = *v73;
  }
  else
  {
    while ( 1 )
    {
      v75 = *v73;
      if ( (*v73 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      if ( v73 == v74 )
        v73 = v289;
      else
        ++v73;
    }
    if ( v73 == v74 && (v288 & 0x3F) != 0 && ((unsigned __int8)v288 & 0x3Fu) < (unsigned __int64)v68 )
      v68 = v288 & 0x3F;
  }
  v72 = ((v68 * v72) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v76 = ~v75;
    if ( v68 < 0x40 )
    {
      _BitScanForward64(&v108, v76 & 0x5555555555555555LL);
      v72 += v108;
      v77 = (((1LL << v68) - 1) << v108) & 0x5555555555555555LL;
    }
    else
    {
      v77 = 0x5555555555555555LL;
    }
    v78 = __ROR8__(v77 & v76, v72);
    _BitScanForward64(&v79, v78);
    v80 = ((_BYTE)v72 + (_BYTE)v79) & 0x3F;
    v290 = v80;
    v81 = _InterlockedCompareExchange64(v73, v75 | (v263 << v80), v75);
    v29 = v75 == v81;
    v75 = v81;
    if ( v29 )
      break;
    if ( (v81 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v67 = v288;
      if ( ++v73 > v74 )
        v73 = v289;
      goto LABEL_82;
    }
  }
  v82 = WORD1(v262);
  v83 = (v80 + ((unsigned int)(v73 - v289) << 6)) >> 1;
  v84 = v83 * v261;
  v263 = v83;
  *(_WORD *)(v49 + 36) = v83;
  v85 = v82 + v84;
  if ( *(_BYTE *)(v49 + 45) <= 1u )
    goto LABEL_99;
  v86 = *(_BYTE *)(v49 + 44);
  v78 = 0LL;
  v87 = *(unsigned __int16 *)(v49 + 46);
  v88 = -1;
  v89 = v85 >> v86;
  v268 = (unsigned __int16)qword_1404367A8 ^ (unsigned __int16)v268 ^ *(unsigned __int16 *)(v49 + 40);
  v259[0] = -1;
  v243 = -1;
  v90 = 2 * v89;
  v91 = ((v85 + v268 - 1) >> v86) - (unsigned int)v89 + 1;
  v92 = (signed __int16 *)(2 * v89 + v49 + v87);
  _m_prefetchw(v92);
  v93 = &v92[v91];
  v257 = 0;
  v260 = 0LL;
  v251 = -1;
  if ( v92 >= v93 )
  {
LABEL_99:
    v46 = v49 + v85;
    if ( v295 < v261 )
      RtlpHpLfhSubsegmentSetUnusedBytes(v49, v49 + v85, v261 - v295, v78);
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v94 = *v92;
        while ( v94 > 0 )
        {
          v95 = v94;
          v94 = _InterlockedCompareExchange16(v92, v94 + 1, v94);
          if ( v95 == v94 )
          {
            v96 = v257;
            v97 = v251;
            LODWORD(v98) = v260;
            goto LABEL_95;
          }
        }
        if ( (_DWORD)v78 )
          break;
        LODWORD(v262) = 1;
        v138 = RtlpHpAcquireLockExclusive((volatile LONG *)(v49 + 24), *(unsigned __int8 *)(a1 + 57));
        v78 = 1LL;
        v88 = v138;
        v243 = v138;
      }
      v97 = v251;
      if ( v94 )
      {
        v96 = v257 + 1;
        v98 = v90 >> 1;
        ++v257;
        v260 = v90 >> 1;
        if ( v251 == -1 )
        {
          v97 = (unsigned int)v98;
          v251 = v90 >> 1;
        }
      }
      else
      {
        LODWORD(v98) = v260;
        v96 = --v257;
      }
      *v92 = v94 + 1;
LABEL_95:
      ++v92;
      v90 += 2LL;
    }
    while ( v92 < v93 );
    v99 = v263;
    if ( (_DWORD)v96 )
    {
      v141 = (_DWORD)v96 << *(_BYTE *)(v49 + 44);
      v96 = (v141 >> 31) & 0xFFF;
      if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
      {
        v96 = a1;
        _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 58) + a1 + 24), v141 / 4096);
      }
    }
    if ( (_DWORD)v97 == -1 )
    {
      if ( (_DWORD)v78 )
      {
        if ( *(_BYTE *)(a1 + 57) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v49 + 24));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v243 < 2u )
          {
            v155 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v155->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v155);
          }
          __writecr8(v243);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v49 + 24);
          v275 = 0;
          v144 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v49 + 24, v96, v97, v78) == 1 )
            v145 = (unsigned int)MmGetSessionIdEx(v144->ApcState.Process);
          else
            v145 = 0xFFFFFFFFLL;
          --v144->SpecialApcDisable;
          v166 = ++v144->AbAllocationRegionCount;
          v167 = ((char)v144->AbEntrySummary | (char)v144->AbOrphanedEntrySummary) ^ 0x3F;
          v29 = !_BitScanReverse((unsigned int *)&v168, v167);
          v282 = v168;
          if ( v29 )
            goto LABEL_273;
          while ( 1 )
          {
            v169 = 1 << v168;
            v170 = v168;
            v171 = &v144->LockEntries[v170];
            v167 &= ~v169;
            if ( (v171->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v171->LockState.0 & 1) == 0
              && (*(_QWORD *)&v171->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v49 + 24) & 0x7FFFFFFFFFFFFFFCLL)
              && v171->LockState.SessionId == (_DWORD)v145 )
            {
              v171->AcquiredByte &= ~1u;
              if ( v171->LockState.0 )
                break;
            }
            v29 = !_BitScanReverse((unsigned int *)&v168, v167);
            v282 = v168;
            if ( v29 )
              goto LABEL_273;
          }
          if ( !v171 )
          {
LABEL_273:
            if ( (*((_DWORD *)&v144->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v144, v49 + 24, v145, 0LL);
          }
          else
          {
            v171->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v171->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v144->LockEntries[v170].TreeNode);
            v275 = v171->BoostBitmap.AllFields & 0x1FFFF;
            v171->BoostBitmap.AllFields &= 0xFFFE0000;
            v171->ThreadLocalFlags &= ~1u;
            v171->LockState.0 = 0LL;
            v172 = 1 << ((char)((_BYTE)v171 - (_BYTE)v144 - 32) / 96);
            if ( v166 == 1 )
              v144->AbEntrySummary |= v172;
            else
              _InterlockedOr8((volatile signed __int8 *)&v144->AbOrphanedEntrySummary, v172);
          }
          --v144->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(v144, v49 + 24, &v275);
          v29 = v144->SpecialApcDisable++ == -1;
          if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v144->ApcState.ApcListHead[0].Flink != &v144->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v173, v174, v175);
        }
      }
      goto LABEL_99;
    }
    v148 = *(_BYTE *)(v49 + 44);
    v253 = (_DWORD)v97 << v148;
    v149 = v49 + (unsigned int)((_DWORD)v97 << v148);
    v150 = RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24);
    v280 = v98 - v97 + 1;
    v151 = v280 << v148;
    v152 = *(_QWORD *)a1;
    v259[0] = v88;
    if ( ((int (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64))(a1 ^ v150))(v152, v149, v151, v78) >= 0 )
    {
      RtlpHpLfhSubsegmentIncBlockCounts(a1, v49, v253, v151, (__int64)&v280, 1, (__int64)v259);
      goto LABEL_99;
    }
    RtlpHpLfhSubsegmentDecBlockCounts(a1, v49, v85, v268);
    if ( *(_BYTE *)(a1 + 57) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v49 + 24));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v243 < 2u )
      {
        v240 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v240->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v240);
      }
      __writecr8(v243);
      v46 = 0LL;
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v49 + 24);
      v46 = 0LL;
      v274 = 0;
      v228 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v49 + 24, v225, v226, v227) == 1 )
        v229 = (unsigned int)MmGetSessionIdEx(v228->ApcState.Process);
      else
        v229 = 0xFFFFFFFFLL;
      --v228->SpecialApcDisable;
      v230 = ++v228->AbAllocationRegionCount;
      v231 = ((char)v228->AbEntrySummary | (char)v228->AbOrphanedEntrySummary) ^ 0x3F;
      v29 = !_BitScanReverse((unsigned int *)&v232, v231);
      v281 = v232;
      if ( v29 )
      {
LABEL_439:
        if ( (*((_DWORD *)&v228->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v228, v49 + 24, v229, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v233 = 1 << v232;
          v234 = v232;
          v235 = &v228->LockEntries[v234];
          v231 &= ~v233;
          if ( (v235->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v235->LockState.0 & 1) == 0
            && (*(_QWORD *)&v235->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((v49 + 24) & 0x7FFFFFFFFFFFFFFCLL)
            && v235->LockState.SessionId == (_DWORD)v229 )
          {
            v235->AcquiredByte &= ~1u;
            if ( v235->LockState.0 )
              break;
          }
          v29 = !_BitScanReverse((unsigned int *)&v232, v231);
          v281 = v232;
          if ( v29 )
            goto LABEL_438;
        }
        if ( !v235 )
        {
LABEL_438:
          v46 = 0LL;
          goto LABEL_439;
        }
        v235->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v235->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v228->LockEntries[v234].TreeNode);
        v274 = v235->BoostBitmap.AllFields & 0x1FFFF;
        v235->BoostBitmap.AllFields &= 0xFFFE0000;
        v235->ThreadLocalFlags &= ~1u;
        v235->LockState.0 = 0LL;
        v236 = 1 << ((char)((_BYTE)v235 - (_BYTE)v228 - 32) / 96);
        if ( v230 == 1 )
          v228->AbEntrySummary |= v236;
        else
          _InterlockedOr8((volatile signed __int8 *)&v228->AbOrphanedEntrySummary, v236);
        v46 = 0LL;
      }
      --v228->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v228, v49 + 24, &v274);
      v29 = v228->SpecialApcDisable++ == -1;
      if ( v29 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v228->ApcState.ApcListHead[0].Flink != &v228->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v237, v238, v239);
    }
    _InterlockedAnd64(
      (volatile signed __int64 *)(v49 + 8 * ((unsigned __int64)(unsigned int)(2 * v99) >> 6) + 48),
      ~(3LL << ((2 * v99) & 0x3F)));
  }
  if ( !v46 )
    RtlpHpLfhSubsegmentFreeBlock(a1, v49, 0LL, a5);
LABEL_35:
  Subsegment = v265;
LABEL_36:
  if ( v264 )
    RtlpHpLfhBucketUpdateAffinityMapping(a1, a2);
  if ( Subsegment )
    RtlpHpLfhBucketAddSubsegment(a1, a2, Subsegment, a5);
  return v46;
}
