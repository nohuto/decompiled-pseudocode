/*
 * XREFs of ??1?$vector_facade@MV?$buffer_impl@M$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800BAE1C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE968 (-clear_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@.c)
 */

void __fastcall detail::vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,2,1,detail::liberal_expansion_policy>>(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // r8

  v3 = *(void **)a1;
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3) >> 2;
  if ( v4 )
  {
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      a2,
      v4);
    v3 = *(void **)a1;
  }
  *(_QWORD *)a1 = 0LL;
  if ( v3 == (void *)(a1 + 24) )
    v3 = 0LL;
  WPF::ProcessHeapImpl::Free(v3);
}
