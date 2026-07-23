/*
 * XREFs of MiZeroAllPageFiles @ 0x14057CD54
 * Callers:
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiZeroPageFile @ 0x1402A6150 (MiZeroPageFile.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 MiZeroAllPageFiles()
{
  ULONG v0; // edi
  ULONG v1; // esi
  __int64 v2; // r15
  struct _KEVENT *v3; // rbp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  VfZeroAllPagesRunning = 1;
  KeWaitForSingleObject(&unk_14043DCE8, WrKernel, 0, 0, 0LL);
  v0 = Count;
  v1 = Count;
  if ( Count )
  {
    do
    {
      v2 = v1 - 1;
      v3 = (struct _KEVENT *)&Object[3 * v2 + 16];
      KeInitializeEvent(v3, NotificationEvent, 0);
      Object[v2] = v3;
      if ( (*(_BYTE *)(qword_14043F5E0[v2] + 204LL) & 0x40) != 0
        || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x775A6D4Du)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v2 + 16], 0, 0);
      }
      else
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)qword_14043F5E0[v2];
        PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)v3;
        if ( v1 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v2 + 16], 0, 0);
          MiZeroPageFile(PoolWithTag);
        }
        else
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
        }
      }
      --v1;
    }
    while ( (_DWORD)v2 );
  }
  if ( v0 > 1 )
    KeWaitForMultipleObjects(v0, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
