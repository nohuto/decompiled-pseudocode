/*
 * XREFs of PopCheckForIdleness @ 0x1400D5820
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
 *     PopDiagTraceIdleCheck @ 0x1400D5C50 (PopDiagTraceIdleCheck.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 PopCheckForIdleness()
{
  signed int ActiveProcessorCount; // r12d
  unsigned __int8 CurrentIrql; // di
  int v2; // esi
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v5; // r14d
  unsigned int v6; // esi
  int v7; // r15d
  signed int v8; // edi
  __int64 v9; // rcx
  signed int v10; // eax
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
  v2 = qword_140442F38;
  v3 = MEMORY[0xFFFFF78000000320];
  v13 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( byte_140442F35 )
  {
    v5 = v3 - v2;
    if ( (int)v3 - v2 <= 0 )
    {
      byte_140442F35 = 0;
      goto LABEL_34;
    }
    v15 = qword_140572748[0];
    v16 = 0;
    v6 = 100;
    v14 = (unsigned __int16 *)KeActiveProcessors;
    v7 = 0;
    v8 = 100;
    if ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v14) )
    {
      do
      {
        v10 = 100
            * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v12] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v12] + 24028))
            / v5;
        if ( v10 < v8 )
          v8 = 100
             * (*(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v12] + 24) + 652LL) - *(_DWORD *)(KiProcessorBlock[v12] + 24028))
             / v5;
        v7 += v10;
      }
      while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v14) );
      v3 = v13;
      if ( v8 <= 100 )
      {
        if ( v8 < 0 )
          v8 = 0;
      }
      else
      {
        v8 = 100;
      }
    }
    if ( v7 / ActiveProcessorCount <= 100 )
    {
      v6 = v7 / ActiveProcessorCount;
      if ( v7 / ActiveProcessorCount < 0 )
        v6 = 0;
    }
    dword_140442F04 = v8;
    PopSIdle = v6;
    if ( !PopPlatformAoAc )
    {
      if ( dword_140442F0C )
      {
        dword_140442F08 += PopIdleScanInterval;
        PopDiagTraceIdleCheck(v9, (unsigned int)v8, v6);
        if ( !PopPlatformAoAc
          && PopPreSleepNotificationSeconds + 120 <= (unsigned int)dword_140442F0C
          && dword_140442F08 + PopPreSleepNotificationSeconds >= (unsigned int)dword_140442F0C
          && !PopIsAboutToSleep )
        {
          PopIsAboutToSleep = 1;
          PopQueueWorkItem(&PopPreSleepNotifyWorkItem, 1LL);
        }
      }
    }
  }
  v15 = qword_140572748[0];
  v14 = (unsigned __int16 *)KeActiveProcessors;
  qword_140442F38 = v3;
  byte_140442F35 = 1;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v14) )
    *(_DWORD *)(KiProcessorBlock[v12] + 24028) = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[v12] + 24) + 652LL);
LABEL_34:
  PopGetPolicyWorker(PopPlatformAoAc != 0 ? 128 : 8);
  return PopCheckForWork();
}
