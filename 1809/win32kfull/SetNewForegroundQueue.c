/*
 * XREFs of SetNewForegroundQueue @ 0x1C00D0EA0
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01328D0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00D20E4 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1)
{
  __int64 result; // rax

  result = gpqForeground;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  gForegroundQRawMouseRequested = 0;
  return result;
}
