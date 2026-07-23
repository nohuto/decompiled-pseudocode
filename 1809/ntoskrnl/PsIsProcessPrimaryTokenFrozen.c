/*
 * XREFs of PsIsProcessPrimaryTokenFrozen @ 0x140889600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessPrimaryTokenFrozen(__int64 a1)
{
  return (*(_DWORD *)(a1 + 768) & 0x8000) != 0;
}
