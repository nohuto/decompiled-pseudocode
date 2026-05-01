/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@W3AGKXZ @ 0x1000D710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::Release(int a1)
{
  return Windows::System::CAppMemoryReport::Release((Windows::System::CAppMemoryReport *)(a1 - 4));
}
