/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x1400EAB6C
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140688620 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1408C6F60 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7024 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *BugCheckParameter1, char a2)
{
  __int64 v4; // rsi
  int v5; // r13d
  unsigned int v6; // r12d
  char v7; // di
  char v8; // r14
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // r15
  char v12; // r8
  BOOL v13; // r9d
  char v14; // cl
  char v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v22[48]; // [rsp+40h] [rbp-40h] BYREF

  memset(v22, 0, sizeof(v22));
  v4 = (__int64)&BugCheckParameter1[1].IdealNode[6];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = 0;
  v7 = a2 & 0xF7;
  if ( (a2 & 4) == 0 )
    v7 = a2;
  v8 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~2u;
    v8 |= 0x40u;
  }
  if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
  {
    v5 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v22);
  }
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].IdealNode[6]);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &SpinLock;
  v11 = v10;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
  v20 = *(_DWORD *)(v4 + 184);
  v12 = v20;
  if ( (v7 & 8) != 0 )
  {
    v12 = v20 & 0x7F;
    LOBYTE(v20) = v20 & 0x7F;
  }
  v13 = (v7 & 8) != 0;
  if ( (v7 & 2) != 0 )
  {
    v12 &= ~0x40u;
    v13 = 1;
    LOBYTE(v20) = v12;
  }
  v14 = v8 | 0x80;
  if ( v12 >= 0 )
    v14 = v8;
  v15 = v14 | 0x40;
  if ( (v12 & 0x40) == 0 )
    v15 = v14;
  if ( v15 < 0 && (v15 & 0x40) != 0 && (unsigned __int64)(*(_QWORD *)(v4 + 112) + 6LL) >= *(_QWORD *)(v4 + 152) )
  {
    v7 = -6;
    v6 = -1073741748;
  }
  if ( (v7 & 4) != 0 )
  {
    v12 |= 0x80u;
    v13 = 1;
    LOBYTE(v20) = v12;
  }
  if ( (v7 & 1) != 0 )
  {
    v13 = 1;
    LOBYTE(v20) = v12 | 0x40;
  }
  if ( v13 )
    *(_WORD *)(v4 + 184) = v20;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v16) = v11;
  MiUnlockWorkingSetExclusive(v4, v16, v17, v18);
  if ( v5 )
    KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
  return v6;
}
