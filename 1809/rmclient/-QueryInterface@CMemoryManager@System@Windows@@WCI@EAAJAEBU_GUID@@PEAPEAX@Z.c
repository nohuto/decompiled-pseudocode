/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        Windows::System::CMemoryManager **a3)
{
  return Windows::System::CMemoryManager::QueryInterface((Windows::System::CMemoryManager *)(a1 - 40), a2, a3);
}
