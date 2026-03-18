/*
 * XREFs of IsPointerInputMessage @ 0x1C0023E34
 * Callers:
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 *     _PostThreadMessageEx @ 0x1C001B65C (_PostThreadMessageEx.c)
 *     NtUserDispatchMessage @ 0x1C0023C90 (NtUserDispatchMessage.c)
 *     IsPointerInputMessageWithState @ 0x1C0023E14 (IsPointerInputMessageWithState.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C0048DF0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C0198574 (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01B82D0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     IsMiPPointerMessage @ 0x1C01B8528 (IsMiPPointerMessage.c)
 *     NtUserfnPOINTERINPUT @ 0x1C01F8E50 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(unsigned int a1)
{
  return a1 > 0x240 && a1 < 0x258 && a1 != 589;
}
