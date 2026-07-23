/*
 * XREFs of MmUnmapIoSpace @ 0x1401232F0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400E659C (MiAllocateContiguousMemory.c)
 *     MmFreeContiguousMemory @ 0x140123090 (MmFreeContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x14016F8E0 (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x140190B10 (WmipFirmwareTableHandler.c)
 *     PopGetHwConfigurationSignature @ 0x14056CF24 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406A905C (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140760DDC (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x140818A2C (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1408B3A24 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408B3B68 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408B3C60 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1408B3E50 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1408B4114 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x1408DD244 (WheapClearPoison.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x1400344D0 (MiInsertCachedPte.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14009D850 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140121554 (MiInsertLargeTbFlushEntry.c)
 *     MiMappingHasIoTracker @ 0x1401233E4 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x14012344C (MiZeroAndFlushPtes.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUnmapLargePages @ 0x1402C5D94 (MiUnmapLargePages.c)
 *     MiRemovePteTracker @ 0x1402CDF00 (MiRemovePteTracker.c)
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
  int v14; // r8d
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // [rsp+20h] [rbp-108h]
  int v20; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+34h] [rbp-F4h]
  int v22; // [rsp+38h] [rbp-F0h]
  int v23; // [rsp+3Ch] [rbp-ECh]
  __int64 v24; // [rsp+40h] [rbp-E8h]
  __int64 v25; // [rsp+48h] [rbp-E0h]

  v19 = BaseAddress;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_14054117C & 1) != 0 )
    MiRemovePteTracker(0LL);
  HasIoTracker = MiMappingHasIoTracker(v3);
  v6 = MI_IS_PHYSICAL_ADDRESS(v3);
  if ( HasIoTracker == 1 )
    MiZeroAndFlushPtes(v3, v4, v7, v8, v19);
  v9 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v6 )
  {
    MiReleasePtes((__int64)&qword_14043C060, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v4);
    return;
  }
  if ( (NumberOfBytes & 0x1FFFFF) != 0 )
    goto LABEL_28;
  do
  {
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v10 = NumberOfBytes >> 21;
  v22 = 20;
  if ( HasIoTracker )
    goto LABEL_26;
  v11 = MiSwizzleInvalidPte(768LL);
  if ( !(_DWORD)v10 )
    goto LABEL_25;
  HasIoTracker = NumberOfBytes >> 21;
  v12 = (unsigned int)v10;
  do
  {
    if ( !MiPteInShadowRange(v9) )
      goto LABEL_21;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_21;
      v15 = (v11 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_21;
      v15 = (v11 & 1) == 0;
    }
    if ( !v15 )
      v13 |= 0x8000000000000000uLL;
LABEL_21:
    *(_QWORD *)v9 = v13;
    if ( v14 )
      MiWritePteShadow(v9, v13);
    MiInsertLargeTbFlushEntry((__int64)&v20, 1u, v9);
    v9 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)v19;
LABEL_25:
  v9 -= 8LL * HasIoTracker;
LABEL_26:
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_14043C060, v9, v10) != 1 )
  {
    MiFlushTbList(&v20, v16, v17, v18);
LABEL_28:
    MiUnmapLargePages(v3, NumberOfBytes, 9LL);
  }
}
