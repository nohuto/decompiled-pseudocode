/*
 * XREFs of MiUnloadSystemImage @ 0x140652C64
 * Callers:
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiDereferenceImports @ 0x14070F18C (MiDereferenceImports.c)
 *     MmUnloadSystemImage @ 0x140710150 (MmUnloadSystemImage.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiGetPdeAddress @ 0x1400EDBE4 (MiGetPdeAddress.c)
 *     MiCreateSystemWsles @ 0x1400F3224 (MiCreateSystemWsles.c)
 *     MiProcessLoaderEntry @ 0x1400F5C2C (MiProcessLoaderEntry.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     MiSessionRemoveImage @ 0x140158200 (MiSessionRemoveImage.c)
 *     MiDeleteSessionPdes @ 0x140158E60 (MiDeleteSessionPdes.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C8B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModule @ 0x14016C9EC (LdrUnloadAlternateResourceModule.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173788 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiFreeRetpolineImportInfo @ 0x1401B521C (MiFreeRetpolineImportInfo.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeFlushRsb @ 0x1402956B0 (KeFlushRsb.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402A9508 (MiLogPerfMemoryRangeEvent.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1402B91F8 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiInitPerfMemoryFlags @ 0x1402B9210 (MiInitPerfMemoryFlags.c)
 *     MiVaToSoftwareWsle @ 0x1402CB898 (MiVaToSoftwareWsle.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiIsImageFullyRetpolined @ 0x140583274 (MiIsImageFullyRetpolined.c)
 *     MiBytesToMapSystemImage @ 0x14065339C (MiBytesToMapSystemImage.c)
 *     PerfLogImageUnload @ 0x1406786CC (PerfLogImageUnload.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x1406E2CF8 (MiDeleteSessionDriverProtos.c)
 *     MiUnlockDriverCode @ 0x14070EE00 (MiUnlockDriverCode.c)
 *     MiDereferenceImports @ 0x14070F18C (MiDereferenceImports.c)
 *     MiReturnSystemImageAddress @ 0x14070F2A0 (MiReturnSystemImageAddress.c)
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 *     MiRememberUnloadedDriver @ 0x14070FD0C (MiRememberUnloadedDriver.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 *     MiReturnSystemImageCommitment @ 0x1407105DC (MiReturnSystemImageCommitment.c)
 *     MiMarkKernelImageCfgBits @ 0x140710634 (MiMarkKernelImageCfgBits.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407106A4 (ExCovReadjustUnloadedModuleEntry.c)
 *     MiReleasePrivilegedPtes @ 0x140710818 (MiReleasePrivilegedPtes.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140854F64 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnmapRetpolineStubs @ 0x140855070 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140855B60 (MiClearDriverHotPatchPtes.c)
 *     MiUnmapLargeDriver @ 0x14085EBDC (MiUnmapLargeDriver.c)
 *     VfDriverUnloadImage @ 0x1409223DC (VfDriverUnloadImage.c)
 */

