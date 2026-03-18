/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x1402AE5AC
 * Callers:
 *     MmGetDumpRange @ 0x1402AE208 (MmGetDumpRange.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405793C4 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     MiWalkPageTables @ 0x14006E940 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1401001E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void __fastcall MmRemoveSystemCacheFromDump(ULONG_PTR BugCheckParameter2)
{
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  LONG *v6; // rax
  LONG *SharedVm; // rax
  _QWORD v8[22]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v8, 0, sizeof(v8));
  v8[5] = -1LL;
  v8[19] = MiCrashdumpRemovePte;
  v8[21] = BugCheckParameter2;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v3 = (__int64)AnyMultiplexedVm;
  v8[3] = AnyMultiplexedVm;
  if ( (KiBugCheckActive & 3) != 0 || (struct _KTHREAD *)qword_14043A7A8 == KeGetCurrentThread() )
  {
    BYTE4(v8[0]) = 17;
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(SharedVm) )
      KeBugCheckEx(0x1Au, 0x50000uLL, BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    LODWORD(v8[0]) = 6;
    BYTE4(v8[0]) = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  MiWalkPageTables((int *)v8);
  if ( BYTE4(v8[0]) == 17 )
  {
    MiCheckProcessShadow(v3, 2u, v4, v5);
    v6 = MiGetSharedVm(v3);
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  }
  else
  {
    MiUnlockWorkingSetShared(v3, BYTE4(v8[0]));
  }
}
