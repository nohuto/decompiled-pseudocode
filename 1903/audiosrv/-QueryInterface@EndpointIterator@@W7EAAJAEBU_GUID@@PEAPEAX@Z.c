/*
 * XREFs of ?QueryInterface@EndpointIterator@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointIterator::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return EndpointIterator::QueryInterface((EndpointIterator *)(a1 - 8), a2, a3);
}
