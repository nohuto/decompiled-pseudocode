/*
 * XREFs of _PostTransformableMessage @ 0x1C0087904
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0083D00 (xxxSystemTimerProc.c)
 *     _PostTransformableMessageIL @ 0x1C0087700 (_PostTransformableMessageIL.c)
 *     IdleTimerProc @ 0x1C00AE9B8 (IdleTimerProc.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E2620 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E3990 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C0211324 (xxxMNStartMenuState.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  struct tagQMSG *v6; // rcx

  v5 = 0;
  v6 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, a5);
  if ( v6 < MmSystemRangeStart )
    return (unsigned int)v6;
  LOBYTE(v5) = v6 != 0LL;
  return v5;
}
