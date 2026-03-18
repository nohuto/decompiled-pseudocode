/*
 * XREFs of PoRequestShutdownEvent @ 0x140763E90
 * Callers:
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x140763ED4 (PopRequestShutdownWait.c)
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
