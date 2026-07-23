/*
 * XREFs of PsIsThreadImpersonating @ 0x1406FAC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1744) & 8) != 0;
}
