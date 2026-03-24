/*
 * XREFs of PoRequestShutdownEvent @ 0x140740720
 * Callers:
 *     SepRmCommandServerThread @ 0x1407402A0 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x140740764 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
