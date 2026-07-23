/*
 * XREFs of MiGenerateAccessViolation @ 0x1402BC210
 * Callers:
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1400E93A0 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x1401291F8 (MiRaisedIrqlFault.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  v2 = (_QWORD **)&unk_140439BE0;
  v3 = ExAcquireSpinLockShared(&dword_140439BD8);
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
    if ( v2 != (_QWORD **)&unk_140439BE0 )
      break;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      break;
    v2 = (_QWORD **)(Process[1].ActiveProcessors.Bitmap[2] + 8264);
  }
LABEL_14:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140439BD8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v3);
  return v4 != 0;
}
