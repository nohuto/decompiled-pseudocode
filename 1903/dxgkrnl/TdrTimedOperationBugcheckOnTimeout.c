/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C0040F70
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0040FC0 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C023EB90 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
