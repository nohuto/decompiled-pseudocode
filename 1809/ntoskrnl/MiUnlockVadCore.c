/*
 * XREFs of MiUnlockVadCore @ 0x140125838
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), v2 & 0x3FFFFFFF, v2);
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
