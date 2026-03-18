/*
 * XREFs of AlpcpLogConnectFail @ 0x140886538
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14065930C (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1406CB7B0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpInvokeLogCallbacks @ 0x14088642C (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogConnectFail(unsigned int a1, unsigned int a2)
{
  __int128 v4; // xmm0
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  LODWORD(v6[1]) = 8;
  *((_QWORD *)&v6[1] + 1) = __PAIR64__(a2, a1);
  v6[0] = v4;
  return AlpcpInvokeLogCallbacks((__int64)v6, 0x20u);
}
