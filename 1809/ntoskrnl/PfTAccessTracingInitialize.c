/*
 * XREFs of PfTAccessTracingInitialize @ 0x140567100
 * Callers:
 *     PfTAccessTracingCleanup @ 0x14056698C (PfTAccessTracingCleanup.c)
 *     PfTInitialize @ 0x140752F48 (PfTInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
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
