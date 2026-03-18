/*
 * XREFs of CreateKernelSemaphore @ 0x1C005EB90
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C005EAF8 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
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
