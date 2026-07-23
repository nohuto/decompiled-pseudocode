/*
 * XREFs of PsGetThreadHardErrorsAreDisabled @ 0x14016D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1744) & 0x10) != 0;
}
