/*
 * XREFs of IopDestroyPassiveInterruptBlock @ 0x140861A48
 * Callers:
 *     IoDisconnectInterrupt @ 0x140741080 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
 * Callees:
 *     IopDereferencePassiveInterruptBlock @ 0x14029E5F4 (IopDereferencePassiveInterruptBlock.c)
 *     IopFindPassiveInterruptBlock @ 0x14029E714 (IopFindPassiveInterruptBlock.c)
 */

void __fastcall IopDestroyPassiveInterruptBlock(unsigned int a1)
{
  volatile signed __int32 *PassiveInterruptBlock; // rax

  PassiveInterruptBlock = (volatile signed __int32 *)IopFindPassiveInterruptBlock(a1);
  if ( PassiveInterruptBlock )
  {
    _InterlockedDecrement(PassiveInterruptBlock + 48);
    IopDereferencePassiveInterruptBlock((PVOID)PassiveInterruptBlock);
  }
}
