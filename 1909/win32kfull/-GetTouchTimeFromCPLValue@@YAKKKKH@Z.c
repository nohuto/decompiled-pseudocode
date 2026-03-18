/*
 * XREFs of ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F8784
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetTouchHoldTime @ 0x1C01F8D80 (GetTouchHoldTime.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C011B70C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 */

__int64 __fastcall GetTouchTimeFromCPLValue(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ecx

  v5 = a3;
  if ( !gTouchMonitor && !(unsigned int)LoadPointerDeviceTouchSettings() )
    return a1;
  v8 = *((_DWORD *)off_1C031F058 + 4 * v5 + 3);
  if ( v8 == -1 )
    v8 = *((_DWORD *)off_1C031F058 + 4 * v5 + 2);
  if ( v8 > 0x64 || v8 == 50 )
    return a1;
  v9 = 100 - v8;
  if ( !a4 )
    v9 = v8;
  return a1 + a2 * v9 / 0x64 - (a2 >> 1);
}
