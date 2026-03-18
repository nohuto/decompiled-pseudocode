/*
 * XREFs of MiUnlockVadCore @ 0x14012545C
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockVadCore(__int64 a1, unsigned __int8 a2)
{
  signed __int32 v2; // eax
  signed __int32 v4; // ett
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(_DWORD *)(a1 + 48);
  do
  {
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v2 & 0xFFFFFFFC, v2);
  }
  while ( v4 != v2 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = a2;
  __writecr8(a2);
  return result;
}
