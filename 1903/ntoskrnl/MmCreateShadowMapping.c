/*
 * XREFs of MmCreateShadowMapping @ 0x14074E0B0
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x140185820 (KeAllocateProcessorProfileStructures.c)
 *     KiShadowProcessorAllocation @ 0x14059F9E8 (KiShadowProcessorAllocation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiGetPageTablePages @ 0x1400A3A30 (MiGetPageTablePages.c)
 *     MiInitializeColorBase @ 0x14012D120 (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x14018667C (MiCleanupPageTablePages.c)
 *     MiPageTablesNeeded @ 0x1401867F8 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14074E26C (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rbx
  PEPROCESS v10; // rdi
  struct _KPROCESS *Process; // r12
  char v12; // si
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[38]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[48]; // [rsp+170h] [rbp+70h] BYREF
  char v17; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v16, 0, sizeof(v16));
  memset(v15, 0, 0x128uLL);
  LODWORD(v15[8]) = 1;
  v15[4] = &MiSystemPartition;
  LODWORD(v15[7]) = 12;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v15, v5, &v14) < 0 )
    return 0LL;
  v15[3] = v14;
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v6 = MiGetPteAddress(v4);
    *v7 = v6;
    v4 = v6;
    *(v7 - 1) = PteAddress;
  }
  while ( v8 != 1 );
  CurrentThread = KeGetCurrentThread();
  v10 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404659C0, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v17, 3, (__int64)v15);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404659C0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404659C0);
  KeAbPostRelease((ULONG_PTR)&qword_1404659C0);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v10 )
    KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
  MiCleanupPageTablePages((__int64)v15);
  return 1LL;
}
