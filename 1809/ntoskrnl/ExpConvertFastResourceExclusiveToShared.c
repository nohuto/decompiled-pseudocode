/*
 * XREFs of ExpConvertFastResourceExclusiveToShared @ 0x140164B18
 * Callers:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x140164A60 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExConvertFastResourceExclusiveToShared @ 0x14031B1F0 (ExConvertFastResourceExclusiveToShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpConvertFastResourceExclusiveToShared(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 *v6; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v9[0] = 0LL;
  v9[1] = (volatile signed __int64 *)(a1 + 96);
  KxAcquireQueuedSpinLock((__int64)v9, (volatile __int64 *)(a1 + 96), a3);
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v6 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  v10 = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) += (_DWORD)v6;
  KxReleaseQueuedSpinLock(v9);
  KeWakeWaitChain(&v10, 0, 0LL);
  *(_BYTE *)(a2 + 17) &= ~4u;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
