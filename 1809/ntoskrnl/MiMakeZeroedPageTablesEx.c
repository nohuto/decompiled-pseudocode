/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x140028584
 * Callers:
 *     MiMakeZeroedPageTables @ 0x140026644 (MiMakeZeroedPageTables.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiExpandSystemCache @ 0x1400F624C (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400F6494 (MiExpandPtes.c)
 *     MiMapBBTMemory @ 0x1409BB008 (MiMapBBTMemory.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409DABC0 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     MiDeleteSystemPageTables @ 0x140027FD4 (MiDeleteSystemPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiCleanupPageTablePages @ 0x1400288B8 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBaseEx @ 0x140028994 (MiInitializeColorBaseEx.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetLargePagesForSystemMapping @ 0x1408531D0 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, unsigned int a3, signed int a4)
{
  int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v11; // r12
  unsigned __int64 v12; // rsi
  unsigned int v13; // edx
  unsigned __int16 *AnyMultiplexedVm; // rbx
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v26; // ecx
  int SystemRegionType; // eax
  int v28; // ecx
  __int64 SharedVm; // rax
  _QWORD v30[36]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v31[22]; // [rsp+150h] [rbp+50h] BYREF

  memset(v31, 0, sizeof(v31));
  memset(v30, 0, sizeof(v30));
  if ( (a3 & 4) != 0 )
  {
    HIDWORD(v30[7]) = 3;
    v8 = 3;
  }
  else if ( (a3 & 2) != 0 )
  {
    HIDWORD(v30[7]) = 2;
    v8 = 2;
  }
  else
  {
    v8 = 0;
    if ( (a3 & 0x20) == 0 )
    {
      HIDWORD(v30[7]) = 1;
      v8 = 1;
    }
  }
  v9 = a3 & 0xFFFFFF7F;
  BYTE2(v31[1]) = BYTE4(v30[7]);
  if ( !v8 )
    v9 = a3;
  v10 = 0;
  v11 = (a2 << 25 >> 16) + 4095;
  v12 = a1 << 25 >> 16;
  LODWORD(v30[6]) = a4;
  AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(5LL);
  v18 = 8LL;
  if ( a4 == 9 )
    goto LABEL_15;
  if ( a4 > 9 )
  {
    if ( a4 == 11 )
    {
      SystemRegionType = MiGetSystemRegionType(v12);
      if ( SystemRegionType != (_DWORD)v15 )
        goto LABEL_17;
      goto LABEL_33;
    }
    v26 = a4 - 11 - v15;
    if ( !v26 )
    {
LABEL_30:
      v19 = (unsigned int)v15;
      goto LABEL_16;
    }
    v28 = v26 - v13;
    if ( v28 )
    {
      if ( v28 == (_DWORD)v15 )
      {
        v19 = 4LL;
        goto LABEL_16;
      }
      goto LABEL_17;
    }
LABEL_15:
    v19 = v16;
LABEL_16:
    AnyMultiplexedVm = (unsigned __int16 *)MiGetAnyMultiplexedVm(v19);
    goto LABEL_17;
  }
  if ( a4 == (_DWORD)v15 )
  {
LABEL_33:
    v10 = v13;
    AnyMultiplexedVm = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    goto LABEL_17;
  }
  if ( a4 != v13 )
  {
    if ( a4 != v16 )
    {
      if ( a4 <= 5 )
        goto LABEL_17;
      if ( a4 <= 7 )
        v19 = v13;
      else
        v19 = 0LL;
      goto LABEL_16;
    }
    goto LABEL_30;
  }
  v10 = v15;
  AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
LABEL_17:
  v20 = *(_QWORD *)(qword_14043B808 + 8LL * AnyMultiplexedVm[87]);
  v21 = -1LL;
  LODWORD(v30[7]) = v9;
  v30[3] = v20;
  HIDWORD(v30[6]) = v17;
  v30[35] = -1LL;
  if ( (v9 & 0x40) != 0 )
  {
    do
    {
      v21 = (v21 << 8) | 0xA;
      v18 -= v15;
    }
    while ( v18 );
  }
  else
  {
    if ( v12 < (MmPfnDatabase & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_22;
    if ( v12 < 0xFFFFFD8000000000uLL )
      v21 = v17;
  }
  v30[35] = v21;
LABEL_22:
  MiInitializeColorBaseEx(v12, &v30[33], 0LL);
  if ( (v9 & 0x80u) != 0 )
  {
    MiGetLargePagesForSystemMapping(v30, v12, v11);
    v22 = 0LL;
  }
  WORD2(v30[9]) = 0;
  v31[19] = MiCreateSystemPageTable;
  LODWORD(v31[0]) = 18439;
  v31[20] = MiCreateSystemPageTableTail;
  v31[21] = v30;
  v31[4] = v12;
  v31[5] = v11;
  v30[10] = 20LL;
  LODWORD(v30[9]) = v10;
  v30[11] = v22;
  v30[12] = v22;
  v31[3] = AnyMultiplexedVm;
  BYTE4(v31[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiWalkPageTables(v31);
  LOBYTE(v23) = BYTE4(v31[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v23);
  if ( (v9 & 0x40) != 0 && LODWORD(v30[6]) != 2 )
  {
    SharedVm = MiGetSharedVm(AnyMultiplexedVm, v24);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(SharedVm + 56), v30[5]);
  }
  MiCleanupPageTablePages(v30);
  if ( SLODWORD(v30[32]) >= 0 )
    return 1LL;
  if ( (v9 & 0x100) == 0 )
    MiDeleteSystemPageTables((__int64)AnyMultiplexedVm, a4, v12, v11, 0, (__int64)&v30[9]);
  return 0LL;
}
