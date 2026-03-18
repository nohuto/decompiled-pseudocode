/*
 * XREFs of Isoch_CommonBufferCallback @ 0x1C002D790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Isoch_MapTransfers @ 0x1C002E8DC (Isoch_MapTransfers.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  int v3; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 336) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(_DWORD *)(a1 + 108);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0xCu,
      (__int64)&WPP_73adaf00c7c637cf307afd81062d3d3a_Traceguids,
      v3);
  }
  return Isoch_MapTransfers(a1, 0LL);
}
