/*
 * XREFs of ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C00245B0
 * Callers:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0011FBC (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0023B84 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C002435C (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00244D0 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x1C009E858 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C012BDC0 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E1560 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x1C01E2318 (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01E2970 (-ReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C02148D4 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputTraceLogging::IsMouseInputMessage(int a1)
{
  return (unsigned int)(a1 - 512) <= 0xE || (unsigned int)(a1 - 160) <= 0xD;
}
