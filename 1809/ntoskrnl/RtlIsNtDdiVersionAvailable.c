/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x140192F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000006;
}
