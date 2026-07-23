/*
 * XREFs of MiUnlinkSubsectionWaitBlock @ 0x1402B7370
 * Callers:
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlinkSubsectionWaitBlock(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  KIRQL v6; // bl
  int v7; // r8d
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *a1;
  if ( a3 == 1 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  if ( !*(_DWORD *)(a2 + 12) )
  {
    v7 = *(_DWORD *)(v3 + 56);
    v8 = 0LL;
    if ( (v7 & 0x20) != 0 )
      v9 = *(_QWORD **)(v3 + 80);
    else
      v9 = (_QWORD *)a1[3];
    if ( !v9 )
      goto LABEL_13;
    do
    {
      if ( v9 == (_QWORD *)a2 )
        break;
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
    while ( v9 );
    if ( v8 )
    {
      *v8 = *v9;
    }
    else
    {
LABEL_13:
      v10 = *v9;
      if ( (v7 & 0x20) != 0 )
        *(_QWORD *)(v3 + 80) = v10;
      else
        a1[3] = v10;
    }
  }
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v6);
  }
}
