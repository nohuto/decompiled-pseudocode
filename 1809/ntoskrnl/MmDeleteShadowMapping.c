/*
 * XREFs of MmDeleteShadowMapping @ 0x14085A12C
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140573D84 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x14057CA9C (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400EDC04 (MiInitializeTbFlushList.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14012B3CC (MiReadWriteAnyLevelShadowPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MmDeleteShadowMapping(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 PteAddress; // rdi
  __int64 v3; // r10
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v6; // r14
  struct _KPROCESS *Process; // r15
  unsigned __int64 v8; // r11
  __int64 v9; // r10
  PEPROCESS v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  _BYTE v15[48]; // [rsp+20h] [rbp-128h] BYREF
  int v16[48]; // [rsp+50h] [rbp-F8h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v4 = MiGetPteAddress(v3 + v1 - 1);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v16, 0, 20);
  MiInsertTbFlushEntry((__int64)v16, v9 & 0xFFFFFFFFFFFFF000uLL, v8 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v15);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B068, 0LL);
  while ( PteAddress <= v6 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList(v16, v11, v12, v13);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B068, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B068);
  KeAbPostRelease((ULONG_PTR)&qword_14043B068);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v10 )
    return KiUnstackDetachProcess((__int64)v15, 0LL);
  return result;
}
