/*
 * XREFs of ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01F5740
 * Callers:
 *     MSGSQMRemoveProcess @ 0x1C0116AE0 (MSGSQMRemoveProcess.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01F5ACC (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupMsgCache(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)a1 + 108);
  if ( v1 && *(_QWORD *)(v1 + 48) == v1 + 48 && *(_QWORD *)(v1 + 64) == v1 + 64 )
    Win32FreePool(v1);
}
