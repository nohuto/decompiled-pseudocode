/*
 * XREFs of ??_GCDrawListPolygonBuilder@@UEAAPEAXI@Z @ 0x180181AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800E64F8 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_p.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CDrawListPolygonBuilder *__fastcall CDrawListPolygonBuilder::`scalar deleting destructor'(
        CDrawListPolygonBuilder *this,
        char a2)
{
  void **v2; // rbx
  void *v5; // rcx
  bool v6; // zf

  v2 = (void **)((char *)this + 24);
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 3);
  v5 = *v2;
  v6 = *v2 == v2 + 3;
  *v2 = 0LL;
  if ( v6 )
    v5 = 0LL;
  WPF::ProcessHeapImpl::Free(v5);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
