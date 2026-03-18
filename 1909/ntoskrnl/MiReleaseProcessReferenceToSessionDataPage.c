/*
 * XREFs of MiReleaseProcessReferenceToSessionDataPage @ 0x1406443CC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 *     MiSessionObjectDelete @ 0x14088B360 (MiSessionObjectDelete.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     PsDereferencePartition @ 0x1400C5468 (PsDereferencePartition.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiPartitionIdToPointer @ 0x1400F8738 (MiPartitionIdToPointer.c)
 *     MiReturnPfnReferenceCount @ 0x1400FF01C (MiReturnPfnReferenceCount.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     MiUnlinkSessionList @ 0x1402CA714 (MiUnlinkSessionList.c)
 */

__int64 __fastcall MiReleaseProcessReferenceToSessionDataPage(unsigned __int64 a1)
{
  signed __int32 v2; // eax
  bool v3; // zf
  __int64 result; // rax
  unsigned int v5; // ebp
  __int64 v6; // r15
  unsigned __int64 PteAddress; // r14
  ULONG_PTR v8; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  unsigned __int64 *v13; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v3 = v2 == 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
  {
    MiUnlinkSessionList((_QWORD *)a1);
    v5 = *(_DWORD *)(a1 + 8);
    v6 = MiPartitionIdToPointer(*(_WORD *)(a1 + 430));
    PteAddress = MiGetPteAddress(a1);
    v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(PteAddress) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
    {
      v12 = 0;
      v15 = 0;
      v13 = &v10;
      v11 = v5;
      v10 = a1;
      v14 = 12;
      EtwTraceKernelEvent((__int64)&v13, 1u, 0x20400000u, 0x24Eu, 0x401802u);
    }
    MiReleasePtes((__int64)&qword_1404666C0, PteAddress, 1u);
    MiReturnPfnReferenceCount(v8);
    PsDereferencePartition(*(_QWORD *)(v6 + 168));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404656B0, 0LL);
    _bittestandreset((signed __int32 *)qword_140466690->Buffer, v5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404656B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404656B0);
    KeAbPostRelease((ULONG_PTR)&qword_1404656B0);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
