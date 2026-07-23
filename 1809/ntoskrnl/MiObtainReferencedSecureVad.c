/*
 * XREFs of MiObtainReferencedSecureVad @ 0x1400861C0
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E1E30 (MmStoreAllocateVirtualMemory.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiWaitForVadDeletion @ 0x1402CB340 (MiWaitForVadDeletion.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, int *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // rbp
  ULONG_PTR v6; // rsi
  __int64 Address; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  int v11; // eax

  *a2 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx(Process + 872, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    *a2 = -1073741558;
    return 0LL;
  }
  v6 = *(_QWORD *)(BugCheckParameter3 + 8);
  Address = MiLocateAddress(v6);
  v8 = Address;
  if ( !Address )
    KeBugCheckEx(0x1Au, 0x15000uLL, v6, BugCheckParameter3, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(Address + 36));
  --CurrentThread->SpecialApcDisable;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  v9 = v6 >> 12;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 40, 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (*(_DWORD *)(v8 + 48) & 0x20000000) != 0 )
  {
    MiWaitForVadDeletion(v8);
    MiUnlockAndDereferenceVad((char *)v8);
    v11 = -1073741558;
    if ( (*(_DWORD *)(Process + 772) & 0x20) == 0 )
      v11 = -1073741664;
    *a2 = v11;
    return 0LL;
  }
  if ( v9 < (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
    || v9 > (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((char *)v8);
    *a2 = -1073741664;
    return 0LL;
  }
  return v8;
}
