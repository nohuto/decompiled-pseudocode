/*
 * XREFs of PopCheckpointDetermineEfiRuntimeRedirection @ 0x140A09244
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopCheckpointDetermineEfiRuntimeRedirection(__int64 a1)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 264) & 2) != 0;
  PopCheckpointEfiRuntimeRedirected = result;
  return result;
}
