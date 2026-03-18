/*
 * XREFs of PopCheckForIdleness @ 0x1400EE110
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PopCheckForWork @ 0x1400EE334 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 *     PopDiagTraceIdleCheck @ 0x1400EE6D0 (PopDiagTraceIdleCheck.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // di
  int v2; // esi
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned int v5; // edi
  int v6; // r15d
  signed int v7; // esi
  __int64 v8; // rcx
  signed int v9; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  unsigned __int16 *v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int16 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+42h] [rbp-Eh]
  __int16 v18; // [rsp+46h] [rbp-Ah]

  v17 = 0;
  v18 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v2 = qword_140442F98;
  v3 = MEMORY[0xFFFFF78000000320];
  v13 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( dword_140442F6C )
  {
    if ( byte_140442F95 )
    {
      v4 = v3 - v2;
      if ( (int)v3 - v2 <= 0 )
      {
        byte_140442F95 = 0;
        goto LABEL_23;
      }
      v15 = qword_140572748[0];
      v5 = 100;
      v16 = 0;
      v14 = (unsigned __int16 *)KeActiveProcessors;
      v6 = 0;
      v7 = 100;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v14) )
      {
        v9 = 100
           * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v12] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v12] + 24028))
           / v4;
        if ( v9 < v7 )
          v7 = 100
             * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v12] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v12] + 24028))
             / v4;
        v6 += v9;
      }
      if ( v7 > 100 )
      {
        v7 = 100;
      }
      else if ( v7 < 0 )
      {
        v7 = 0;
      }
      if ( v6 / ActiveProcessorCount <= 100 )
      {
        v5 = v6 / ActiveProcessorCount;
        if ( v6 / ActiveProcessorCount < 0 )
          v5 = 0;
      }
      dword_140442F68 += PopIdleScanInterval;
      dword_140442F64 = v7;
      PopSIdle = v5;
      PopDiagTraceIdleCheck(v8, (unsigned int)v7, v5);
      v3 = v13;
      if ( !PopPlatformAoAc
        && PopPreSleepNotificationSeconds + 120 <= (unsigned int)dword_140442F6C
        && dword_140442F68 + PopPreSleepNotificationSeconds >= (unsigned int)dword_140442F6C
        && !PopIsAboutToSleep )
      {
        PopIsAboutToSleep = 1;
        PopQueueWorkItem(&PopPreSleepNotifyWorkItem, 1LL);
      }
    }
    v15 = qword_140572748[0];
    v14 = (unsigned __int16 *)KeActiveProcessors;
    qword_140442F98 = v3;
    byte_140442F95 = 1;
    v16 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v14) )
      *(_DWORD *)(KiProcessorBlock[v12] + 24028) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v12] + 24) + 652LL);
  }
LABEL_23:
  PopGetPolicyWorker(PopPlatformAoAc != 0 ? 128 : 8);
  return PopCheckForWork();
}
