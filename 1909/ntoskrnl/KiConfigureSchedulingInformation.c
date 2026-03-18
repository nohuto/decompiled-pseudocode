/*
 * XREFs of KiConfigureSchedulingInformation @ 0x14059F060
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1405AB130 (KiInitializeDynamicProcessorDpc.c)
 *     KiConfigureAllSchedulingInformation @ 0x1409ED5F4 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140014B90 (KiIsThreadRankNonZero.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeQueryNodeActiveAffinity @ 0x140118A60 (KeQueryNodeActiveAffinity.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140185AA4 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureSchedulingInformation(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  int v12; // ecx
  unsigned int v13; // edi
  unsigned __int8 CurrentIrql; // r15
  USHORT v15; // cx
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rsi
  int v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  struct _KPRCB *v21; // rdi
  int ProcCount; // eax
  int v23; // ecx
  unsigned __int64 GroupSetMember; // rax
  __int64 NextThread; // r14
  char v26; // cl
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  unsigned __int64 v30; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v32; // [rsp+28h] [rbp-40h]
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v34; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 Mask; // [rsp+48h] [rbp-20h]
  __int64 v36; // [rsp+50h] [rbp-18h]
  USHORT Count; // [rsp+B8h] [rbp+50h] BYREF
  int v39; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v40; // [rsp+C8h] [rbp+60h]

  v2 = *(_DWORD *)(a1 + 24596);
  v34 = 0LL;
  Mask = 0LL;
  v4 = a1;
  v36 = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  if ( v2 )
  {
    v5 = *(_QWORD *)(a1 + 8LL * (v2 - 1) + 24944);
    *(_QWORD *)(a1 + 24936) = v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24936);
  }
  if ( !v5 )
    *(_QWORD *)(a1 + 24936) = *(_QWORD *)(a1 + 200);
  LODWORD(v6) = *(unsigned __int8 *)(a1 + 209);
  v7 = 0LL;
  v40 = 0;
  if ( v2 )
  {
    v8 = ~*(_QWORD *)(a1 + 24920);
    while ( (v8 & *(_QWORD *)(a1 + 8 * v7 + 24944)) == 0 )
    {
      v7 = (unsigned int)(v7 + 1);
      v40 = v7;
      if ( (unsigned int)v7 >= v2 )
        goto LABEL_11;
    }
    v9 = *(_QWORD *)(a1 + 8 * v7 + 24944);
    _BitScanForward64((unsigned __int64 *)&v6, v9);
    *(_QWORD *)(v4 + 24928) = v9;
  }
LABEL_11:
  v10 = *(_QWORD *)(v4 + 192);
  *(_DWORD *)(v4 + 24916) = v6;
  if ( !a2 && *(_DWORD *)(v4 + 36) == *(_DWORD *)(v10 + 172) )
  {
    v12 = KiMaximumSharedReadyQueueSize;
    if ( !KiMaximumSharedReadyQueueSize )
      v12 = 1;
    v13 = v12 & 0xFFFFFEFF;
    if ( (v12 & 0x100) == 0 )
      v13 = v12;
    if ( v13 > 0x40 )
      v13 = 64;
    CurrentIrql = KeGetCurrentIrql();
    v32 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v15 = *(_WORD *)(v10 + 146);
    *(_QWORD *)(v10 + 152) = 0LL;
    KeQueryNodeActiveAffinity(v15, &Affinity, &Count);
    SharedReadyQueue = *(_KSHARED_READY_QUEUE **)(v4 + 24904);
    v17 = 0;
    v18 = (v13 + Count - 1) / v13;
    LOWORD(v36) = Affinity.Group;
    v34 = 0LL;
    v19 = Count % v18;
    Mask = Affinity.Mask;
    v20 = Count / v18;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v39, &v34) )
    {
      v21 = (struct _KPRCB *)KiProcessorBlock[v39];
      ProcCount = SharedReadyQueue->ProcCount;
      if ( v17 == ProcCount )
        SharedReadyQueue = v21->SharedReadyQueue;
      v23 = 0;
      if ( v17 != ProcCount )
        v23 = v17;
      if ( !v23 )
      {
        SharedReadyQueue->ProcCount = v20;
        if ( v19 )
        {
          --v19;
          SharedReadyQueue->ProcCount = v20 + 1;
        }
      }
      GroupSetMember = v21->GroupSetMember;
      v17 = v23 + 1;
      v21->SharedReadyQueue = SharedReadyQueue;
      SharedReadyQueue->Affinity |= GroupSetMember;
      NextThread = (__int64)v21->NextThread;
      v40 = v21->GroupIndex - SharedReadyQueue->LowProcIndex;
      v21->PriorityState = &SharedReadyQueue->RunningSummary[v40];
      if ( !NextThread )
        NextThread = (__int64)v21->CurrentThread;
      if ( KiIsThreadRankNonZero(NextThread, v21) )
        v26 = 1;
      else
        v26 = *(_BYTE *)(NextThread + 195);
      *v21->PriorityState = v26;
    }
    v34 = 0LL;
    v4 = a1;
    LOWORD(v36) = Affinity.Group;
    Mask = Affinity.Mask;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v39, &v34) )
    {
      v27 = KiProcessorBlock[v39];
      v28 = *(_QWORD *)(v27 + 24904);
      if ( *(_BYTE *)(v28 + 595) > 1u )
        *(_QWORD *)(v27 + 24896) = *(_QWORD *)(v28 + 600);
      v29 = *(_BYTE *)(v27 + 209);
      if ( v29 == *(_BYTE *)(v28 + 593) && *(_BYTE *)(v28 + 595) > 1u )
      {
        *(_DWORD *)(v27 + 24912) = 1;
        *(_BYTE *)(v28 + 596) = v29;
        _BitScanReverse64(&v30, *(_QWORD *)(v28 + 600));
        v40 = v30;
        *(_BYTE *)(v28 + 592) = v30 - *(_BYTE *)(v28 + 593) + 1;
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v32);
  }
  return KiConfigureCpuSetSchedulingInformation(v4);
}
