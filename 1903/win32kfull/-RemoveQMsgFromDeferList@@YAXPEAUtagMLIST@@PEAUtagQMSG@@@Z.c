/*
 * XREFs of ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00083F0
 * Callers:
 *     FreeMessageList @ 0x1C00104B0 (FreeMessageList.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012058 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C0025580 (DestroyThreadsMessages.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C011BAD8 (MergeDeferredMessagesOfThreadOnQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveQMsgFromDeferList(struct tagMLIST *a1, struct tagQMSG *a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v2 )
    *v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  if ( *((struct tagQMSG **)a1 + 3) == a2 )
    *((_QWORD *)a1 + 3) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
}
