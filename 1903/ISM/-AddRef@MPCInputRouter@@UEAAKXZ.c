/*
 * XREFs of ?AddRef@MPCInputRouter@@UEAAKXZ @ 0x18000E020
 * Callers:
 *     ?AddRef@MPCInputRouter@@W7EAAKXZ @ 0x180037E30 (-AddRef@MPCInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x180037E40 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x180037E50 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x180037E60 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x180037E70 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDA@EAAKXZ @ 0x180037E80 (-AddRef@MPCInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDCI@EAAKXZ @ 0x180037E90 (-AddRef@MPCInputRouter@@WDCI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDDA@EAAKXZ @ 0x180037EA0 (-AddRef@MPCInputRouter@@WDDA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WDI@EAAKXZ @ 0x180037EB0 (-AddRef@MPCInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEA@EAAKXZ @ 0x180037EC0 (-AddRef@MPCInputRouter@@WEA@EAAKXZ.c)
 *     ?AddRef@MPCInputRouter@@WEI@EAAKXZ @ 0x180037ED0 (-AddRef@MPCInputRouter@@WEI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::AddRef(MPCInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 20);
}
