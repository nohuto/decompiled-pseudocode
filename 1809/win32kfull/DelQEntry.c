/*
 * XREFs of DelQEntry @ 0x1C0038198
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z @ 0x1C00030D8 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@HH@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     FindQMsg @ 0x1C0034980 (FindQMsg.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00B0910 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B15F8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00D4E90 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     FreeMessageList @ 0x1C01080C0 (FreeMessageList.c)
 *     DestroyThreadsMessages @ 0x1C0108120 (DestroyThreadsMessages.c)
 *     SuspendThreadQueue @ 0x1C01167E0 (SuspendThreadQueue.c)
 *     EditionDelQEntry @ 0x1C01C36A0 (EditionDelQEntry.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01CE234 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01CEAF4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01DAEE8 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01DC054 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01DD0BC (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C02165D0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01DB134 (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD **)(a2 + 8);
  if ( v4 )
    *v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a1 == a2 )
    *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 100);
  if ( (result & 0x10000) == 0 && (result & 0x20000) == 0 && (result & 0x80000) == 0 )
    --*(_DWORD *)(a1 + 16);
  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 100) & 8) != 0 && !*(_DWORD *)(a2 + 96) && IsPointerInputMessage(*(_DWORD *)(a2 + 24)) )
      FreePointerMessageParams(a2);
    return Win32FreeToPagedLookasideList(QEntryLookaside, a2);
  }
  return result;
}
