/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00410D0
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0041120 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C023F200 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
