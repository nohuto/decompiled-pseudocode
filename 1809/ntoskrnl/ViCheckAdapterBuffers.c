/*
 * XREFs of ViCheckAdapterBuffers @ 0x14092DCBC
 * Callers:
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14092CC70 (VfMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ViCheckTag @ 0x14092DFBC (ViCheckTag.c)
 */

void __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  _QWORD *v1; // rbx
  __int16 v2; // bp
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // r10
  KIRQL v6; // di
  __int64 v7; // rdx
  __int16 v8; // r9
  unsigned __int64 v9; // rax
  _QWORD *v10; // r10
  _QWORD *v11; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = (_QWORD *)(a1 + 80);
  v2 = 0;
  if ( (_QWORD *)*v1 != v1 )
  {
    v3 = (KSPIN_LOCK *)(a1 + 96);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v5 = (_QWORD *)*v1;
    v6 = v4;
    while ( 1 )
    {
      v10 = v5 - 6;
      v11 = v10 + 6;
      if ( v1 == v10 + 6 )
        break;
      v7 = *((unsigned int *)v10 + 2);
      v8 = v2 | 1;
      v9 = v10[3] - v10[2];
      if ( v9 < 8 )
        v8 = v2;
      v2 = v8 | 2;
      if ( v7 + v9 + 8 > *((unsigned int *)v10 + 1) )
        v2 = v8;
      ViCheckTag(v10[3], v7);
      v5 = (_QWORD *)*v11;
    }
    KxReleaseSpinLock(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
  }
}
