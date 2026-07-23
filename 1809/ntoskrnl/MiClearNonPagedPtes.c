/*
 * XREFs of MiClearNonPagedPtes @ 0x1400282C4
 * Callers:
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 * Callees:
 *     MiReturnPhysicalPoolPages @ 0x140025380 (MiReturnPhysicalPoolPages.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x1402B9228 (MiLogNonPagedPoolReleaseEvent.c)
 */

__int64 __fastcall MiClearNonPagedPtes(__int64 a1, __int64 a2, int a3)
{
  __int64 AnyMultiplexedVm; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD v10[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[28]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(5LL);
  v10[4] = a1;
  v10[19] = MiDeleteNonPagedPoolPte;
  LODWORD(v10[0]) = 2183;
  LODWORD(v11[25]) = a3;
  v10[5] = (a2 << 12) + a1 - 1;
  v10[20] = MiDeleteNonPagedPoolTail;
  v11[1] = 20LL;
  v10[21] = v11;
  LODWORD(v11[0]) = 0;
  WORD2(v11[0]) = 0;
  v11[2] = 0LL;
  v11[3] = 0LL;
  v10[3] = AnyMultiplexedVm;
  BYTE4(v10[0]) = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiWalkPageTables(v10);
  LOBYTE(v7) = BYTE4(v10[0]);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v7);
  v8 = v11[23];
  if ( v11[23] )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    {
      MiLogNonPagedPoolReleaseEvent();
      v8 = v11[23];
    }
    MiReturnPhysicalPoolPages(v8, 2);
  }
  if ( v11[24] )
    MiReturnPhysicalPoolPages(v11[24], 3);
  return LODWORD(v11[26]);
}
