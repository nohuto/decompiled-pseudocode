/*
 * XREFs of ?GetTrustLevel@CAppMemoryReport@System@Windows@@UAGJPAW4TrustLevel@@@Z @ 0x1000BAA0
 * Callers:
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WBE@AGJPAW4TrustLevel@@@Z @ 0x1000D300 (-GetTrustLevel@CMemoryManager@System@Windows@@WBE@AGJPAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WBI@AGJPAW4TrustLevel@@@Z @ 0x1000D310 (-GetTrustLevel@CMemoryManager@System@Windows@@WBI@AGJPAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WBM@AGJPAW4TrustLevel@@@Z @ 0x1000D320 (-GetTrustLevel@CMemoryManager@System@Windows@@WBM@AGJPAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WCA@AGJPAW4TrustLevel@@@Z @ 0x1000D330 (-GetTrustLevel@CMemoryManager@System@Windows@@WCA@AGJPAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@W7AGJPAW4TrustLevel@@@Z @ 0x1000D5C0 (-GetTrustLevel@CAppMemoryReport@System@Windows@@W7AGJPAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WM@AGJPAW4TrustLevel@@@Z @ 0x1000D5D0 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WM@AGJPAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall Windows::System::CAppMemoryReport::GetTrustLevel(
        Windows::System::CAppMemoryReport *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0;
}
