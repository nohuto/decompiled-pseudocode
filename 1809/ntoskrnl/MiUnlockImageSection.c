/*
 * XREFs of MiUnlockImageSection @ 0x140097E58
 * Callers:
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockCodePage @ 0x14009C6B0 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x140111BF0 (ExpUnblockPushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(volatile signed __int32 *a1, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v7; // ecx
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v7 = _InterlockedDecrement(a1);
  result = (unsigned int)(v7 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, a2 << 25 >> 16, a4, v7);
  if ( v7 == 1 )
  {
    result = MiUnlockCodePage(a2, a3);
    _InterlockedAdd(a1, 0xFFFFFFFF);
    _InterlockedOr(v9, 0);
    if ( qword_140439FF0 )
      result = ExpUnblockPushLock(&qword_140439FF0, 0LL, 0LL);
  }
  if ( !CurrentIrql )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