void __fastcall MiUnloadSystemImage(__int64 BugCheckParameter2, char a2)
{
  char v2; // si
  void *v4; // r14
  __int64 PteAddress; // rax
  unsigned __int64 v6; // r15
  void *v7; // r12
  unsigned __int64 v8; // r13
  int v9; // ecx
  BOOL v10; // edi
  unsigned __int64 *v11; // rdi
  unsigned __int64 v12; // r13
  int v13; // esi
  unsigned __int64 SessionVm; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 PdeAddress; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  int v22; // ecx
  unsigned __int64 v23; // rax
  ULONG_PTR v24; // rdi
  int v25; // r15d
  unsigned __int64 v26; // rdi
  void *v27; // rcx
  char v28; // r15
  ULONG_PTR v29; // rdi
  unsigned __int64 v30; // rax
  char *AnyMultiplexedVm; // rsi
  unsigned int inited; // eax
  unsigned __int64 v33; // rdi
  void *v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  void *v38; // rax
  int v39; // edx
  unsigned __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v42; // [rsp+60h] [rbp-A0h]
  _QWORD v43[5]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  char v47[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v48[18]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v49[26]; // [rsp+140h] [rbp+40h] BYREF
  int SystemRegionType; // [rsp+220h] [rbp+120h]
  unsigned __int64 v52; // [rsp+238h] [rbp+138h]

  v2 = a2;
  memset(v43, 0, sizeof(v43));
  if ( *(_QWORD *)(BugCheckParameter2 + 136) == 1LL )
    return;
  v4 = *(void **)(BugCheckParameter2 + 48);
  v42 = (BugCheckParameter2 + 160) & -(__int64)((v2 & 4) != 0);
  PteAddress = MiGetPteAddress((unsigned __int64)v4);
  v6 = 0LL;
  v7 = *(void **)(BugCheckParameter2 + 112);
  v8 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 64) >> 12;
  v41 = v8;
  v52 = PteAddress;
  v40 = (unsigned __int64)MiBytesToMapSystemImage(*(unsigned int *)(BugCheckParameter2 + 64)) >> 12;
  SystemRegionType = MiGetSystemRegionType((unsigned __int64)v4);
  v9 = SystemRegionType;
  v10 = SystemRegionType != 1;
  if ( SystemRegionType == 1 )
  {
    v11 = MiSessionRemoveImage(BugCheckParameter2, &v44);
    if ( !v11 )
      return;
    v6 = MiSectionControlArea((__int64)v7);
    if ( *(_QWORD *)BugCheckParameter2 )
      ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
    v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v13 = v2 & 1;
    if ( v13 )
    {
      if ( MiIsRetpolineEnabled() )
      {
        MiUnmapRetpolineStubs(BugCheckParameter2, SystemRegionType != 1);
        if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
          KeFlushRsb();
        _mm_lfence();
      }
      SessionVm = MiGetSessionVm();
      MiDeleteSystemPagableVm(SessionVm, v6, v52, v41, 3, v43);
    }
    if ( *((_BYTE *)v11 + 65) == 1 )
      MiReturnCrossPartitionControlAreaCharges(v11[10]);
    v48[0] = v11[10];
    MiManageSubsectionView((__int64 *)v48, v11 + 3, 4);
    ExFreePoolWithTag(v11, 0);
    if ( v13 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x4000000) != 0 )
      {
        MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
        MiDereferencePerSessionProtos(v6);
      }
      MiGetPdeAddress((unsigned __int64)v4);
      if ( v44 )
        v15 = MiBytesToMapSystemImage(v44);
      else
        v15 = 0LL;
      if ( v15 )
        MiGetPdeAddress(v15);
      PdeAddress = MiGetPdeAddress((unsigned __int64)v4 + *(unsigned int *)(BugCheckParameter2 + 64) - 1);
      if ( v45 )
      {
        v18 = MiGetPdeAddress(v45);
        if ( v18 == PdeAddress )
          PdeAddress -= 8LL;
      }
      if ( PdeAddress >= v17 )
        MiDeleteSessionPdes(v17, PdeAddress);
    }
    v19 = v46;
    if ( v46 )
    {
      v20 = MiPartitionIdToPointer(*(_WORD *)(v12 + 3182));
      MiReturnCommit(v20, v19 - v43[1]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 48), -v19);
    }
    v2 = a2;
    if ( (a2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v10 = SystemRegionType != 1;
    v9 = 1;
    v8 = v41;
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 108))-- != 1 )
  {
    if ( v9 == 1 && (v2 & 2) != 0 )
      VfDriverUnloadImage(BugCheckParameter2);
    return;
  }
  if ( v9 == 1 )
  {
    MiDeleteSessionDriverProtos(v6);
  }
  else if ( dword_140439F34 )
  {
    MiClearDriverHotPatchPtes(BugCheckParameter2);
  }
  if ( MiIsRetpolineEnabled() )
  {
    if ( v22 != 1 && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiUnmapRetpolineStubs(BugCheckParameter2, v10);
    MiMarkKernelImageRetpolineBits(BugCheckParameter2, 0LL);
    if ( (unsigned int)MiIsImageFullyRetpolined(BugCheckParameter2) )
      KeFlushRsb();
    _mm_lfence();
  }
  if ( MiIsImportOptimizationEnabled() && v7 && (v23 = MiSectionControlArea((__int64)v7), (v24 = v23) != 0) )
  {
    v25 = SystemRegionType;
    if ( MiDoesControlAreaRequireRetpolineFixups(v23)
      && *(_QWORD *)(*(_QWORD *)v24 + 32LL) == *(_QWORD *)(BugCheckParameter2 + 48)
      && SystemRegionType != 1
      && (MiFlags & 0x10000) == 0 )
    {
      MiFreeRetpolineImportInfo(v24);
      MiWalkEntireImage(v24, qword_140439F18, 0x10u, 0xFFFFFFFF);
    }
  }
  else
  {
    v25 = SystemRegionType;
  }
  MiMarkKernelImageCfgBits(BugCheckParameter2, 0LL);
  if ( (v2 & 2) != 0 )
  {
    VfDriverUnloadImage(BugCheckParameter2);
    KseDriverUnloadImage(BugCheckParameter2);
  }
  if ( v25 == 1 )
  {
    v26 = v40;
    MiReleasePrivilegedPtes(v52, (unsigned int)v40);
    v8 = 0LL;
  }
  else
  {
    if ( (v2 & 0x10) != 0 )
      MiDereferenceImports(*(_QWORD *)(BugCheckParameter2 + 136));
    v26 = v40;
  }
  v27 = *(void **)(BugCheckParameter2 + 136);
  if ( v27 != (void *)1 )
  {
    if ( v27 != (void *)-2LL && ((unsigned __int8)v27 & 1) == 0 )
      ExFreePoolWithTag(v27, 0);
    *(_QWORD *)(BugCheckParameter2 + 136) = 1LL;
  }
  LdrUnloadAlternateResourceModule(v4);
  if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x100000) != 0 )
    DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(BugCheckParameter2 + 88), (__int64)v4, 0xFFFFFFFFLL);
  if ( *(_QWORD *)BugCheckParameter2 && v8 )
    ExCovReadjustUnloadedModuleEntry(BugCheckParameter2, 0LL);
  v28 = 0;
  if ( v8 && (v2 & 1) != 0 )
  {
    MiRememberUnloadedDriver(BugCheckParameter2 + 88, v4, v26 << 12);
    v29 = 0LL;
    if ( v7 )
    {
      v30 = MiSectionControlArea((__int64)v7);
      v29 = v30;
      if ( *(_QWORD *)BugCheckParameter2 )
      {
        v49[0] = v30;
        MiManageSubsectionView((__int64 *)v49, (_QWORD *)v42, 4);
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v4) )
    {
      if ( v42 )
        MiUnlockDriverCode(BugCheckParameter2);
      qword_140439FB8 = BugCheckParameter2;
      MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, v29, v52, v8, 5, v43);
      if ( v29 )
        MiWalkEntireImage(v29, (__int64)v47, 4u, 0xFFFFFFFF);
      qword_140439FB8 = 0LL;
      _InterlockedExchangeAdd((_DWORD *)&xmmword_140439FE0 + 3, LODWORD(v43[0]) - LODWORD(v43[3]));
      v33 = v52;
      if ( !v7 )
      {
        MiReleasePrivilegedPtes(v52, (unsigned int)v40);
        if ( !(unsigned int)MiCreateSystemWsles() )
        {
          v38 = (void *)MiVaToSoftwareWsle((__int64)AnyMultiplexedVm, (__int64)((v8 << 28) + (v52 << 25)) >> 16);
          if ( v40 != v8 )
          {
            LOBYTE(v39) = 10;
            memset(v38, v39, v40 - v8);
          }
        }
        MiReleaseDriverPtes(0LL, v52, (unsigned int)v40);
      }
      v2 = a2;
      goto LABEL_83;
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      inited = MiInitPerfMemoryFlags(0, 6);
      MiLogPerfMemoryRangeEvent((__int64)v4, 0LL, inited, (v8 + 511) & 0xFFFFFFFFFFFFFE00uLL);
    }
    MiUnmapLargeDriver(v4, v8);
    v2 = a2;
    v28 = 1;
  }
  v33 = v52;
