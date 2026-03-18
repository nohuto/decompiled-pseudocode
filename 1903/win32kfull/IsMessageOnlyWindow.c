/*
 * XREFs of IsMessageOnlyWindow @ 0x1C0010C20
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0010090 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00106A0 (NtUserSetBrokeredForeground.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010BDC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00C8570 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     MagSlicerControl @ 0x1C01D1620 (MagSlicerControl.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsMessageOnlyWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 104);
  return *(_QWORD *)(a1 + 104) == v2;
}
