/*
 * XREFs of MiCreateInitialSystemWsles @ 0x1409EF438
 * Callers:
 *     MiInitializeDriverImages @ 0x1409EE5A4 (MiInitializeDriverImages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rax
  __int64 v1; // rsi
  __int16 v2; // dx
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[22]; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v11[304]; // [rsp+D0h] [rbp-148h] BYREF

  memset(v10, 0, 0xA8uLL);
  memset(v11, 0, 0x128uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v10[4] = -1LL;
  v1 = (__int64)AnyMultiplexedVm;
  v10[2] = AnyMultiplexedVm;
  v10[20] = v11;
  LOWORD(v10[0]) = v2;
  v10[18] = MiCreatePteWsle;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE6(v10[0]) = v4;
  v5 = MiWalkPageTables((__int16 *)v10);
  LOBYTE(v6) = BYTE6(v10[0]);
  LODWORD(SharedVm) = v5;
  MiUnlockWorkingSetExclusive(v1, v6, v7, v8);
  return (_DWORD)SharedVm != 4;
}
