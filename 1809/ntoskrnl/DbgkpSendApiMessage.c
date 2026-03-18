/*
 * XREFs of DbgkpSendApiMessage @ 0x140810BD4
 * Callers:
 *     DbgkPostModuleMessage @ 0x14026D7C4 (DbgkPostModuleMessage.c)
 *     DbgkCreateThread @ 0x1405F7028 (DbgkCreateThread.c)
 *     DbgkMapViewOfSection @ 0x14067749C (DbgkMapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x1406B739C (DbgkUnMapViewOfSection.c)
 *     DbgkForwardException @ 0x1406D68FC (DbgkForwardException.c)
 *     DbgkCreateMinimalProcess @ 0x140757838 (DbgkCreateMinimalProcess.c)
 *     DbgkSendSystemDllMessages @ 0x14080E4AC (DbgkSendSystemDllMessages.c)
 *     DbgkCreateMinimalThread @ 0x1408113CC (DbgkCreateMinimalThread.c)
 *     DbgkExitProcess @ 0x140811468 (DbgkExitProcess.c)
 *     DbgkExitThread @ 0x140811510 (DbgkExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ZwFlushInstructionCache @ 0x1401B9DB0 (ZwFlushInstructionCache.c)
 *     EtwTraceDebuggerEvent @ 0x14030FAF0 (EtwTraceDebuggerEvent.c)
 *     PsThawProcess @ 0x14067E324 (PsThawProcess.c)
 *     DbgkpQueueMessage @ 0x14080F424 (DbgkpQueueMessage.c)
 *     DbgkpSuspendProcess @ 0x140811704 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessage(_KPROCESS *Object, char a2, __int64 a3)
{
  int v6; // r14d
  int v7; // esi

  if ( (PerfGlobalGroupMask[0] & 0x400000) != 0 )
    EtwTraceDebuggerEvent((__int64)KeGetCurrentThread()->ApcState.Process, (__int64)KeGetCurrentThread(), 1);
  do
  {
    v6 = 0;
    if ( Object == KeGetCurrentThread()->ApcState.Process && (a2 & 1) != 0 )
      v6 = (unsigned __int8)DbgkpSuspendProcess(Object);
    *(_DWORD *)(a3 + 44) = 259;
    v7 = DbgkpQueueMessage(Object, (char *)KeGetCurrentThread(), a3, 32 * (a2 & 2u), 0LL);
    ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0);
    if ( v6 )
    {
      PsThawProcess((ULONG_PTR)Object, 0);
      KeLeaveCriticalRegion();
    }
  }
  while ( v7 >= 0 && *(_DWORD *)(a3 + 44) == 1073807361 );
  return (unsigned int)v7;
}
