/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00FDF4C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0021730 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C006A1D0 (IsWindowHolographicForHitTest.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = IsCompositionInputWindow(a1);
  if ( !(unsigned int)IsWindowHolographicForHitTest(a1) )
  {
    if ( !v2 )
      return v2;
    if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 235LL) & 1) != 0 )
        return 0LL;
      if ( CWindowProp::GetProp<CInputQueueProp>((__int64)a1, &v5) && (*(_DWORD *)(v5 + 44) >> 1) & 1 )
        return 0LL;
      return v2;
    }
  }
  return 1LL;
}
