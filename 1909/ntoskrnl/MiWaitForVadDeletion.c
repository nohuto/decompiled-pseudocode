/*
 * XREFs of MiWaitForVadDeletion @ 0x1402E53D8
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x140073D80 (MiObtainReferencedSecureVad.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiCleanVad @ 0x14060C580 (MiCleanVad.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiWaitForVadDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(v3, 0, 0x48uLL);
  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    CurrentThread = KeGetCurrentThread();
    HIDWORD(v3[1]) = 0;
    v3[3] = (__int64)&v3[2];
    LODWORD(v3[8]) = 1;
    v3[2] = (__int64)&v3[2];
    LOWORD(v3[1]) = 263;
    BYTE2(v3[1]) = 6;
    MiInsertVadEvent(a1, v3, 1);
    MiUnlockVad((__int64)CurrentThread, a1);
    KeWaitForGate((__int64)&v3[1], 18);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
}
