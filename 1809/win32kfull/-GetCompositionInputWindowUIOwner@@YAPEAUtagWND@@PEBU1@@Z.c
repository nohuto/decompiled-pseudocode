/*
 * XREFs of ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20
 * Callers:
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0002358 (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0007DD0 (EditionChangeForegroundQueueForMouseInput.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDCompSpeedHitTest @ 0x1C006E8C8 (xxxDCompSpeedHitTest.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     ?xxxSetForegroundCheckNoActivate@@YAHPEAUtagWND@@@Z @ 0x1C01C30C4 (-xxxSetForegroundCheckNoActivate@@YAHPEAUtagWND@@@Z.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01D641C (-RequestModernAppClose@@YAHXZ.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionGetCompositionInputWindowUIOwner @ 0x1C01E2100 (EditionGetCompositionInputWindowUIOwner.c)
 * Callees:
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0073E64 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

struct tagWND *__fastcall GetCompositionInputWindowUIOwner(const struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( CWindowProp::GetProp<CInputQueueProp>((__int64)a1, &v3) && *(_DWORD *)(v3 + 24) )
    return *(struct tagWND **)(v3 + 32);
  return (struct tagWND *)v1;
}
