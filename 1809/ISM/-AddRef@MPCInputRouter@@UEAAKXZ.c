/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x18000AD50
 * Callers:
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x180009220 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x180009230 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEI@EAAKXZ @ 0x180009260 (-AddRef@MPCInputRouter@@WEI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WCPI@EAAKXZ @ 0x1800092B0 (-AddRef@MPCInputRouter@@WCPI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x1800092D0 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x1800092E0 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDAA@EAAKXZ @ 0x180009360 (-AddRef@MPCInputRouter@@WDAA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x180009380 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x180009390 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x180009410 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x180009420 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}
