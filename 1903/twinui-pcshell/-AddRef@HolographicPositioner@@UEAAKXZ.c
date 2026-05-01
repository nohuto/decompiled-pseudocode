/*
 * XREFs of ?AddRef@HolographicPositioner@@UEAAKXZ @ 0x18006F510
 * Callers:
 *     ?AddRef@HolographicPositioner@@W7EAAKXZ @ 0x1800B6D50 (-AddRef@HolographicPositioner@@W7EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WDA@EAAKXZ @ 0x1800B6D60 (-AddRef@HolographicPositioner@@WDA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WDI@EAAKXZ @ 0x1800B6D70 (-AddRef@HolographicPositioner@@WDI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WHA@EAAKXZ @ 0x1800B6D80 (-AddRef@HolographicPositioner@@WHA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WHI@EAAKXZ @ 0x1800B6D90 (-AddRef@HolographicPositioner@@WHI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WIA@EAAKXZ @ 0x1800B6DA0 (-AddRef@HolographicPositioner@@WIA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WII@EAAKXZ @ 0x1800B6DB0 (-AddRef@HolographicPositioner@@WII@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WJA@EAAKXZ @ 0x1800B6DC0 (-AddRef@HolographicPositioner@@WJA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WJI@EAAKXZ @ 0x1800B6DD0 (-AddRef@HolographicPositioner@@WJI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WKI@EAAKXZ @ 0x1800B6DE0 (-AddRef@HolographicPositioner@@WKI@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WLA@EAAKXZ @ 0x1800B6DF0 (-AddRef@HolographicPositioner@@WLA@EAAKXZ.c)
 *     ?AddRef@HolographicPositioner@@WLI@EAAKXZ @ 0x1800B6E00 (-AddRef@HolographicPositioner@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::AddRef(HolographicPositioner *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 27);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 27, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
