/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1402C64EC
 * Callers:
 *     MmGetDumpRange @ 0x1402C60EC (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405A9254 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rbx
  LONG *v4; // rax
  LONG *SharedVm; // rax
  _QWORD v6[22]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v6, 0, 0xA8uLL);
  v6[4] = -1LL;
  v6[18] = MiCrashdumpRemovePte;
  v6[20] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v3 = (__int64)AnyMultiplexedVm;
  v6[2] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_140466248 == KeGetCurrentThread() )
  {
    BYTE6(v6[0]) = 17;
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(SharedVm) )
      KeBugCheckEx(0x1Au, 0x50000uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    LOWORD(v6[0]) = 6;
    BYTE6(v6[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  MiWalkPageTables((__int16 *)v6);
  if ( BYTE6(v6[0]) == 17 )
  {
    MiCheckProcessShadow(v3, 2u);
    v4 = MiGetSharedVm(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  }
  else
  {
    MiUnlockWorkingSetShared(v3, BYTE6(v6[0]));
  }
}
