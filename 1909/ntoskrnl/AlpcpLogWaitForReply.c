/*
 * XREFs of AlpcpLogWaitForReply @ 0x140886904
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14065A7F0 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpInvokeLogCallbacks @ 0x14088642C (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogWaitForReply(__int64 a1)
{
  __int128 v2; // xmm0
  int v3; // eax
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v3 = *(_DWORD *)(a1 + 264);
  LODWORD(v5[1]) = 3;
  v5[0] = v2;
  DWORD2(v5[1]) = v3;
  return AlpcpInvokeLogCallbacks((__int64)v5, 0x20u);
}
