/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x1400D9D04
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400D9FBC (MiGetCurrentMultiplexedVm.c)
 *     MiGetStandbyRepurposed @ 0x1400DBD40 (MiGetStandbyRepurposed.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *__fastcall MmQuerySystemWorkingSetInformation(unsigned int a1, _QWORD *a2)
{
  void *result; // rax
  __int64 v4; // r8
  int v6; // ecx
  __int64 v7; // rdx
  char *AnyMultiplexedVm; // rdi
  int v9; // r8d
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned __int8 v12; // r14
  char v13; // al
  int StandbyRepurposed; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  *((_DWORD *)a2 + 15) = 0;
  v4 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 2;
  v7 = a1 - 2;
  if ( (_DWORD)v7 )
  {
    v17 = v7 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        return result;
      v6 = 1;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
  }
  else
  {
    AnyMultiplexedVm = (char *)MiGetCurrentMultiplexedVm(2LL, v7, v4);
    if ( !AnyMultiplexedVm )
      return memset(a2, 0, 0x40uLL);
  }
  v10 = (unsigned int)(v9 - 2);
  v11 = *(_QWORD *)(qword_140465E88 + 8LL * *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v12 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm((__int64)AnyMultiplexedVm) + 16);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
  *a2 = *((_QWORD *)AnyMultiplexedVm + 15);
  a2[1] = *((_QWORD *)AnyMultiplexedVm + 20);
  *((_DWORD *)a2 + 4) = *((_DWORD *)AnyMultiplexedVm + 1);
  a2[3] = *((_QWORD *)AnyMultiplexedVm + 14);
  a2[4] = *((_QWORD *)AnyMultiplexedVm + 19);
  v13 = AnyMultiplexedVm[184];
  if ( v13 < 0 )
  {
    *((_DWORD *)a2 + 15) |= 4u;
    v13 = AnyMultiplexedVm[184];
  }
  if ( (v13 & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = *(_QWORD *)(v11 + 8 * v10 + 4296);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v12);
  StandbyRepurposed = MiGetStandbyRepurposed(v11);
  v15 = *a2;
  *((_DWORD *)a2 + 14) = StandbyRepurposed;
  result = (void *)a2[6];
  v16 = v15 + *(_QWORD *)(v11 + 4288);
  a2[5] = v16;
  if ( v16 > (unsigned __int64)result )
    a2[5] = result;
  a2[1] <<= 12;
  *a2 = v15 << 12;
  return result;
}
