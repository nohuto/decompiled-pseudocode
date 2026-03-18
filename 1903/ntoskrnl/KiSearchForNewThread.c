/*
 * XREFs of KiSearchForNewThread @ 0x1400130A4
 * Callers:
 *     KiIdleSchedule @ 0x140012A80 (KiIdleSchedule.c)
 * Callees:
 *     KiSearchForNewThreadOnNode @ 0x140013520 (KiSearchForNewThreadOnNode.c)
 *     KiEnterDeferredReadyState @ 0x140015188 (KiEnterDeferredReadyState.c)
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x140042260 (KiSelectReadyThread.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     MmGetNextNode @ 0x1400806F4 (MmGetNextNode.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400E8BF8 (KiSelectThreadFromSchedulingGroup.c)
 *     KiCheckThreadAffinity @ 0x1400F9574 (KiCheckThreadAffinity.c)
 *     KiSetProcessorIdle @ 0x14013AB5C (KiSetProcessorIdle.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsProcessorBusySoftParked @ 0x1401BE8AC (KiIsProcessorBusySoftParked.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThread(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 ready; // rdi
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 i; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v19; // eax
  __int64 v20; // rdx
  struct _KPRCB *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 result; // rax
  int IsProcessorBusySoftParked; // esi
  __int64 v28; // rdi
  char v29; // al
  char v30; // cl
  __int64 v31; // rdx
  char v32; // di
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // eax
  __int64 v36; // rsi
  unsigned int v37; // ebp
  unsigned __int64 v38; // rdi
  unsigned int NextNode; // eax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  char IsThreadRankNonZero; // al
  char v43; // cl
  __int64 v44; // rdx
  int v45; // [rsp+60h] [rbp+8h] BYREF
  int v46; // [rsp+70h] [rbp+18h] BYREF
  int v47; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
LABEL_39:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
    if ( *(_BYTE *)(v2 + 388) == 1 )
      *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 132) - *(_DWORD *)(v2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v2 + 388) = 2;
    return v2;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      if ( KiPerfIsoEnabled )
      {
        v6 = **(_QWORD **)(a1 + 192) - ((**(_QWORD **)(a1 + 192) >> 1) & 0x5555555555555555LL);
        if ( (unsigned int)((0x101010101010101LL
                           * (((v6 & 0x3333333333333333LL)
                             + ((v6 >> 2) & 0x3333333333333333LL)
                             + (((v6 & 0x3333333333333333LL) + ((v6 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
          break;
        v7 = *(_QWORD *)(a1 + 200);
        v8 = *(_QWORD *)(a1 + 24920);
        if ( v7 != v8 )
        {
          v9 = v8 & ~v7;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL) & v9) == 0 )
          {
            _BitScanForward64(&v10, v9);
            v11 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                   + (unsigned int)v10];
            v47 = v11;
            if ( (*(_DWORD *)(KiProcessorBlock[v11] + 236) & 0x10) == 0 )
              break;
          }
        }
      }
      ready = 0LL;
      for ( i = a1 + 22896; ; i = v13 + 392 )
      {
        v14 = *(_QWORD *)(i + 8);
        if ( (v14 & 1) != 0 )
        {
          if ( v14 == 1 )
            goto LABEL_17;
          v15 = v14 ^ (i | 1);
        }
        else
        {
          v15 = *(_QWORD *)(i + 8);
        }
        if ( !v15 )
          break;
        v13 = v15 - 88;
        ready = KiSelectThreadFromSchedulingGroup(a1, v15 - 88, 0LL);
        if ( ready )
          break;
      }
      if ( !ready )
        break;
    }
LABEL_18:
    if ( (unsigned int)KiCheckThreadAffinity(ready) )
    {
      if ( (*(_BYTE *)(ready + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v16, a1), v43 = 1, !IsThreadRankNonZero) )
      {
        v43 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(a1 + 56) = v43;
      if ( *(_QWORD *)(a1 + 25016) )
      {
        v44 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a1 + 24) )
          v44 = (unsigned int)v43;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v44, 0LL);
      }
      *(_QWORD *)(a1 + 8) = ready;
      if ( *(_BYTE *)(ready + 388) == 1 )
        *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(ready + 388) = 2;
      if ( a2 )
        KiSetProcessorIdle(a1, 0LL, 0LL);
      return ready;
    }
    KiEnterDeferredReadyState();
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5] - 1;
        SchedulerAssist[5] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
      }
    }
    KiDeferredReadyThread(a1, ready);
    v21 = KeGetCurrentPrcb();
    v45 = 0;
    while ( 1 )
    {
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v23 = v22[5];
          v22[5] = v23 + 1;
          if ( v23 == -1 )
            KiRemoveSystemWorkPriorityKick(v21, v20);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      v24 = v21->SchedulerAssist;
      if ( v24 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v25 = v24[5] - 1;
          v24[5] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(v21, v20);
        }
      }
      do
        KeYieldProcessorEx(&v45);
      while ( *(_QWORD *)(a1 + 48) );
    }
    if ( a2 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 16) = 0LL;
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
      goto LABEL_39;
  }
LABEL_17:
  ready = KiSelectReadyThread(0LL, a1);
  if ( ready )
    goto LABEL_18;
  if ( PoSoftParkingAllowed )
    IsProcessorBusySoftParked = KiIsProcessorBusySoftParked(a1);
  else
    IsProcessorBusySoftParked = 0;
  if ( !a2 )
  {
    KiSetProcessorIdle(a1, 1LL, 0LL);
    v28 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(v28 + 2) & 4) == 0 || (v29 = KiIsThreadRankNonZero(*(_QWORD *)(a1 + 24), a1), v30 = 1, !v29) )
      v30 = *(_BYTE *)(v28 + 195);
    **(_BYTE **)(a1 + 56) = v30;
    if ( *(_QWORD *)(a1 + 25016) )
    {
      v31 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v28 != *(_QWORD *)(a1 + 24) )
        v31 = (unsigned int)v30;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 25016), v31, 0LL);
    }
  }
  v32 = *(_BYTE *)(a1 + 35) & 2;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v35 = v34[5] - 1;
      v34[5] = v35;
      if ( !v35 )
        KiRemoveSystemWorkPriorityKick(v33, v34);
    }
  }
  if ( v32 && !IsProcessorBusySoftParked )
    return 0LL;
  v36 = *(_QWORD *)(a1 + 192);
  v46 = 0;
  v37 = *(unsigned __int16 *)(v36 + 146);
  LODWORD(v38) = *(_DWORD *)(v36 + 128);
LABEL_64:
  result = KiSearchForNewThreadOnNode(a1, v36);
  if ( !result )
  {
    v38 = (unsigned int)v38 & (unsigned __int64)~(1LL << *(_WORD *)(v36 + 146));
    if ( (_DWORD)v38 )
    {
      while ( 1 )
      {
        NextNode = MmGetNextNode(v37, &v46);
        v40 = NextNode;
        if ( NextNode == -1 )
          break;
        v41 = (unsigned int)v38;
        if ( _bittest64(&v41, v40) )
        {
          v36 = KeNodeBlock[v40];
          goto LABEL_64;
        }
      }
    }
    return 0LL;
  }
  return result;
}
