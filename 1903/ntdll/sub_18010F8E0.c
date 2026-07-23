/*
 * XREFs of sub_18010F8E0 @ 0x18010F8E0
 * Callers:
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __fastcall sub_18010F8E0(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, __int16 a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v10; // [rsp+26h] [rbp-52h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  unsigned int v13; // [rsp+4Ch] [rbp-2Ch]
  __int16 v14; // [rsp+50h] [rbp-28h]
  __int16 v15; // [rsp+52h] [rbp-26h]
  int v16; // [rsp+54h] [rbp-24h]
  int v17; // [rsp+58h] [rbp-20h]

  v5 = a2;
  v6 = *(_QWORD *)(a1 + 40);
  v10 = 7209;
  v11 = a1;
  v12 = v5;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  v16 = *(_DWORD *)(v6 + 4 * v5);
  v17 = *(_DWORD *)(v6 + 4LL * a3);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
  else
    v7 = 2147353478LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x402u, 0x1Cu, Fields);
}
