/*
 * XREFs of GetPenDoubleClickTime @ 0x1C01F8D00
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011BDC0 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenDoubleClickTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return (unsigned int)gdtDblClk;
  result = *((unsigned int *)off_1C031F038 + 11);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C031F038 + 10);
  return result;
}
