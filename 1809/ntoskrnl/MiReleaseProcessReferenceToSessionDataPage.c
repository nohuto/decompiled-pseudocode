/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x14060851C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x140853310 (MiSessionObjectDelete.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x14013B8B0 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x1402B5544 (MiUnlinkSessionList.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // r9
  __int64 v13; // r11
  __int64 *v14; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-50h]
  int v18; // [rsp+3Ch] [rbp-4Ch]
  unsigned __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-40h]
  char v21; // [rsp+50h] [rbp-38h] BYREF

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList((_QWORD *)a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 3182));
    v7 = 3LL;
    PteAddress = MiGetPteAddress(a1);
    v9 = PteAddress;
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(v9);
      v9 = v11 + 8;
      *v12 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    while ( v13 != 1 );
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v18 = 0;
      v16 = &v19;
      v20 = v5;
      v19 = a1;
      v17 = 12;
      EtwTraceKernelEvent((__int64)&v16, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    MiReleasePtes((__int64)&qword_14043C060, PteAddress, 3u);
    v14 = (__int64 *)&v21;
    do
    {
      MiReturnPfnReferenceCount(*v14++);
      --v7;
    }
    while ( v7 );
    PsDereferencePartition(*(_QWORD *)(v6 + 168));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043B058, 0LL);
    _bittestandreset((signed __int32 *)qword_14043C010->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043B058, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043B058);
    KeAbPostRelease((ULONG_PTR)&qword_14043B058);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
