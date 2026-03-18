/*
 * XREFs of DelQEntry @ 0x1C000F8DC
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00051D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     DestroyThreadsMessages @ 0x1C000C5D0 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C000C730 (FreeMessageList.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C000F124 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C001B630 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C00493A0 (FindQMsg.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C005AC88 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     SuspendThreadQueue @ 0x1C00F78C0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01250EC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C012519C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     EditionDelQEntry @ 0x1C01A1DF0 (EditionDelQEntry.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01B82D0 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01B9398 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01BA378 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01EF8A0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C000F944 (IsHiddenByInputService.c)
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 */

__int64 __fastcall DelQEntry(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // r9

  v3 = (_QWORD *)a2[1];
  if ( v3 )
    *v3 = *a2;
  if ( *a2 )
    *(_QWORD *)(*a2 + 8LL) = a2[1];
  if ( (_QWORD *)*a1 == a2 )
    *a1 = *a2;
  if ( (_QWORD *)a1[1] == a2 )
    a1[1] = a2[1];
  result = IsHiddenByInputService(a2);
  if ( !(_DWORD)result )
    --*(_DWORD *)(v7 + 16);
  if ( v6 )
    return FreeQEntry(v5);
  return result;
}
