/*
 * XREFs of MmUnmapIoSpace @ 0x1400F5130
 * Callers:
 *     MmFreeContiguousMemory @ 0x1400F4E90 (MmFreeContiguousMemory.c)
 *     MiAllocateContiguousMemory @ 0x1400F5D4C (MiAllocateContiguousMemory.c)
 *     BgpFwLibraryEnable @ 0x1401796D0 (BgpFwLibraryEnable.c)
 *     WmipFirmwareTableHandler @ 0x14019B140 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     PopGetHwConfigurationSignature @ 0x14059BAA8 (PopGetHwConfigurationSignature.c)
 *     WmipGetSMBiosTableData @ 0x1406A4AF8 (WmipGetSMBiosTableData.c)
 *     ExpGetSystemPlatformBinary @ 0x140789190 (ExpGetSystemPlatformBinary.c)
 *     HvlDeleteProcessor @ 0x14085094C (HvlDeleteProcessor.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     WmipFindSMBiosStructure @ 0x1408EF5AC (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1408EF6F0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1408EF7E8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1408EF9D8 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1408EFCA0 (WmipParseSysIdTable.c)
 *     WheapClearPoison @ 0x140919C10 (WheapClearPoison.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiInsertCachedPte @ 0x14006B510 (MiInsertCachedPte.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiMappingHasIoTracker @ 0x1400F5240 (MiMappingHasIoTracker.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400F86C0 (MiInsertLargeTbFlushEntry.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnmapLargePages @ 0x140171A50 (MiUnmapLargePages.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiRemovePteTracker @ 0x1402E7C98 (MiRemovePteTracker.c)
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
    MiReleasePtes((__int64)&qword_1404666C0, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v4);
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
      if ( HIBYTE(word_1404658EC) )
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
  if ( (unsigned int)MiInsertCachedPte((__int64)&qword_1404666C0, v9, v10) != 1 )
  {
    MiFlushTbList((int *)v22, v18, v19, v20);
LABEL_9:
    MiUnmapLargePages(v3, NumberOfBytes, 9LL);
  }
}
