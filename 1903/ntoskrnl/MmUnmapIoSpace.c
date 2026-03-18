/*
 * XREFs of MmUnmapIoSpace @ 0x140117010
 * Callers:
 *     MmFreeContiguousMemory @ 0x140116D70 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x140117C2C (MiAllocateContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x140178FE0 (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x14019AAE0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x1402C21D0 (MiHugePageOperation.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAC8 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406BFAF8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140786E30 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14085124C (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1408EFC9C (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408EFDE0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408EFED8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1408F00C8 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1408F0390 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x14091A1B0 (WheapClearPoison.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005EF80 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x14006B2A0 (MiInsertCachedPte.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiMappingHasIoTracker @ 0x140117120 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x140117198 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x140119668 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140171360 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiRemovePteTracker @ 0x1402E7F38 (MiRemovePteTracker.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  unsigned __int64 v3; // rsi
  SIZE_T v4; // rbx
  unsigned int HasIoTracker; // r14d
  int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  SIZE_T v10; // rbp
  char v11; // bl
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[24]; // [rsp+30h] [rbp-F8h] BYREF

  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_14057118C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v6 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(v3, v4, v7, v8);
  v9 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v6 )
  {
    MiReleasePtes((__int64)&qword_1404669C0, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v4);
    return;
  }
  if ( (NumberOfBytes & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v22, 0, 0xB8uLL);
  do
  {
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v22[3] = 0LL;
  v10 = NumberOfBytes >> 21;
  LODWORD(v22[1]) = 20;
  if ( HasIoTracker )
    goto LABEL_28;
  v11 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v10 )
    goto LABEL_27;
  HasIoTracker = NumberOfBytes >> 21;
  v12 = (unsigned int)v10;
  do
  {
    if ( !MiPteInShadowRange(v9) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow(v14) )
    {
      v15 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_23;
      v17 = (v11 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_23;
      v17 = (v11 & 1) == 0;
    }
    if ( !v17 )
      v13 |= 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v9 = v13;
    if ( v15 )
      MiWritePteShadow(v9, v13);
    MiInsertLargeTbFlushEntry(v22, 1LL, v9, v16);
    v9 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
LABEL_27:
  v9 -= 8LL * HasIoTracker;
LABEL_28:
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_1404669C0, v9, v10) != 1 )
  {
    MiFlushTbList((int *)v22, v18, v19, v20);
LABEL_9:
    MiUnmapLargePages(v3, NumberOfBytes, 9LL);
  }
}
