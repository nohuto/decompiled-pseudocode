/*
 * XREFs of PsGetThreadHardErrorsAreDisabled @ 0x140177E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsGetThreadHardErrorsAreDisabled(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1760) & 0x10) != 0;
}
