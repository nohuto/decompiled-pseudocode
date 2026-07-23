/*
 * XREFs of AlpcpLogConnectRequest @ 0x14084CB00
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1406146BC (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x1406A6DC0 (NtSecureConnectPort.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     AlpcpInvokeLogCallbacks @ 0x14084C9A8 (AlpcpInvokeLogCallbacks.c)
 */

__int64 __fastcall AlpcpLogConnectRequest(__int64 a1)
{
  __int128 v1; // xmm0
  int v2; // eax
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]

  v1 = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
  v2 = *(_DWORD *)(a1 + 264);
  v5 = 6;
  v4 = v1;
  v6 = v2;
  return AlpcpInvokeLogCallbacks((__int64)&v4, 0x1Cu);
}
