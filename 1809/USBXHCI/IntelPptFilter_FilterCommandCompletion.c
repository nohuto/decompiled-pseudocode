/*
 * XREFs of IntelPptFilter_FilterCommandCompletion @ 0x1C00641E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     IntelPptFilter_DecreaseEndpointCount @ 0x1C0064080 (IntelPptFilter_DecreaseEndpointCount.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C006429C (IntelPptFilter_FilterEndpointConfigureCommand.c)
 */

void __fastcall IntelPptFilter_FilterCommandCompletion(__int64 a1, __int64 a2)
{
  KIRQL v4; // bp
  __int64 v5; // r8

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 40));
  v5 = *(_DWORD *)(a2 + 36) & 0xFC00;
  if ( (_DWORD)v5 == 10240 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      0x10u,
      0x13u,
      (__int64)&WPP_6c48406684fc3add5f2371f4d5718836_Traceguids);
    IntelPptFilter_DecreaseEndpointCount(a1, 1);
  }
  else if ( (_DWORD)v5 == 12288 )
  {
    LOBYTE(v5) = 1;
    IntelPptFilter_FilterEndpointConfigureCommand(a1, a2, v5);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 40), v4);
}
