/*
 * XREFs of ?GetTrustLevel@CAppMemoryReport@System@Windows@@W7AGJPAW4TrustLevel@@@Z @ 0x1000D5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::GetTrustLevel(int a1, enum TrustLevel *a2)
{
  return Windows::System::CAppMemoryReport::GetTrustLevel((Windows::System::CAppMemoryReport *)(a1 - 8), a2);
}
