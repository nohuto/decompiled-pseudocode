/*
 * XREFs of AlpcpLogReceiveMessage @ 0x140886E78
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1020 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2410 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1406C1074 (AlpcpReceiveDirectMessagePort.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpInvokeLogCallbacks @ 0x140886C00 (AlpcpInvokeLogCallbacks.c)
 */

char __fastcall AlpcpLogReceiveMessage(__int64 a1)
{
  __int128 v2; // xmm0
  int v3; // eax
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v3 = *(_DWORD *)(a1 + 264);
  LODWORD(v5[1]) = 2;
  v5[0] = v2;
  DWORD2(v5[1]) = v3;
  return AlpcpInvokeLogCallbacks((__int64)v5, 0x20u);
}
