/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C003ABB0
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C003AC00 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C020BF60 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
