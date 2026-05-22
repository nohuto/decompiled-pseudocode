/*
 * XREFs of ?QueryInterface@DWMInputDisplay@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DWMInputDisplay::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DWMInputDisplay::QueryInterface((DWMInputDisplay *)(a1 - 8), a2, a3);
}
