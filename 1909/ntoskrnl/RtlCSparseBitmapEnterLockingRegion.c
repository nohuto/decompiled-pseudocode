/*
 * XREFs of RtlCSparseBitmapEnterLockingRegion @ 0x14010F5AC
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x14010E3EC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14010F3D8 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlCSparseBitmapEnterLockingRegion(_QWORD *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // rax

  *a1 = 0LL;
  a1[1] = a2;
  if ( *(_BYTE *)(a2 + 48) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)a1 = CurrentIrql;
  }
  else
  {
    *(_BYTE *)a1 = -1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
  }
  return a1;
}
