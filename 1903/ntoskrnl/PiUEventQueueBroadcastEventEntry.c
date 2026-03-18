/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x14071A9B0
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x14066A7A0 (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

void __fastcall PiUEventQueueBroadcastEventEntry(__int64 a1)
{
  PVOID *v2; // rsi
  __int64 *v3; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  PVOID *v5; // rdi
  int v6; // ecx
  char *v7; // rcx
  __int64 v8; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
  v2 = (PVOID *)PiUEventBroadcastEventQueue;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  if ( PiUEventBroadcastEventQueue != &PiUEventBroadcastEventQueue )
  {
    v5 = (PVOID *)PiUEventBroadcastEventQueue;
    do
    {
      v6 = *((_DWORD *)v5 + 5);
      if ( v6 == *(_DWORD *)(a1 + 20) && *((_DWORD *)v5 + 6) == *(_DWORD *)(a1 + 24) )
      {
        if ( v6 == 3 )
        {
          v7 = *(char **)((char *)v5 + 28) - *(_QWORD *)(a1 + 28);
          if ( !v7 )
            v7 = *(char **)((char *)v5 + 36) - *(_QWORD *)(a1 + 36);
          if ( !v7 )
          {
            RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 44));
            RtlInitUnicodeString(&String2, (PCWSTR)v5 + 22);
            if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
            {
LABEL_12:
              *((_BYTE *)v5 + 16) = 0;
              break;
            }
          }
        }
        else
        {
          if ( v6 != 2 )
            goto LABEL_12;
          v8 = *(_QWORD *)(a1 + 28) - *(_QWORD *)((char *)v5 + 28);
          if ( !v8 )
            v8 = *(_QWORD *)(a1 + 36) - *(_QWORD *)((char *)v5 + 36);
          if ( !v8 )
            goto LABEL_12;
        }
      }
      v5 = (PVOID *)*v5;
    }
    while ( v5 != &PiUEventBroadcastEventQueue );
  }
  *(_BYTE *)(a1 + 16) = 1;
  v3 = (__int64 *)qword_140460FF8;
  if ( *(PVOID **)qword_140460FF8 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v3;
  *v3 = a1;
  qword_140460FF8 = a1;
  KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
  if ( v2 == &PiUEventBroadcastEventQueue )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiUEventBroadcastEventWorker;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, BackgroundWorkQueue);
    }
  }
}
