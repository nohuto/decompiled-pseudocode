/*
 * XREFs of MiDeleteSystemPageTables @ 0x1400ABBF8
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14008D5B8 (MiMakeZeroedPageTablesEx.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTables(__int64 a1, int a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+24h] [rbp-DCh]
  int v14; // [rsp+2Ch] [rbp-D4h]
  __int64 v15; // [rsp+30h] [rbp-D0h]
  _QWORD v16[22]; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0LL;
  v14 = 0;
  memset(v16, 0, 0xA8uLL);
  v12 = a2;
  BYTE2(v16[0]) = 4 * (a5 & 7);
  LOWORD(v16[0]) = 2055;
  v16[18] = MiDeleteSystemPageTable;
  v16[19] = MiDeleteSystemPageTableTail;
  v16[20] = &v12;
  v15 = a6;
  v16[3] = a3;
  v16[4] = a4;
  v16[2] = a1;
  BYTE6(v16[0]) = MiLockWorkingSetShared(a1);
  MiWalkPageTables((__int16 *)v16);
  LOBYTE(v10) = BYTE6(v16[0]);
  return MiUnlockWorkingSetShared(a1, v10);
}