LABEL_83:
  if ( SystemRegionType != 1 )
  {
    if ( v7 )
      MiReleasePrivilegedPtes(v33, (unsigned int)v40);
    if ( (v2 & 1) != 0 )
      MiReturnSystemImageCommitment(BugCheckParameter2, v43);
  }
  if ( *(_QWORD *)BugCheckParameter2 )
  {
    MiProcessLoaderEntry((unsigned __int64 *)BugCheckParameter2, 0);
    if ( (PerfGlobalGroupMask & 4) != 0 )
      PerfLogImageUnload(
        BugCheckParameter2 + 72,
        0LL,
        0LL,
        v4,
        *(unsigned int *)(BugCheckParameter2 + 64),
        *(_DWORD *)(BugCheckParameter2 + 120),
        *(_WORD *)(BugCheckParameter2 + 110) & 0xF,
        (*(unsigned __int16 *)(BugCheckParameter2 + 110) >> 4) & 7,
        0);
  }
  v34 = *(void **)(BugCheckParameter2 + 80);
  if ( v34 )
    ExFreePoolWithTag(v34, 0);
  if ( v7 )
  {
    if ( v42 )
    {
      v35 = *(_QWORD *)(v42 + 56);
      if ( v35 )
        MiReturnResidentAvailable(v35);
    }
    v36 = MiSectionControlArea((__int64)v7);
    v37 = v36;
    if ( !v28 && v4 != *(void **)(*(_QWORD *)v36 + 32LL) )
    {
      MiFreePrivateFixupEntryForSystemImage((ULONG_PTR)v4, 1);
      MiReturnSystemImageAddress(v4, *(unsigned int *)(BugCheckParameter2 + 64));
    }
    if ( v42 && SystemRegionType != 1 && *(_DWORD *)(v42 + 36) >= 0x80u )
      MiReturnCrossPartitionControlAreaCharges(v37);
    MiDereferenceControlArea(v37);
    ObDereferenceObjectDeferDelete(v7);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
