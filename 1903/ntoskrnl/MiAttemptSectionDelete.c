/*
 * XREFs of MiAttemptSectionDelete @ 0x14012513C
 * Callers:
 *     MmFlushImageSection @ 0x140124F40 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012509C (MiForceSectionClosed.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14007436C (MiRemoveUnusedSegment.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     MiCleanSection @ 0x14017016C (MiCleanSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v12[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v12, 0, 0x28uLL);
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 40) || (v7 = *(_DWORD *)(a1 + 56), (v7 & 2) != 0) )
  {
    if ( (a3 & 4) != 0 )
      *(_DWORD *)(a1 + 56) |= 0x40000u;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(a2);
    return 0;
  }
  else if ( (v7 & 1) != 0 )
  {
    HIDWORD(v12[2]) = 0;
    v12[4] = &v12[3];
    LODWORD(v12[1]) = 1;
    v12[3] = &v12[3];
    v12[0] = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = v12;
    LOWORD(v12[2]) = 263;
    BYTE2(v12[2]) = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(a2);
    KeWaitForGate((__int64)&v12[2], 19);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    LOBYTE(v8) = a2;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v9) = (a3 & 4) != 0;
    return MiCleanSection(a1, v8, v9);
  }
}
