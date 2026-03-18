/*
 * XREFs of MiUnloadSystemImage @ 0x1406A6338
 * Callers:
 *     MmChangeImageProtection @ 0x1406A5FC0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x14070DAB0 (MmLoadSystemImageEx.c)
 *     MiDereferenceImports @ 0x1407455EC (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x1407471E0 (MmUnloadSystemImage.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14001F3F4 (MiGetPdeAddress.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     MiManageSubsectionView @ 0x140074E60 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     MiIsRetpolineEnabled @ 0x140097E88 (MiIsRetpolineEnabled.c)
 *     MiCreateSystemWsles @ 0x1400E5550 (MiCreateSystemWsles.c)
 *     MiPartitionIdToPointer @ 0x1401367DC (MiPartitionIdToPointer.c)
 *     MiDereferenceControlArea @ 0x14013D0CC (MiDereferenceControlArea.c)
 *     MiIsImportOptimizationEnabled @ 0x1401543D4 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x140154C1C (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiProcessLoaderEntry @ 0x140155004 (MiProcessLoaderEntry.c)
 *     MiSessionRemoveImage @ 0x1401687C4 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140169330 (MiDeleteSessionPdes.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14017A844 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     LdrUnloadAlternateResourceModule @ 0x14018023C (LdrUnloadAlternateResourceModule.c)
 *     KeFlushRsb @ 0x140180828 (KeFlushRsb.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140180E64 (DbgUnLoadImageSymbolsUnicode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA5E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402C0B60 (MiLogPerfMemoryRangeEvent.c)
 *     MiInitPerfMemoryFlags @ 0x1402CF3BC (MiInitPerfMemoryFlags.c)
 *     MiVaToSoftwareWsle @ 0x1402E5C10 (MiVaToSoftwareWsle.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PerfLogImageUnload @ 0x140678768 (PerfLogImageUnload.c)
 *     MiBytesToMapSystemImage @ 0x1406A6A80 (MiBytesToMapSystemImage.c)
 *     MiDereferencePerSessionProtos @ 0x1406E88BC (MiDereferencePerSessionProtos.c)
 *     MiMarkKernelImageRetpolineBits @ 0x14070F868 (MiMarkKernelImageRetpolineBits.c)
 *     MiIsImageFullyRetpolined @ 0x14070F974 (MiIsImageFullyRetpolined.c)
 *     MiDeleteSessionDriverProtos @ 0x140728F20 (MiDeleteSessionDriverProtos.c)
 *     MiReleaseSessionDriverCharges @ 0x1407293E4 (MiReleaseSessionDriverCharges.c)
 *     MiReturnSystemImageAddress @ 0x140745000 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x14074503C (MiReleaseDriverPtes.c)
 *     MiUnlockDriverCode @ 0x140745238 (MiUnlockDriverCode.c)
 *     MiDereferenceImports @ 0x1407455EC (MiDereferenceImports.c)
 *     MiRememberUnloadedDriver @ 0x1407458D4 (MiRememberUnloadedDriver.c)
 *     KseDriverUnloadImage @ 0x1407464A8 (KseDriverUnloadImage.c)
 *     MiReturnSystemImageCommitment @ 0x140746A60 (MiReturnSystemImageCommitment.c)
 *     MiMarkKernelImageCfgBits @ 0x140746B78 (MiMarkKernelImageCfgBits.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074721C (ExCovReadjustUnloadedModuleEntry.c)
 *     MiReleasePrivilegedPtes @ 0x140747A28 (MiReleasePrivilegedPtes.c)
 *     MiFreeRetpolineImportInfo @ 0x140787014 (MiFreeRetpolineImportInfo.c)
 *     MiClearDriverHotPatchPtes @ 0x14088DD78 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapLargeDriver @ 0x14089A82C (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x140960480 (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(__int64 BugCheckParameter2, char a2)
{
  char v2; // r15
  void *v4; // r12
  __int64 PteAddress; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  int v9; // r13d
  unsigned __int64 *v10; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 SessionVm; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // rdi
  unsigned __int64 v23; // rdi
  void *v24; // rcx
  char v25; // r15
  char v26; // r14
  ULONG_PTR v27; // rdi
  unsigned __int64 v28; // rax
  char *AnyMultiplexedVm; // rsi
  unsigned int inited; // eax
  __int64 v31; // rdi
  void *v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  void *v36; // rax
  int v37; // edx
  unsigned __int64 v38; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v39; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h]
  _QWORD v43[6]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v44[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v45[26]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+190h] [rbp+90h]
  PVOID Object; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v49; // [rsp+1A8h] [rbp+A8h]

  v2 = a2;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  memset(v45, 0, 0x90uLL);
  memset(v43, 0, sizeof(v43));
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(void **)(BugCheckParameter2 + 48);
  v39 = (BugCheckParameter2 + 160) & -(__int64)((v2 & 4) != 0);
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v6 = *(unsigned int *)(BugCheckParameter2 + 64);
  v7 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 112);
  v49 = PteAddress;
  v46 = (unsigned __int64)(unsigned int)v6 >> 12;
  Object = (PVOID)v8;
  v38 = (unsigned __int64)MiBytesToMapSystemImage(v6) >> 12;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v4) == 1 )
  {
    v9 = 0;
    v10 = MiSessionRemoveImage(BugCheckParameter2, &v40);
    if ( !v10 )
      return;
    v7 = MiSectionControlArea((__int64)Object);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
    if ( (a2 & 1) != 0 )
    {
      if ( MiIsRetpolineEnabled() )
      {
        MiUnmapRetpolineStubs(BugCheckParameter2, 0);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
          KeFlushRsb();
        _mm_lfence();
      }
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v7, v49, v46, 3, v43);
    }
    MiReleaseSessionDriverCharges(v10);
    ExFreePoolWithTag(v10, 0);
    if ( (a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)(v7 + 56) & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos(v7, SessionId);
      }
      MiGetPdeAddress((unsigned __int64)v4);
      if ( v40 )
        v14 = MiBytesToMapSystemImage(v40);
      else
        v14 = 0LL;
      if ( v14 )
        MiGetPdeAddress(v14);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v4 + (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 64) - 1));
      if ( v41 )
      {
        v17 = MiGetPdeAddress(v41);
        if ( v17 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v16 )
        MiDeleteSessionPdes(v16, PdeAddress);
    }
    v18 = v42;
    if ( v42 )
    {
      v19 = MiPartitionIdToPointer(*(_WORD *)(v11 + 430));
      MiReturnCommit(v19, v18 - v43[1]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 48), -v18);
    }
    v2 = a2;
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v8 = (__int64)Object;
  }
  else
  {
    v9 = 1;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( !v9 && (v2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL);
  if ( v9 )
  {
    if ( dword_1404648B0 )
      MiClearDriverHotPatchPtes(BugCheckParameter2);
  }
  else
  {
    MiDeleteSessionDriverProtos(v7);
  }
  if ( MiIsRetpolineEnabled() )
  {
    if ( v9 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiUnmapRetpolineStubs(BugCheckParameter2, v9);
    MiMarkKernelImageRetpolineBits(BugCheckParameter2, 0LL);
    if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
      KeFlushRsb();
    _mm_lfence();
  }
  if ( MiIsImportOptimizationEnabled() )
  {
    if ( v8 )
    {
      v21 = MiSectionControlArea(v8);
      v22 = v21;
      if ( v21 )
      {
        if ( MiDoesControlAreaRequireRetpolineFixups(v21)
          && *(_QWORD *)(*(_QWORD *)v22 + 32LL) == *(_QWORD *)(BugCheckParameter2 + 48)
          && v9 )
        {
          MiFreeRetpolineImportInfo(v22);
          MiWalkEntireImage(v22, qword_140464870, 16, 0xFFFFFFFF);
        }
      }
    }
  }
  if ( (v2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( v9 )
  {
    if ( (v2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v23 = v46;
  }
  else
  {
    MiReleasePrivilegedPtes(v49, (unsigned int)v38);
    v23 = 0LL;
    v46 = 0LL;
  }
  v24 = *(void **)(BugCheckParameter2 + 136);
  if ( v24 != (void *)1 )
  {
    if ( v24 != (void *)-2LL && ((unsigned __int8)v24 & 1) == 0 )
      ExFreePoolWithTag(v24, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  }
  LdrUnloadAlternateResourceModule(v4);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v23 )
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
  v25 = 0;
  v26 = 0;
  if ( v23 && (a2 & 1) != 0 )
  {
    MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v38 << 12);
    v27 = 0LL;
    if ( v8 )
    {
      v28 = MiSectionControlArea(v8);
      v27 = v28;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v45[0] = v28;
        MiManageSubsectionView(v45, (_QWORD *)v39, 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)v4) )
    {
      if ( v39 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_140464918 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v27, v49, v46, 5, v43);
      if ( v27 )
        MiWalkEntireImage(v27, (__int64)v44, 4, 0xFFFFFFFF);
      qword_140464918 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140464940 + 3, LODWORD(v43[0]) - LODWORD(v43[3]));
      v31 = (__int64)Object;
      if ( !Object )
      {
        MiReleasePrivilegedPtes(v49, (unsigned int)v38);
        if ( !(unsigned int)MiCreateSystemWsles() )
        {
          v36 = (void *)MiVaToSoftwareWsle((__int64)AnyMultiplexedVm, (__int64)((v46 << 28) + (v49 << 25)) >> 16);
          if ( v38 != v46 )
          {
            LOBYTE(v37) = 10;
            memset(v36, v37, v38 - v46);
          }
        }
        v26 = 1;
      }
      goto LABEL_80;
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      inited = MiInitPerfMemoryFlags(0, 6);
      MiLogPerfMemoryRangeEvent((__int64)v4, 0LL, inited, (v46 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    MiUnmapLargeDriver(v4, v46);
    v25 = 1;
  }
  v31 = (__int64)Object;
LABEL_80:
  if ( v9 == 1 )
  {
    if ( v31 )
      MiReleasePrivilegedPtes(v49, (unsigned int)v38);
    if ( (a2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v43);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((unsigned __int64 *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask & 4) != 0 )
      PerfLogImageUnload(
        (unsigned __int16 *)(BugCheckParameter2 + 72),
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  if ( v26 )
    MiReleaseDriverPtes(0LL, v49, (unsigned int)v38);
  v32 = *(void **)(BugCheckParameter2 + 80);
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  if ( v31 )
  {
    if ( v39 )
    {
      v33 = *(_QWORD *)(v39 + 56);
      if ( v33 )
        MiReturnResidentAvailable(v33);
    }
    v34 = MiSectionControlArea(v31);
    v35 = v34;
    if ( !v25 && v4 != *(void **)(*(_QWORD *)v34 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v39 && v9 && *(_DWORD *)(v39 + 36) >= 0x80u )
      MiReturnCrossPartitionControlAreaCharges(v35);
    MiDereferenceControlArea(v35);
    ObDereferenceObjectDeferDelete(Object);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
