/*
 * XREFs of ?end@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCDrawListEntry@@@2@XZ @ 0x1800B3088
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x1800B2DAC (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 * Callees:
 *     ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3AD0 (-last@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 */

_QWORD *__fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::end(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = detail::pointer_buffer_impl<CDrawListEntry *>::last(a1);
  return a2;
}
