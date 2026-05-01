/*
 * XREFs of ?GetTrustLevel@CMemoryManager@System@Windows@@WCA@AGJPAW4TrustLevel@@@Z @ 0x1000D330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CMemoryManager::GetTrustLevel(int a1, enum TrustLevel *a2)
{
  return Windows::System::CAppMemoryReport::GetTrustLevel((Windows::System::CAppMemoryReport *)(a1 - 32), a2);
}
