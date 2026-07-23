/*
 * XREFs of KeTimeOutQueueWaiters @ 0x140107034
 * Callers:
 *     ExpWorkerFactoryManagerThread @ 0x14017FFE0 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // rax

  v4 = 0;
  v5 = a3;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
  v9 = v8 >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v8, a3);
  v11 = *(_QWORD **)(a1 + 16);
  while ( v11 != (_QWORD *)(a1 + 8) && v4 < v5 )
  {
    v12 = (__int64)v11;
    v11 = (_QWORD *)v11[1];
    if ( *(_BYTE *)(v12 + 16) == 3 )
    {
      if ( v6 - *(_DWORD *)(*(_QWORD *)(v12 + 24) + 436LL) < (unsigned int)v9 )
        break;
      v14 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v11 != v12 )
        __fastfail(3u);
      *v11 = v14;
      *(_QWORD *)(v14 + 8) = v11;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v12, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0, CurrentIrql);
  return v4;
}
