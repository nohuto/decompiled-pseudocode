/*
 * XREFs of GetPenDoubleClickTime @ 0x1C01F6800
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0132D40 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 */

__int64 GetPenDoubleClickTime()
{
  __int64 result; // rax

  if ( !gPenMonitor && !(unsigned int)LoadPointerDevicePenSettings() )
    return (unsigned int)gdtDblClk;
  result = *((unsigned int *)off_1C030C040 + 11);
  if ( (_DWORD)result == -1 )
    return *((unsigned int *)off_1C030C040 + 10);
  return result;
}
