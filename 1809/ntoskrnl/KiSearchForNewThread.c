/*
 * XREFs of KiSearchForNewThread @ 0x140056AE0
 * Callers:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x1400D1CD0 (KiIdleSchedule.c)
 * Callees:
 *     KiSearchForNewThreadOnProcessor @ 0x1400570B0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140057A20 (KiSelectReadyThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x1400C32D0 (KiDeferredReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1400D1500 (KiIsThreadRankNonZero.c)
 *     KiSetProcessorIdle @ 0x1400D73C4 (KiSetProcessorIdle.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140116E58 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSetSchedulerAssistPriority @ 0x14029981C (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 ready; // rdi
  int v3; // ebp
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r9
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // eax
  struct _KPRCB *v19; // rdi
  _DWORD *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdi
  char IsThreadRankNonZero; // al
  char v32; // cl
  __int64 v33; // rdx
  char v34; // di
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v37; // eax
  __int64 v38; // r14
  int v39; // edx
  char v40; // r13
  int v41; // r12d
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  int v45; // r15d
  unsigned __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  int v50; // r15d
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  int v54; // [rsp+70h] [rbp+8h]
  int v55; // [rsp+80h] [rbp+18h] BYREF

  ready = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( ready )
  {
LABEL_45:
    *(_QWORD *)(a1 + 16) = 0LL;
    KiUpdatePriorityMatrixThreadState(a1, ready, 0LL, 2LL);
    return ready;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( ready )
      goto LABEL_21;
    if ( !KiPerfIsoEnabled
      || (v6 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL),
          (unsigned int)((0x101010101010101LL
                        * (((v6 & 0x3333333333333333LL)
                          + ((v6 >> 2) & 0x3333333333333333LL)
                          + (((v6 & 0x3333333333333333LL) + ((v6 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
      && ((v7 = *(_QWORD *)(a1 + 200), v8 = *(_QWORD *)(a1 + 24920), v7 == v8)
       || (v9 = v8 & ~v7, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v9) != 0)
       || (_BitScanForward64(&v10, v9),
           (*(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                            + (unsigned int)v10]]
                      + 236) & 0x10) != 0)) )
    {
      ready = 0LL;
      v11 = *(_QWORD *)(a1 + 22904);
      if ( (v11 & 1) == 0 )
      {
        v12 = *(_QWORD *)(a1 + 22904);
LABEL_12:
        while ( v12 )
        {
          v13 = v12 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a1, v12 - 88, 0LL);
          if ( ready )
            break;
          v14 = *(_QWORD *)(v13 + 400);
          if ( (v14 & 1) != 0 )
          {
            if ( v14 == 1 )
              goto LABEL_20;
            v12 = v14 ^ ((v13 + 392) | 1);
          }
          else
          {
            v12 = *(_QWORD *)(v13 + 400);
          }
        }
        if ( ready )
          goto LABEL_21;
        goto LABEL_20;
      }
      if ( v11 != 1 )
      {
        v12 = v11 ^ ((a1 + 22896) | 1);
        goto LABEL_12;
      }
    }
LABEL_20:
    ready = KiSelectReadyThread(0LL, a1);
    if ( !ready )
    {
      if ( !a2 )
      {
        v25 = *(_QWORD *)(a1 + 25016);
        v26 = *(_QWORD *)(a1 + 192);
        v27 = *(unsigned __int8 *)(a1 + 35);
        if ( v25 )
          *(_BYTE *)(v25 + 16) = 1;
        *(_BYTE *)(a1 + 11883) = 0;
        if ( (v27 & 1) != 0 )
        {
          v28 = v27 - 1;
          *(_BYTE *)(a1 + 35) = v28;
          if ( !v28 )
            _interlockedbittestandset64((volatile signed __int32 *)v26, *(unsigned __int8 *)(a1 + 209));
          _interlockedbittestandset64((volatile signed __int32 *)(v26 + 16), *(unsigned __int8 *)(a1 + 209));
          v29 = *(_QWORD *)(a1 + 24920);
          if ( (*(_QWORD *)(v26 + 16) & v29) == v29 )
            _InterlockedOr64((volatile signed __int64 *)(v26 + 8), v29);
        }
        v30 = *(_QWORD *)(a1 + 24);
        if ( (*(_BYTE *)(v30 + 2) & 4) == 0
          || (IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(a1 + 24), a1), v32 = 1, !IsThreadRankNonZero) )
        {
          v32 = *(_BYTE *)(v30 + 195);
        }
        **(_BYTE **)(a1 + 56) = v32;
        if ( *(_QWORD *)(a1 + 25016) )
        {
          v33 = (unsigned int)KiVpThreadSystemWorkPriority;
          if ( v30 != *(_QWORD *)(a1 + 24) )
            v33 = (unsigned int)v32;
          KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v33, 0LL, v15);
        }
      }
      v34 = *(_BYTE *)(a1 + 35) & 2;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v37 = SchedulerAssist[5] - 1;
          SchedulerAssist[5] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !v34 )
      {
        v38 = *(_QWORD *)(a1 + 192);
        v39 = *(unsigned __int8 *)(a1 + 208);
        v40 = *(_BYTE *)(a1 + 209);
        v54 = v39;
        v41 = *(unsigned __int16 *)(v38 + 146);
        LODWORD(v42) = *(_DWORD *)(v38 + 128);
LABEL_69:
        v43 = *(_QWORD *)(v38 + 152);
        if ( *(unsigned __int16 *)(v38 + 146) == v41 )
          v43 &= ~*(_QWORD *)(a1 + 24896);
        if ( v43 )
        {
          v44 = __ROR8__(v43, v40);
          v45 = v39 << 6;
          while ( 1 )
          {
            _BitScanForward64(&v46, v44);
            v44 ^= 1LL << v46;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       0LL,
                       *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v45
                                                                                       + (((_BYTE)v46 + v40) & 0x3F)]]
                                 + 24904));
            if ( result )
              return result;
            if ( !v44 )
            {
              v39 = v54;
              break;
            }
          }
        }
        v47 = *(_QWORD *)(v38 + 136);
        if ( *(unsigned __int16 *)(v38 + 146) == v41 )
          v47 ^= *(_QWORD *)(a1 + 200);
        v48 = ~*(_QWORD *)(v38 + 16) & v47;
        if ( v48 )
        {
          v49 = __ROR8__(v48, v40);
          v50 = v39 << 6;
          do
          {
            _BitScanForward64(&v51, v49);
            v49 ^= 1LL << v51;
            result = KiSearchForNewThreadOnProcessor(
                       a1,
                       KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v50 + (((_BYTE)v51 + v40) & 0x3F)]],
                       0LL);
            if ( result )
              return result;
          }
          while ( v49 );
        }
        v42 = (unsigned int)v42 & (unsigned __int64)~(1LL << *(_WORD *)(v38 + 146));
        if ( (_DWORD)v42 )
        {
          while ( ++v3 != (unsigned __int16)KeNumberNodes )
          {
            v52 = *((unsigned __int16 *)qword_14043B110 + v3 + v41 * (unsigned int)(unsigned __int16)KeNumberNodes);
            v53 = (unsigned int)v42;
            if ( _bittest64(&v53, v52) )
            {
              v38 = KeNodeBlock[v52];
              v39 = v54;
              goto LABEL_69;
            }
          }
        }
      }
      return 0LL;
    }
LABEL_21:
    if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      break;
    if ( *(_BYTE *)(ready + 388) == 1 )
      *(_DWORD *)(ready + 116) |= 2u;
    KiSetThreadState(ready, 7LL);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    v16 = KeGetCurrentPrcb();
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v18 = v17[5] - 1;
        v17[5] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    KiDeferredReadyThread(a1, ready);
    v19 = KeGetCurrentPrcb();
    v55 = 0;
    while ( 1 )
    {
      v20 = v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v21 = v20[5];
          v20[5] = v21 + 1;
          if ( v21 == -1 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v22 = v19->SchedulerAssist;
      if ( v22 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v23 = v22[5] - 1;
          v22[5] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      do
        KeYieldProcessorEx(&v55);
      while ( *(_QWORD *)(a1 + 48) );
    }
    if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 16) = 0LL;
    ready = *(_QWORD *)(a1 + 16);
    if ( ready )
      goto LABEL_45;
  }
  KiUpdatePriorityMatrixThreadState(a1, ready, 2LL, 2LL);
  if ( a2 )
    KiSetProcessorIdle(a1, 0LL, 0LL);
  return ready;
}
