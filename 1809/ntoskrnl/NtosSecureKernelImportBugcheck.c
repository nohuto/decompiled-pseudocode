/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x1402EAA70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
