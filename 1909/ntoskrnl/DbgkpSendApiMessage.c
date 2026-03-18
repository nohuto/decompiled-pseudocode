/*
 * XREFs of DbgkpSendApiMessage @ 0x140849CAC
 * Callers:
 *     DbgkPostModuleMessage @ 0x1402810F4 (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x1405E765C (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x14067E638 (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406D9424 (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1406F97B8 (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x1407583C0 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x1408473EC (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x14084A494 (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x14084A544 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x14084A600 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     EtwTraceDebuggerEvent @ 0x14032D304 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x1406A10B8 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x1408483C8 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x14084A80C (DbgkpSuspendProcess.c)
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
