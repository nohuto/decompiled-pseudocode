/*
 * XREFs of VslTerminateSecureThread @ 0x140852810
 * Callers:
 *     KeUnsecureThread @ 0x1402A4A98 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall VslTerminateSecureThread(unsigned int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 result; // rax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = VslpEnterIumSecureMode(2, 10LL, a1, (__int64)v7);
  KeLeaveCriticalRegion();
  result = v5;
  *a2 = v7[2];
  return result;
}
