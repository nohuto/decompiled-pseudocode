/*
 * XREFs of MiCreateInitialSystemWsles @ 0x1409B8B7C
 * Callers:
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  int v2; // edx
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v8[22]; // [rsp+20h] [rbp-1E8h] BYREF
  _BYTE v9[288]; // [rsp+D0h] [rbp-138h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v9, 0, sizeof(v9));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v8[5] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  v8[3] = AnyMultiplexedVm;
  v8[21] = v9;
  LODWORD(v8[0]) = v2;
  v8[19] = MiCreatePteWsle;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE4(v8[0]) = v4;
  LODWORD(SharedVm) = MiWalkPageTables((int *)v8);
  MiUnlockWorkingSetExclusive(v1, BYTE4(v8[0]), v5, v6);
  return (_DWORD)SharedVm != 4;
}
