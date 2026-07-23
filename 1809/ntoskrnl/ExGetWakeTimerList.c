/*
 * XREFs of ExGetWakeTimerList @ 0x14031C820
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryTimerDueTime @ 0x1402907B8 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x1402D3460 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetWakeTimerList(_QWORD *a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v3; // rbp
  void *v4; // rdi
  _DWORD *v5; // r15
  _QWORD *v6; // r12
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rsi
  __int64 *v9; // rsi
  __int64 v10; // rcx
  SIZE_T v11; // rdx
  _QWORD *PoolWithQuotaTag; // rax
  int v13; // esi
  unsigned __int64 *v14; // r15
  __int64 *v15; // r12
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  KIRQL v18; // al
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 TimerDueTime; // rax
  KIRQL v22; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // r15
  unsigned __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  struct _KTHREAD *v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  KIRQL v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v28 = CurrentThread;
  v5 = a2;
  v6 = a1;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v7, (ULONG_PTR)&ExpWakeTimerLock);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = (__int64 *)ExpWakeTimerList;
  if ( (__int64 *)ExpWakeTimerList != &ExpWakeTimerList )
  {
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
      {
        v27 = 0LL;
        PoStoreDiagnosticContext(v10, 0LL, &v27);
        v3 = (v27 + 31 + v3) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v3 > 0xFFFFFFFF )
        {
          v13 = -1073741789;
          goto LABEL_36;
        }
      }
      v9 = (__int64 *)*v9;
    }
    while ( v9 != &ExpWakeTimerList );
    v11 = v3;
    if ( v3 )
      goto LABEL_11;
  }
  v11 = 64LL;
LABEL_11:
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v11, 0x734C6B57u);
  v4 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v13 = 0;
    v14 = PoolWithQuotaTag;
    if ( v3 )
    {
      v15 = (__int64 *)ExpWakeTimerList;
      v16 = 0LL;
      v27 = 0LL;
      v17 = v3;
      while ( v15 != &ExpWakeTimerList )
      {
        if ( v17 < 0x40 )
          goto LABEL_41;
        v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v15 - 25);
        v20 = *((unsigned int *)v15 - 6);
        v33 = v18;
        v30 = *(v15 - 1);
        v34 = v20;
        if ( v30 )
          TimerDueTime = KeQueryTimerDueTime((__int64)(v15 - 33), v20, v19);
        else
          TimerDueTime = 0LL;
        v29 = TimerDueTime;
        KxReleaseSpinLock((PKSPIN_LOCK)v15 - 25);
        v22 = v33;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v22 = v33;
          v16 = v27;
        }
        __writecr8(v22);
        if ( v29 )
        {
          v24 = v29 - MEMORY[0xFFFFF78000000008];
          *((_DWORD *)v14 + 4) = v34;
          v14[1] = v24;
          v27 = v17 - 24;
          v13 = PoStoreDiagnosticContext(v30, v14 + 3, &v27);
          if ( v13 < 0 )
            goto LABEL_34;
          v16 = (v27 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          v27 = v16;
          if ( v17 < v16 )
          {
LABEL_41:
            v13 = -1073741789;
            goto LABEL_34;
          }
          v17 -= v16;
          *v14 = v16;
          v14 = (unsigned __int64 *)((char *)v14 + v16);
        }
        v15 = (__int64 *)*v15;
      }
      v25 = (unsigned __int64 *)((char *)v14 - v16);
      *v25 = 0LL;
      if ( !v16 )
        v25[1] = 0LL;
LABEL_34:
      CurrentThread = v28;
      v6 = a1;
    }
    else
    {
      PoolWithQuotaTag[1] = 0LL;
      LODWORD(v3) = 64;
      *PoolWithQuotaTag = 0LL;
    }
    v5 = a2;
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_36:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v13 >= 0 )
  {
    *v6 = v4;
    *v5 = v3;
  }
  else if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x734C6B57u);
  }
  return (unsigned int)v13;
}
