/*
 * XREFs of EtwpTraceFileIo @ 0x140311C30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     EtwpFileProvTrace @ 0x140310E20 (EtwpFileProvTrace.c)
 */

__int64 __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        __int16 a5,
        const GUID *a6)
{
  __int64 ThreadServerSilo; // rdi
  __int64 result; // rax

  if ( a1 )
    ThreadServerSilo = PsGetThreadServerSilo(a1);
  else
    ThreadServerSilo = 0LL;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 0x6000000) != 0 )
    EtwpFileProvTrace(a2, a3, a5, a6);
  result = 1102LL;
  if ( a5 != 1102 )
    return EtwTraceSiloKernelEvent(ThreadServerSilo, (int)a2, a3, a4, a5, 5249283);
  return result;
}
