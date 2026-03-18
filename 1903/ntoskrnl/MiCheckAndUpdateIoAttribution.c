/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x1400A957C
 * Callers:
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     IoReferenceIoAttributionFromThread @ 0x1400A9B1C (IoReferenceIoAttributionFromThread.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  KIRQL v7; // r14
  __int64 v8; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_140465B00 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140465B00;
  v3 = *(_QWORD *)(v2 >> 16);
  result = *(unsigned int *)(v3 + 56);
  if ( (result & 0x20) == 0 )
  {
    result = IoReferenceIoAttributionFromThread(CurrentThread, &v10);
    if ( (int)result >= 0 )
    {
      v5 = v10;
      if ( v10 == 8LL * *(_QWORD *)(v3 + 120) )
      {
        v6 = v10;
      }
      else
      {
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
        v8 = 8LL * *(_QWORD *)(v3 + 120);
        *(_QWORD *)(v3 + 120) = (v5 >> 3) | *(_QWORD *)(v3 + 120) & 0xE000000000000000uLL;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v7;
        __writecr8(v7);
        if ( !v8 )
          return result;
        v6 = v8;
      }
      return IoDiskIoAttributionDereference(v6);
    }
  }
  return result;
}
