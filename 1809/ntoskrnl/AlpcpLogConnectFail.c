/*
 * XREFs of AlpcpLogConnectFail @ 0x14084CAA0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x14084C9A8 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogConnectFail(int a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]

  v2 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v6 = a1;
  v7 = a2;
  v4 = v2;
  v5 = 8;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x20u);
}
