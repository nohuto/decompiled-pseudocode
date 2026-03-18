/*
 * XREFs of IntelPptFilter_FilterCommand @ 0x1C006D100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     IntelPptFilter_CheckAndIncreaseEndpointCount @ 0x1C006D020 (IntelPptFilter_CheckAndIncreaseEndpointCount.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006D2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 */

__int64 __fastcall IntelPptFilter_FilterCommand(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  unsigned int v5; // ebx
  int v6; // r8d
  KIRQL v7; // r14

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v5 = 4;
  v6 = *(_DWORD *)(a2 + 36) & 0xFC00;
  v7 = v4;
  if ( v6 == 9216 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0x10u,
        0x11u,
        (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids);
    if ( !IntelPptFilter_CheckAndIncreaseEndpointCount(a1, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          3u,
          0x10u,
          0x12u,
          (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids);
      *(_BYTE *)(a2 + 60) = 9;
      v5 = 1;
    }
  }
  else if ( v6 == 12288 )
  {
    v5 = IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, 0LL);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v7);
  return v5;
}
