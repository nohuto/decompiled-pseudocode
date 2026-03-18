/*
 * XREFs of MiClearNonPagedPtes @ 0x14010DDA8
 * Callers:
 *     MiCommitPoolMemory @ 0x140022E20 (MiCommitPoolMemory.c)
 *     MmFreePoolMemory @ 0x14010DBAC (MmFreePoolMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x140049000 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiReturnPhysicalPoolPages @ 0x140110524 (MiReturnPhysicalPoolPages.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1402CF258 (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiClearNonPagedPtes(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char *AnyMultiplexedVm; // r14
  __int64 v9; // rcx
  _QWORD v11[28]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[22]; // [rsp+100h] [rbp+0h] BYREF

  memset(v12, 0, 0xA8uLL);
  memset(v11, 0, sizeof(v11));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5);
  v12[3] = a1;
  LOWORD(v12[0]) = 2183;
  v11[25] = __PAIR64__(a4, a3);
  v12[4] = (a2 << 12) + a1 - 1;
  v12[18] = MiDeleteNonPagedPoolPte;
  v11[1] = 20LL;
  v12[19] = MiDeleteNonPagedPoolTail;
  v12[20] = v11;
  LODWORD(v11[0]) = 0;
  WORD2(v11[0]) = 0;
  v11[2] = 0LL;
  v11[3] = 0LL;
  v12[2] = AnyMultiplexedVm;
  BYTE6(v12[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables((__int16 *)v12);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, BYTE6(v12[0]));
  v9 = v11[23];
  if ( v11[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v9 = v11[23];
    }
    MiReturnPhysicalPoolPages(v9, 2LL);
  }
  if ( v11[24] )
    MiReturnPhysicalPoolPages(v11[24], 3LL);
  return HIDWORD(v11[26]);
}
