/*
 * XREFs of RestartContext @ 0x1C001EAF0
 * Callers:
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     RestartCtxtCallback @ 0x1C001E9F0 (RestartCtxtCallback.c)
 *     AMLIRestartContext @ 0x1C00631C0 (AMLIRestartContext.c)
 *     SleepQueueDpc @ 0x1C0066F50 (SleepQueueDpc.c)
 *     AsyncCallBack @ 0x1C0067E10 (AsyncCallBack.c)
 *     TimeoutCallback @ 0x1C0068330 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C00BD9D4 (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x1C002A790 (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(PSLIST_ENTRY ListEntry, char a2)
{
  __int64 v2; // rax
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rbp
  unsigned __int32 v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned int inserted; // ebx

  v2 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v7 = *((_QWORD *)&ListEntry[7].Next + 1);
  v8 = *((_QWORD *)&ListEntry[25].Next + 1);
  v9 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0082830 )
  {
    v10 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0082828 + 1, 1u);
    if ( (_DWORD)qword_1C0082828 == 204 )
      v11 = v10 % 0xCC;
    else
      v11 = v10 % (unsigned int)qword_1C0082828;
    v12 = 72LL * v11;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0082830 + v12) = 1380275028;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 24) = v8;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 40) = v9;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 56) = v5;
    *(_QWORD *)((char *)qword_1C0082830 + v12 + 64) = v7;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !ListEntry[27].Next )
      ListEntry[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    LODWORD(ListEntry[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C0082700);
    if ( (gdwfAMLI & 4) == 0 || !(unsigned __int8)ExTryQueueWorkItem(&ListEntry[22].Next + 1, 1LL) )
      OSQueueWorkItem(&ListEntry[22].Next + 1);
    return 32772LL;
  }
  else
  {
    byte_1C0082700 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !ListEntry[27].Next )
      ListEntry[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    inserted = InsertReadyQueue(ListEntry, a2);
    KeReleaseSpinLock(&SpinLock, byte_1C0082700);
    return inserted;
  }
}
