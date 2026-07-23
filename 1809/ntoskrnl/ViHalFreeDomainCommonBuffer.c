/*
 * XREFs of ViHalFreeDomainCommonBuffer @ 0x14092EC34
 * Callers:
 *     VfFreeCommonBuffer @ 0x14092BF70 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall ViHalFreeDomainCommonBuffer(_QWORD *a1)
{
  char v2; // bl
  void *v3; // rsi
  KIRQL v4; // di
  __int64 v5; // rax
  __int64 *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 **v9; // rdx

  v2 = 0;
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140986DB8);
  v5 = ViDomainCommonBufferList;
  if ( (__int64 *)ViDomainCommonBufferList != &ViDomainCommonBufferList )
  {
    while ( 1 )
    {
      v3 = (void *)v5;
      v6 = *(__int64 **)v5;
      if ( *(_QWORD *)(v5 + 16) == *a1 )
        break;
      v5 = *(_QWORD *)v5;
      if ( v6 == &ViDomainCommonBufferList )
        goto LABEL_4;
    }
    v2 = 1;
    v9 = *(__int64 ***)(v5 + 8);
    if ( v6[1] != v5 || *v9 != (__int64 *)v5 )
      __fastfail(3u);
    *v9 = v6;
    v6[1] = (__int64)v9;
  }
LABEL_4:
  KxReleaseSpinLock(&qword_140986DB8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v4);
  if ( v2 )
    ExFreePoolWithTag(v3, 0);
  return v2;
}
