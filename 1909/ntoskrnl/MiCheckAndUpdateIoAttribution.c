/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x140090884
 * Callers:
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     IoReferenceIoAttributionFromThread @ 0x140090E1C (IoReferenceIoAttributionFromThread.c)
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  if ( qword_140465800 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140465800;
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
