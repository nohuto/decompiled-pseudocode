/*
 * XREFs of IopGetSetStreamIdentifier @ 0x140283F9C
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1402830F0 (IoAllocateSfioStreamIdentifier.c)
 *     IoGetSfioStreamIdentifier @ 0x140283400 (IoGetSfioStreamIdentifier.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v5; // r13
  __int64 result; // rax
  unsigned int v9; // ebx
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // r15
  KIRQL v12; // r14
  _QWORD *v13; // rax
  struct _KPRCB *v14; // rcx
  _QWORD *PoolWithTag; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v17; // rcx
  KIRQL v18; // r12
  _QWORD *v19; // rax
  struct _KPRCB *v20; // rcx
  _QWORD *v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-30h] BYREF

  v5 = (_QWORD *)a4;
  LOBYTE(a4) = a5;
  result = IopGetSetSpecificExtension(a1, 4u, 0x10u, a4, &v21, &v22);
  v9 = 0;
  if ( (int)result < 0 )
    goto LABEL_38;
  v10 = v21;
  if ( !v21 )
  {
LABEL_37:
    result = 0LL;
LABEL_38:
    *v5 = 0LL;
    return result;
  }
  v11 = (KSPIN_LOCK *)(a1 + 184);
  v12 = KeAcquireSpinLockRaiseToDpc(v11);
  v13 = (_QWORD *)*v10;
  if ( !*v10 )
  {
    v10[1] = v10;
    v13 = v10;
    *v10 = v10;
  }
  while ( v13 != v10 )
  {
    if ( v13[3] == a3 )
    {
      if ( a5 )
      {
        *v5 = 0LL;
        KxReleaseSpinLock(v11);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        v9 = -1073741791;
      }
      else
      {
        *v5 = v13[2];
        KxReleaseSpinLock(v11);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
        {
          v17 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
      __writecr8(v12);
      return v9;
    }
    v13 = (_QWORD *)*v13;
  }
  KxReleaseSpinLock(v11);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
    v10 = v21;
  }
  __writecr8(v12);
  if ( !a5 )
    goto LABEL_37;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a2 + 32LL, 0x74536F49u);
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_38;
  }
  v18 = KeAcquireSpinLockRaiseToDpc(v11);
  v19 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v19 != v10 )
    __fastfail(3u);
  PoolWithTag[1] = v19;
  *PoolWithTag = v10;
  *v19 = PoolWithTag;
  v10[1] = PoolWithTag;
  PoolWithTag[3] = a3;
  PoolWithTag[2] = PoolWithTag + 4;
  *v5 = PoolWithTag + 4;
  KxReleaseSpinLock(v11);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v20);
  }
  __writecr8(v18);
  return 0LL;
}
