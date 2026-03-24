/*
 * XREFs of VslTerminateSecureThread @ 0x14081905C
 * Callers:
 *     KeUnsecureThread @ 0x14028E2C8 (KeUnsecureThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x140129CB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 */

__int64 __fastcall VslTerminateSecureThread(unsigned int a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  __int64 result; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+30h] [rbp-78h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = VslpEnterIumSecureMode(2u, 10LL, a1, (__int64)v6);
  KeLeaveCriticalRegion();
  result = v4;
  *a2 = v7;
  return result;
}
