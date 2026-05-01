/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return ResourceSetCallback::QueryInterface((ResourceSetCallback *)(a1 - 8), a2, a3);
}
