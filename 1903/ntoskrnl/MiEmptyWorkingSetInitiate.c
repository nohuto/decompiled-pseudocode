/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x14015A358
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140142F6C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyWorkingSet @ 0x1402BF4E8 (MiEmptyWorkingSet.c)
 *     MiEmptyTargetedWorkingSet @ 0x1402C8428 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiEmptyWorkingSetInitiate(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  char v9; // al
  char v10; // al
  bool v11; // zf
  unsigned int v12; // ebx
  _QWORD v14[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v15[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, 0xA8uLL);
  v8 = 0;
  LODWORD(v15[1]) = MiTbFlushType(a1);
  WORD2(v15[1]) = 4;
  v14[20] = v15;
  LOWORD(v14[0]) = 6;
  v14[18] = MiEmptyPte;
  v14[19] = MiEmptyWorkingSetTail;
  v15[3] = 0LL;
  LODWORD(v15[2]) = 20;
  v15[4] = 0LL;
  v14[2] = a1;
  if ( (a2 & 1) != 0 )
  {
    LOBYTE(v15[0]) = 1;
  }
  else
  {
    v9 = BYTE1(v15[0]);
    if ( (a2 & 2) != 0 )
      v9 = 1;
    BYTE1(v15[0]) = v9;
  }
  v14[3] = a3;
  v14[4] = a4;
  v10 = MiLockWorkingSetShared(a1);
  v11 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  BYTE6(v14[0]) = v10;
  if ( v11 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v12 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables((__int16 *)v14) == 4 )
      v8 = -1073741558;
    v12 = v8;
  }
  MiUnlockWorkingSetShared(a1, BYTE6(v14[0]));
  return v12;
}
