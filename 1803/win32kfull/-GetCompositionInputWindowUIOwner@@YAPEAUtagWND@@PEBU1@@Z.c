/*
 * XREFs of ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C00077F0 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01A1BA0 (xxxSetForegroundCheckNoActivate.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01B3BC0 (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01B9F2C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionGetCompositionInputWindowUIOwner @ 0x1C01BF530 (EditionGetCompositionInputWindowUIOwner.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0035280 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

struct tagWND *__fastcall GetCompositionInputWindowUIOwner(const struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v3) && *(_DWORD *)(v3 + 24) )
    return *(struct tagWND **)(v3 + 32);
  return (struct tagWND *)v1;
}
