/*
 * XREFs of ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18002F4E0
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002F52C (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 */

void __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  void *v2; // rcx
  bool v3; // zf

  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a1);
  v2 = *a1;
  v3 = *a1 == a1 + 3;
  *a1 = 0LL;
  if ( v3 )
    v2 = 0LL;
  operator delete(v2);
}
