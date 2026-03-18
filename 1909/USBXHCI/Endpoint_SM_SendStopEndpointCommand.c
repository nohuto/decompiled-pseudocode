/*
 * XREFs of Endpoint_SM_SendStopEndpointCommand @ 0x1C001AD74
 * Callers:
 *     ESM_StoppingEndpoint @ 0x1C0046680 (ESM_StoppingEndpoint.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     Command_SendCommand @ 0x1C000A7C8 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Endpoint_SM_SendStopEndpointCommand(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // edx
  unsigned __int8 v6; // cl
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v1 = a1 + 160;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  memset((void *)(a1 + 160), 0, 0x60uLL);
  v4 = *(_DWORD *)(v1 + 36);
  *(_QWORD *)(v1 + 40) = Endpoint_OnCancelStopCompletion;
  v5 = v4 & 0xFFFF03FF | 0x3C00;
  *(_QWORD *)(v1 + 48) = a1;
  *(_DWORD *)(v1 + 36) = v5;
  *(_DWORD *)(v1 + 36) = v5 ^ (v5 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_QWORD *)(v1 + 72) = 0LL;
  *(_QWORD *)(v1 + 80) = 0LL;
  *(_QWORD *)(v1 + 88) = 0LL;
  *(_BYTE *)(v1 + 39) = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_WORD *)(v1 + 38) & 0x1F;
    v8 = v6;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1 + 80),
      4u,
      0xDu,
      0x73u,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      v8,
      v9);
  }
  return Command_SendCommand(v3, v1);
}
