/*
 * XREFs of MiGenerateAccessViolation @ 0x1402D25BC
 * Callers:
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140075B40 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x140129A60 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiDeterminePoolType @ 0x140061B00 (MiDeterminePoolType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_BOOL8 __fastcall MiGenerateAccessViolation(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  _QWORD **v2; // rdi
  KIRQL v3; // bp
  _QWORD *v4; // rbx
  _KPROCESS *Process; // rdi
  struct _KPRCB *CurrentPrcb; // rcx

  v1 = *a1;
  if ( (unsigned int)MiDeterminePoolType(*a1) == 32 )
    return 0LL;
  v2 = (_QWORD **)&unk_1404641F8;
  v3 = ExAcquireSpinLockShared(&dword_1404641F0);
  while ( 1 )
  {
    v4 = *v2;
    while ( v4 )
    {
      if ( v1 > v4[4] )
      {
        v4 = (_QWORD *)v4[1];
      }
      else
      {
        if ( v1 >= v4[3] )
          goto LABEL_14;
        v4 = (_QWORD *)*v4;
      }
    }
    if ( v2 != (_QWORD **)&unk_1404641F8 )
      break;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      break;
    v2 = (_QWORD **)(Process[1].ActiveProcessors.Bitmap[1] + 1288);
  }
LABEL_14:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1404641F0);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v3);
  return v4 != 0;
}
