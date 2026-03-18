/*
 * XREFs of ?MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C020C64C
 * Callers:
 *     MSGSQMRemoveProcess @ 0x1C00FA180 (MSGSQMRemoveProcess.c)
 * Callees:
 *     ?MsgSQMCleanupProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C020C470 (-MsgSQMCleanupProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C020C5E4 (-MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z.c)
 */

void __fastcall MsgSQMFreeProcessPair(struct tagPROCESSINFO **a1)
{
  if ( a1 )
  {
    MsgSQMFreeMsgList(a1[4], a1[5], a1 + 6);
    MsgSQMCleanupProcessPair((struct tagMSGSQM_PROCESSPAIR ***)a1);
  }
}
