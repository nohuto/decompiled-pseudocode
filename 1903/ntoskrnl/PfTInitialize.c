/*
 * XREFs of PfTInitialize @ 0x1407774E0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A7D58 (PfSetSuperfetchInformation.c)
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 *     PfpParametersPropagate @ 0x1408A1E04 (PfpParametersPropagate.c)
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     KeQueryTimeIncrement @ 0x14007D0E0 (KeQueryTimeIncrement.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KeInitializeGuardedMutex @ 0x14009ADD0 (KeInitializeGuardedMutex.c)
 *     InitializeSListHead @ 0x1400E5520 (InitializeSListHead.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PfTAccessTracingInitialize @ 0x14059E2FC (PfTAccessTracingInitialize.c)
 *     PfFbBufferListInitialize @ 0x140777724 (PfFbBufferListInitialize.c)
 */

__int64 __fastcall PfTInitialize(__int64 a1, __int64 a2, char a3)
{
  struct _FAST_MUTEX *v3; // rsi
  struct _KEVENT *v6; // rcx

  v3 = (struct _FAST_MUTEX *)(a1 + 560);
  if ( a3 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
    KeReleaseGuardedMutex(v3);
    memset((void *)(a1 + 784), 0, 0x28uLL);
  }
  else
  {
    memset((void *)(a1 + 8), 0, 0x338uLL);
    memset(&RunRef, 0, 0x58uLL);
    *(_QWORD *)a1 = 0LL;
  }
  PfKernelGlobals = 0x23C34600uLL / KeQueryTimeIncrement();
  memset((void *)(a1 + 24), 0, 0x28uLL);
  *(_WORD *)(a1 + 34) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  *(_DWORD *)(a1 + 24) &= 0xFFFFFFF0;
  *(_WORD *)(a1 + 32) = 2;
  memset((void *)(a1 + 64), 0, 0x28uLL);
  *(_WORD *)(a1 + 74) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 88) = a1 + 88;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
  *(_WORD *)(a1 + 72) = 0;
  if ( a3 )
    ExAcquireFastMutex(v3);
  else
    KeInitializeGuardedMutex(v3);
  *(_QWORD *)(a1 + 512) = a1 + 504;
  *(_QWORD *)(a1 + 504) = a1 + 504;
  *(_QWORD *)(a1 + 528) = a1 + 520;
  *(_QWORD *)(a1 + 520) = a1 + 520;
  if ( a3 )
    KeReleaseGuardedMutex(v3);
  else
    PfTAccessTracingInitialize(a1, (__int64)&PfKernelGlobals, 0);
  v6 = (struct _KEVENT *)(a1 + 136);
  if ( a3 )
  {
    KeResetEvent(v6);
    KeResetEvent((PRKEVENT)(a1 + 160));
    KeResetEvent((PRKEVENT)(a1 + 112));
    KeResetEvent((PRKEVENT)(a1 + 200));
  }
  else
  {
    KeInitializeEvent(v6, NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 160), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 112), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(a1 + 200), NotificationEvent, 0);
  }
  PfFbBufferListInitialize((PKSPIN_LOCK)(a1 + 224));
  InitializeSListHead((PSLIST_HEADER)(a1 + 480));
  *(_DWORD *)(a1 + 496) = -1;
  return PfFbBufferListInitialize((PKSPIN_LOCK)(a1 + 352));
}
