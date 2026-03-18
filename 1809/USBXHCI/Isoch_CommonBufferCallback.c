/*
 * XREFs of Isoch_CommonBufferCallback @ 0x1C0028E10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Isoch_MapTransfers @ 0x1C0029E90 (Isoch_MapTransfers.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  int v3; // [rsp+28h] [rbp-10h]

  *(_DWORD *)(a1 + 336) = 0;
  v3 = *(_DWORD *)(a1 + 108);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xEu,
    0xCu,
    (__int64)&WPP_f9b05a47faf934e5e949b6ffde11c420_Traceguids,
    v3);
  return Isoch_MapTransfers(a1, 0LL);
}
