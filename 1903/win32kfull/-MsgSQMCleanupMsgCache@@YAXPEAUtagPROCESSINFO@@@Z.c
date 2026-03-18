/*
 * XREFs of ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C020C6E4
 * Callers:
 *     MSGSQMRemoveProcess @ 0x1C011F4A0 (MSGSQMRemoveProcess.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C020CA6C (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupMsgCache(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)a1 + 107);
  if ( v1 && *(_QWORD *)(v1 + 48) == v1 + 48 && *(_QWORD *)(v1 + 64) == v1 + 64 )
    Win32FreePool(v1);
}
