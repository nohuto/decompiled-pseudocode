/*
 * XREFs of GetWindowFrameRect @ 0x1C01CB7F8
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00745DC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F9398 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     GetDPITransformationMonitor @ 0x1C01AF3F0 (GetDPITransformationMonitor.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01C8A3C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowFrameRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 152);
  if ( !v4 || (result = GreGetRgnBox(v4, a2), !(_DWORD)result) )
  {
    result = *(_QWORD *)(a1 + 40);
    *a2 = *(_OWORD *)(result + 88);
  }
  return result;
}
