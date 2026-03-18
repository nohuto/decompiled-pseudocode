/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x14019BC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000007;
}
