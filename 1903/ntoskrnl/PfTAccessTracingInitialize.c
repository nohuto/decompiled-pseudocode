/*
 * XREFs of PfTAccessTracingInitialize @ 0x14059E2FC
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14059E204 (PfTAccessTracingCleanup.c)
 *     PfTInitialize @ 0x1407774E0 (PfTInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExInitializePushLock @ 0x140082020 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x1400E5520 (InitializeSListHead.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, __int64 a2, int a3)
{
  volatile __int64 *v4; // rcx

  if ( !a3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 12) = 3;
  }
  *(_DWORD *)(a2 + 40) = 0;
  v4 = (volatile __int64 *)(a2 + 8);
  if ( a3 )
  {
    _InterlockedExchange64(v4, 0LL);
  }
  else
  {
    ExInitializePushLock((PKSPIN_LOCK)v4);
    InitializeSListHead((PSLIST_HEADER)(a2 + 64));
    KeInitializeEvent((PRKEVENT)(a2 + 16), NotificationEvent, 0);
  }
}
