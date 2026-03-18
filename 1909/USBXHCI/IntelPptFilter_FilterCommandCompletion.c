/*
 * XREFs of IntelPptFilter_FilterCommandCompletion @ 0x1C006D220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x1C006D090 (IntelPptFilter_DecreaseEndpointCount.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006D2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 */

void __fastcall IntelPptFilter_FilterCommandCompletion(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  __int64 v5; // r8
  int v6; // ecx

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v6 = *(_DWORD *)(a2 + 36) & 0xFC00;
  if ( v6 == 10240 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0x10u,
        0x13u,
        (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids);
    IntelPptFilter_DecreaseEndpointCount(a1, 1);
  }
  else if ( v6 == 12288 )
  {
    LOBYTE(v5) = 1;
    IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, v5);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
}
