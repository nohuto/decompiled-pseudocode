/*
 * XREFs of SetNewForegroundQueue @ 0x1C001B530
 * Callers:
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C001E588 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx

  result = gpqForeground;
  v4 = a1;
  if ( !a1 )
    v4 = gObjDummyLock;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1, v4, a3);
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
  return result;
}
