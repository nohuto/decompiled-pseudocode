/*
 * XREFs of MiComputeAgeDistribution @ 0x1401144A8
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1400EF058 (MiComputeSystemTrimCriteria.c)
 *     MiOrderTrimList @ 0x1402B3540 (MiOrderTrimList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiUpdateClaimDistribution @ 0x140114610 (MiUpdateClaimDistribution.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int8 OldIrql; // si
  unsigned int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Src[64]; // [rsp+40h] [rbp-58h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = *(_QWORD **)(a1 + 7024);
  if ( a2 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    v5 = (_QWORD **)(a1 + 7032);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
      MiUpdateClaimDistribution(i - 3, Src);
    memmove(v4 + 303, Src, 0x40uLL);
    v7 = v4 + 309;
    v8 = 2LL;
    v9 = 0LL;
    do
    {
      v9 += *v7++;
      --v8;
    }
    while ( v8 );
    v4[302] = v9;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  else
  {
    v9 = v4[302];
  }
  v11 = 5;
  v12 = 0;
  while ( v9 < 4LL * v4[299] )
  {
    ++v12;
    v9 += v4[v11 + 303];
    if ( v11 == 1 )
      break;
    --v11;
  }
  v13 = v4[295];
  if ( v13 )
  {
    v14 = (unsigned int)(1000 * v12) / v13;
    if ( (unsigned __int16)v14 > 0x3E8u )
      LOWORD(v14) = 1000;
    return (unsigned __int16)v14;
  }
  else if ( v12 )
  {
    return 1000LL;
  }
  else
  {
    return 0LL;
  }
}
