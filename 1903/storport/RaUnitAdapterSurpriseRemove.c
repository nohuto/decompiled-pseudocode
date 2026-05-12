/*
 * XREFs of RaUnitAdapterSurpriseRemove @ 0x1C00100E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitAdapterSurpriseRemove(__int64 a1)
{
  *(_BYTE *)(a1 + 160) &= ~4u;
  return 0LL;
}
