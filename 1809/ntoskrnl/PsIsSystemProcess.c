/*
 * XREFs of PsIsSystemProcess @ 0x140088A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsSystemProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1740) & 0x1000) != 0;
}
