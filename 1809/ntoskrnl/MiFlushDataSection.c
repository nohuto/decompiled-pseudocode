/*
 * XREFs of MiFlushDataSection @ 0x140092FE8
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rcx
  char v8[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v9; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  result = MiLockSectionControlArea(*(_QWORD **)(a1 + 40), 1, &v9);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v5 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(result + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v9);
    v7 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      CcFlushCachePriv(v7, &CcFlushForImageSection, 0, 0LL, 0, v8);
      return *(unsigned int *)v8;
    }
    else
    {
      return MmFlushSection(v7, 0LL, 0LL);
    }
  }
  return result;
}
