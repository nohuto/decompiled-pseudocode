/*
 * XREFs of PsIsProcessPrimaryTokenFrozen @ 0x1408C5BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessPrimaryTokenFrozen(__int64 a1)
{
  return (*(_DWORD *)(a1 + 776) & 0x8000) != 0;
}
