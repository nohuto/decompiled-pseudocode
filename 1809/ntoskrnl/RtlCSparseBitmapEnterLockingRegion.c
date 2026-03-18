/*
 * XREFs of RtlCSparseBitmapEnterLockingRegion @ 0x14000ABB8
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x140008938 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14000A9E4 (RtlpCSparseBitmapPageCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCSparseBitmapEnterLockingRegion(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *CurrentThread; // rax

  v2 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a1 + 8) = a2;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_BYTE *)a1 = -1;
    --CurrentThread->SpecialApcDisable;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)a1 = CurrentIrql;
  }
  return a1;
}
