/*
 * XREFs of Isoch_EP_Enable @ 0x1C002DD40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall Isoch_EP_Enable(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(v2 + 144);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v2 + 80),
      4u,
      0xEu,
      0xDu,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      v4,
      v5);
  }
  *(_BYTE *)(a1 + 334) = 1;
  return 0LL;
}
