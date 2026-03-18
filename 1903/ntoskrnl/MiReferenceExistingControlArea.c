/*
 * XREFs of MiReferenceExistingControlArea @ 0x1400E04F0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1405D6AD0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     MiValidateControlAreaPartition @ 0x140007840 (MiValidateControlAreaPartition.c)
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceActiveControlArea @ 0x140074414 (MiReferenceActiveControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E05A0 (MiReleaseControlAreaWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReferenceExistingControlArea(__int64 a1)
{
  __int64 v2; // rax
  volatile LONG *v3; // rbx
  int v4; // edi
  __int64 v5; // r11
  __int64 *v6; // rdi
  struct _KPRCB *v8; // rcx
  struct _KPRCB *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = MiLockSectionControlArea(*(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL), (*(_BYTE *)(a1 + 19) & 1) == 0, &v11);
  if ( !v2 )
    return 3221225473LL;
  v3 = (volatile LONG *)(v2 + 72);
  if ( (*(_DWORD *)(v2 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v11);
    return 3221225473LL;
  }
  v4 = MiValidateControlAreaPartition(a1, v2);
  if ( v4 < 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v8 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v8);
    }
    __writecr8(v11);
    return (unsigned int)v4;
  }
  else
  {
    v6 = MiReferenceActiveControlArea((_DWORD *)a1, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v9 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v9);
    }
    __writecr8(v11);
    MiReleaseControlAreaWaiters(v6);
    return 0LL;
  }
}
