/*
 * XREFs of CmpCmdInit @ 0x14076A1F8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140081CA0 (KeInitializeTimerEx.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PoRegisterCoalescingCallback @ 0x14076A750 (PoRegisterCoalescingCallback.c)
 *     CmpInitializeLazyWriters @ 0x14076A9A4 (CmpInitializeLazyWriters.c)
 */

__int64 __fastcall CmpCmdInit(char a1)
{
  int v2; // eax
  PVOID PoolWithTag; // rax
  unsigned __int64 v4; // rsi
  void *v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax

  CmpInitializeLazyWriters();
  CmpForceFlushWorkItem.Parameter = 0LL;
  CmpForceFlushWorkItem.List.Flink = 0LL;
  CmpForceFlushWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpForceFlushWorker;
  KeInitializeDpc(&CmpEnableLazyFlushDpc, (PKDEFERRED_ROUTINE)CmpEnableLazyFlushDpcRoutine, &CmpHoldLazyFlush);
  KeInitializeTimerEx(&CmpEnableLazyFlushTimer, NotificationTimer);
  v2 = CmpEnableLazyFlushBootDelayInterval;
  if ( CmpEnableLazyFlushBootDelayInterval < 60 )
  {
    v2 = 60;
    CmpEnableLazyFlushBootDelayInterval = 60;
  }
  if ( v2 > 600 )
  {
    v2 = 600;
    CmpEnableLazyFlushBootDelayInterval = 600;
  }
  KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -10000000LL * v2, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
  _mm_lfence();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v4 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v10 = (void *)(v4 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0) << SBYTE1(_RAX)));
  }
  else
  {
    v10 = 0LL;
  }
  KeInitializeDpc(&CmpFreezeThawDpc, (PKDEFERRED_ROUTINE)CmpFreezeThawDpcRoutine, v10);
  KeInitializeTimerEx(&CmpFreezeThawTimer, NotificationTimer);
  CmpFreezeThawWorkItem.Parameter = 0LL;
  CmpFreezeThawWorkItem.List.Flink = 0LL;
  CmpFreezeThawWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpFreezeThawWorker;
  LOBYTE(v11) = 1;
  BYTE1(NlsMbCodePageTag) = CmpMiniNTBoot;
  CmpWorkerDataInitialized = 1;
  CmpWasSetupBoot = a1;
  CmpEnableLazyFlushTimerInitialized = 1;
  result = PoRegisterCoalescingCallback(CmpCoalescingCallback, v11, &CmpCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
    CmpCoalescingCallbackActive = 1;
  return result;
}
