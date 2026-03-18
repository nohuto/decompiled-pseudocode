/*
 * XREFs of DbgkpSendApiMessage @ 0x14084A5AC
 * Callers:
 *     DbgkPostModuleMessage @ 0x140281394 (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x1405E6E8C (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x140678CC0 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406D97B4 (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1406F79F8 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x140769730 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x140847CE4 (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14084AD94 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14084AE44 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14084AF00 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x14032D8A4 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1406A3778 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x140848CC8 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14084B10C (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *BugCheckParameter1, char a2, __int64 a3)
{
  int v6; // ebp
  int v7; // esi

  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( BugCheckParameter1 == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(BugCheckParameter1);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(BugCheckParameter1, (char *)KeGetCurrentThread(), a3, 32 * (a2 & 2u), 0LL);
    if ( v6 )
    {
      PsThawProcess((__int64)BugCheckParameter1, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
