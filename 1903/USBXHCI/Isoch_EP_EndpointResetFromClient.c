/*
 * XREFs of Isoch_EP_EndpointResetFromClient @ 0x1C002DDB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

_UNKNOWN **__fastcall Isoch_EP_EndpointResetFromClient(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rcx
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(v3 + 144);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    result = (_UNKNOWN **)WPP_RECORDER_SF_dd(
                            *(_QWORD *)(v3 + 80),
                            4u,
                            0xEu,
                            0xEu,
                            (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
                            v4,
                            v5);
  }
  *(_BYTE *)(a1 + 334) = 1;
  return result;
}
