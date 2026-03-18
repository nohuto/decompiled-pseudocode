/*
 * XREFs of ?size@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x180059EAC
 * Callers:
 *     ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x180059D18 (-reserve_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBac.c)
 *     ??_GCBackdropRegion@@MEAAPEAXI@Z @ 0x18005A300 (--_GCBackdropRegion@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::size(
        _QWORD *a1)
{
  return (a1[1] - *a1) / 24LL;
}
