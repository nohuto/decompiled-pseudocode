/*
 * XREFs of IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C006D020
 * Callers:
 *     IntelPptFilter_FilterCommand @ 0x1C006D100 (IntelPptFilter_FilterCommand.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006D2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 */

char __fastcall IntelPptFilter_CheckAndIncreaseEndpointCount(__int64 a1, int a2)
{
  int v2; // eax
  int v4; // edi
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 48);
  v4 = v2 + a2;
  if ( (unsigned int)(v2 + a2) > 0x40 )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = v2 + a2;
    v6 = *(_DWORD *)(a1 + 48);
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0x10u,
      0xDu,
      (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids,
      v6,
      v7);
  }
  *(_DWORD *)(a1 + 48) = v4;
  return 1;
}
