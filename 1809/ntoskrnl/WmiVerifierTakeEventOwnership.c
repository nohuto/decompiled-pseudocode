/*
 * XREFs of WmiVerifierTakeEventOwnership @ 0x14030E1D0
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140946EB0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmiVerifierTakeEventOwnership(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0x20000) == 0;
}
