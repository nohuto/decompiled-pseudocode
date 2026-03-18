/*
 * XREFs of MiUnlockImageSection @ 0x1400DC17C
 * Callers:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockCodePage @ 0x1400D9D20 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x14010BB14 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall MiUnlockImageSection(
        volatile signed __int32 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v7; // ecx
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v7 = _InterlockedDecrement(a1);
  if ( (unsigned int)(v7 + 1) <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(a2 << 25) >> 16, a4, v7);
  if ( v7 == 1 )
  {
    MiUnlockCodePage(a2, a3);
    _InterlockedAdd(a1, 0xFFFFFFFF);
    _InterlockedOr(v8, 0);
    if ( qword_140464950 )
      ExpUnblockPushLock(&qword_140464950, 0LL, 0LL);
  }
  if ( !CurrentIrql )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
