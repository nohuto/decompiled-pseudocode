/*
 * XREFs of RestartContext @ 0x1C00237D0
 * Callers:
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     RestartCtxtCallback @ 0x1C00236D0 (RestartCtxtCallback.c)
 *     AMLIRestartContext @ 0x1C0061240 (AMLIRestartContext.c)
 *     SleepQueueDpc @ 0x1C0064F60 (SleepQueueDpc.c)
 *     AsyncCallBack @ 0x1C0065DAC (AsyncCallBack.c)
 *     TimeoutCallback @ 0x1C00662D0 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C00BA184 (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x1C002B178 (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(__int64 a1, char a2)
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

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *(_QWORD *)(a1 + 72);
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 408);
  v9 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0080840 )
  {
    v10 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0080838 + 1, 1u);
    if ( (_DWORD)qword_1C0080838 == 204 )
      v11 = v10 % 0xCC;
    else
      v11 = v10 % (unsigned int)qword_1C0080838;
    v12 = 72LL * v11;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0080840 + v12) = 1380275028;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 24) = v8;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 32) = a1;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 40) = v9;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 48) = a1;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 56) = v5;
    *(_QWORD *)((char *)qword_1C0080840 + v12 + 64) = v7;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    *(_DWORD *)(a1 + 64) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, byte_1C0080710);
    if ( (gdwfAMLI & 4) == 0 || !(unsigned __int8)ExTryQueueWorkItem(a1 + 360, 1LL) )
      OSQueueWorkItem(a1 + 360);
    return 32772LL;
  }
  else
  {
    byte_1C0080710 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    inserted = InsertReadyQueue((PSLIST_ENTRY)a1, a2);
    KeReleaseSpinLock(&SpinLock, byte_1C0080710);
    return inserted;
  }
}
