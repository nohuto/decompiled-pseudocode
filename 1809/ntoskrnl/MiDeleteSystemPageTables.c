/*
 * XREFs of MiDeleteSystemPageTables @ 0x140027FD4
 * Callers:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v10; // rdx
  _QWORD v12[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[22]; // [rsp+40h] [rbp-C0h] BYREF

  v12[1] = 0LL;
  memset(v13, 0, sizeof(v13));
  BYTE2(v13[1]) = a5;
  v13[19] = MiDeleteSystemPageTable;
  v13[20] = MiDeleteSystemPageTableTail;
  v13[21] = v12;
  v12[0] = a2;
  v12[2] = a6;
  LODWORD(v13[0]) = 2055;
  v13[4] = a3;
  v13[5] = a4;
  v13[3] = a1;
  BYTE4(v13[0]) = MiLockWorkingSetShared(a1);
  MiWalkPageTables(v13);
  LOBYTE(v10) = BYTE4(v13[0]);
  return MiUnlockWorkingSetShared(a1, v10);
}
