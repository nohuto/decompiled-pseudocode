/*
 * XREFs of MmGetImageFileSignatureInformation @ 0x140023A40
 * Callers:
 *     <none>
 * Callees:
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14007644C (MiDereferenceControlAreaBySection.c)
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmGetImageFileSignatureInformation(__int64 a1)
{
  _QWORD *v1; // rcx
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdi
  struct _KPRCB *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = 0;
  if ( !v1 )
    return 0;
  v3 = MiLockSectionControlArea(v1, 0, &v8);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
  }
  else
  {
    ++*(_QWORD *)(v3 + 24);
    MiRemoveUnusedSegment(v3);
    ++*(_QWORD *)(v4 + 48);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v6 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v6);
    }
    __writecr8(v8);
    v2 = *(_BYTE *)(*(_QWORD *)v4 + 15LL) >> 4;
    MiDereferenceControlAreaBySection(v4, 1LL);
  }
  return v2;
}
