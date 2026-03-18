/*
 * XREFs of KiSelectReadyThread @ 0x140041FA0
 * Callers:
 *     KiSelectReadyThreadEx @ 0x1400101A0 (KiSelectReadyThreadEx.c)
 *     KiQuantumEnd @ 0x140011130 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140011F24 (KiGroupSchedulingQuantumEnd.c)
 *     KiSearchForNewThread @ 0x1400132D4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1400138D0 (KiSelectNextThread.c)
 *     KiRemoveBoostThread @ 0x140014690 (KiRemoveBoostThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140015500 (KiGroupSchedulingGenerationEnd.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KiChooseLowestRankedThread @ 0x1401156A8 (KiChooseLowestRankedThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x140014C20 (KiGetThreadEffectiveRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAddThreadToScbQueue @ 0x140115AB4 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsProcessorBusySoftParked @ 0x1401BF39C (KiIsProcessorBusySoftParked.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1402AEFC0 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSelectReadyThread(signed int a1, __int64 a2)
{
  __int64 v2; // r15
  signed int v3; // r14d
  __int64 v4; // r8
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdi
  unsigned int v9; // r13d
  __int64 v10; // rdx
  signed int v11; // ecx
  unsigned int v12; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebp
  int v19; // r12d
  _QWORD *v20; // r14
  _QWORD *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  int v28; // eax
  _QWORD *v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // r10
  __int64 v32; // r10
  __int64 v33; // r10
  int v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h]
  int v38; // [rsp+98h] [rbp+10h]
  signed int v39; // [rsp+A0h] [rbp+18h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 24904);
  v3 = a1;
  v4 = (unsigned int)(1 << a1);
  v40 = 1 << a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 80LL);
  v7 = (*(_BYTE *)(a2 + 35) & 2) == 0;
  v36 = v6;
  if ( !v7
    && (v6 & *(_QWORD *)(a2 + 24896)) != 0
    && (!PoSoftParkingAllowed || !(unsigned int)KiIsProcessorBusySoftParked(a2)) )
  {
    v2 = 0LL;
  }
  while ( 1 )
  {
    v8 = 0LL;
    if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
      return v8;
    v9 = *(_DWORD *)(a2 + 22808);
    LODWORD(v10) = -2;
    v38 = -2;
    v11 = -1;
    v39 = -1;
    if ( v9 >= (unsigned int)v4 )
    {
      _BitScanReverse((unsigned int *)&v11, v9);
      v39 = v11;
      v9 = 1 << v11;
    }
    if ( v2 )
    {
      v12 = *(_DWORD *)(v2 + 8);
      if ( v12 < (unsigned int)v4 )
      {
        v10 = 4294967294LL;
      }
      else
      {
        _BitScanReverse((unsigned int *)&v10, v12);
        v38 = v10;
      }
      v11 = v39;
      if ( (int)v10 > v39 || (_DWORD)v10 == v39 && !_bittest((const signed __int32 *)(a2 + 22812), v39) )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v35 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = SchedulerAssist[5];
              SchedulerAssist[5] = v15 + 1;
              if ( v15 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
            break;
          v16 = CurrentPrcb->SchedulerAssist;
          if ( v16 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v17 = v16[5] - 1;
              v16[5] = v17;
              if ( !v17 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v35);
          while ( *(_QWORD *)v2 );
        }
        v18 = *(_DWORD *)(v2 + 8);
LABEL_30:
        v8 = 0LL;
        if ( v18 >= v9 && v18 >= v40 )
        {
          _BitScanReverse((unsigned int *)&v19, v18);
          v38 = v19;
          v20 = (_QWORD *)(v2 + 16 * (v19 + 1LL));
          v18 ^= 1 << v19;
          v21 = (_QWORD *)*v20;
          while ( 1 )
          {
            v22 = *((unsigned __int8 *)v21 - 91);
            v8 = (__int64)(v21 - 27);
            if ( v22 >= 5 )
              v22 = KiConvertDynamicHeteroPolicy(v21 - 27, v10, a2);
            v23 = -1LL;
            if ( v22 )
            {
              v10 = *(_QWORD *)(a2 + 192);
              v23 = *(_QWORD *)(v10 + 24LL * (int)v22 + 200);
            }
            if ( (v23 & *(_QWORD *)(a2 + 200)) != 0 || (v23 & *(_QWORD *)(a2 + 24896) & v36) == 0 )
              break;
            v21 = (_QWORD *)*v21;
            if ( v21 == v20 )
              goto LABEL_30;
          }
          if ( (*(_DWORD *)(v8 + 120) & 0x400000) != 0 )
            _InterlockedAnd(*(volatile signed __int32 **)(v8 + 1520), 0xFFFBFFFF);
          v24 = (_QWORD *)*v21;
          v25 = *(_QWORD **)(v8 + 224);
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v25 != v21 )
LABEL_70:
            __fastfail(3u);
          *v25 = v24;
          v24[1] = v25;
          if ( v25 == v24 )
            *(_DWORD *)(v2 + 8) ^= 1 << v19;
          --*(_DWORD *)(v2 + 608);
          *(_QWORD *)(v2 + 616) -= *(unsigned int *)(v8 + 2032);
          *(_DWORD *)(v8 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v2, 0LL);
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v28 = v27[5] - 1;
            v27[5] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        v3 = a1;
        if ( v8 )
        {
          if ( v38 == v39 )
            _bittestandset((signed __int32 *)(a2 + 22812), v39);
          goto LABEL_66;
        }
        LODWORD(v10) = v38;
        v11 = v39;
      }
    }
    if ( v11 >= v3 )
    {
      v4 = *(_QWORD *)(a2 + 16 * (v11 + 1432LL));
      v8 = v4 - 216;
      if ( (*(_DWORD *)(v4 - 96) & 0x400000) != 0 )
      {
        _InterlockedAnd(*(volatile signed __int32 **)(v4 + 1304), 0xFFFBFFFF);
        LODWORD(v10) = v38;
        v11 = v39;
      }
      v29 = *(_QWORD **)v4;
      v30 = *(_QWORD **)(v4 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v30 != v4 )
        goto LABEL_70;
      *v30 = v29;
      v29[1] = v30;
      if ( v30 == v29 )
        *(_DWORD *)(a2 + 22808) ^= 1 << v11;
      --*(_DWORD *)(a2 + 23476);
      *(_QWORD *)(a2 + 23480) -= *(unsigned int *)(v4 + 1816);
      if ( v11 == (_DWORD)v10 )
        _bittestandreset((signed __int32 *)(a2 + 22812), v11);
    }
    if ( !v8 )
      return v8;
LABEL_66:
    v31 = *(_QWORD *)(v8 + 104);
    if ( !v31 )
      return v8;
    v32 = *(unsigned int *)(a2 + 216) + v31;
    if ( !v32 || !(unsigned int)KiGetThreadEffectiveRankNonZero(v8, v32, v4, 1, 0LL) )
      return v8;
    KiAddThreadToScbQueue(a2, v33, v8, 0LL);
    v4 = v40;
  }
}
