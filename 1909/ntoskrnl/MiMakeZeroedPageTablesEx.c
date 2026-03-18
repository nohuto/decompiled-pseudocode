/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x1400CA488
 * Callers:
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 *     MiExpandPtes @ 0x1400E5D60 (MiExpandPtes.c)
 *     MiMakeZeroedPageTables @ 0x1400E8594 (MiMakeZeroedPageTables.c)
 *     MiExpandSystemCache @ 0x14012BF4C (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14018D694 (MiGetPageTablesForLargeMap.c)
 *     MiMapNewPfns @ 0x140888470 (MiMapNewPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A1D394 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeKernelCfg @ 0x140A22EF8 (MiInitializeKernelCfg.c)
 *     MiMapBBTMemory @ 0x140A23054 (MiMapBBTMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiInitializeColorBase @ 0x140091860 (MiInitializeColorBase.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPageTables @ 0x1400E7108 (MiDeleteSystemPageTables.c)
 *     MiCleanupPageTablePages @ 0x140186C2C (MiCleanupPageTablePages.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     MiSetLeafFillToUninitializedWsle @ 0x1401BF52C (MiSetLeafFillToUninitializedWsle.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiGetLargePagesForSystemMapping @ 0x14088B1F8 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  int v9; // ecx
  char v10; // al
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v13; // r12
  unsigned __int64 v14; // rdi
  unsigned int v15; // edx
  unsigned __int16 *AnyMultiplexedVm; // rbx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  __int64 v19; // r11
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int SystemRegionType; // eax
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r11
  int LargePagesForSystemMapping; // eax
  LONG *SharedVm; // rax
  _QWORD v33[38]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v34[22]; // [rsp+160h] [rbp+60h] BYREF

  memset(v34, 0, 0xA8uLL);
  memset(v33, 0, 0x128uLL);
  if ( (a3 & 4) != 0 )
  {
    HIDWORD(v33[8]) = 3;
    v9 = 3;
    v10 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    HIDWORD(v33[8]) = 2;
    v9 = 2;
    v10 = 2;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      HIDWORD(v33[8]) = 1;
      v9 = 1;
      v10 = 1;
    }
  }
  v11 = a3 & 0xFFFFFF7F;
  if ( !v9 )
    v11 = a3;
  BYTE2(v34[0]) = 4 * v10;
  v12 = 0;
  v13 = (a2 << 25 >> 16) + 4095;
  v14 = a1 << 25 >> 16;
  LODWORD(v33[7]) = a4;
  AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(5LL);
  if ( a4 > 9 )
  {
    if ( a4 == 11 )
    {
      SystemRegionType = MiGetSystemRegionType(v14);
      if ( SystemRegionType != v27 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v24 = a4 - 11 - v17;
    if ( !v24 )
    {
LABEL_26:
      v23 = v17;
      goto LABEL_18;
    }
    v25 = v24 - v17;
    if ( v25 )
    {
      if ( v25 != v17 )
        goto LABEL_29;
      v23 = 4LL;
LABEL_18:
      AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(v23);
      goto LABEL_29;
    }
LABEL_25:
    v23 = v18;
    goto LABEL_18;
  }
  if ( a4 == 9 )
    goto LABEL_25;
  if ( a4 == v17 )
  {
LABEL_28:
    v12 = v15;
    AnyMultiplexedVm = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 256);
    goto LABEL_29;
  }
  v20 = a4 - v17 - v17;
  if ( v20 )
  {
    v21 = v20 - v17;
    if ( v21 )
    {
      v22 = v21 - v18;
      if ( v22 )
      {
        if ( v22 != v15 )
          goto LABEL_29;
        v23 = 0LL;
      }
      else
      {
        v23 = v15;
      }
      goto LABEL_18;
    }
    goto LABEL_26;
  }
  v12 = v17;
  AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
LABEL_29:
  v28 = -1LL;
  v33[4] = *(_QWORD *)(qword_140465E88 + 8LL * AnyMultiplexedVm[87]);
  HIDWORD(v33[7]) = a5;
  LODWORD(v33[8]) = v11;
  v33[36] = -1LL;
  if ( (v11 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v33);
  }
  else if ( v14 >= 0xFFFFFA8000000000uLL )
  {
    if ( v14 < 0xFFFFFD8000000000uLL )
      v28 = v19;
    v33[36] = v28;
  }
  MiInitializeColorBase(v14);
  if ( (v11 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v33, v14, v13);
    v29 = 0LL;
    if ( !LargePagesForSystemMapping && (v11 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v33);
      return 0LL;
    }
  }
  WORD2(v33[10]) = 0;
  LOWORD(v34[0]) = 18439;
  v34[3] = v14;
  v34[18] = MiCreateSystemPageTable;
  v34[19] = MiCreateSystemPageTableTail;
  v34[20] = v33;
  v34[4] = v13;
  v33[11] = 20LL;
  LODWORD(v33[10]) = v12;
  v33[12] = v29;
  v33[13] = v29;
  v34[2] = AnyMultiplexedVm;
  BYTE6(v34[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int16 *)v34);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v34[0]));
  if ( (v11 & 0x40) != 0 && LODWORD(v33[7]) != 2 )
  {
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    _InterlockedExchangeAdd64((volatile signed __int64 *)SharedVm + 6, v33[6]);
  }
  MiCleanupPageTablePages(v33);
  if ( SLODWORD(v33[33]) < 0 )
  {
    if ( (v11 & 0x200) == 0 )
      MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v14, v13, 0, (__int64)&v33[10]);
    return 0LL;
  }
  return 1LL;
}
