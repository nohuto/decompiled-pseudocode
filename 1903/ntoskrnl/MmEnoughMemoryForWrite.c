/*
 * XREFs of MmEnoughMemoryForWrite @ 0x14007BCC0
 * Callers:
 *     CcCanIWriteStream @ 0x14007BAA4 (CcCanIWriteStream.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
    v5 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF));
  }
  else
  {
    v5 = &MiSystemPartition;
  }
  if ( (unsigned int)MiSufficientAvailablePages(v5, (_BYTE)dword_1405711AC != 0 ? 0x4000LL : 450LL) )
  {
    v2 = 1;
  }
  else if ( v5[1056] < v5[1070] + 800 )
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
