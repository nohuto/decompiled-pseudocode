/*
 * XREFs of KeUnsecureThread @ 0x14028E4B8
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x14081A25C (VslTerminateSecureThread.c)
 */

__int64 __fastcall KeUnsecureThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 SecureThreadCookie; // rcx

  CurrentThread = KeGetCurrentThread();
  SecureThreadCookie = CurrentThread->SecureThreadCookie;
  CurrentThread->SecureThreadCookie = 0;
  return VslTerminateSecureThread(SecureThreadCookie, a1);
}
