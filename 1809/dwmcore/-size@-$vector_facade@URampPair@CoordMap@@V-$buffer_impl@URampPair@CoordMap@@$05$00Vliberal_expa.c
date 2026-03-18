/*
 * XREFs of ?size@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x18000CE0C
 * Callers:
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CBD0 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18000CC78 (-reserve_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vli.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::size(
        _QWORD *a1)
{
  return (a1[1] - *a1) / 12LL;
}
