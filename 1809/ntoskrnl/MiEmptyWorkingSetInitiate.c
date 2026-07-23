/*
 * XREFs of MiEmptyWorkingSetInitiate @ 0x140142320
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiEmptyWorkingSet @ 0x1402A7CF4 (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiEmptyTargetedWorkingSet @ 0x1402B31C8 (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
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
  memset(v14, 0, sizeof(v14));
  v15[2] = 20LL;
  v8 = 0;
  LODWORD(v15[1]) = MiTbFlushType(a1);
  WORD2(v15[1]) = 4;
  v14[21] = v15;
  v14[19] = MiEmptyPte;
  v14[20] = MiEmptyWorkingSetTail;
  v15[3] = 0LL;
  v15[4] = 0LL;
  LODWORD(v14[0]) = 6;
  v14[3] = a1;
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
  v14[4] = a3;
  v14[5] = a4;
  v10 = MiLockWorkingSetShared(a1);
  v11 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  BYTE4(v14[0]) = v10;
  if ( v11 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v12 = -1073741558;
  }
  else
  {
    if ( (unsigned int)MiWalkPageTables((int *)v14) == 4 )
      v8 = -1073741558;
    v12 = v8;
  }
  MiUnlockWorkingSetShared(a1, BYTE4(v14[0]));
  return v12;
}
