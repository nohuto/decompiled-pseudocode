/*
 * XREFs of ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x18016CBF8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x180049F14 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00V.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::push_back(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  char *result; // rax

  result = detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::reserve_region(
             (char *)a1,
             (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3,
             a3,
             a4);
  *(_QWORD *)result = *a2;
  return result;
}
