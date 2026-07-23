/*
 * XREFs of MiLockPagableImageSection @ 0x14009AAF0
 * Callers:
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     PoRunDownDeviceObject @ 0x1400DAC00 (PoRunDownDeviceObject.c)
 *     IopLiveDumpUnLockPages @ 0x140286464 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableSectionByHandle @ 0x140620240 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x140652820 (MmLockPagableDataSection.c)
 *     IopLiveDumpLockPages @ 0x140821570 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x1408366A0 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1409BDE2C (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x1409C66F4 (KiInitializeMTRR.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiUnlockImageSection @ 0x140097E58 (MiUnlockImageSection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RtlImageNtHeaderEx @ 0x14009D7A0 (RtlImageNtHeaderEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x14062025C (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  _QWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v6; // cl
  _QWORD *v7; // r8
  unsigned __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  volatile signed __int32 *v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // r11
  unsigned __int64 SectionAlignment; // r10
  unsigned __int64 v16; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  PIMAGE_NT_HEADERS NtHeader; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 != 1 )
  {
    v2 = (unsigned int)BugCheckParameter3;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2)
      && (unsigned int)MiGetSystemRegionType(BugCheckParameter2) != 1 )
    {
      v4 = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql < 0xFu )
      {
        v6 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && v6 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        }
      }
      ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
      v7 = (_QWORD *)::BugCheckParameter3;
      if ( ::BugCheckParameter3 )
      {
        do
        {
          v8 = *(v7 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( BugCheckParameter2 <= *((unsigned int *)v7 - 42) + v8 - 1 )
          {
            if ( BugCheckParameter2 >= v8 )
            {
              if ( v7 )
                v4 = v7 - 29;
              break;
            }
            v7 = (_QWORD *)*v7;
          }
          else
          {
            v7 = (_QWORD *)v7[1];
          }
        }
        while ( v7 );
      }
      ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
      if ( CurrentIrql < 0xFu )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      v9 = (char *)v4[6];
      NtHeader = 0LL;
      RtlImageNtHeaderEx(1u, v9, 0LL, &NtHeader);
      v10 = (__int64)(BugCheckParameter2 - NtHeader->FileHeader.SizeOfOptionalHeader - (_QWORD)NtHeader - 24) / 40;
      if ( (unsigned int)v10 >= NtHeader->FileHeader.NumberOfSections )
        KeBugCheckEx(
          0x1Au,
          0x1013uLL,
          BugCheckParameter2 | v2,
          (unsigned int)v10,
          NtHeader->FileHeader.NumberOfSections);
      v11 = *(unsigned int *)(BugCheckParameter2 + 16);
      v12 = (volatile signed __int32 *)(v4[28] + 4LL * (unsigned int)v10);
      v13 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( (unsigned int)v11 < v13 )
        v11 = v13;
      v14 = (unsigned __int64)&v9[*(unsigned int *)(BugCheckParameter2 + 12)];
      SectionAlignment = NtHeader->OptionalHeader.SectionAlignment;
      if ( SectionAlignment > 0x1000 )
        SectionAlignment = 4096LL;
      v16 = (((~(SectionAlignment - 1) & (v14 + SectionAlignment + v11 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v2 == 1 )
        MiLockImageSection(v4, v12, ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16 - 0x98000000008LL);
      else
        MiUnlockImageSection(
          v12,
          ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          v16 - 0x98000000008LL,
          BugCheckParameter2);
    }
  }
}
