/*
 * XREFs of CreateKernelSemaphore @ 0x1C00A0C50
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0120B50 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C012494C (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
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
