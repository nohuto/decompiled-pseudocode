/*
 * XREFs of MSGSQMRemoveProcess @ 0x1C011F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C020C6E4 (-MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C020C8FC (-MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 */

void __fastcall MSGSQMRemoveProcess(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagMSGSQM_PROCESSPAIR **i; // rsi
  _QWORD *j; // rbx

  v1 = *((_QWORD *)a1 + 107);
  if ( v1 )
  {
    for ( i = (struct tagMSGSQM_PROCESSPAIR **)(v1 + 48); *i != (struct tagMSGSQM_PROCESSPAIR *)i; MsgSQMFreeProcessPair(*i) )
      ;
    for ( j = (_QWORD *)(v1 + 64); (_QWORD *)*j != j; MsgSQMFreeProcessPair((struct tagMSGSQM_PROCESSPAIR *)(*j - 16LL)) )
      ;
    MsgSQMCleanupMsgCache(a1);
  }
}
