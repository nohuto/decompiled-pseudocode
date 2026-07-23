/*
 * XREFs of MmEnoughMemoryForWrite @ 0x140021608
 * Callers:
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmEnoughMemoryForWrite(_QWORD *a1)
{
  __int64 v1; // rbp
  bool v2; // si
  unsigned __int8 v3; // bl
  __int64 v4; // rax
  ULONG_PTR *v5; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0;
  v3 = 17;
  v8 = 17;
  if ( a1 )
  {
    v4 = MiLockSectionControlArea(a1, 1, &v8);
    v1 = v4;
    if ( !v4 )
      return 1;
    v3 = v8;
    v5 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  }
  else
  {
    v5 = &MiSystemPartition;
  }
  if ( (unsigned int)MiSufficientAvailablePages(v5, (_BYTE)dword_14054119C != 0 ? 0x4000LL : 450LL) )
  {
    v2 = 1;
  }
  else if ( v5[960] < v5[974] + 800 )
  {
    v2 = (unsigned int)MiSufficientAvailablePages(v5, 80LL) != 0;
  }
  if ( v3 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v3 = v8;
    }
    __writecr8(v3);
  }
  return v2;
}
