/*
 * XREFs of ?GetTrustLevel@CAppMemoryReport@System@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180007DB0
 * Callers:
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x180009D90 (-GetTrustLevel@CMemoryManager@System@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x180009DA0 (-GetTrustLevel@CMemoryManager@System@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x180009DB0 (-GetTrustLevel@CMemoryManager@System@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x180009DC0 (-GetTrustLevel@CMemoryManager@System@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18000A060 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18000A070 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::GetTrustLevel(
        Windows::System::CAppMemoryReport *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
