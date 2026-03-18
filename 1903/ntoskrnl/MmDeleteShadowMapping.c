/*
 * XREFs of MmDeleteShadowMapping @ 0x140892B78
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x140185820 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14059F9E8 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x1405AB9BC (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x14001F414 (MiInitializeTbFlushList.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1401241C8 (MiReadWriteAnyLevelShadowPte.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int64 __fastcall MmDeleteShadowMapping(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // r14
  struct _KPROCESS *Process; // r15
  PEPROCESS v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax
  _BYTE v14[48]; // [rsp+20h] [rbp-128h] BYREF
  int v15[48]; // [rsp+50h] [rbp-F8h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0xB8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiGetPteAddress(a2 + a1 - 1);
  CurrentThread = KeGetCurrentThread();
  v7 = v5;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v15, 0, 20);
  MiInsertTbFlushEntry((__int64)v15, a1 & 0xFFFFFFFFFFFFF000uLL, a2 >> 12, 0);
  v9 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v14);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404659C0, 0LL);
  while ( PteAddress <= v7 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList(v15, v10, v11, v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404659C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404659C0);
  KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
  result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v9 )
    return KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
  return result;
}
