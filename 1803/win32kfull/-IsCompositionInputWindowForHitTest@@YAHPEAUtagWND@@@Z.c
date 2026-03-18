/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00351EC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C00352C0 (IsWindowHolographicForHitTest.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1)
    && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) == 0 || (unsigned int)CoreWindowProp::IsComponent(a1))
    || (unsigned int)IsWindowHolographicForHitTest(a1) )
  {
    return 1;
  }
  return v2;
}
