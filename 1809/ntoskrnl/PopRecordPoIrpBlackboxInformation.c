/*
 * XREFs of PopRecordPoIrpBlackboxInformation @ 0x1402E8EC8
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x14087E1F4 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PopDiagGetDriverName @ 0x140155E94 (PopDiagGetDriverName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 */

void PopRecordPoIrpBlackboxInformation()
{
  __int64 v0; // rsi
  int v1; // r14d
  _DWORD *v2; // rdi
  SIZE_T v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // r14
  __int64 i; // rsi
  __int64 v9; // r12
  __int64 v10; // r15
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD InputBuffer[4]; // [rsp+38h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-79h] BYREF
  wchar_t Src[64]; // [rsp+78h] [rbp-59h] BYREF

  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v0 = PopIrpList;
  v1 = 0;
  v2 = 0LL;
  v3 = 64LL;
  if ( (__int64 *)PopIrpList == &PopIrpList )
    goto LABEL_22;
  do
  {
    if ( *(_BYTE *)(v0 + 196) )
    {
      v4 = 24LL;
      if ( PopDiagGetDriverName(*(_QWORD *)(v0 + 32), Src) >= 0 )
      {
        v5 = -1LL;
        do
          ++v5;
        while ( Src[v5] );
        v4 = 2 * v5 + 26;
        if ( v4 < 0x18 )
          goto LABEL_22;
      }
      ++v1;
      if ( v3 + v4 < v3 )
        goto LABEL_22;
      v3 += v4;
    }
    v0 = *(_QWORD *)v0;
  }
  while ( (__int64 *)v0 != &PopIrpList );
  if ( !v1 )
  {
LABEL_22:
    v3 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x42424F50u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      v2[2] = v1;
      *((_QWORD *)v2 + 3) = &PopIrpThreadList;
      v7 = v2 + 10;
      *((_QWORD *)v2 + 4) = ExWorkerQueue;
      v2[1] = 1;
      *v2 = v3;
      *((_QWORD *)v2 + 2) = &PopIrpList;
      for ( i = PopIrpList; (__int64 *)i != &PopIrpList; i = *(_QWORD *)i )
      {
        if ( *(_BYTE *)(i + 196) )
        {
          v7[2] = *(unsigned __int8 *)(i + 184);
          v7[3] = *(_DWORD *)(i + 188);
          v7[4] = *(_DWORD *)(i + 192);
          v9 = 24LL;
          v7[1] = (KiQueryUnbiasedInterruptTime() - *(_QWORD *)(i + 48)) / 0x2710uLL;
          if ( PopDiagGetDriverName(*(_QWORD *)(i + 32), Src) >= 0 )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( Src[v10] );
            v9 = 2 * v10 + 26;
            memmove(v7 + 5, Src, 2 * v10);
            *((_WORD *)v7 + v10 + 10) = 0;
          }
          *v7 = v9;
          v7 = (_DWORD *)((char *)v7 + v9);
        }
      }
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v3 )
  {
    memset(InputBuffer, 0, sizeof(InputBuffer));
    InputBuffer[1] = (unsigned int)v3;
    LODWORD(InputBuffer[3]) = 4;
    InputBuffer[0] = v2;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x42424F50u);
}
