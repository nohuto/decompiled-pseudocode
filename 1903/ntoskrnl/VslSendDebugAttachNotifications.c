/*
 * XREFs of VslSendDebugAttachNotifications @ 0x140852E78
 * Callers:
 *     DbgkpPostModuleMessages @ 0x140848A68 (DbgkpPostModuleMessages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslSendDebugAttachNotifications(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x68uLL);
  v7[1] = *(_QWORD *)(a1 + 728);
  v7[2] = a2;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2, 16LL, 0LL, (__int64)v7);
}
