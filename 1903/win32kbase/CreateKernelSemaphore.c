/*
 * XREFs of CreateKernelSemaphore @ 0x1C0058A60
 * Callers:
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C005B320 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged(32LL, 0x734B7355u);
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}
