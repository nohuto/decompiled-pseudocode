/*
 * XREFs of SetNewForegroundQueue @ 0x1C005A780
 * Callers:
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C010FD90 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001DE64 (UpdateRawMouseMode.c)
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
