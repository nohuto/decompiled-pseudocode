/*
 * XREFs of MiInitializeDynamicBitmap @ 0x1407420E8
 * Callers:
 *     MiBuildDynamicRegion @ 0x140187624 (MiBuildDynamicRegion.c)
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MiCreatePfnBitMaps @ 0x1407510CC (MiCreatePfnBitMaps.c)
 *     MiInitializeSystemPtes @ 0x1409EE318 (MiInitializeSystemPtes.c)
 *     MiInitializePteInfo @ 0x1409EEE40 (MiInitializePteInfo.c)
 *     MiInitializeMirroring @ 0x1409F1634 (MiInitializeMirroring.c)
 *     MiCreateRetpolineBitmap @ 0x140A19C38 (MiCreateRetpolineBitmap.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiSetPfnLink @ 0x1400B8CB8 (MiSetPfnLink.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiMakeZeroedPageTables @ 0x1400E8594 (MiMakeZeroedPageTables.c)
 *     MiPartitionIdToPointer @ 0x1400F8738 (MiPartitionIdToPointer.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockPageTable @ 0x14015D3F4 (MiLockPageTable.c)
 *     MiTransformValidPteInPlace @ 0x140174574 (MiTransformValidPteInPlace.c)
 *     MiReturnPfnList @ 0x14018F224 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x14019D6B4 (MiReturnSplitPageCharges.c)
 *     MiUnlockPageTable @ 0x14019D818 (MiUnlockPageTable.c)
 */

__int64 __fastcall MiInitializeDynamicBitmap(_QWORD *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 PteAddress; // rsi
  unsigned __int64 v8; // r14
  int SystemRegionType; // eax
  char v10; // r9
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rdi
  char *AnyMultiplexedVm; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r13
  char ValidPte; // bl
  unsigned __int8 v18; // r12
  bool v19; // cl
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  bool v28; // zf
  int v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32[10]; // [rsp+38h] [rbp-50h] BYREF
  bool v36; // [rsp+A8h] [rbp+20h]

  PteAddress = MiGetPteAddress(a2);
  v8 = ((unsigned __int64)(v5 + 7) >> 15) + (((v6 & 0xFFF) + 4095 + (((unsigned __int64)(v5 + 7) >> 3) & 0xFFF)) >> 12);
  SystemRegionType = MiGetSystemRegionType(v6);
  v11 = 1;
  if ( SystemRegionType != 1 )
    v11 = 9;
  v29 = v11;
  if ( (v10 & 2) == 0 && !(unsigned int)MiMakeZeroedPageTables(PteAddress, PteAddress + 8 * (v8 - 1), 1u, v11) )
    return 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( (a4 & 4) != 0 )
  {
    v12 = qword_140466560;
    v13 = qword_1404665D0;
  }
  else
  {
    v12 = qword_140466548;
    v13 = qword_1404665E0;
  }
  AnyMultiplexedVm = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  ValidPte = MiMakeValidPte(PteAddress, v12, ((unsigned __int8)(a4 & 1) << 29) + 1);
  if ( !v8 )
    goto LABEL_23;
  v28 = (a4 & 8) == 0;
  v18 = 17;
  v19 = !v28;
  v36 = !v28;
  do
  {
    if ( (PteAddress & 0xFFF) == 0 && v19 && v8 - v16 >= 0x200 )
    {
      v20 = MiGetPteAddress(PteAddress);
      if ( (_DWORD)InitializationPhase )
      {
        if ( !AnyMultiplexedVm )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v18 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        }
        if ( v15 )
        {
          if ( (v20 & 0xFFF) != 0 )
            goto LABEL_16;
          MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
        }
        v15 = MiGetPteAddress(v20);
        MiLockPageTable((__int64)AnyMultiplexedVm, v15);
      }
LABEL_16:
      v32[0] = MI_READ_PTE_LOCK_FREE(v20);
      MiTransformValidPteInPlace((volatile signed __int64 *)v20, v20, v13, 1u);
      v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v32);
      MiSetPfnLink((_QWORD *)(48 * ((v21 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v30);
      v30 = v22;
      v31 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF);
      v16 += 511LL;
      PteAddress = ((v20 << 25) + 0x10000000) >> 16;
      goto LABEL_21;
    }
    if ( MiPteInShadowRange(PteAddress) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v24 = 1;
        if ( HIBYTE(word_1404658EC) )
          goto LABEL_18;
        v28 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_18;
        v28 = (ValidPte & 1) == 0;
      }
      if ( !v28 )
        v23 |= v27;
    }
LABEL_18:
    *(_QWORD *)PteAddress = v23;
    if ( v24 )
      MiWritePteShadow(PteAddress);
    PteAddress += 8LL;
LABEL_21:
    v19 = v36;
    ++v16;
  }
  while ( v16 < v8 );
  if ( AnyMultiplexedVm )
  {
    if ( v15 )
      MiUnlockPageTable((__int64)AnyMultiplexedVm, v15);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v18);
  }
LABEL_23:
  *a1 = a3;
  a1[1] = a2;
  if ( v30 )
  {
    v26 = MiReturnPfnList(v30);
    MiReturnSplitPageCharges(v31, v26, v29);
  }
  return 1LL;
}
