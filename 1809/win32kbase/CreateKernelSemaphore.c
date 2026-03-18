/*
 * XREFs of CreateKernelSemaphore @ 0x1C0007F20
 * Callers:
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0007E60 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 */

struct _KSEMAPHORE *__fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  struct _KSEMAPHORE *v4; // rax
  struct _KSEMAPHORE *v5; // rbx

  v4 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged(32LL, 1934324565LL);
  v5 = v4;
  if ( v4 )
    KeInitializeSemaphore(v4, Count, Limit);
  return v5;
}
