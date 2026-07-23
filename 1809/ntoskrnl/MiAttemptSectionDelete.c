/*
 * XREFs of MiAttemptSectionDelete @ 0x140122240
 * Callers:
 *     MmFlushImageSection @ 0x140122040 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012219C (MiForceSectionClosed.c)
 * Callees:
 *     MiRemoveUnusedSegment @ 0x14007BB58 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     MiCleanSection @ 0x14016983C (MiCleanSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAttemptSectionDelete(__int64 a1, unsigned __int8 a2, char a3)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  struct _KPRCB *v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  __int16 v14; // [rsp+30h] [rbp-20h] BYREF
  char v15; // [rsp+32h] [rbp-1Eh]
  int v16; // [rsp+34h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF

  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 40) || (v7 = *(_DWORD *)(a1 + 56), (v7 & 2) != 0) )
  {
    if ( a3 )
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
    v16 = 0;
    v17[1] = v17;
    v17[0] = v17;
    v12 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v12;
    v13 = 1;
    v14 = 263;
    v15 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(a2);
    KeWaitForGate((__int64)&v14, 0x13u);
    return 1;
  }
  else
  {
    MiRemoveUnusedSegment(a1);
    LOBYTE(v8) = a3;
    *(_QWORD *)(a1 + 40) = 1LL;
    LOBYTE(v9) = a2;
    return MiCleanSection(a1, v9, v8);
  }
}
