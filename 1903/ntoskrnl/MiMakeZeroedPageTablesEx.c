/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x14008D5B8
 * Callers:
 *     MiCommitPoolMemory @ 0x140022A30 (MiCommitPoolMemory.c)
 *     MiExpandPtes @ 0x1400AA84C (MiExpandPtes.c)
 *     MiMakeZeroedPageTables @ 0x1400AD084 (MiMakeZeroedPageTables.c)
 *     MiExpandSystemCache @ 0x14012B47C (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14018CE14 (MiGetPageTablesForLargeMap.c)
 *     MiMapNewPfns @ 0x140888C50 (MiMapNewPfns.c)
 *     MiCreateTopLevelUltraMappings @ 0x140A1D1B8 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeKernelCfg @ 0x140A22E18 (MiInitializeKernelCfg.c)
 *     MiMapBBTMemory @ 0x140A22F74 (MiMapBBTMemory.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPageTables @ 0x1400ABBF8 (MiDeleteSystemPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiInitializeColorBase @ 0x14012D120 (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x14018667C (MiCleanupPageTablePages.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiSetLeafFillToUninitializedWsle @ 0x1401BEA3C (MiSetLeafFillToUninitializedWsle.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetLargePagesForSystemMapping @ 0x14088B9D8 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int a5)
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
  __int64 v29; // rdx
  __int64 v30; // r11
  int LargePagesForSystemMapping; // eax
  __int64 v33; // rdx
  LONG *SharedVm; // rax
  _QWORD v35[38]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v36[22]; // [rsp+160h] [rbp+60h] BYREF

  memset(v36, 0, 0xA8uLL);
  memset(v35, 0, 0x128uLL);
  if ( (a3 & 4) != 0 )
  {
    HIDWORD(v35[8]) = 3;
    v9 = 3;
    v10 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    HIDWORD(v35[8]) = 2;
    v9 = 2;
    v10 = 2;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      HIDWORD(v35[8]) = 1;
      v9 = 1;
      v10 = 1;
    }
  }
  v11 = a3 & 0xFFFFFF7F;
  if ( !v9 )
    v11 = a3;
  BYTE2(v36[0]) = 4 * v10;
  v12 = 0;
  v13 = (a2 << 25 >> 16) + 4095;
  v14 = a1 << 25 >> 16;
  LODWORD(v35[7]) = a4;
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
  v35[4] = *(_QWORD *)(qword_140466188 + 8LL * AnyMultiplexedVm[87]);
  v29 = a5;
  HIDWORD(v35[7]) = a5;
  LODWORD(v35[8]) = v11;
  v35[36] = -1LL;
  if ( (v11 & 0x40) != 0 )
  {
    MiSetLeafFillToUninitializedWsle(v35);
    v29 = HIDWORD(v35[7]);
  }
  else if ( v14 >= 0xFFFFFA8000000000uLL )
  {
    if ( v14 < 0xFFFFFD8000000000uLL )
      v28 = v19;
    v35[36] = v28;
  }
  MiInitializeColorBase(v14, v29, &v35[34]);
  if ( (v11 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v35, v14, v13);
    v30 = 0LL;
    if ( !LargePagesForSystemMapping && (v11 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v35);
      return 0LL;
    }
  }
  WORD2(v35[10]) = 0;
  LOWORD(v36[0]) = 18439;
  v36[3] = v14;
  v36[18] = MiCreateSystemPageTable;
  v36[19] = MiCreateSystemPageTableTail;
  v36[20] = v35;
  v36[4] = v13;
  v35[11] = 20LL;
  LODWORD(v35[10]) = v12;
  v35[12] = v30;
  v35[13] = v30;
  v36[2] = AnyMultiplexedVm;
  BYTE6(v36[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int16 *)v36);
  LOBYTE(v33) = BYTE6(v36[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v33);
  if ( (v11 & 0x40) != 0 && LODWORD(v35[7]) != 2 )
  {
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    _InterlockedExchangeAdd64((volatile signed __int64 *)SharedVm + 6, v35[6]);
  }
  MiCleanupPageTablePages(v35);
  if ( SLODWORD(v35[33]) < 0 )
  {
    if ( (v11 & 0x200) == 0 )
      MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, a4, v14, v13, 0, (__int64)&v35[10]);
    return 0LL;
  }
  return 1LL;
}
