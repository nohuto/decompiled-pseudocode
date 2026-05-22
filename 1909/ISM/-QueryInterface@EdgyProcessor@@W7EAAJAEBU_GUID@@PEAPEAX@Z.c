/*
 * XREFs of ?QueryInterface@EdgyProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall EdgyProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return EdgyProcessor::QueryInterface((EdgyProcessor *)(a1 - 8), a2, a3);
}
