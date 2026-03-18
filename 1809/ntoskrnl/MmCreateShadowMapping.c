/*
 * XREFs of MmCreateShadowMapping @ 0x14072A178
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140572D84 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiCleanupPageTablePages @ 0x1400288B8 (MiCleanupPageTablePages.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     MiInitializeColorBase @ 0x14017E4B8 (MiInitializeColorBase.c)
 *     MiPageTablesNeeded @ 0x14017E4D0 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14072A324 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(__int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rdi
  PEPROCESS v10; // rbx
  struct _KPROCESS *Process; // r14
  char v12; // r12
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v15[36]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[48]; // [rsp+160h] [rbp+60h] BYREF
  char v17; // [rsp+190h] [rbp+90h] BYREF

  memset(v15, 0, sizeof(v15));
  LODWORD(v15[7]) = 1;
  v15[3] = &MiSystemPartition;
  LODWORD(v15[6]) = 12;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v15, v5, &v14) < 0 )
    return 0LL;
  v15[2] = v14;
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
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v16);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439FA8, 0LL);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v17, 3, (__int64)v15);
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439FA8, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439FA8);
  KeAbPostRelease((ULONG_PTR)&qword_140439FA8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( Process != v10 )
    KiUnstackDetachProcess((__int64)v16, 0LL);
  MiCleanupPageTablePages((__int64)v15);
  return 1LL;
}
