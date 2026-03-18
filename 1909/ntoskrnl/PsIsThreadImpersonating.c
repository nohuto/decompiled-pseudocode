/*
 * XREFs of PsIsThreadImpersonating @ 0x140717160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1760) & 8) != 0;
}
