/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x1400DF174
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400DF25C (IoReferenceIoAttributionFromThread.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rcx
  KIRQL v6; // r14
  __int64 v7; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v9; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_14043B180 && (v2 & 0x10) == 0 )
    v2 &= ~qword_14043B180;
  v3 = *(_QWORD *)(v2 >> 16);
  result = *(unsigned int *)(v3 + 56);
  if ( (result & 0x20) == 0 )
  {
    result = IoReferenceIoAttributionFromThread(CurrentThread);
    if ( (int)result >= 0 )
    {
      if ( v9 == 8LL * *(_QWORD *)(v3 + 120) )
      {
        v5 = v9;
      }
      else
      {
        v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        v7 = 8LL * *(_QWORD *)(v3 + 120);
        *(_QWORD *)(v3 + 120) = (v9 >> 3) | *(_QWORD *)(v3 + 120) & 0xE000000000000000uLL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v6;
        __writecr8(v6);
        if ( !v7 )
          return result;
        v5 = v7;
      }
      return IoDiskIoAttributionDereference(v5);
    }
  }
  return result;
}
