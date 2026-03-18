/*
 * XREFs of MiLockPagableImageSection @ 0x14005F120
 * Callers:
 *     PoRunDownDeviceObject @ 0x1400B3FB8 (PoRunDownDeviceObject.c)
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 *     IopLiveDumpUnLockPages @ 0x14029B5D4 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableDataSection @ 0x1406A5EC0 (MmLockPagableDataSection.c)
 *     MmLockPagableSectionByHandle @ 0x1406D4160 (MmLockPagableSectionByHandle.c)
 *     IopLiveDumpLockPages @ 0x14085A3DC (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x14086FDF8 (PnprLockPagesForReplace.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     MiLockPagableSections @ 0x1409F15C8 (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x1409FDF88 (KiInitializeMTRR.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmLockLoadedModuleListShared @ 0x14005F070 (MmLockLoadedModuleListShared.c)
 *     RtlImageNtHeaderEx @ 0x14005F320 (RtlImageNtHeaderEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUnlockImageSection @ 0x1400DC17C (MiUnlockImageSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x1406A5BC8 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  ULONG_PTR v7; // r9
  unsigned __int8 v8; // cl
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // r10
  unsigned __int64 SectionAlignment; // r8
  unsigned __int64 v16; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v18; // [rsp+50h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+60h] [rbp+18h] BYREF

  if ( BugCheckParameter2 == 1 )
    return;
  v2 = (unsigned int)BugCheckParameter3;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2)
    || (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
  {
    return;
  }
  v5 = 0LL;
  v18 = 17;
  MmLockLoadedModuleListShared(&v18, v4);
  v6 = (_QWORD *)::BugCheckParameter3;
  if ( !::BugCheckParameter3 )
    goto LABEL_10;
  while ( 1 )
  {
    v7 = *(v6 - 23);
    if ( BugCheckParameter2 > v7 + (unsigned int)(*((_DWORD *)v6 - 42) - 1) )
    {
      v6 = (_QWORD *)v6[1];
      goto LABEL_24;
    }
    if ( BugCheckParameter2 >= v7 )
      break;
    v6 = (_QWORD *)*v6;
LABEL_24:
    if ( !v6 )
      goto LABEL_10;
  }
  if ( v6 )
    v5 = v6 - 29;
LABEL_10:
  ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
  v8 = v18;
  if ( v18 < 0xFu )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v8 = v18;
    }
    __writecr8(v8);
  }
  if ( !v5 )
    KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
  v9 = (char *)v5[6];
  NtHeader = 0LL;
  RtlImageNtHeaderEx(1u, v9, 0LL, &NtHeader);
  v10 = (__int64)(BugCheckParameter2 - NtHeader->FileHeader.SizeOfOptionalHeader - (_QWORD)NtHeader - 24) / 40;
  if ( (unsigned int)v10 >= NtHeader->FileHeader.NumberOfSections )
    KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v10, NtHeader->FileHeader.NumberOfSections);
  v11 = *(unsigned int *)(BugCheckParameter2 + 16);
  v12 = v5[28] + 4LL * (unsigned int)v10;
  v13 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (unsigned int)v11 < v13 )
    v11 = v13;
  v14 = (unsigned __int64)&v9[*(unsigned int *)(BugCheckParameter2 + 12)];
  SectionAlignment = NtHeader->OptionalHeader.SectionAlignment;
  if ( SectionAlignment > 0x1000 )
    SectionAlignment = 4096LL;
  v16 = (((~(SectionAlignment - 1) & (v14 + SectionAlignment + v11 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
  if ( (_DWORD)v2 == 1 )
    MiLockImageSection(v5, v12, ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16 - 0x98000000008LL);
  else
    MiUnlockImageSection(
      v12,
      ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
      v16 - 0x98000000008LL,
      BugCheckParameter2);
}
