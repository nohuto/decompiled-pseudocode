/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x140308140
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
