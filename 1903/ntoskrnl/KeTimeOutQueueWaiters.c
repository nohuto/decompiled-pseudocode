/*
 * XREFs of KeTimeOutQueueWaiters @ 0x140122CF0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140045BF0 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14018C1D0 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v13; // rax

  v4 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v10 = *(_QWORD **)(a1 + 16);
  while ( v10 != (_QWORD *)(a1 + 8) && v4 < a3 )
  {
    v11 = (__int64)v10;
    v10 = (_QWORD *)v10[1];
    if ( *(_BYTE *)(v11 + 16) == 3 )
    {
      if ( v6 - *(_DWORD *)(*(_QWORD *)(v11 + 24) + 436LL) < (unsigned int)v8 )
        break;
      v13 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v10 != v11 )
        __fastfail(3u);
      *v10 = v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v11, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v4;
}
